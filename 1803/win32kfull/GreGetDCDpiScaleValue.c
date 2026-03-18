/*
 * XREFs of GreGetDCDpiScaleValue @ 0x1C000C580
 * Callers:
 *     NtUserBitBltSysBmp @ 0x1C000D180 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x1C000D26C (BitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C000D504 (PrepareHDCBITSBitmap.c)
 *     NtGdiCreateDIBSection @ 0x1C0016580 (NtGdiCreateDIBSection.c)
 *     GreCreateDIBitmapReal @ 0x1C0016AA0 (GreCreateDIBitmapReal.c)
 *     NtGdiGetDCDpiScaleValue @ 0x1C01363A0 (NtGdiGetDCDpiScaleValue.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1C008B67C (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetDCDpiScaleValue(HDC a1)
{
  unsigned int CachedDpiScaleValue; // ebx
  DC *v3[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v3, a1);
  if ( v3[0] )
    CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v3[0]);
  else
    CachedDpiScaleValue = 1;
  if ( v3[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v3);
  return CachedDpiScaleValue;
}
