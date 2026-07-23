/*
 * XREFs of PfpQueryScenarioInformation @ 0x1406E2440
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x14062AAF0 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     PfpScenCtxQueryScenarioInformation @ 0x14056EBA8 (PfpScenCtxQueryScenarioInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpQueryScenarioInformation(__int64 a1, char a2, _DWORD *a3)
{
  unsigned int v6; // ebx
  __int128 *v7; // rax
  unsigned __int64 v8; // rcx
  _OWORD *v9; // rax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int128 v12; // [rsp+30h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 24) == 32 )
  {
    v6 = 0;
    if ( a2 && (*(_QWORD *)(a1 + 16) & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v7 = *(__int128 **)(a1 + 16);
    v11 = *v7;
    v12 = v7[1];
    if ( (_DWORD)v11 == 4 )
    {
      PfpScenCtxQueryScenarioInformation((ULONG_PTR)&qword_14043D160, (__int64)&v11);
      if ( a2 )
      {
        v8 = *(_QWORD *)(a1 + 16);
        if ( (v8 & 7) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v8 >= 0x7FFFFFFF0000LL )
          v8 = 0x7FFFFFFF0000LL;
        *(_BYTE *)v8 = *(_BYTE *)v8;
        *(_BYTE *)(v8 + 31) = *(_BYTE *)(v8 + 31);
      }
      v9 = *(_OWORD **)(a1 + 16);
      *v9 = v11;
      v9[1] = v12;
      *a3 = 32;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741306;
  }
  return v6;
}
