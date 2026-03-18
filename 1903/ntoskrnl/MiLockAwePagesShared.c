/*
 * XREFs of MiLockAwePagesShared @ 0x1402D6E80
 * Callers:
 *     NtAllocateUserPhysicalPages @ 0x140896E60 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x140897C30 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140897F10 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x14009B6D0 (ExAcquireAutoExpandPushLockShared.c)
 */

ULONG_PTR __fastcall MiLockAwePagesShared(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  return ExAcquireAutoExpandPushLockShared(a1 + 56, 0LL);
}
