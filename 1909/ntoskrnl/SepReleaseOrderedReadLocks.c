/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x140087004
 * Callers:
 *     SeTokenCanImpersonate @ 0x1405DF060 (SeTokenCanImpersonate.c)
 *     NtCompareTokens @ 0x14061B9D0 (NtCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x14061E6C8 (SepIsSiblingTokenByPointer.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
