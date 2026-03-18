/*
 * XREFs of PopGetLockConsoleTimeoutUnsafe @ 0x1405B5554
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405B5450 (PopSessionWinlogonNotification.c)
 *     PopGetLockConsoleTimeout @ 0x140726344 (PopGetLockConsoleTimeout.c)
 *     PopActiveLockScreenPowerRequest @ 0x1408B5750 (PopActiveLockScreenPowerRequest.c)
 * Callees:
 *     _TlgKeywordOn @ 0x14008B9D4 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
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
        TlgWrite(&pCallbackContext, &unk_14039143A, 0LL, 0LL, 2u, &pData);
    }
    else
    {
      return (unsigned int)PopDisplayTimeout;
    }
  }
  return v0;
}
