/*
 * XREFs of sub_18009658C @ 0x18009658C
 * Callers:
 *     sub_180096644 @ 0x180096644 (sub_180096644.c)
 * Callees:
 *     RtlUnicodeToMultiByteN @ 0x180062440 (RtlUnicodeToMultiByteN.c)
 *     _errno @ 0x180084320 (_errno.c)
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
 */

__int64 __fastcall sub_18009658C(_DWORD *a1, _BYTE *a2, unsigned __int64 a3, __int16 a4)
{
  unsigned int v6; // [rsp+48h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+20h] BYREF

  LOWORD(v7) = a4;
  if ( a2 || !a3 )
  {
    if ( a1 )
      *a1 = -1;
    if ( a3 > 0x7FFFFFFF )
    {
      sub_18008C6D8();
      return 22LL;
    }
    if ( a2 )
    {
      if ( (int)RtlUnicodeToMultiByteN(a2, a3, &v6, &v7, 2u) < 0 )
      {
        *errno() = 42;
        return (unsigned int)*errno();
      }
      if ( a1 )
        *a1 = v6;
    }
    else if ( a1 )
    {
      *a1 = dword_18015FF34;
    }
  }
  else if ( a1 )
  {
    *a1 = 0;
  }
  return 0LL;
}
