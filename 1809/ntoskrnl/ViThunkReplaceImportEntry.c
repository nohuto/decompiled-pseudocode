/*
 * XREFs of ViThunkReplaceImportEntry @ 0x1409382DC
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140937998 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140938180 (ViThunkReplaceAllThunkedImports.c)
 * Callees:
 *     MmReplaceImportEntry @ 0x1402AB3BC (MmReplaceImportEntry.c)
 */

__int64 __fastcall ViThunkReplaceImportEntry(__int64 **a1, _QWORD *a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  unsigned int v6; // r8d
  _QWORD *v7; // rdx
  int v8; // ecx

  v2 = *a1;
  for ( result = 0LL; v2 != (__int64 *)a1; v2 = (__int64 *)*v2 )
  {
    v6 = *((_DWORD *)v2 + 6);
    v7 = v2 + 4;
    v8 = 0;
    if ( v6 )
    {
      while ( *a2 != *v7 )
      {
        v7 += 2;
        if ( ++v8 >= v6 )
          goto LABEL_7;
      }
      MmReplaceImportEntry((ULONG_PTR)a2, v7[1]);
      result = 1LL;
    }
LABEL_7:
    if ( (_DWORD)result == 1 )
      break;
  }
  return result;
}
