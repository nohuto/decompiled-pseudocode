/*
 * XREFs of ?EnsureBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ @ 0x180092F48
 * Callers:
 *     ?NeedsTiling@CGdiSpriteBitmap@@UEAA_NAEBUtagSIZE@@@Z @ 0x1800674D0 (-NeedsTiling@CGdiSpriteBitmap@@UEAA_NAEBUtagSIZE@@@Z.c)
 *     ?ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z @ 0x180092EC0 (-ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z.c)
 * Callees:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180092F84 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

bool __fastcall CGdiSpriteBitmap::EnsureBitmapRealization(CGdiSpriteBitmap *this)
{
  int Bitmap; // eax
  unsigned int v3; // ecx

  if ( !*((_QWORD *)this + 57) )
  {
    Bitmap = CGdiSpriteBitmap::CreateBitmap(this, (enum DXGI_FORMAT)*((_DWORD *)this + 22));
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, Bitmap, 0x13Fu);
  }
  return *((_QWORD *)this + 57) != 0LL;
}
