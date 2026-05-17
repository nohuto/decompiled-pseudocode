/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x180061BD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDidUnicodeToOemWork @ 0x180061E64 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1800620B0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x180062290 (RtlxUnicodeStringToOemSize.c)
 *     NtdllpAllocateStringRoutine @ 0x18006D908 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToOemString(unsigned __int16 *a1, unsigned __int16 *a2, char a3)
{
  unsigned int v6; // eax
  __int64 v7; // rdx
  int v8; // edi
  __int64 StringRoutine; // rax
  unsigned int v11; // [rsp+78h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(a2);
  if ( v6 > 0xFFFF )
    return 3221225712LL;
  *a1 = v6 - 1;
  if ( a3 )
  {
    a1[1] = v6;
    StringRoutine = NtdllpAllocateStringRoutine(v6, v7);
    *((_QWORD *)a1 + 1) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)(v6 - 1) >= a1[1] )
  {
    return 2147483653LL;
  }
  v8 = RtlUpcaseUnicodeToOemN(*((_QWORD *)a1 + 1), *a1, (unsigned int)&v11, *((_QWORD *)a2 + 1), *a2);
  if ( v8 >= 0 && !(unsigned __int8)RtlpDidUnicodeToOemWork(a1, a2) )
    v8 = -1073741470;
  if ( v8 >= 0 )
  {
    *(_BYTE *)(v11 + *((_QWORD *)a1 + 1)) = 0;
    v8 = 0;
  }
  if ( v8 < 0 )
  {
    if ( a3 )
    {
      NtdllpFreeStringRoutine(*((_QWORD *)a1 + 1));
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v8;
}
