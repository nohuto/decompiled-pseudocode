/*
 * XREFs of RtlpQueryEnvironmentCache @ 0x180057038
 * Callers:
 *     RtlQueryEnvironmentVariable @ 0x180056D90 (RtlQueryEnvironmentVariable.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1800571D0 (RtlCompareUnicodeStrings.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlpQueryEnvironmentCache(
        _QWORD *a1,
        const WCHAR *a2,
        SIZE_T a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  char *v9; // r15
  int v10; // r12d
  unsigned __int64 v11; // rbx
  unsigned int v12; // edi
  void *Environment; // rax
  const void *v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // rbx
  const WCHAR *v18; // [rsp+68h] [rbp+10h]

  v18 = a2;
  if ( a3 - 1 <= 0x13 )
  {
    v9 = (char *)&RtlpEnvironLookupTable + 56 * a3;
    v10 = *((_DWORD *)v9 - 14);
    v11 = (unsigned __int64)(v9 - 48);
    v12 = 0;
    while ( v11 < (unsigned __int64)&v9[16 * v10 - 48] )
    {
      if ( !RtlCompareUnicodeStrings(*(PCWCH *)v11, a3, a2, a3, 1u) )
      {
        v15 = (const void *)(*(_QWORD *)v11 + 2 * (a3 + 1));
        v16 = ((__int64)(*(_QWORD *)(v11 + 8) - (_QWORD)v15) >> 1) - 1;
        if ( a4 )
        {
          if ( v16 < a5 )
          {
            v17 = v16;
            *a6 = v16;
            memmove(a4, v15, 2 * v16);
            a4[v17] = 0;
            return v12;
          }
          if ( a5 )
            *a4 = 0;
        }
        v12 = -1073741789;
        *a6 = v16 + 1;
        return v12;
      }
      a2 = v18;
      v11 += 16LL;
    }
    if ( v10 == 3 )
    {
      Environment = (void *)*((_QWORD *)v9 - 1);
    }
    else
    {
      Environment = (void *)qword_180165FE0;
      if ( !qword_180165FE0 )
        Environment = NtCurrentPeb()->ProcessParameters->Environment;
    }
    *a1 = Environment;
  }
  return 3221225728LL;
}
