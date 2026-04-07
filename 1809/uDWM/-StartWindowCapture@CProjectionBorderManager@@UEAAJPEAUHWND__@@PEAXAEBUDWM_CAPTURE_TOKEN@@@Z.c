/*
 * XREFs of ?StartWindowCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180080BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180006B6C (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007F380 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18007F54C (--1StartWindowCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x18007FA18 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_TAB_GROUP_MAP_ENTRY@CProjectionBorderM.c)
 *     ?StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z @ 0x1800805AC (-StartActivity@StartWindowCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHWND__@@II@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180080E1C (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProvide.c)
 *     ?_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual@@IAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180082A14 (-_AddTabGroupCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAVCapturedWindowSWRVisual.c)
 *     ?_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAIPEAPEAVCapturedWindowSWRVisual@@@Z @ 0x180082ED4 (-_GetCapturedItemRootVisual@CProjectionBorderManager@@AEAAJPEAUHWND__@@PEAIPEAPEAVCapturedWindow.c)
 *     ?_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z @ 0x180083720 (-_SetProjectionBorderForWindow@CProjectionBorderManager@@AEAAJPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::StartWindowCapture(
        CProjectionBorderManager *this,
        HWND a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  int v8; // ebx
  int v9; // edi
  int v10; // ebx
  int CapturedItemRootVisual; // eax
  CProjectionBorderManager *v12; // rcx
  struct CapturedWindowSWRVisual *v13; // r8
  CProjectionBorderManager *v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-E0h]
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-CCh] BYREF
  struct CapturedWindowSWRVisual *v19; // [rsp+38h] [rbp-C8h] BYREF
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v21[40]; // [rsp+50h] [rbp-B0h] BYREF

  v20 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v18 = 0;
  v17 = 0;
  v19 = 0LL;
  v8 = *(_DWORD *)a4;
  v9 = *((_DWORD *)a4 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v21,
    (__int64)"StartWindowCapture");
  v21[0] = &WindowFrameLoggingTelemetry::StartWindowCapture::`vftable';
  WindowFrameLoggingTelemetry::StartWindowCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StartWindowCapture *)v21,
    a2,
    v9,
    v8);
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_TAB_GROUP_MAP_ENTRY>::FindElement(
         (struct _RTL_GENERIC_TABLE *)((char *)this + 440),
         *(_QWORD *)a4) )
  {
    v10 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147418113, 0x13Fu);
    goto LABEL_14;
  }
  CapturedItemRootVisual = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned int *))(**((_QWORD **)this + 54)
                                                                                              + 120LL))(
                             *((_QWORD *)this + 54),
                             a3,
                             6LL,
                             &v17);
  v10 = CapturedItemRootVisual;
  if ( CapturedItemRootVisual >= 0 )
  {
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v19);
    CapturedItemRootVisual = CProjectionBorderManager::_GetCapturedItemRootVisual(v12, a2, &v18, &v19);
    v10 = CapturedItemRootVisual;
    if ( CapturedItemRootVisual >= 0 )
    {
      CapturedItemRootVisual = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 54) + 1232LL))(
                                 *((_QWORD *)this + 54),
                                 v17,
                                 v18);
      v10 = CapturedItemRootVisual;
      if ( CapturedItemRootVisual >= 0 )
      {
        v13 = v19;
        v19 = 0LL;
        CapturedItemRootVisual = CProjectionBorderManager::_AddTabGroupCaptureEntry(this, a2, v13, v17, a4);
        v10 = CapturedItemRootVisual;
        if ( CapturedItemRootVisual >= 0 )
        {
          CapturedItemRootVisual = CProjectionBorderManager::_SetProjectionBorderForWindow(v14, a2, 1);
          v10 = CapturedItemRootVisual;
          if ( CapturedItemRootVisual >= 0 )
            goto LABEL_14;
          v16 = 341;
        }
        else
        {
          v16 = 339;
        }
      }
      else
      {
        v16 = 332;
      }
    }
    else
    {
      v16 = 328;
    }
  }
  else
  {
    v16 = 325;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CapturedItemRootVisual, v16);
LABEL_14:
  if ( a3 )
    CloseHandle(a3);
  if ( v17 && v10 < 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 54) + 128LL))(*((_QWORD *)this + 54));
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v21,
    (unsigned int)v10);
  WindowFrameLoggingTelemetry::StartWindowCapture::~StartWindowCapture((WindowFrameLoggingTelemetry::StartWindowCapture *)v21);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v19);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v20);
  return (unsigned int)v10;
}
