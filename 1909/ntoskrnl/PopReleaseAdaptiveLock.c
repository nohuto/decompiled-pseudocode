/*
 * XREFs of PopReleaseAdaptiveLock @ 0x1406F05CC
 * Callers:
 *     PopSessionWinlogonNotification @ 0x1405B5450 (PopSessionWinlogonNotification.c)
 *     PopSessionInputChange @ 0x140725AC4 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x14072C12C (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x1407487A8 (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x140759C90 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x1408B5750 (PopActiveLockScreenPowerRequest.c)
 *     PopIsLockConsoleTimeoutActive @ 0x1408B59AC (PopIsLockConsoleTimeoutActive.c)
 *     PopUserPresentOverride @ 0x1408B5BC8 (PopUserPresentOverride.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     PopDispatchStateCallout @ 0x1406EF1E8 (PopDispatchStateCallout.c)
 *     PopNotifyConsoleUserPresent @ 0x140720410 (PopNotifyConsoleUserPresent.c)
 *     PopSetWin32kDisplayTimeout @ 0x1408B5AC4 (PopSetWin32kDisplayTimeout.c)
 *     PopSetWin32kInputTimeout @ 0x1408B5B24 (PopSetWin32kInputTimeout.c)
 */

__int64 PopReleaseAdaptiveLock()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int128 v2; // xmm0
  unsigned int v3; // edi
  int v4; // ebx
  __int128 v5; // [rsp+20h] [rbp-40h]
  __int64 v6; // [rsp+30h] [rbp-30h]
  int v7; // [rsp+38h] [rbp-28h] BYREF
  _QWORD v8[2]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v9; // [rsp+50h] [rbp-10h]

  PopAdpmLockThread = 0LL;
  v8[0] = 0LL;
  v8[1] = 0LL;
  v9 = 0LL;
  v5 = 0uLL;
  v6 = 0LL;
  if ( (_BYTE)PopLazyContext )
  {
    v2 = PopLazyContext;
    LOBYTE(PopLazyContext) = 0;
    v5 = v2;
    v6 = qword_140438770;
  }
  ExReleaseResourceLite(&PopAdpmLock);
  result = (__int64)KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( (_BYTE)v5 )
  {
    if ( BYTE2(v6) )
    {
      PopNotifyConsoleUserPresent(0LL, v1, HIDWORD(v6));
      v4 = DWORD1(v5);
      PopSetWin32kDisplayTimeout(DWORD1(v5), HIDWORD(v5));
      v3 = DWORD2(v5);
      PopSetWin32kInputTimeout(DWORD1(v5), DWORD2(v5));
    }
    else
    {
      v3 = DWORD2(v5);
      v4 = DWORD1(v5);
      if ( (_BYTE)v6 )
        PopSetWin32kInputTimeout(DWORD1(v5), DWORD2(v5));
      if ( BYTE1(v6) )
        PopSetWin32kDisplayTimeout(DWORD1(v5), HIDWORD(v5));
    }
    v7 = v4;
    LODWORD(v9) = 7;
    result = PopDispatchStateCallout(v8, (__int64)&v7);
    if ( BYTE3(v6) )
      return PopSetWin32kInputTimeout(0xFFFFFFFFLL, v3);
  }
  return result;
}
