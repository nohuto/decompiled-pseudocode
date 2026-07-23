/*
 * XREFs of MiAweControlArea @ 0x140077E5C
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x140079C58 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x1402B1D5C (MiReferenceAweHandle.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiDeletePageFileSectionNodes @ 0x14061FAB4 (MiDeletePageFileSectionNodes.c)
 *     MmGetSectionInformation @ 0x14066EA10 (MmGetSectionInformation.c)
 *     MiDereferenceFailedControlArea @ 0x1406D15C4 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiAweControlArea(__int64 a1)
{
  return !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 56) & 0x400) == 0 && (*(_DWORD *)(a1 + 92) & 0x20000) != 0;
}
