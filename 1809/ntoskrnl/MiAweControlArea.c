/*
 * XREFs of MiAweControlArea @ 0x140077E6C
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x140079C68 (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x1402B1A6C (MiReferenceAweHandle.c)
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiDeletePageFileSectionNodes @ 0x14061EAB4 (MiDeletePageFileSectionNodes.c)
 *     MmGetSectionInformation @ 0x14066D870 (MmGetSectionInformation.c)
 *     MiDereferenceFailedControlArea @ 0x1406D0344 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiAweControlArea(__int64 a1)
{
  return !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 56) & 0x400) == 0 && (*(_DWORD *)(a1 + 92) & 0x20000) != 0;
}
