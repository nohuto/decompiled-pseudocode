/*
 * XREFs of PopGetLockConsoleTimeoutUnsafe @ 0x140878DFC
 * Callers:
 *     PopGetLockConsoleTimeout @ 0x1406DCE14 (PopGetLockConsoleTimeout.c)
 *     PopActiveLockScreenPowerRequest @ 0x140878C20 (PopActiveLockScreenPowerRequest.c)
 *     PopSessionWinlogonNotification @ 0x14087901C (PopSessionWinlogonNotification.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 */

__int64 PopGetLockConsoleTimeoutUnsafe()
{
  unsigned int v0; // ebx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  v0 = PopAdaptiveLockConsoleTimeout;
  if ( PopAdaptiveLockConsoleTimeout > (unsigned int)PopDisplayTimeout )
  {
    if ( PopEnforceConsoleLockScreenTimeout )
    {
      if ( pCallbackContext.LevelPlus1 > 5 && TlgKeywordOn(&pCallbackContext, 0x400000000000uLL) )
        TlgWrite(&pCallbackContext, &unk_1403710B0, 0LL, 0LL, 2u, &pData);
    }
    else
    {
      return (unsigned int)PopDisplayTimeout;
    }
  }
  return v0;
}
