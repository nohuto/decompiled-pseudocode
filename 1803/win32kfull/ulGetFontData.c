/*
 * XREFs of ulGetFontData @ 0x1C008034C
 * Callers:
 *     NtGdiGetFontData @ 0x1C0080250 (NtGdiGetFontData.c)
 * Callees:
 *     ?ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z @ 0x1C00803D0 (-ulGetFontData2@@YAKAEAVDCOBJ@@KKPEAXK@Z.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall ulGetFontData(HDC a1, unsigned int a2, unsigned int a3, void *a4, unsigned int a5)
{
  unsigned int FontData2; // ebx
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  int v11; // [rsp+38h] [rbp-10h]
  int v12; // [rsp+3Ch] [rbp-Ch]

  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v10, a1);
  if ( v10 )
  {
    FontData2 = ulGetFontData2((struct DCOBJ *)&v10, a2, a3, a4, a5);
  }
  else
  {
    EngSetLastError(6u);
    FontData2 = -1;
  }
  if ( v10 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v10);
  return FontData2;
}
