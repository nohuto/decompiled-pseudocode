/*
 * XREFs of MiAweControlArea @ 0x1400726B4
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x140070DEC (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x1402D7910 (MiReferenceAweHandle.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiDeletePageFileSectionNodes @ 0x140688730 (MiDeletePageFileSectionNodes.c)
 *     MmGetSectionInformation @ 0x14068D080 (MmGetSectionInformation.c)
 *     MiDereferenceFailedControlArea @ 0x1406EF838 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiAweControlArea(__int64 a1)
{
  return !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 56) & 0x400) == 0 && (*(_DWORD *)(a1 + 92) & 0x20000) != 0;
}
