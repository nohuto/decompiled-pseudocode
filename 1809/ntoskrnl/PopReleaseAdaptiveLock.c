/*
 * XREFs of PopReleaseAdaptiveLock @ 0x1406DD8D0
 * Callers:
 *     PopSessionInputChange @ 0x1406DD7A0 (PopSessionInputChange.c)
 *     PopSetDisplayStatus @ 0x1406E31A0 (PopSetDisplayStatus.c)
 *     PopSessionConnectionChange @ 0x14071E928 (PopSessionConnectionChange.c)
 *     PopAdaptivePowerSettingCallback @ 0x140746FE0 (PopAdaptivePowerSettingCallback.c)
 *     PopActiveLockScreenPowerRequest @ 0x140879E60 (PopActiveLockScreenPowerRequest.c)
 *     PopIsLockConsoleTimeoutActive @ 0x14087A158 (PopIsLockConsoleTimeoutActive.c)
 *     PopSessionWinlogonNotification @ 0x14087A25C (PopSessionWinlogonNotification.c)
 *     PopUserPresentOverride @ 0x14087A470 (PopUserPresentOverride.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     PopNotifyConsoleUserPresent @ 0x1406DCE64 (PopNotifyConsoleUserPresent.c)
 *     PopDispatchStateCallout @ 0x1406DEF00 (PopDispatchStateCallout.c)
 *     PopSetWin32kDisplayTimeout @ 0x14087A398 (PopSetWin32kDisplayTimeout.c)
 *     PopSetWin32kInputTimeout @ 0x14087A3F8 (PopSetWin32kInputTimeout.c)
 */

_QWORD *PopReleaseAdaptiveLock()
{
  _QWORD *result; // rax
  char v1; // dl
  __int128 v2; // xmm0
  int v3; // ebx
  unsigned int v4; // edi
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
    v6 = qword_140410DF0;
  }
  ExReleaseResourceLite(&PopAdpmLock);
  result = KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( (_BYTE)v5 )
  {
    if ( BYTE2(v6) )
    {
      PopNotifyConsoleUserPresent(0, v1, HIDWORD(v6));
      v3 = DWORD1(v5);
      PopSetWin32kDisplayTimeout(DWORD1(v5), HIDWORD(v5));
      v4 = DWORD2(v5);
      PopSetWin32kInputTimeout(DWORD1(v5), DWORD2(v5));
    }
    else
    {
      v4 = DWORD2(v5);
      v3 = DWORD1(v5);
      if ( (_BYTE)v6 )
        PopSetWin32kInputTimeout(DWORD1(v5), DWORD2(v5));
      if ( BYTE1(v6) )
        PopSetWin32kDisplayTimeout(DWORD1(v5), HIDWORD(v5));
    }
    v7 = v3;
    LODWORD(v9) = 7;
    result = (_QWORD *)PopDispatchStateCallout(v8, &v7);
    if ( BYTE3(v6) )
      return (_QWORD *)PopSetWin32kInputTimeout(0xFFFFFFFFLL, v4);
  }
  return result;
}
