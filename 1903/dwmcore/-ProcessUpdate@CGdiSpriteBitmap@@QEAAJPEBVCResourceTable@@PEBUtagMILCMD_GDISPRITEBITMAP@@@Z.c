/*
 * XREFs of ?ProcessUpdate@CGdiSpriteBitmap@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_GDISPRITEBITMAP@@@Z @ 0x1800D00AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@@PEAPEAV1@@Z @ 0x1800CBE48 (-Create@CRedirectedGDISurface@@SAHPEAUHLSURF__@@PEAVCGdiSpriteBitmap@@PEAVCLegacySurfaceManager@.c)
 *     ?EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ @ 0x1800D013C (-EnsureBitmapRealization@CGdiSpriteBitmap@@AEAA_NXZ.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessUpdate(
        CGdiSpriteBitmap *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_GDISPRITEBITMAP *a3)
{
  CGdiSpriteBitmap *v4; // rbx
  __int64 v5; // rax
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi

  v4 = this;
  if ( *((_QWORD *)this + 9) || (this = (CGdiSpriteBitmap *)*((_QWORD *)a3 + 1)) == 0LL )
  {
    v8 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &dword_1802C06D0, 3u, 0x88980403, 0x7Bu, 0LL);
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
      MilInstrumentationCheckHR_MaybeFailFast(v7, &dword_1802C06D0, 3u, v6, 0x84u, 0LL);
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
