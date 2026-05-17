/*
 * XREFs of RtlDowncaseUnicodeString @ 0x180070C80
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18006D908 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 *     NLS_DOWNCASE @ 0x180070D24 (NLS_DOWNCASE.c)
 */

__int64 __fastcall RtlDowncaseUnicodeString(__int64 a1, unsigned __int16 *a2, char a3)
{
  unsigned int v5; // ebx
  unsigned __int16 v6; // ax
  unsigned int v7; // r10d
  __int16 v8; // ax
  __int64 v9; // r9
  unsigned int v11; // eax
  __int64 StringRoutine; // rax

  v5 = 0;
  if ( a3 )
  {
    v11 = *a2;
    *(_WORD *)(a1 + 2) = v11;
    StringRoutine = NtdllpAllocateStringRoutine(v11);
    *(_QWORD *)(a1 + 8) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
    v6 = *a2;
  }
  else
  {
    v6 = *a2;
    if ( *a2 > *(_WORD *)(a1 + 2) )
      return 2147483653LL;
  }
  v7 = v6 >> 1;
  while ( v5 < v7 )
  {
    v8 = NLS_DOWNCASE(*(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v5));
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2 * v9) = v8;
    ++v5;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
