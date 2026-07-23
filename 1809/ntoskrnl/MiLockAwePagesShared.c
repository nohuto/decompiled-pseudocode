/*
 * XREFs of MiLockAwePagesShared @ 0x1402B14A8
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x1408518F0 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140852620 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140852910 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x1400050F0 (ExAcquireAutoExpandPushLockShared.c)
 */

ULONG_PTR __fastcall MiLockAwePagesShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockShared(a1 + 56, 0LL);
}
