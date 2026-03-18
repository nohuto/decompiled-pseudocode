/*
 * XREFs of MiFaultGetFileExtents @ 0x1402D2608
 * Callers:
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiFreeInPageSupportBlock @ 0x140091C70 (MiFreeInPageSupportBlock.c)
 *     MiReleaseFaultCharges @ 0x14013318C (MiReleaseFaultCharges.c)
 *     MiRetainSubsection @ 0x140133854 (MiRetainSubsection.c)
 *     MiDereferenceControlArea @ 0x14013D0CC (MiDereferenceControlArea.c)
 *     MiGetSharedProtos @ 0x14015C5CC (MiGetSharedProtos.c)
 *     MiReleaseFaultSynchronization @ 0x1402D3010 (MiReleaseFaultSynchronization.c)
 *     MiAllocateFileExtents @ 0x14088BE80 (MiAllocateFileExtents.c)
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
