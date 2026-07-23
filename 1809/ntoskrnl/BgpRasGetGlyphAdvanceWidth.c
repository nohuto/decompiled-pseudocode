/*
 * XREFs of BgpRasGetGlyphAdvanceWidth @ 0x140329094
 * Callers:
 *     BgpFoGetAdvanceWidth @ 0x140327BB4 (BgpFoGetAdvanceWidth.c)
 *     BgpFoGetStringAdvanceWidth @ 0x140327BD4 (BgpFoGetStringAdvanceWidth.c)
 *     BcpDisplayCriticalString @ 0x140327F44 (BcpDisplayCriticalString.c)
 * Callees:
 *     RaspGetXExtent @ 0x14017A874 (RaspGetXExtent.c)
 */

__int64 __fastcall BgpRasGetGlyphAdvanceWidth(__int64 a1, unsigned __int16 a2, _DWORD *a3, __int64 a4, __int64 *a5)
{
  __int64 *v5; // rbx
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-38h]
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF

  v5 = a5;
  if ( !a5 )
  {
    v5 = (__int64 *)v8;
    memset(v8, 0, 24);
  }
  result = RaspGetXExtent(a2, a1, a3, a4, v7, v5);
  v5[2] = 0LL;
  return result;
}
