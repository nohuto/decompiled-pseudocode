/*
 * XREFs of ViThunkReplaceImportIfThunkedRegular @ 0x140976B4C
 * Callers:
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x1409763F4 (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140976904 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x1402C3DDC (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceImportIfThunkedRegular(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v3; // r8d
  int v4; // eax
  ULONG_PTR v5; // rdx

  result = *a1;
  v3 = 0;
  if ( *a1 )
  {
    while ( *(_QWORD *)a2 )
    {
      if ( result == *(_QWORD *)(a2 + 16) )
      {
        if ( (dword_140509E14 & 8) != 0
          && (VfRuleClasses[0] & 0xFFAFFFFF) == 0
          && (dword_140509E14 & 2) == 0
          && (dword_140509E14 & 4) == 0 )
        {
          if ( !XdvEnabled )
            return 1;
          if ( !VfDifAPIThunkContextHead )
            return 1;
          v4 = *(_DWORD *)(a2 + 24);
          if ( (v4 & 1) == 0 )
            return 1;
          if ( (v4 & 4) == 0 )
          {
            v5 = **(_QWORD **)(a2 + 32);
            if ( v5 )
LABEL_18:
              MmReplaceImportEntry((ULONG_PTR)a1, v5);
            return 1;
          }
        }
        v5 = *(_QWORD *)(a2 + 8);
        goto LABEL_18;
      }
      a2 += 48LL;
    }
    return v3;
  }
  return result;
}
