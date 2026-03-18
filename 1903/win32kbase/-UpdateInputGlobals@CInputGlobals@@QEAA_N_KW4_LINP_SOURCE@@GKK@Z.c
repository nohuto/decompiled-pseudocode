/*
 * XREFs of ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0039AA0
 * Callers:
 *     ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0032408 (-ProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 *     NtMITUpdateInputGlobals @ 0x1C009B4B0 (NtMITUpdateInputGlobals.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0155DF4 (rimDoProcessAnyPointerDeviceInput.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C017F5E0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     xxxProcessKeyEvent @ 0x1C01865B0 (xxxProcessKeyEvent.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     ?CitpLastInputUpdate@@YAXGI@Z @ 0x1C0039778 (-CitpLastInputUpdate@@YAXGI@Z.c)
 *     ApiSetEditionKeepMachineUp @ 0x1C0039CCC (ApiSetEditionKeepMachineUp.c)
 *     EtwTraceUserIsActive @ 0x1C0039D90 (EtwTraceUserIsActive.c)
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0039E6C (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     ?KnownInputTypeFromLinpSource@@YA?AW4InputType@@W4_LINP_SOURCE@@@Z @ 0x1C0039ECC (-KnownInputTypeFromLinpSource@@YA-AW4InputType@@W4_LINP_SOURCE@@@Z.c)
 *     ApiSetTraceLoggingUserIsActive @ 0x1C009F568 (ApiSetTraceLoggingUserIsActive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputGlobals::UpdateInputGlobals(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // ebp
  unsigned int v10; // r15d
  unsigned __int16 v11; // bx
  int v12; // eax
  unsigned int v13; // edx
  int v14; // r8d
  int v15; // r9d
  unsigned int v16; // edi
  unsigned int v18; // edi
  __int16 v19; // ax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // edi
  unsigned int v24; // edi
  unsigned int v25; // edi
  unsigned int v26; // edi
  __int64 v27; // [rsp+80h] [rbp+8h] BYREF
  int v28; // [rsp+90h] [rbp+18h]

  v6 = a6;
  v10 = 10;
  if ( a3 != 16 )
    v10 = a3;
  v11 = 0;
  if ( (a6 & 0x20) != 0 )
  {
    v12 = KnownInputTypeFromLinpSource(v10, a6, 2LL, 4LL);
    v6 |= v15;
    if ( (v12 & *(_DWORD *)(a1 + 104)) == 0 )
      v6 = v13;
    if ( (v12 & *(_DWORD *)(a1 + 100)) != 0 )
      v6 |= v14;
  }
  RIMLockExclusive(a1);
  if ( (*(_DWORD *)gpsi & 0x2000) == 0 )
  {
    *(_DWORD *)(a1 + 80) = v10;
    *(_BYTE *)(a1 + 85) = 0;
    *(_BYTE *)(a1 + 84) = (v6 & 8) != 0;
    if ( v10 != 1 )
      _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFBF);
    v28 = v6 & 0x10;
    if ( (v6 & 0x10) == 0 )
    {
      if ( (unsigned __int64)(a2 - *(_QWORD *)(a1 + 72)) > 0x1F4 )
      {
        if ( (int)ZwUpdateWnfStateData(&WNF_ISM_LAST_USER_ACTIVITY, 0LL, 0LL, 0LL, &gSessionId, 0, 0) < 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
        *(_QWORD *)(a1 + 72) = a2;
      }
      if ( !gbBlockSendInputResets || (v6 & 8) == 0 )
        CInputGlobals::_UpdateLastInputTime(a1, a2, v10);
    }
    *(_QWORD *)(a1 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(a1, 0LL);
    KeLeaveCriticalRegion();
    v27 = 0LL;
    *((_DWORD *)gpsi + 1242) = a2;
    if ( (unsigned int)EtwTraceUserIsActive(&a6, &v27) )
      ApiSetTraceLoggingUserIsActive(a6, v27);
    if ( v28 )
      return 1;
    v16 = a3 - 1;
    if ( v16 )
    {
      v18 = v16 - 1;
      if ( v18 )
      {
        v23 = v18 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = v24 - 6;
            if ( v25 )
            {
              v26 = v25 - 2;
              if ( v26 )
              {
                if ( v26 != 4 )
                  goto LABEL_20;
                v19 = 256;
              }
              else
              {
                v19 = 8;
              }
            }
            else
            {
              v19 = 4;
            }
          }
          else
          {
            v19 = 32;
          }
        }
        else
        {
          v19 = 16;
        }
      }
      else
      {
        v19 = 2;
      }
      v11 = v19;
    }
    else
    {
      v11 = 1;
    }
LABEL_20:
    CitpLastInputUpdate(v11, a2);
    ApiSetEditionKeepMachineUp((unsigned int)a2, v10, a5, v6);
    return 1;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return 1;
}
