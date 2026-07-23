/*
 * XREFs of ViThunkReplaceSharedExports @ 0x1409383BC
 * Callers:
 *     ViThunkReplaceAllSharedExports @ 0x1409380F4 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x1402AB3BC (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceSharedExports(ULONG_PTR *a1, unsigned int a2)
{
  ULONG_PTR *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  if ( a1 )
  {
    v2 = a1;
    if ( a2 )
    {
      v3 = a2;
      do
      {
        if ( *v2 )
          result = MmReplaceImportEntry(*v2, v2[1]);
        v2 += 2;
        --v3;
      }
      while ( v3 );
    }
  }
  return result;
}
