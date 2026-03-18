/*
 * XREFs of PopSessionWinlogonNotification @ 0x1405B5070
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     PopPrintEx @ 0x140126458 (PopPrintEx.c)
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405B5174 (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopSetPowerSettingValueAcDc @ 0x1406A09DC (PopSetPowerSettingValueAcDc.c)
 *     PopAcquireAdaptiveLock @ 0x1406A3C58 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1406EEAE4 (PopReleaseAdaptiveLock.c)
 *     PopDiagTraceSessionStates @ 0x1406EF03C (PopDiagTraceSessionStates.c)
 *     PopUpdateTimeouts @ 0x140723E44 (PopUpdateTimeouts.c)
 *     PopLazySensorActiveInput @ 0x1408B6104 (PopLazySensorActiveInput.c)
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
      byte_140438814 = 1;
      LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
      LODWORD(v11) = LockConsoleTimeoutUnsafe;
      if ( LockConsoleTimeoutUnsafe && !byte_140438815 )
      {
        byte_140438816 = 1;
        HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
        BYTE1(qword_1404387F0) = 1;
        PopUpdateTimeouts(a1, &v11, 0LL);
      }
    }
    else
    {
      byte_140438814 = 0;
      if ( byte_140438816 )
      {
        byte_140438816 = 0;
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
