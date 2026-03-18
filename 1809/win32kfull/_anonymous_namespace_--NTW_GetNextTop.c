/*
 * XREFs of _anonymous_namespace_::NTW_GetNextTop @ 0x1C00F603C
 * Callers:
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C0041730 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 * Callees:
 *     _anonymous_namespace_::GNT_NextTopScan @ 0x1C00F6090 (_anonymous_namespace_--GNT_NextTopScan.c)
 */

__int64 __fastcall anonymous_namespace_::NTW_GetNextTop(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // rdx
  __int64 result; // rax

  v2 = a2;
  if ( !a2 )
    return anonymous_namespace_::GNT_NextTopScan(a1, 0LL, 0LL);
  v4 = 0LL;
  while ( 1 )
  {
    result = anonymous_namespace_::GNT_NextTopScan(a1, v4, v2);
    if ( result )
      break;
    v4 = v2;
    if ( !v2 )
      return anonymous_namespace_::GNT_NextTopScan(a1, 0LL, 0LL);
    v2 = *(_QWORD *)(v2 + 96);
  }
  return result;
}
