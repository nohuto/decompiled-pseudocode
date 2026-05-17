/*
 * XREFs of RtlDowncaseUnicodeString @ 0x180078210
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall RtlDowncaseUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  unsigned __int16 v5; // ax
  unsigned int v6; // ebx
  __int64 v7; // r11
  unsigned __int16 v8; // r8
  __int64 StringRoutine; // rax

  v5 = *a2;
  v6 = 0;
  if ( a3 )
  {
    *(_WORD *)(a1 + 2) = v5;
    StringRoutine = NtdllpAllocateStringRoutine(v5);
    *(_QWORD *)(a1 + 8) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
    v5 = *a2;
  }
  else if ( v5 > *(_WORD *)(a1 + 2) )
  {
    return 2147483653LL;
  }
  v7 = Nls844UnicodeLowercaseTable;
  while ( v6 < v5 >> 1 )
  {
    v8 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v6);
    if ( v8 >= 0x41u )
    {
      if ( v8 <= 0x5Au )
        v8 += 32;
      else
        v8 += *(_WORD *)(v7
                       + 2LL
                       * ((v8 & 0xF)
                        + (unsigned int)*(unsigned __int16 *)(v7
                                                            + 2LL
                                                            * (((v8 >> 4) & 0xF)
                                                             + (unsigned int)*(unsigned __int16 *)(v7
                                                                                                 + 2
                                                                                                 * ((unsigned __int64)v8 >> 8))))));
    }
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * v6++) = v8;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
