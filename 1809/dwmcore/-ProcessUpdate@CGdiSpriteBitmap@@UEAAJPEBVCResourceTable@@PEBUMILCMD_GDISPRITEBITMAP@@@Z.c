/*
 * XREFs of ?ProcessUpdate@CGdiSpriteBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_GDISPRITEBITMAP@@@Z @ 0x180092EC0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x18006FA88 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ @ 0x180092F48 (-EnsureBitmapRealization@CGdiSpriteBitmap@@IEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdate(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_GDISPRITEBITMAP *a3)
{
  CGdiSpriteBitmap *v4; // rbx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi

  v4 = this;
  if ( *((_QWORD *)this + 9) || (this = (CGdiSpriteBitmap *)*((_QWORD *)a3 + 1)) == 0LL )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_180292838, 3u, -2003303421, 0x78u);
  }
  else
  {
    v5 = *((_QWORD *)v4 + 2);
    *((_QWORD *)v4 + 9) = this;
    v6 = CRedirectedGDISurface::Create(
           (HLSURF)this,
           v4,
           (struct CLegacySurfaceManager *)(*(_QWORD *)(v5 + 72) + 96LL),
           (struct CRedirectedGDISurface **)v4 + 10);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_180292838, 3u, v6, 0x81u);
    }
    else
    {
      *((_BYTE *)v4 + 116) = *((_BYTE *)v4 + 116) & 0xDF | (*((_DWORD *)a3 + 4) != 0 ? 0x20 : 0);
      CGdiSpriteBitmap::EnsureBitmapRealization(v4);
    }
  }
  return v8;
}
