/*
 * XREFs of RtlpFreeAtom @ 0x1406AD490
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1400895B0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x1400FD1BC (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x1401112B0 (RtlCreateAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14012662C (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x140126700 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x140126790 (RtlpFreeAllAtom.c)
 *     RtlDestroyAtomTable @ 0x1406AD360 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140893640 (RtlEmptyAtomTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1405CACA8 (PsReturnSharedPoolQuota.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(char **)(a1 - 16), *(_QWORD *)(a1 - 16 + 8), 0LL);
  ExFreePoolWithTag(v1, 0);
}
