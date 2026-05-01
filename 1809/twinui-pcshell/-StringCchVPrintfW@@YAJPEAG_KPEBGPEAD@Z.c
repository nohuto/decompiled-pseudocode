/*
 * XREFs of ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x18003B790
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18003B6C0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x18006BE84 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1800E6760 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x18008516C (_vsnwprintf.c)
 */

__int64 __fastcall StringCchVPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, va_list a4)
{
  unsigned int v4; // ebx
  int v6; // r10d
  unsigned __int64 v7; // rdi
  int v8; // eax
  __int64 result; // rax

  v4 = 0;
  v6 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v6 = -2147024809;
  if ( v6 < 0 )
  {
    result = (unsigned int)v6;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v7 = a2 - 1;
    v8 = vsnwprintf(a1, a2 - 1, a3, a4);
    if ( v8 < 0 || v8 > v7 )
    {
      a1[v7] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v8 == v7 )
    {
      a1[v7] = 0;
    }
    return v4;
  }
  return result;
}
