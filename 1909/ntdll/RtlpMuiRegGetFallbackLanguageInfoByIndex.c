/*
 * XREFs of RtlpMuiRegGetFallbackLanguageInfoByIndex @ 0x1800FDD38
 * Callers:
 *     RtlpMuiRegGetFallbackLanguagesAsMultiSZ @ 0x1800847C8 (RtlpMuiRegGetFallbackLanguagesAsMultiSZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetFallbackLanguageInfoByIndex(
        __int64 a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        __int16 *a5,
        __int64 a6)
{
  int v7; // edx
  int v8; // edx
  int v9; // edx
  __int16 v10; // dx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // xmm1_8
  unsigned __int64 v17; // [rsp+0h] [rbp-20h]

  if ( !a1 || !a2 || !a6 || !a5 || (unsigned __int16)a3 > 3u )
    return 3221225485LL;
  v7 = (*(unsigned __int16 *)(a2 + 8) >> (2 * a3)) & 3;
  if ( !v7 )
    return 3221225473LL;
  v8 = v7 - 1;
  if ( !v8 )
  {
    LODWORD(v17) = 0;
    HIWORD(v17) = -1;
    WORD2(v17) = *(_WORD *)(a2 + 2LL * a3 + 12);
    goto LABEL_11;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v17 = 0LL;
      HIWORD(v17) = *(_WORD *)(a2 + 2LL * a3 + 12);
LABEL_11:
      *(_OWORD *)a6 = v17;
      *a5 = a3;
      *(_QWORD *)(a6 + 16) = 0LL;
      *(_DWORD *)(a6 + 24) = 0;
      return 0LL;
    }
  }
  else
  {
    _mm_lfence();
    v10 = *(_WORD *)(a2 + 2LL * a3 + 12);
    if ( v10 >= 0 )
    {
      v11 = *(_QWORD *)(a1 + 24);
      if ( v10 < (int)*(unsigned __int16 *)(v11 + 6) )
      {
        v12 = 28LL * v10;
        v13 = *(_QWORD *)(v11 + 16);
        *a5 = v10;
        v14 = *(_OWORD *)(v12 + v13);
        v15 = *(_QWORD *)(v12 + v13 + 16);
        LODWORD(v13) = *(_DWORD *)(v12 + v13 + 24);
        *(_OWORD *)a6 = v14;
        *(_QWORD *)(a6 + 16) = v15;
        *(_DWORD *)(a6 + 24) = v13;
        return 0LL;
      }
    }
  }
  return 3221225701LL;
}
