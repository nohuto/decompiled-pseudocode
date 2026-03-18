/*
 * XREFs of ?UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z @ 0x18002BA4C
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800285B8 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 *     ?Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800DEA88 (-Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ @ 0x18002BB4C (-IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ.c)
 *     ?IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ @ 0x18002BB68 (-IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ.c)
 *     ?IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ @ 0x180053C6C (-IsXboxAdapter@CDXGIAdapterLimited@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BB688 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

void __fastcall COverlayContext::UpdateDisplay(COverlayContext *this, const struct CDisplay *a2)
{
  bool IsOldIntelOverlayDriver; // al
  __int64 v4; // r9
  bool IsOldQualcommOverlayDriver; // al
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r10
  bool IsXboxAdapter; // al
  char v11; // cl

  *((_QWORD *)this + 11) = *(_QWORD *)(*((_QWORD *)a2 + 19) + 16LL);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 60);
  *((_DWORD *)this + 3356) = *((_DWORD *)a2 + 63);
  *((_BYTE *)this + 13428) = 0;
  *((_BYTE *)this + 13443) = *((_BYTE *)a2 + 302);
  *((_BYTE *)this + 13444) = *((_DWORD *)a2 + 77) != 0;
  IsOldIntelOverlayDriver = CDisplay::IsOldIntelOverlayDriver(a2);
  *(_BYTE *)(v4 + 13430) = IsOldIntelOverlayDriver;
  IsOldQualcommOverlayDriver = CDisplay::IsOldQualcommOverlayDriver(a2);
  *(_BYTE *)(v6 + 13431) = IsOldQualcommOverlayDriver;
  **(_DWORD **)(v6 + 13312) = 0;
  *(_DWORD *)(v6 + 13408) = 0;
  DynArrayImpl<0>::ShrinkToSize(v6 + 13384, 16LL);
  if ( qword_180339CF8 )
  {
    v7 = *((_QWORD *)a2 + 29);
    v8 = 0LL;
    if ( *((_DWORD *)qword_180339CF8 + 22) )
    {
      v9 = *((_QWORD *)qword_180339CF8 + 8);
      while ( v7 != *(_QWORD *)(*(_QWORD *)(v9 + 8 * v8) + 336LL) )
      {
        v8 = (unsigned int)(v8 + 1);
        if ( (unsigned int)v8 >= *((_DWORD *)qword_180339CF8 + 22) )
          return;
      }
      IsXboxAdapter = CDXGIAdapterLimited::IsXboxAdapter(*(CDXGIAdapterLimited **)(v9 + 8 * v8));
      v11 = COverlayContext::s_bXbox;
      if ( IsXboxAdapter )
        v11 = 1;
      COverlayContext::s_bXbox = v11;
    }
  }
}
