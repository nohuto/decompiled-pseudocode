/*
 * XREFs of GreGetDCDpiScaleValue @ 0x1C000BD58
 * Callers:
 *     BitBltSysBmp @ 0x1C000B87C (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C000B9D0 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C000BBD8 (PrepareHDCBITSBitmap.c)
 *     NtGdiCreateDIBSection @ 0x1C0030550 (NtGdiCreateDIBSection.c)
 *     GreCreateDIBitmapReal @ 0x1C0030AC0 (GreCreateDIBitmapReal.c)
 *     NtGdiGetDCDpiScaleValue @ 0x1C015DE70 (NtGdiGetDCDpiScaleValue.c)
 * Callees:
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1C000BDA8 (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 */

__int64 __fastcall GreGetDCDpiScaleValue(HDC a1)
{
  DC *v1; // rax
  unsigned int CachedDpiScaleValue; // ebx
  DC *v4[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v4, a1);
  v1 = v4[0];
  if ( v4[0] )
  {
    CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v4[0]);
    v1 = v4[0];
  }
  else
  {
    CachedDpiScaleValue = 1;
  }
  if ( v1 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v4);
  return CachedDpiScaleValue;
}
