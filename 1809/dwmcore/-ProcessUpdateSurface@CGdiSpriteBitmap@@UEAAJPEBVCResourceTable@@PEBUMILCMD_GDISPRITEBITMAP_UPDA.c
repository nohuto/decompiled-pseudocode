/*
 * XREFs of ?ProcessUpdateSurface@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP_UPDATESURFACE@@@Z @ 0x1800769A0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180092F84 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdateSurface(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP_UPDATESURFACE *a3)
{
  enum DXGI_FORMAT v3; // edx
  unsigned int v4; // ebx
  int Bitmap; // eax
  unsigned int v7; // ecx

  if ( *((_QWORD *)this + 9) )
  {
    v3 = *((_DWORD *)a3 + 2);
    v4 = 0;
    if ( v3 != *((_DWORD *)this + 22) )
    {
      Bitmap = CGdiSpriteBitmap::CreateBitmap(this, v3);
      v4 = Bitmap;
      if ( Bitmap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Bitmap, 0x9Au);
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0x95u);
  }
  return v4;
}
