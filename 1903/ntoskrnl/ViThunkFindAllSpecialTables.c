/*
 * XREFs of ViThunkFindAllSpecialTables @ 0x140976640
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140976078 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140976904 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ViThunkFindNextSpecialTable @ 0x1409766F0 (ViThunkFindNextSpecialTable.c)
 */

_QWORD *__fastcall ViThunkFindAllSpecialTables(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 NextSpecialTable; // rdi
  _QWORD *PoolWithTag; // rax
  _QWORD *v6; // rbx
  __int64 v7; // rsi

  v2 = a2;
  NextSpecialTable = ViThunkFindNextSpecialTable(a1, a2);
  if ( !NextSpecialTable )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * (unsigned int)(ViVerifierSpecialThunkTables + 1), 0x74566D4Du);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, 8LL * (unsigned int)(ViVerifierSpecialThunkTables + 1));
  v7 = 0LL;
  do
  {
    v6[v7] = NextSpecialTable;
    v7 = (unsigned int)(v7 + 1);
    NextSpecialTable = ViThunkFindNextSpecialTable(a1, v2);
  }
  while ( NextSpecialTable );
  return v6;
}
