/*
 * XREFs of MiDeleteSectionAwe @ 0x1402D5958
 * Callers:
 *     MiDeletePageFileSectionNodes @ 0x14064E900 (MiDeletePageFileSectionNodes.c)
 *     MiCreatePagingFileMap @ 0x14064E964 (MiCreatePagingFileMap.c)
 *     MiDereferenceFailedControlArea @ 0x1406F1448 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x140895E88 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x140895ED0 (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
