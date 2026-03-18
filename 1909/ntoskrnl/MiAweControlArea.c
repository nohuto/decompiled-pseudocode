/*
 * XREFs of MiAweControlArea @ 0x140072924
 * Callers:
 *     MiReleaseControlAreaCharges @ 0x14007105C (MiReleaseControlAreaCharges.c)
 *     MiReferenceAweHandle @ 0x1402D7670 (MiReferenceAweHandle.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MiDeletePageFileSectionNodes @ 0x14064E900 (MiDeletePageFileSectionNodes.c)
 *     MmGetSectionInformation @ 0x1406C7100 (MmGetSectionInformation.c)
 *     MiDereferenceFailedControlArea @ 0x1406F1448 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiAweControlArea(__int64 a1)
{
  return !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 56) & 0x400) == 0 && (*(_DWORD *)(a1 + 92) & 0x20000) != 0;
}
