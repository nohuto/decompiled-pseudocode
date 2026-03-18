/*
 * XREFs of GreGetDCDpiScaleValue @ 0x1C00EAEB8
 * Callers:
 *     NtGdiCreateDIBSection @ 0x1C0025B10 (NtGdiCreateDIBSection.c)
 *     GreCreateDIBitmapReal @ 0x1C0026080 (GreCreateDIBitmapReal.c)
 *     BitBltSysBmp @ 0x1C00EA9DC (BitBltSysBmp.c)
 *     NtUserBitBltSysBmp @ 0x1C00EAB30 (NtUserBitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C00EAD38 (PrepareHDCBITSBitmap.c)
 *     NtGdiGetDCDpiScaleValue @ 0x1C015EE20 (NtGdiGetDCDpiScaleValue.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1C00EAF08 (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
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
