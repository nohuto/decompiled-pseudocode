/*
 * XREFs of RtlpFreeAtom @ 0x1406C779C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14001C400 (RtlAddAtomToAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x140099B20 (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x14010AEA0 (RtlCreateAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14011EF20 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x14011EFF4 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x14011F084 (RtlpFreeAllAtom.c)
 *     RtlDestroyAtomTable @ 0x1406C7580 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1408D17F0 (RtlEmptyAtomTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1405C866C (PsReturnSharedPoolQuota.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(char **)(a1 - 16), *(_QWORD *)(a1 - 16 + 8), 0LL);
  ExFreePoolWithTag(v1, 0);
}
