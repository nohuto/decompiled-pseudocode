/*
 * XREFs of PopSessionWinlogonNotification @ 0x1405B5450
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x140126AC8 (PopPrintEx.c)
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405B5554 (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopSetPowerSettingValueAcDc @ 0x14069D520 (PopSetPowerSettingValueAcDc.c)
 *     PopAcquireAdaptiveLock @ 0x1406EF0C8 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1406F05CC (PopReleaseAdaptiveLock.c)
 *     PopDiagTraceSessionStates @ 0x1406F0CFC (PopDiagTraceSessionStates.c)
 *     PopUpdateTimeouts @ 0x140725CE4 (PopUpdateTimeouts.c)
 *     PopLazySensorActiveInput @ 0x1408B59D4 (PopLazySensorActiveInput.c)
 */

__int64 __fastcall PopSessionWinlogonNotification(unsigned int a1, __int64 a2)
{
  char v2; // si
  char v4; // bl
  const EVENT_DESCRIPTOR *v5; // rcx
  int v6; // edi
  const char *v7; // rax
  const char *v8; // r8
  __int64 result; // rax
  int LockConsoleTimeoutUnsafe; // eax
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_BYTE *)(a2 + 5);
  v4 = *(_BYTE *)(a2 + 4);
  v5 = (const EVENT_DESCRIPTOR *)&POP_ETW_ADPM_SESSION_LOCKED;
  v6 = 0;
  v11 = 0LL;
  if ( !v2 )
    v5 = &POP_ETW_ADPM_SESSION_UNLOCKED;
  PopDiagTraceSessionStates(v5);
  v7 = "Locked";
  if ( !v2 )
    v7 = "Unlocked";
  v8 = "Console";
  if ( !v4 )
    v8 = "Remote";
  result = PopPrintEx(3u, (__int64)"PopAdaptive:>>>>> %s session %u is %s\n", v8, a1, v7);
  if ( v4 )
  {
    PopAcquireAdaptiveLock(0LL);
    if ( v2 )
    {
      byte_140438794 = 1;
      LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
      LODWORD(v11) = LockConsoleTimeoutUnsafe;
      if ( LockConsoleTimeoutUnsafe && !byte_140438795 )
      {
        byte_140438796 = 1;
        HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
        BYTE1(qword_140438770) = 1;
        PopUpdateTimeouts(a1, &v11, 0LL);
      }
    }
    else
    {
      byte_140438794 = 0;
      if ( byte_140438796 )
      {
        byte_140438796 = 0;
        PopLazySensorActiveInput(a1);
      }
    }
    PopReleaseAdaptiveLock();
    LOBYTE(v6) = v2 != 0;
    LODWORD(v11) = v6;
    return PopSetPowerSettingValueAcDc(&GUID_CONSOLE_LOCKED);
  }
  return result;
}
