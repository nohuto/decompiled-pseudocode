/*
 * XREFs of ExpWnfDeleteStateData @ 0x14065330C
 * Callers:
 *     ExpWnfDeleteNameInstance @ 0x140652F64 (ExpWnfDeleteNameInstance.c)
 *     NtDeleteWnfStateData @ 0x140787500 (NtDeleteWnfStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDeleteStateData(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  _RTL_BALANCED_NODE *v3; // rax
  _RTL_BALANCED_NODE *v4; // rdi
  void *v5; // rdi

  v1 = (unsigned __int64 *)(a1 + 80);
  v3 = KeAbPreAcquire(a1 + 80, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (ULONG_PTR)v1);
  if ( v4 )
    BYTE2(v4[1].Left) |= 1u;
  v5 = *(void **)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( (unsigned __int64)v5 >= 2 )
    ExFreePoolWithTag(v5, 0x20666E57u);
}
