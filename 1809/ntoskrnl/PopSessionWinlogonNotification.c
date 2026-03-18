/*
 * XREFs of PopSessionWinlogonNotification @ 0x14087901C
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x14014240C (PopPrintEx.c)
 *     PopSetPowerSettingValueAcDc @ 0x14058AA3C (PopSetPowerSettingValueAcDc.c)
 *     PopReleaseAdaptiveLock @ 0x1406DC650 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x1406DC6E4 (PopAcquireAdaptiveLock.c)
 *     PopDiagTraceSessionStates @ 0x1406DC770 (PopDiagTraceSessionStates.c)
 *     PopUpdateTimeouts @ 0x1406DC820 (PopUpdateTimeouts.c)
 *     PopGetLockConsoleTimeoutUnsafe @ 0x140878DFC (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopLazySensorActiveInput @ 0x140878F40 (PopLazySensorActiveInput.c)
 */

__int64 __fastcall PopSessionWinlogonNotification(unsigned int a1, __int64 a2)
{
  char v2; // si
  int v3; // ebx
  const EVENT_DESCRIPTOR *v5; // rcx
  int v6; // edi
  const char *v7; // rax
  const char *v8; // r8
  __int64 result; // rax
  int LockConsoleTimeoutUnsafe; // eax
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a2 + 5);
  v3 = *(unsigned __int8 *)(a2 + 4);
  v11 = 0LL;
  v5 = (const EVENT_DESCRIPTOR *)&POP_ETW_ADPM_SESSION_LOCKED;
  v6 = 0;
  if ( !v2 )
    v5 = &POP_ETW_ADPM_SESSION_UNLOCKED;
  PopDiagTraceSessionStates(v5, a1, v3);
  v7 = "Locked";
  if ( !v2 )
    v7 = "Unlocked";
  v8 = "Console";
  if ( !(_BYTE)v3 )
    v8 = "Remote";
  result = PopPrintEx(3u, "PopAdaptive:>>>>> %s session %u is %s\n", v8, a1, v7);
  if ( (_BYTE)v3 )
  {
    PopAcquireAdaptiveLock(0);
    if ( v2 )
    {
      byte_14040FDB4 = 1;
      LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
      LODWORD(v11) = LockConsoleTimeoutUnsafe;
      if ( LockConsoleTimeoutUnsafe )
      {
        if ( !byte_14040FDB5 )
        {
          byte_14040FDB6 = 1;
          HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
          BYTE1(qword_14040FD90) = 1;
          PopUpdateTimeouts(a1, (unsigned int *)&v11, 0LL);
        }
      }
    }
    else
    {
      byte_14040FDB4 = 0;
      if ( byte_14040FDB6 )
      {
        byte_14040FDB6 = 0;
        PopLazySensorActiveInput(a1);
      }
    }
    PopReleaseAdaptiveLock();
    LOBYTE(v6) = v2 != 0;
    LODWORD(v11) = v6;
    return PopSetPowerSettingValueAcDc(&GUID_CONSOLE_LOCKED, 4LL, &v11);
  }
  return result;
}
