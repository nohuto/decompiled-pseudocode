/*
 * XREFs of ExpWnfLookupNameInstance @ 0x14060F8E0
 * Callers:
 *     ExpWnfCompleteThreadSubscriptions @ 0x14060E8D0 (ExpWnfCompleteThreadSubscriptions.c)
 *     NtUpdateWnfStateData @ 0x14060EBB0 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14060F054 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x14060F3C0 (NtQueryWnfStateData.c)
 *     NtDeleteWnfStateName @ 0x1406AB300 (NtDeleteWnfStateName.c)
 *     NtQueryWnfStateNameInformation @ 0x1406B4EF0 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x14075E540 (NtDeleteWnfStateData.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     ExpWnfFindStateName @ 0x14060F9B0 (ExpWnfFindStateName.c)
 */

__int64 __fastcall ExpWnfLookupNameInstance(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int64 *v3; // rdi
  __int64 v7; // rsi
  __int64 StateName; // rax
  __int64 v9; // rbx

  v3 = (unsigned __int64 *)(a1 + 48);
  v7 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, v7, (ULONG_PTR)v3);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  StateName = ExpWnfFindStateName(a1, a2);
  v9 = StateName;
  if ( StateName )
    v9 = -(__int64)(ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(StateName + 8)) != 0) & StateName;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  if ( !v9 )
    return 3221225524LL;
  *a3 = v9;
  return 0LL;
}
