/*
 * XREFs of ?ProcessUpdate@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP@@@Z @ 0x180049324
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1800492E8 (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800CB858 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdate(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_GDISPRITEBITMAP *a3)
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
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, &dword_1802BE810, 3u, -2003303421, 0x7Bu, 0LL);
  }
  else
  {
    v5 = *((_QWORD *)v4 + 2);
    *((_QWORD *)v4 + 9) = this;
    v6 = CRedirectedGDISurface::Create(
           (HLSURF)this,
           v4,
           (struct CLegacySurfaceManager *)(*(_QWORD *)(v5 + 72) + 104LL),
           (struct CRedirectedGDISurface **)v4 + 10);
    v8 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802BE810, 3u, v6, 0x84u, 0LL);
    }
    else
    {
      *((_BYTE *)v4 + 116) = *((_BYTE *)v4 + 116) & 0xDF | (*((_BYTE *)a3 + 16) != 0 ? 0x20 : 0) | 0x40;
      CGdiSpriteBitmap::EnsureBitmapRealization(v4);
      *((_BYTE *)v4 + 116) &= ~0x40u;
    }
  }
  return v8;
}
