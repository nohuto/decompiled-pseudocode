/*
 * XREFs of ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18004A990
 * Callers:
 *     ?ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x18004ACB0 (-ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_BITMAPRESOURCE_SOURCE@@@Z.c)
 *     ?CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@PEAPEAVIBitmapLock@@@Z @ 0x1801AAE50 (-CreateScaledLock@CSecondaryD2DBitmap@@IEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness.c)
 * Callees:
 *     ??0CWICBitmapWrapper@@QEAA@XZ @ 0x18004A928 (--0CWICBitmapWrapper@@QEAA@XZ.c)
 *     ?HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z @ 0x18004AA08 (-HrInit@CWICBitmapWrapper@@QEAAJPEAUIWICBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800AC000 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BE550 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall HrCreateBitmapFromWICBitmapSource(struct IWICBitmapSource *a1, struct IBitmapSource **a2)
{
  CWICBitmapWrapper *v4; // rax
  unsigned int v5; // ecx
  CWICBitmapWrapper *v6; // rbx
  int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // edi

  v4 = (CWICBitmapWrapper *)operator new(0xE8uLL);
  if ( v4 )
    v6 = CWICBitmapWrapper::CWICBitmapWrapper(v4);
  else
    v6 = 0LL;
  if ( v6 )
  {
    CMILCOMBase::InternalAddRef(v6);
    v7 = CWICBitmapWrapper::HrInit(v6, a1);
    v9 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x1Au, 0LL);
      CGdiSpriteBitmap::Release(v6);
    }
    else
    {
      *a2 = (CWICBitmapWrapper *)((char *)v6 + 16);
    }
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x17u, 0LL);
  }
  return v9;
}
