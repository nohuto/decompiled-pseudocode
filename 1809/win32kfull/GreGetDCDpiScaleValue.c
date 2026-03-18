/*
 * XREFs of GreGetDCDpiScaleValue @ 0x1C0106A90
 * Callers:
 *     NtGdiCreateDIBSection @ 0x1C004D2C0 (NtGdiCreateDIBSection.c)
 *     GreCreateDIBitmapReal @ 0x1C004F05C (GreCreateDIBitmapReal.c)
 *     NtUserBitBltSysBmp @ 0x1C01065C0 (NtUserBitBltSysBmp.c)
 *     BitBltSysBmp @ 0x1C01066B8 (BitBltSysBmp.c)
 *     PrepareHDCBITSBitmap @ 0x1C0106948 (PrepareHDCBITSBitmap.c)
 *     NtGdiGetDCDpiScaleValue @ 0x1C0157750 (NtGdiGetDCDpiScaleValue.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GetCachedDpiScaleValue@DC@@QEBAJXZ @ 0x1C0106AE0 (-GetCachedDpiScaleValue@DC@@QEBAJXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetDCDpiScaleValue(HDC a1)
{
  unsigned int CachedDpiScaleValue; // ebx
  DC *v3[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+30h] [rbp-28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v3, a1);
  if ( v3[0] )
    CachedDpiScaleValue = DC::GetCachedDpiScaleValue(v3[0]);
  else
    CachedDpiScaleValue = 1;
  MDCOBJ::~MDCOBJ((MDCOBJ *)v3);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v4);
  return CachedDpiScaleValue;
}
