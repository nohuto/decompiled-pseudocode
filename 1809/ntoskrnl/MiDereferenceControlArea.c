/*
 * XREFs of MiDereferenceControlArea @ 0x14013B67C
 * Callers:
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiRefillPurgedExtents @ 0x1402B6E40 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x1402BBFF4 (MiFaultGetFileExtents.c)
 *     MiMapViewInSystemSpace @ 0x1405E03F4 (MiMapViewInSystemSpace.c)
 *     MiRemoveVadCharges @ 0x1405ED820 (MiRemoveVadCharges.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MiUnloadSystemImage @ 0x140652C64 (MiUnloadSystemImage.c)
 * Callees:
 *     MiCheckControlArea @ 0x140076490 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v2);
}
