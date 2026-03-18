/*
 * XREFs of PspSetProcessTimerDelayForWin32 @ 0x140307E24
 * Callers:
 *     PspApplyTimerDelayProcess @ 0x1403076F4 (PspApplyTimerDelayProcess.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     PsInvokeWin32Callout @ 0x1405EBC10 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PspSetProcessTimerDelayForWin32(__int64 a1)
{
  signed __int64 *v1; // rbx
  unsigned __int64 v4; // rbx
  __int64 v5; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]
  int SessionId; // [rsp+40h] [rbp+8h] BYREF

  v1 = (signed __int64 *)(a1 + 736);
  v5 = 0LL;
  v6 = 0LL;
  ExAcquirePushLockSharedEx(a1 + 736, 0LL);
  if ( *(_QWORD *)(a1 + 944) )
  {
    if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    v4 = *(_QWORD *)(a1 + 2032);
    SessionId = MmGetSessionIdEx(a1);
    v5 = a1;
    LODWORD(v6) = v4 & 0x3FFFFFFF;
    HIDWORD(v6) = (v4 >> 30) & 0x3FFFFFFF;
    return PsInvokeWin32Callout(41LL, &v5, 1LL, &SessionId);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    return 0LL;
  }
}
