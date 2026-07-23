/*
 * XREFs of MiDeleteSectionAwe @ 0x1402B06C4
 * Callers:
 *     MiDeletePageFileSectionNodes @ 0x14061FAB4 (MiDeletePageFileSectionNodes.c)
 *     MiCreatePagingFileMap @ 0x14061FB18 (MiCreatePagingFileMap.c)
 *     MiDereferenceFailedControlArea @ 0x1406D15C4 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x140850F50 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x140850F98 (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
