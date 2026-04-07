/*
 * XREFs of ?StartVirtualMonitorCapture@CProjectionBorderManager@@UEAAJPEAUHMONITOR__@@PEAXAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x180087000
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18004E0C0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 *     ?IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z @ 0x18007F738 (-IsMonitorVirtual@CDesktopManager@@QEAAJPEAUHMONITOR__@@PEA_N@Z.c)
 *     ??0?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180085760 (--0-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180085900 (--1StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?FindElement@?$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@@@QEAAPEAUCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderManager@@T_LARGE_INTEGER@@@Z @ 0x180085D20 (-FindElement@-$CGenericTableMap@T_LARGE_INTEGER@@UCAPTURE_DISPLAY_MAP_ENTRY@CProjectionBorderMan.c)
 *     ?StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z @ 0x1800867F4 (-StartActivity@StartDisplayCapture@WindowFrameLoggingTelemetry@@QEAAXPEAUHMONITOR__@@II@Z.c)
 *     ?Stop@?$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180087478 (-Stop@-$ActivityBase@VWindowFrameLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@_N@Z @ 0x180088F98 (-_AddDisplayCaptureEntry@CProjectionBorderManager@@AEAAJPEAUHMONITOR__@@IAEBUDWM_CAPTURE_TOKEN@@.c)
 */

__int64 __fastcall CProjectionBorderManager::StartVirtualMonitorCapture(
        struct _RTL_GENERIC_TABLE *this,
        HMONITOR a2,
        void *a3,
        const struct DWM_CAPTURE_TOKEN *a4)
{
  int v8; // ebx
  int v9; // edi
  int IsMonitorVirtual; // eax
  int v11; // ebx
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-E0h]
  bool v15; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v16; // [rsp+34h] [rbp-CCh] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v18[40]; // [rsp+40h] [rbp-C0h] BYREF

  v17 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v16 = 0;
  v8 = *(_DWORD *)a4;
  v9 = *((_DWORD *)a4 + 1);
  v15 = 0;
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v18,
    (__int64)"StartDisplayCapture");
  v18[0] = &WindowFrameLoggingTelemetry::StartDisplayCapture::`vftable';
  WindowFrameLoggingTelemetry::StartDisplayCapture::StartActivity(
    (WindowFrameLoggingTelemetry::StartDisplayCapture *)v18,
    a2,
    v9,
    v8);
  IsMonitorVirtual = CDesktopManager::IsMonitorVirtual(
                       (CDWMDXGIEnumeration **)CDesktopManager::s_pDesktopManagerInstance,
                       a2,
                       &v15);
  v11 = IsMonitorVirtual;
  if ( IsMonitorVirtual < 0 )
  {
    v14 = 518;
LABEL_14:
    v12 = IsMonitorVirtual;
    goto LABEL_15;
  }
  if ( v15 )
  {
    if ( !CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::FindElement(
            this + 7,
            *(_QWORD *)a4) )
    {
      IsMonitorVirtual = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned int *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                                                                            + 128LL))(
                           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                           a3,
                           6LL,
                           &v16);
      v11 = IsMonitorVirtual;
      if ( IsMonitorVirtual >= 0 )
      {
        IsMonitorVirtual = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                                                                     + 1200LL))(
                             *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
                             v16,
                             *(unsigned int *)(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 9)
                                                         + 16LL)
                                             + 24LL),
                             0LL);
        v11 = IsMonitorVirtual;
        if ( IsMonitorVirtual >= 0 )
        {
          IsMonitorVirtual = CProjectionBorderManager::_AddDisplayCaptureEntry(
                               (CProjectionBorderManager *)this,
                               a2,
                               v16,
                               a4,
                               0);
          v11 = IsMonitorVirtual;
          if ( IsMonitorVirtual >= 0 )
            goto LABEL_16;
          v14 = 541;
        }
        else
        {
          v14 = 539;
        }
      }
      else
      {
        v14 = 533;
      }
      goto LABEL_14;
    }
    v11 = -2147418113;
    v14 = 527;
  }
  else
  {
    v11 = -2147024891;
    v14 = 522;
  }
  v12 = v11;
LABEL_15:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, v14);
LABEL_16:
  if ( a3 )
    CloseHandle(a3);
  if ( v16 && v11 < 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL)
                                   + 136LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5)
                                                       + 16LL));
  wil::ActivityBase<WindowFrameLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v18,
    (unsigned int)v11);
  WindowFrameLoggingTelemetry::StartDisplayCapture::~StartDisplayCapture((WindowFrameLoggingTelemetry::StartDisplayCapture *)v18);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v17);
  return (unsigned int)v11;
}
