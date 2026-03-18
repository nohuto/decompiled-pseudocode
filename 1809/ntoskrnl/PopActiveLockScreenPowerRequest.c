/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x140878C20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseAdaptiveLock @ 0x1406DC650 (PopReleaseAdaptiveLock.c)
 *     PopAcquireAdaptiveLock @ 0x1406DC6E4 (PopAcquireAdaptiveLock.c)
 *     PopUpdateTimeouts @ 0x1406DC820 (PopUpdateTimeouts.c)
 *     PopGetLockConsoleTimeoutUnsafe @ 0x140878DFC (PopGetLockConsoleTimeoutUnsafe.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  int LockConsoleTimeoutUnsafe; // eax
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  PopAcquireAdaptiveLock(0);
  if ( a3 )
  {
    byte_14040FDB5 = 1;
    if ( byte_14040FDB6 )
    {
      LockConsoleTimeoutUnsafe = PopDisplayTimeout;
      LODWORD(v6) = PopDisplayTimeout;
      byte_14040FDB6 = 0;
      goto LABEL_7;
    }
  }
  else
  {
    byte_14040FDB5 = 0;
    LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
    LODWORD(v6) = LockConsoleTimeoutUnsafe;
    if ( LockConsoleTimeoutUnsafe && byte_14040FDB4 )
    {
      byte_14040FDB6 = 1;
LABEL_7:
      HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
      BYTE1(qword_14040FD90) = 1;
      PopUpdateTimeouts(PopConsoleContext, (unsigned int *)&v6, 0LL);
    }
  }
  PopReleaseAdaptiveLock();
  return 0LL;
}
