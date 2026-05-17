/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x1800E8C30
 * Callers:
 *     RtlIsNameLegalDOS8Dot3 @ 0x1800F6770 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     sub_180061DC4 @ 0x180061DC4 (sub_180061DC4.c)
 *     RtlUpcaseUnicodeToOemN @ 0x180062010 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x1800621F0 (RtlxUnicodeStringToOemSize.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 */

__int64 __fastcall RtlUpcaseUnicodeStringToCountedOemString(unsigned __int16 *a1, PWCH *a2, char a3)
{
  __int64 result; // rax
  __int64 v7; // rax
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
    v7 = sub_18006D6B8((unsigned int)result);
    *((_QWORD *)a1 + 1) = v7;
    if ( !v7 )
      return 3221225495LL;
  }
  else if ( (unsigned __int16)result > a1[1] )
  {
    return 2147483653LL;
  }
  v8 = RtlUpcaseUnicodeToOemN(*((_QWORD *)a1 + 1), *a1, (__int64)&v9);
  if ( v8 >= 0 && !sub_180061DC4((__int64)a1, (__int64)a2) )
    v8 = -1073741470;
  if ( v8 >= 0 )
    v8 = 0;
  if ( v8 < 0 )
  {
    if ( a3 )
    {
      RtlDeleteBoundaryDescriptor(*((_QWORD *)a1 + 1));
      *((_QWORD *)a1 + 1) = 0LL;
    }
  }
  return (unsigned int)v8;
}
