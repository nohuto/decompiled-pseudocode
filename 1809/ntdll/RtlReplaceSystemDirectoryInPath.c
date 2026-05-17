/*
 * XREFs of RtlReplaceSystemDirectoryInPath @ 0x1800EBCB0
 * Callers:
 *     LdrpGetModuleName @ 0x18006A6E8 (LdrpGetModuleName.c)
 * Callees:
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     RtlFindUnicodeSubstring @ 0x1800EBB40 (RtlFindUnicodeSubstring.c)
 *     RtlpWow64SelectSystem32PathInternal @ 0x1800EC0CC (RtlpWow64SelectSystem32PathInternal.c)
 */

__int64 __fastcall RtlReplaceSystemDirectoryInPath(unsigned __int16 *a1, __int64 a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // di
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  unsigned __int16 v10; // di
  char *UnicodeSubstring; // rax
  __int16 v12[8]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int16 v13; // [rsp+30h] [rbp-18h] BYREF
  void *Src; // [rsp+38h] [rbp-10h]

  v5 = a2;
  if ( (_WORD)a2 == a3 )
    return 0LL;
  LOBYTE(a2) = a4;
  result = RtlpWow64SelectSystem32PathInternal(a3, a2, &v13);
  v9 = 0;
  if ( (int)result >= 0 )
  {
    LOBYTE(v8) = a4;
    result = RtlpWow64SelectSystem32PathInternal(v5, v8, v12);
    if ( (int)result >= 0 )
    {
      v10 = v13;
      if ( v12[0] == v13 )
      {
        UnicodeSubstring = RtlFindUnicodeSubstring(a1, v12, 1);
        if ( UnicodeSubstring )
          memmove(UnicodeSubstring, Src, v10);
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
