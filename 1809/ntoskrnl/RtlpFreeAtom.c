/*
 * XREFs of RtlpFreeAtom @ 0x1406AD470
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1400895B0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x1400FD1DC (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x1401112D0 (RtlCreateAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14012664C (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x140126720 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x1401267B0 (RtlpFreeAllAtom.c)
 *     RtlDestroyAtomTable @ 0x1406AD340 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140893620 (RtlEmptyAtomTable.c)
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
