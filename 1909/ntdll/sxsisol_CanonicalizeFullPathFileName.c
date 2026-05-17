/*
 * XREFs of sxsisol_CanonicalizeFullPathFileName @ 0x180027528
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x18002891C (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlGetFullPathName_UstrEx @ 0x180028E40 (RtlGetFullPathName_UstrEx.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall sxsisol_CanonicalizeFullPathFileName(__int64 a1, int a2, _QWORD *a3)
{
  bool v3; // r14
  int v7; // r11d
  int FullPathName_Ustr; // ebx
  _QWORD *v9; // rcx
  __int128 v10; // xmm0
  unsigned __int16 v11; // ax
  __int64 v12; // rcx
  __int64 v14; // rax
  __int128 v15; // [rsp+40h] [rbp-10h]
  int v16; // [rsp+70h] [rbp+20h] BYREF
  _OWORD *v17; // [rsp+88h] [rbp+38h] BYREF

  v17 = 0LL;
  v3 = 0;
  if ( !a1 || a3 && a3[1] )
  {
    FullPathName_Ustr = -1073741811;
  }
  else
  {
    v7 = RtlDetermineDosPathNameType_Ustr(a1);
    v16 = v7;
    if ( ((v7 - 1) & 0xFFFFFFFA) != 0 || v7 == 5 )
      goto LABEL_11;
    FullPathName_Ustr = RtlGetFullPathName_UstrEx(a1, a2, (_DWORD)a3, (unsigned int)&v17, 0LL, 0LL, (__int64)&v16, 0LL);
    if ( FullPathName_Ustr >= 0 )
    {
      v9 = v17;
      v10 = *v17;
      v15 = *v17;
      if ( v16 == 6 && (v14 = *(_QWORD *)(a1 + 8), *(_WORD *)(v14 + 10) == 58) && *(_WORD *)(v14 + 12) == 92 )
      {
        *((_QWORD *)&v15 + 1) += 8LL;
        *(_QWORD *)(a1 + 8) = v14 + 8;
        *(_WORD *)a1 -= 8;
        v11 = v15 - 8;
        *(_WORD *)(a1 + 2) -= 8;
        WORD1(v15) -= 8;
        LOWORD(v15) = v15 - 8;
        v10 = v15;
      }
      else
      {
        v11 = *v17;
      }
      if ( *(_WORD *)a1 > v11 )
      {
        v3 = v9 == a3;
        *(_OWORD *)a1 = v10;
      }
LABEL_11:
      FullPathName_Ustr = 0;
      if ( v3 )
        return (unsigned int)FullPathName_Ustr;
    }
  }
  v12 = a3[1];
  if ( v12 )
  {
    NtdllpFreeStringRoutine(v12);
    *a3 = 0LL;
    a3[1] = 0LL;
  }
  return (unsigned int)FullPathName_Ustr;
}
