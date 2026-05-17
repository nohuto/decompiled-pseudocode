/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x1800EBFA0
 * Callers:
 *     RtlIsNameLegalDOS8Dot3 @ 0x1800F8B50 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x18006A6C0 (RtlxUnicodeStringToOemSize.c)
 *     RtlpDidUnicodeToOemWork @ 0x18006AB9C (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18006AC30 (RtlUpcaseUnicodeToOemN.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToCountedOemString(unsigned __int16 *a1, PWCH *a2, char a3)
{
  __int64 result; // rax
  __int64 StringRoutine; // rax
  int v8; // esi
  char v9; // [rsp+88h] [rbp+20h] BYREF

  result = (unsigned int)RtlxUnicodeStringToOemSize(a2) - 1;
  if ( !(_DWORD)result )
  {
    *(_DWORD *)a1 = 0;
    *((_QWORD *)a1 + 1) = 0LL;
    return result;
  }
  if ( (unsigned int)result > 0xFFFF )
    return 3221225712LL;
  *a1 = result;
  if ( a3 )
  {
    a1[1] = result;
    StringRoutine = NtdllpAllocateStringRoutine((unsigned int)result);
    *((_QWORD *)a1 + 1) = StringRoutine;
    if ( !StringRoutine )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)result > a1[1] )
  {
    return 2147483653LL;
  }
  v8 = RtlUpcaseUnicodeToOemN(*((_QWORD *)a1 + 1), *a1, (int)&v9, (int)a2[1], *(unsigned __int16 *)a2);
  if ( v8 >= 0 && !RtlpDidUnicodeToOemWork(a1, (__int64)a2) )
    v8 = -1073741470;
  if ( v8 >= 0 )
    v8 = 0;
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
