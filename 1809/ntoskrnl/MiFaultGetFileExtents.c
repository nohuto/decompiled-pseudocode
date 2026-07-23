/*
 * XREFs of MiFaultGetFileExtents @ 0x1402BBFF4
 * Callers:
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14002DC80 (MiFreeInPageSupportBlock.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseFaultCharges @ 0x140131A24 (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140131F58 (MiRetainSubsection.c)
 *     MiDereferenceControlArea @ 0x14013B67C (MiDereferenceControlArea.c)
 *     MiReleaseFaultSynchronization @ 0x1402BC8BC (MiReleaseFaultSynchronization.c)
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiFaultGetFileExtents(__int64 a1, __int64 a2)
{
  __int64 *v2; // r14
  __int64 v5; // rsi
  unsigned int FileExtents; // ebx

  v2 = *(__int64 **)(a2 + 208);
  v5 = *v2;
  MiRetainSubsection(v2);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  ++*(_QWORD *)(v5 + 40);
  ++*(_QWORD *)(v5 + 48);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  MiReleaseFaultSynchronization(a1);
  FileExtents = MiAllocateFileExtents((ULONG_PTR)v2, 2);
  MiFreeInPageSupportBlock((char *)a2);
  MiDereferenceControlArea(v5);
  MiReleaseFaultCharges(v2);
  return FileExtents;
}
