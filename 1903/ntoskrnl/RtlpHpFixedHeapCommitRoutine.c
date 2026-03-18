/*
 * XREFs of RtlpHpFixedHeapCommitRoutine @ 0x14031B820
 * Callers:
 *     <none>
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1401C03D0 (ZwAllocateVirtualMemory.c)
 */

NTSTATUS __fastcall RtlpHpFixedHeapCommitRoutine(__int64 a1, PVOID *a2, ULONG_PTR *a3)
{
  return ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, 0LL, a3, 0x1000u, 4u);
}
