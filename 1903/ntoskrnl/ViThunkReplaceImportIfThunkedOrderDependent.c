/*
 * XREFs of ViThunkReplaceImportIfThunkedOrderDependent @ 0x140976A98
 * Callers:
 *     ViThunkReplaceAllThunkedImports @ 0x140976904 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x1402C3DDC (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceImportIfThunkedOrderDependent(char **a1, __int64 a2, int a3)
{
  unsigned int v3; // edx
  char **v4; // r9
  char *v5; // rax
  int v6; // eax
  ULONG_PTR v7; // rdx
  ULONG_PTR *v8; // rax

  v3 = 0;
  v4 = &VfOrderDependentThunks;
  if ( VfOrderDependentThunks )
  {
    v5 = *a1;
    while ( !v5 || v5 != v4[2] )
    {
      v4 += 7;
      if ( !*v4 )
        return v3;
    }
    if ( a3 )
    {
      if ( v4[5] )
      {
        v7 = (ULONG_PTR)v4[5];
        goto LABEL_21;
      }
    }
    else
    {
      if ( (dword_140509E14 & 8) == 0
        || (VfRuleClasses[0] & 0xFFAFFFFF) != 0
        || (dword_140509E14 & 2) != 0
        || (dword_140509E14 & 4) != 0 )
      {
        goto LABEL_16;
      }
      if ( !XdvEnabled )
        return 1;
      if ( !VfDifAPIThunkContextHead )
        return 1;
      v6 = *((_DWORD *)v4 + 6);
      if ( (v6 & 1) == 0 )
        return 1;
      if ( (v6 & 4) != 0 )
      {
LABEL_16:
        v7 = (ULONG_PTR)v4[1];
LABEL_21:
        MmReplaceImportEntry((ULONG_PTR)a1, v7);
        return 1;
      }
      v8 = (ULONG_PTR *)v4[4];
      if ( *v8 )
      {
        v7 = *v8;
        goto LABEL_21;
      }
    }
    return 1;
  }
  return v3;
}
