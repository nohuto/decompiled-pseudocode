/*
 * XREFs of MiLockAwePagesShared @ 0x1402D6BE0
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x140896680 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140897450 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140897730 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x1400EF150 (ExAcquireAutoExpandPushLockShared.c)
 */

ULONG_PTR __fastcall MiLockAwePagesShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockShared(a1 + 56, 0LL);
}
