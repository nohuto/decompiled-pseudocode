/*
 * XREFs of ?StartDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180087160
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180085AC0 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180085C60 (--1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x180086080 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x180086B54 (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800877D8 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x1800892F8 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@.c)
 *     ?_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAI@Z @ 0x180089D2C (-_GetDesktopRootVisual@CProjectionBorderManager@@AEAAJPEAI@Z.c)
 */

__int64 __fastcall CProjectionBorderManager::StartDisplayCapture(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  int v8; // ebx
  int v9; // edi
  int v10; // ebx
  int DesktopRootVisual; // eax
  CProjectionBorderManager *v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-E0h]
  unsigned int v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v18[40]; // [rsp+40h] [rbp-C0h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v16 = 0;
  v15 = 0;
  v8 = *(_DWORD *)a4;
  v9 = *((_DWORD *)a4 + 1);
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v18,
    (__int64)"StartDisplayCapture");
  v18[0] = &WindowFrameLoggingTelemetry::StartDisplayCapture::`vftable';
  WindowFrameLoggingTelemetry::StartDisplayCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StartDisplayCapture *)v18,
    a2,
    v9,
    v8);
  if ( CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(
         this + 7,
         *(_QWORD *)a4) )
  {
    v10 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147418113, 0x1BAu);
    goto LABEL_12;
  }
  DesktopRootVisual = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned int *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                                                                         + 128LL))(
                        *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                        a3,
                        6LL,
                        &v15);
  v10 = DesktopRootVisual;
  if ( DesktopRootVisual >= 0 )
  {
    DesktopRootVisual = CProjectionBorderManager::_GetDesktopRootVisual(v12, &v16);
    v10 = DesktopRootVisual;
    if ( DesktopRootVisual >= 0 )
    {
      DesktopRootVisual = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                            + 5)
                                                                                          + 16LL)
                                                                            + 1144LL))(
                            *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                            v15,
                            v16);
      v10 = DesktopRootVisual;
      if ( DesktopRootVisual >= 0 )
      {
        DesktopRootVisual = CProjectionBorderManager::_AddDisplayCaptureEntry(
                              (CProjectionBorderManager *)this,
                              a2,
                              v15,
                              a4,
                              1);
        v10 = DesktopRootVisual;
        if ( DesktopRootVisual >= 0 )
          goto LABEL_12;
        v14 = 455;
      }
      else
      {
        v14 = 453;
      }
    }
    else
    {
      v14 = 450;
    }
  }
  else
  {
    v14 = 448;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, DesktopRootVisual, v14);
LABEL_12:
  if ( a3 )
    CloseHandle(a3);
  if ( v15 && v10 < 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                   + 136LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL));
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v18,
    (unsigned int)v10);
  WindowFrameLoggingTelemetry::StartDisplayCapture::~StartDisplayCapture((WindowFrameLoggingTelemetry::StartDisplayCapture *)v18);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return (unsigned int)v10;
}
