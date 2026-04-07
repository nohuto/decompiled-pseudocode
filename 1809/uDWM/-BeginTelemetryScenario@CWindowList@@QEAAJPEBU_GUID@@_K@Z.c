/*
 * XREFs of ?BeginTelemetryScenario@CWindowList@@QEAAJPEBU_GUID@@_K@Z @ 0x18003208C
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180012FC0 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z @ 0x18003188C (-StartTransition@CWindowList@@AEAAJPEAUMILCMD_DWM_REDIRECTION_STARTTRANSITION@@@Z.c)
 *     ?SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z @ 0x1800A1554 (-SetupTimeline@CScreenRotation@@AEAAJW4RotationTimelineReason@1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowList::BeginTelemetryScenario(CWindowList *this, const struct _GUID *a2, __int64 a3)
{
  unsigned int v3; // ebx
  int v7; // eax
  int v8; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-40h]
  __int16 v10; // [rsp+50h] [rbp-28h]

  v3 = 0;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 4) != 0 )
  {
    memset_0(&v8, 0, 0x30uLL);
    v8 = 4198400;
    v9 = a3;
    v10 = 48;
    v7 = (*(__int64 (__fastcall **)(_QWORD, int *, __int64, const struct _GUID *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                                    + 5)
                                                                                 + 216LL))(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
           &v8,
           48LL,
           a2);
    v3 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x1135u);
  }
  return v3;
}
