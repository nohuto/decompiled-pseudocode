/*
 * XREFs of MiDereferenceControlArea @ 0x14013B57C
 * Callers:
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiRefillPurgedExtents @ 0x1402B6C50 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x1402BBE04 (MiFaultGetFileExtents.c)
 *     MiMapViewInSystemSpace @ 0x1405DF3F4 (MiMapViewInSystemSpace.c)
 *     MiRemoveVadCharges @ 0x1405EC820 (MiRemoveVadCharges.c)
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     MiUnloadSystemImage @ 0x140651AA4 (MiUnloadSystemImage.c)
 * Callees:
 *     MiCheckControlArea @ 0x1400764A0 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4E0 (ExAcquireSpinLockExclusive.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v2);
}
