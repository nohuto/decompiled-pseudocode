/*
 * XREFs of RtlpFreeAtom @ 0x1406C607C
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14001C7F0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x1400EDB7C (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x14010AA70 (RtlCreateAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14011FCD0 (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x14011FDA4 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x14011FE34 (RtlpFreeAllAtom.c)
 *     RtlDestroyAtomTable @ 0x1406C5E60 (RtlDestroyAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1408D10F0 (RtlEmptyAtomTable.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1405C8B6C (PsReturnSharedPoolQuota.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(char **)(a1 - 16), *(_QWORD *)(a1 - 16 + 8), 0LL);
  ExFreePoolWithTag(v1, 0);
}
