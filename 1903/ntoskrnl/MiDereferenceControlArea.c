/*
 * XREFs of MiDereferenceControlArea @ 0x14013D0CC
 * Callers:
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiRefillPurgedExtents @ 0x1402CCED4 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x1402D2608 (MiFaultGetFileExtents.c)
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiRemoveVadCharges @ 0x140605D80 (MiRemoveVadCharges.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiMapViewInSystemSpace @ 0x14066E434 (MiMapViewInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x1406A6338 (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x140070F40 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v2);
}
