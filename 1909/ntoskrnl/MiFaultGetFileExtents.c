/*
 * XREFs of MiFaultGetFileExtents @ 0x1402D2368
 * Callers:
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiFreeInPageSupportBlock @ 0x1400CEFD0 (MiFreeInPageSupportBlock.c)
 *     MiDereferenceControlArea @ 0x1400F87E4 (MiDereferenceControlArea.c)
 *     MiReleaseFaultCharges @ 0x140133C7C (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x14013426C (MiRetainSubsection.c)
 *     MiGetSharedProtos @ 0x14015CC6C (MiGetSharedProtos.c)
 *     MiReleaseFaultSynchronization @ 0x1402D2D70 (MiReleaseFaultSynchronization.c)
 *     MiAllocateFileExtents @ 0x14088B6A0 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MiFaultGetFileExtents(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rdi
  __int64 v5; // r14
  unsigned int FileExtents; // ebx

  v2 = *(_QWORD *)(a2 + 208);
  v5 = *(_QWORD *)v2;
  if ( (*(_BYTE *)(v2 + 34) & 2) != 0 )
  {
    MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
    MiGetSharedProtos(v5);
  }
  MiRetainSubsection((_QWORD *)v2);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  ++*(_QWORD *)(v5 + 40);
  ++*(_QWORD *)(v5 + 48);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 72));
  MiReleaseFaultSynchronization(a1);
  FileExtents = MiAllocateFileExtents(v2, 2);
  MiFreeInPageSupportBlock((char *)a2);
  MiDereferenceControlArea(v5);
  MiReleaseFaultCharges((__int64 *)v2);
  return FileExtents;
}
