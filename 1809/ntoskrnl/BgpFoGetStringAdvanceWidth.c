/*
 * XREFs of BgpFoGetStringAdvanceWidth @ 0x140327BD4
 * Callers:
 *     BcpDisplayCriticalString @ 0x140327F44 (BcpDisplayCriticalString.c)
 * Callees:
 *     BgpRasGetGlyphAdvanceWidth @ 0x140329094 (BgpRasGetGlyphAdvanceWidth.c)
 */

__int64 BgpFoGetStringAdvanceWidth(int a1, __int16 *a2, _DWORD *a3, ...)
{
  __int16 v3; // ax
  int GlyphAdvanceWidth; // r9d
  unsigned __int16 v8; // bx
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF
  va_list va; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v10 = va_arg(va1, _QWORD);
  v3 = *a2;
  *a3 = 0;
  GlyphAdvanceWidth = 0;
  v8 = 0;
  if ( (v3 & 0xFFFE) != 0 )
  {
    do
    {
      GlyphAdvanceWidth = BgpRasGetGlyphAdvanceWidth(
                            a1,
                            *(unsigned __int16 *)(*((_QWORD *)a2 + 1) + 2LL * v8),
                            (unsigned int)va,
                            GlyphAdvanceWidth,
                            (__int64)&BcpWorkspace);
      if ( GlyphAdvanceWidth < 0 )
        break;
      ++v8;
      *a3 += v10;
    }
    while ( v8 < (unsigned __int16)((unsigned __int16)*a2 >> 1) );
  }
  return (unsigned int)GlyphAdvanceWidth;
}
