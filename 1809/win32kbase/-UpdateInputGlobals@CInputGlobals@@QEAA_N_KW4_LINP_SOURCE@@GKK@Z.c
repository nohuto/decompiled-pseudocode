/*
 * XREFs of ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0035C80
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0030058 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     xxxProcessKeyEvent @ 0x1C0034E70 (xxxProcessKeyEvent.c)
 *     NtMITUpdateInputGlobals @ 0x1C0087BA0 (NtMITUpdateInputGlobals.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C01292B4 (rimDoProcessAnyPointerDeviceInput.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C014CF80 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C0035E94 (-CitpLastInputUpdate@@YAXEI@Z.c)
 *     ApiSetEditionKeepMachineUp @ 0x1C0036138 (ApiSetEditionKeepMachineUp.c)
 *     EtwTraceUserIsActive @ 0x1C00361A0 (EtwTraceUserIsActive.c)
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C003628C (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?KnownInputTypeFromLinpSource@@YA?AW4InputType@@W4_LINP_SOURCE@@@Z @ 0x1C00362EC (-KnownInputTypeFromLinpSource@@YA-AW4InputType@@W4_LINP_SOURCE@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

char __fastcall CInputGlobals::UpdateInputGlobals(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // esi
  unsigned __int8 v7; // bl
  int v11; // eax
  int v12; // ecx
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  if ( (a6 & 0x20) != 0 )
  {
    v11 = KnownInputTypeFromLinpSource(a3);
    v12 = v6 | 4;
    if ( (v11 & *(_DWORD *)(a1 + 104)) == 0 )
      v12 = v6;
    v6 = v12;
    if ( (v11 & *(_DWORD *)(a1 + 100)) != 0 )
      v6 = v12 | 2;
  }
  RIMLockExclusive(a1);
  if ( (*(_DWORD *)gpsi & 0x2000) != 0 )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    *(_DWORD *)(a1 + 80) = a3;
    *(_BYTE *)(a1 + 85) = 0;
    *(_BYTE *)(a1 + 84) = (v6 & 8) != 0;
    if ( a3 != 1 )
      *(_DWORD *)gpsi &= ~0x40u;
    if ( (v6 & 0x10) == 0 )
    {
      if ( (unsigned __int64)(a2 - *(_QWORD *)(a1 + 72)) > 0x1F4 )
      {
        if ( (int)ZwUpdateWnfStateData(&WNF_ISM_LAST_USER_ACTIVITY, 0LL, 0LL, 0LL, &gSessionId, 0, 0) < 0 )
          MicrosoftTelemetryAssertTriggeredMsgKM("Updating WNF state for user activity should never fail.");
        *(_QWORD *)(a1 + 72) = a2;
      }
      if ( !gbBlockSendInputResets || (v6 & 8) == 0 )
        CInputGlobals::_UpdateLastInputTime(a1, a2, a3);
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    *((_DWORD *)gpsi + 1242) = a2;
    if ( (unsigned int)EtwTraceUserIsActive(&a6, &v14) && (int)IsTraceLoggingUserIsActiveSupported() >= 0 )
      TraceLoggingUserIsActive(a6, v14);
    if ( (v6 & 0x10) == 0 )
    {
      switch ( a3 )
      {
        case 1u:
          v7 = 1;
          break;
        case 2u:
          v7 = 2;
          break;
        case 3u:
          v7 = 16;
          break;
        case 4u:
          v7 = 32;
          break;
        case 0xAu:
          v7 = 4;
          break;
        case 0xCu:
          v7 = 8;
          break;
      }
      CitpLastInputUpdate(v7, a2);
      ApiSetEditionKeepMachineUp((unsigned int)a2, a3, a5, v6);
    }
  }
  return 1;
}
