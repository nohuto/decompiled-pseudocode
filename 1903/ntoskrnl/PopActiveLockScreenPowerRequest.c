/*
 * XREFs of PopActiveLockScreenPowerRequest @ 0x1408B5E80
 * Callers:
 *     <none>
 * Callees:
 *     PopGetLockConsoleTimeoutUnsafe @ 0x1405B5174 (PopGetLockConsoleTimeoutUnsafe.c)
 *     PopAcquireAdaptiveLock @ 0x1406A3C58 (PopAcquireAdaptiveLock.c)
 *     PopReleaseAdaptiveLock @ 0x1406EEAE4 (PopReleaseAdaptiveLock.c)
 *     PopUpdateTimeouts @ 0x140723E44 (PopUpdateTimeouts.c)
 */

__int64 __fastcall PopActiveLockScreenPowerRequest(__int64 a1, __int64 a2, char a3)
{
  int LockConsoleTimeoutUnsafe; // eax
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  PopAcquireAdaptiveLock(0);
  if ( a3 )
  {
    byte_140438815 = 1;
    if ( byte_140438816 )
    {
      LockConsoleTimeoutUnsafe = PopDisplayTimeout;
      LODWORD(v6) = PopDisplayTimeout;
      byte_140438816 = 0;
      goto LABEL_7;
    }
  }
  else
  {
    byte_140438815 = 0;
    LockConsoleTimeoutUnsafe = PopGetLockConsoleTimeoutUnsafe();
    LODWORD(v6) = LockConsoleTimeoutUnsafe;
    if ( LockConsoleTimeoutUnsafe && byte_140438814 )
    {
      byte_140438816 = 1;
LABEL_7:
      HIDWORD(PopLazyContext) = LockConsoleTimeoutUnsafe;
      BYTE1(qword_1404387F0) = 1;
      PopUpdateTimeouts(PopConsoleContext, (unsigned int *)&v6, 0LL);
    }
  }
  PopReleaseAdaptiveLock();
  return 0LL;
}
