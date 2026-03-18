/*
 * XREFs of ViThunkReplaceImportIfThunkedRegular @ 0x140937354
 * Callers:
 *     ViThunkApplyMandatoryThunksCurrentSession @ 0x140936CEC (ViThunkApplyMandatoryThunksCurrentSession.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140937180 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x1402AB0CC (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceImportIfThunkedRegular(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *a1 )
  {
    while ( *a2 )
    {
      if ( *a1 == a2[2] )
      {
        MmReplaceImportEntry((ULONG_PTR)a1, a2[1]);
        return 1LL;
      }
      a2 += 5;
    }
  }
  return result;
}
