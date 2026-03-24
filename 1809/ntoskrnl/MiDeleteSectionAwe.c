/*
 * XREFs of MiDeleteSectionAwe @ 0x1402B04D4
 * Callers:
 *     MiDeletePageFileSectionNodes @ 0x14061EAB4 (MiDeletePageFileSectionNodes.c)
 *     MiCreatePagingFileMap @ 0x14061EB18 (MiCreatePagingFileMap.c)
 *     MiDereferenceFailedControlArea @ 0x1406D0324 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x14084FCF0 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x14084FD38 (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
