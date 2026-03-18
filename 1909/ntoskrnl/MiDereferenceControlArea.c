/*
 * XREFs of MiDereferenceControlArea @ 0x1400F87E4
 * Callers:
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiRefillPurgedExtents @ 0x1402CCC34 (MiRefillPurgedExtents.c)
 *     MiFaultGetFileExtents @ 0x1402D2368 (MiFaultGetFileExtents.c)
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiRemoveVadCharges @ 0x140607890 (MiRemoveVadCharges.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MiMapViewInSystemSpace @ 0x140647E94 (MiMapViewInSystemSpace.c)
 *     MiUnloadSystemImage @ 0x1406A5BC8 (MiUnloadSystemImage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x1400711B0 (MiCheckControlArea.c)
 */

__int64 __fastcall MiDereferenceControlArea(__int64 a1)
{
  KIRQL v2; // al

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  --*(_QWORD *)(a1 + 40);
  --*(_QWORD *)(a1 + 48);
  return MiCheckControlArea(a1, v2);
}
