/*
 * XREFs of ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1800492E8
 * Callers:
 *     ?ProcessUpdate@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP@@@Z @ 0x180049324 (-ProcessUpdate@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP@@@Z.c)
 *     ?NeedsTiling@CGdiSpriteBitmap@@UEAA_NAEBUtagSIZE@@@Z @ 0x1800C3E90 (-NeedsTiling@CGdiSpriteBitmap@@UEAA_NAEBUtagSIZE@@@Z.c)
 * Callees:
 *     ?CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z @ 0x180048CA0 (-CreateBitmap@CGdiSpriteBitmap@@AEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

bool __fastcall CGdiSpriteBitmap::EnsureBitmapRealization(CGdiSpriteBitmap *this)
{
  int Bitmap; // eax
  unsigned int v3; // ecx

  if ( !*((_QWORD *)this + 57) )
  {
    Bitmap = CGdiSpriteBitmap::CreateBitmap(this, (enum DXGI_FORMAT)*((_DWORD *)this + 22));
    if ( Bitmap < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, Bitmap, 0x145u, 0LL);
  }
  return *((_QWORD *)this + 57) != 0LL;
}
