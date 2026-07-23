/*
 * XREFs of WheapPfaReset @ 0x14091AA04
 * Callers:
 *     WheapCommitPolicy @ 0x140919F04 (WheapCommitPolicy.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WheapApplyPolicyChanges @ 0x140919DE4 (WheapApplyPolicyChanges.c)
 */

char WheapPfaReset()
{
  _RTL_BALANCED_NODE *v0; // rax
  signed __int8 v1; // cf
  _RTL_BALANCED_NODE *v2; // rbx
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
    BYTE2(v2[1].Left) |= 1u;
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
