/*
 * XREFs of ViThunkReplaceAllThunkedImports @ 0x140976904
 * Callers:
 *     ViThunkApplyThunksCurrentSession @ 0x14097647C (ViThunkApplyThunksCurrentSession.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ViThunkFindAllSpecialTables @ 0x140976640 (ViThunkFindAllSpecialTables.c)
 *     ViThunkReplaceImportEntry @ 0x140976A20 (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedOrderDependent @ 0x140976A98 (ViThunkReplaceImportIfThunkedOrderDependent.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x140976B4C (ViThunkReplaceImportIfThunkedRegular.c)
 */

__int64 __fastcall ViThunkReplaceAllThunkedImports(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v4; // rsi
  __int64 v7; // rbx
  __int64 *AllSpecialTables; // rdi
  __int64 v9; // rbp
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // rdx

  v4 = a2;
  v7 = a1;
  if ( a3 || a4 != 1 )
    AllSpecialTables = 0LL;
  else
    AllSpecialTables = ViThunkFindAllSpecialTables(a1, a2);
  if ( (_DWORD)v4 )
  {
    v9 = v4;
    do
    {
      if ( AllSpecialTables )
      {
        v10 = *AllSpecialTables;
        v11 = 0;
        while ( v10 )
        {
          if ( (unsigned int)ViThunkReplaceImportEntry(v10 + 24, v7) == 1 )
            goto LABEL_20;
          v10 = AllSpecialTables[++v11];
        }
      }
      if ( (KernelVerifier
         || !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7, &VfRegularThunks)
         && !(unsigned int)ViThunkReplaceImportIfThunkedOrderDependent(v7, v12, a3)
         && !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7, &VfXdvThunks))
        && !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7, &VfPoolThunks)
        && !a3
        && a4 == 1 )
      {
        ViThunkReplaceImportEntry(&ViVerifierDriverAddedThunkListHead, v7);
      }
LABEL_20:
      v7 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  if ( AllSpecialTables )
    ExFreePoolWithTag(AllSpecialTables, 0);
  return 1LL;
}
