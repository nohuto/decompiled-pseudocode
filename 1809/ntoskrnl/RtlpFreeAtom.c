/*
 * XREFs of RtlpFreeAtom @ 0x1406AE710
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1400895A0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x1400FD25C (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x140111340 (RtlCreateAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14012671C (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x1401267F0 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x140126880 (RtlpFreeAllAtom.c)
 *     RtlDestroyAtomTable @ 0x1406AE5E0 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140894880 (RtlEmptyAtomTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1405CBCA8 (PsReturnSharedPoolQuota.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(char **)(a1 - 16), *(_QWORD *)(a1 - 16 + 8), 0LL);
  ExFreePoolWithTag(v1, 0);
}
