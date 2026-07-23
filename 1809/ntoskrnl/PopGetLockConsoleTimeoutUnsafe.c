/*
 * XREFs of PopGetLockConsoleTimeoutUnsafe @ 0x14087A03C
 * Callers:
 *     PopGetLockConsoleTimeout @ 0x1406DE094 (PopGetLockConsoleTimeout.c)
 *     PopActiveLockScreenPowerRequest @ 0x140879E60 (PopActiveLockScreenPowerRequest.c)
 *     PopSessionWinlogonNotification @ 0x14087A25C (PopSessionWinlogonNotification.c)
 * Callees:
 *     _TlgKeywordOn @ 0x140012A04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
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
        TlgWrite(&pCallbackContext, &unk_140372150, 0LL, 0LL, 2u, &pData);
    }
    else
    {
      return (unsigned int)PopDisplayTimeout;
    }
  }
  return v0;
}
