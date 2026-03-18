/*
 * XREFs of DefaultFontQueryRoutine @ 0x1C036E5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00824F8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall DefaultFontQueryRoutine(unsigned __int16 *a1, int a2, _BYTE *a3, __int64 a4, __int64 a5)
{
  unsigned int *v8; // rdx
  __int64 v9; // rdi
  __int64 v11; // rdi
  __int64 v12; // rcx

  if ( !_wcsicmp(a1, L"DEFAULT") )
  {
    *(_BYTE *)(a5 + 32) = *a3;
    return 0LL;
  }
  v8 = *(unsigned int **)(a5 + 8);
  if ( !v8 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a1[v9] );
    *(_DWORD *)(a5 + 4) += 2 * v9 + 2;
LABEL_6:
    ++*(_DWORD *)a5;
    return 0LL;
  }
  if ( a2 == 4 )
  {
    *v8 = *(_DWORD *)a3 | (((unsigned int)*(_QWORD *)(a5 + 24) << 15) - (*(_DWORD *)(a5 + 16) << 15)) & 0xFFFF0000;
    *(_QWORD *)(a5 + 8) += 4LL;
    v11 = -1LL;
    do
      ++v11;
    while ( a1[v11] );
    StringCchCopyW(*(char **)(a5 + 24), *(unsigned int *)(a5 + 4), (char *)a1);
    v12 = (unsigned int)(v11 - 1);
    if ( (unsigned __int16)(a1[v12] - 48) <= 9u )
    {
      LODWORD(v11) = v11 - 1;
      *(_WORD *)(*(_QWORD *)(a5 + 24) + 2 * v12) = 0;
    }
    *(_QWORD *)(a5 + 24) += 2LL * (unsigned int)(v11 + 1);
    goto LABEL_6;
  }
  return 3221225473LL;
}
