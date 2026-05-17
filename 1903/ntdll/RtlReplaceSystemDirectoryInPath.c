/*
 * XREFs of RtlReplaceSystemDirectoryInPath @ 0x180085FA0
 * Callers:
 *     sub_180062218 @ 0x180062218 (sub_180062218.c)
 * Callees:
 *     sub_18008604C @ 0x18008604C (sub_18008604C.c)
 *     RtlFindUnicodeSubstring @ 0x1800860B0 (RtlFindUnicodeSubstring.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall RtlReplaceSystemDirectoryInPath(__int64 a1, __int64 a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // di
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  __int64 v10; // r8
  unsigned __int16 v11; // di
  void *UnicodeSubstring; // rax
  _WORD v13[8]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int16 v14; // [rsp+30h] [rbp-18h] BYREF
  void *Src; // [rsp+38h] [rbp-10h]

  v5 = a2;
  if ( (_WORD)a2 == a3 )
    return 0LL;
  LOBYTE(a2) = a4;
  result = sub_18008604C(a3, a2, &v14);
  v9 = 0;
  if ( (int)result >= 0 )
  {
    LOBYTE(v8) = a4;
    result = sub_18008604C(v5, v8, v13);
    if ( (int)result >= 0 )
    {
      v11 = v14;
      if ( v13[0] == v14 )
      {
        LOBYTE(v10) = 1;
        UnicodeSubstring = (void *)RtlFindUnicodeSubstring(a1, v13, v10);
        if ( UnicodeSubstring )
          memmove(UnicodeSubstring, Src, v11);
      }
      else
      {
        return (unsigned int)-1073741811;
      }
      return v9;
    }
  }
  return result;
}
