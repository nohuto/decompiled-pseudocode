/*
 * XREFs of MiDeleteSectionAwe @ 0x1402D5BF8
 * Callers:
 *     MiDeletePageFileSectionNodes @ 0x140688730 (MiDeletePageFileSectionNodes.c)
 *     MiCreatePagingFileMap @ 0x140688794 (MiCreatePagingFileMap.c)
 *     MiDereferenceFailedControlArea @ 0x1406EF838 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x140896668 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x1408966B0 (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
