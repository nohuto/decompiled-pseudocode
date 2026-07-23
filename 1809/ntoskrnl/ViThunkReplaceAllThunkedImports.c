/*
 * XREFs of ViThunkReplaceAllThunkedImports @ 0x140938180
 * Callers:
 *     ViThunkApplyThunksCurrentSession @ 0x140937D74 (ViThunkApplyThunksCurrentSession.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x1402AB3BC (MmReplaceImportEntry.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ViThunkFindAllSpecialTables @ 0x140937EBC (ViThunkFindAllSpecialTables.c)
 *     ViThunkReplaceImportEntry @ 0x1409382DC (ViThunkReplaceImportEntry.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x140938354 (ViThunkReplaceImportIfThunkedRegular.c)
 */

__int64 __fastcall ViThunkReplaceAllThunkedImports(__int64 BugCheckParameter2, unsigned int a2, int a3, int a4)
{
  __int64 v4; // rsi
  char **v7; // rbx
  __int64 *AllSpecialTables; // rdi
  __int64 i; // r14
  __int64 v10; // rax
  int v11; // esi
  char **v12; // rax
  char *v13; // rcx
  ULONG_PTR v15; // rdx

  v4 = a2;
  v7 = (char **)BugCheckParameter2;
  if ( a3 || a4 != 1 )
    AllSpecialTables = 0LL;
  else
    AllSpecialTables = ViThunkFindAllSpecialTables(BugCheckParameter2, a2);
  if ( (_DWORD)v4 )
  {
    for ( i = v4; i; --i )
    {
      if ( AllSpecialTables )
      {
        v10 = *AllSpecialTables;
        v11 = 0;
        while ( v10 )
        {
          if ( (unsigned int)ViThunkReplaceImportEntry(v10 + 24, v7) == 1 )
            goto LABEL_24;
          v10 = AllSpecialTables[++v11];
        }
      }
      if ( KernelVerifier )
      {
LABEL_20:
        if ( !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7, &VfPoolThunks) && !a3 && a4 == 1 )
          ViThunkReplaceImportEntry(&ViVerifierDriverAddedThunkListHead, v7);
        goto LABEL_24;
      }
      if ( !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7, &VfRegularThunks) )
      {
        v12 = &VfOrderDependentThunks;
        if ( VfOrderDependentThunks )
        {
          v13 = *v7;
          while ( !v13 || v13 != v12[2] )
          {
            v12 += 6;
            if ( !*v12 )
              goto LABEL_19;
          }
          if ( a3 )
          {
            v15 = (ULONG_PTR)v12[4];
            if ( !v15 )
              goto LABEL_24;
          }
          else
          {
            v15 = (ULONG_PTR)v12[1];
          }
          MmReplaceImportEntry((ULONG_PTR)v7, v15);
        }
        else
        {
LABEL_19:
          if ( !(unsigned int)ViThunkReplaceImportIfThunkedRegular(v7, &VfXdvThunks) )
            goto LABEL_20;
        }
      }
LABEL_24:
      ++v7;
    }
  }
  if ( AllSpecialTables )
    ExFreePoolWithTag(AllSpecialTables, 0);
  return 1LL;
}
