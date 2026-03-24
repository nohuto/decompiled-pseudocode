/*
 * XREFs of WheapPfaReset @ 0x1408DCD48
 * Callers:
 *     WheapCommitPolicy @ 0x1408DC1DC (WheapCommitPolicy.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     WheapApplyPolicyChanges @ 0x1408DC0BC (WheapApplyPolicyChanges.c)
 */

__int64 WheapPfaReset()
{
  __int64 v0; // rax
  signed __int8 v1; // cf
  __int64 v2; // rbx
  PVOID *v3; // rbx
  PVOID *v4; // rax
  PVOID *v5; // rcx
  PVOID **v6; // rdx

  v0 = KeAbPreAcquire((ULONG_PTR)&WheapPfaLock, 0LL, 0);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&WheapPfaLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&WheapPfaLock, v0, (ULONG_PTR)&WheapPfaLock);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  WheapApplyPolicyChanges();
  v3 = (PVOID *)WheapPfaList;
  while ( v3 != &WheapPfaList )
  {
    v4 = (PVOID *)*v3;
    v5 = v3;
    v3 = v4;
    if ( v4[1] != v5 || (v6 = (PVOID **)v5[1], *v6 != v5) )
      __fastfail(3u);
    *v6 = v4;
    v4[1] = v6;
    ExFreePoolWithTag(v5, 0x61656857u);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&WheapPfaLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&WheapPfaLock);
  return KeAbPostRelease((ULONG_PTR)&WheapPfaLock);
}
