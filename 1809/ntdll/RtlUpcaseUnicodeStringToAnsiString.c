/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x1800EBE90
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x18006A6C0 (RtlxUnicodeStringToOemSize.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x18006AC90 (RtlUpcaseUnicodeToMultiByteN.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToAnsiString(unsigned __int16 *a1, PWCH *a2, char a3)
{
  unsigned int v6; // eax
  __int64 StringRoutine; // rax
  int v9; // edi
  unsigned int v10; // [rsp+78h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(a2);
  if ( v6 > 0xFFFF )
    return 3221225712LL;
  *a1 = v6 - 1;
  if ( a3 )
  {
    a1[1] = v6;
    StringRoutine = NtdllpAllocateStringRoutine(v6);
    *((_QWORD *)a1 + 1) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)(v6 - 1) >= a1[1] )
  {
    return 2147483653LL;
  }
  v9 = RtlUpcaseUnicodeToMultiByteN(*((_QWORD *)a1 + 1), *a1, (int)&v10, (int)a2[1], *(unsigned __int16 *)a2);
  if ( v9 >= 0 )
  {
    *(_BYTE *)(v10 + *((_QWORD *)a1 + 1)) = 0;
    v9 = 0;
  }
  if ( v9 < 0 )
  {
    if ( a3 )
    {
      NtdllpFreeStringRoutine(*((_QWORD *)a1 + 1));
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v9;
}
