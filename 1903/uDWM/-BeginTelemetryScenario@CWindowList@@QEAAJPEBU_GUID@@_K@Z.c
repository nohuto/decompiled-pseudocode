/*
 * XREFs of ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x18000D56C
 * Callers:
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x180006B34 (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x18000DFD0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800A5D24 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memset_0 @ 0x18004FDC2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::BeginTelemetryScenario(CWindowList *this, const struct _GUID *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v7; // eax
  void *v8; // [rsp+28h] [rbp-50h]
  int v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h]
  __int16 v11; // [rsp+50h] [rbp-28h]

  v3 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 4) != 0 )
  {
    memset_0(&v9, 0, 0x30uLL);
    v9 = 4198400;
    v10 = a3;
    v11 = 48;
    v7 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64, const struct _GUID *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                                 + 5)
                                                                                               + 16LL)
                                                                                 + 224LL))(
           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
           &v9,
           48LL,
           a2);
    v3 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1184u, v8);
  }
  return v3;
}
