/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x1408B5750
 * Callers:
 *     <none>
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405B5554 (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopAcquireAdaptiveLock @ 0x1406EF0C8 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1406F05CC (PopReleaseAdaptiveLock.c)
 *     PopUpdateTimeouts @ 0x140725CE4 (PopUpdateTimeouts.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  int LockConsoleTimeoutUnsafe; // eax
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  PopAcquireAdaptiveLock(0);
  if ( a3 )
  {
    byte_140438795 = 1;
    if ( byte_140438796 )
    {
      LockConsoleTimeoutUnsafe = PopDisplayTimeout;
      LODWORD(v6) = PopDisplayTimeout;
      byte_140438796 = 0;
      goto LABEL_7;
    }
  }
  else
  {
    byte_140438795 = 0;
    LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
    LODWORD(v6) = LockConsoleTimeoutUnsafe;
    if ( LockConsoleTimeoutUnsafe && byte_140438794 )
    {
      byte_140438796 = 1;
LABEL_7:
      HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
      BYTE1(qword_140438770) = 1;
      PopUpdateTimeouts(PopConsoleContext, (unsigned int *)&v6, 0LL);
    }
  }
  PopReleaseAdaptiveLock();
  return 0LL;
}
