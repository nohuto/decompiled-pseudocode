/*
 * XREFs of ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x1800D7C58
 * Callers:
 *     ?Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800D59D4 (-Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z.c)
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800D879C (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 * Callees:
 *     ?Release@CDisplaySet@@QEBAKXZ @ 0x1800300E8 (-Release@CDisplaySet@@QEBAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x180098F80 (-IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800D7D64 (-IsOldQualcommOverlayDriver@CDisplay@@QEBA_NXZ.c)
 *     ?IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ @ 0x1800D7D80 (-IsOldIntelOverlayDriver@CDisplay@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::UpdateDisplay(COverlayContext *this, const struct CDisplay *a2)
{
  __int64 v2; // rax
  CDisplayManager *v5; // rcx
  int CurrentDisplaySet; // eax
  CD3DDeviceManager *v7; // rcx
  CDisplaySet *v8; // rbx
  unsigned int v9; // esi
  CDisplaySet *v11; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)a2 + 19);
  v11 = 0LL;
  *((_QWORD *)this + 11) = *(_QWORD *)(v2 + 16);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 62);
  *((_DWORD *)this + 3352) = *((_DWORD *)a2 + 65);
  *((_BYTE *)this + 13412) = 0;
  *((_BYTE *)this + 13427) = *((_BYTE *)a2 + 310);
  *((_BYTE *)this + 13428) = *((_DWORD *)a2 + 79) != 0;
  *((_BYTE *)this + 13414) = CDisplay::IsOldIntelOverlayDriver(a2);
  *((_BYTE *)this + 13415) = CDisplay::IsOldQualcommOverlayDriver(a2);
  **((_DWORD **)this + 1662) = 0;
  *((_DWORD *)this + 3348) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 13368, 0x10u);
  CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(v5, &v11);
  v8 = v11;
  v9 = CurrentDisplaySet;
  if ( CurrentDisplaySet < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v7, 0LL, 0, CurrentDisplaySet, 0x6Fu);
  }
  else
  {
    LOBYTE(v7) = *((_DWORD *)v11 + 18) == 1;
    *((_BYTE *)this + 13430) = (_BYTE)v7;
    if ( CD3DDeviceManager::IsXboxAdapterLuid(v7, *(struct _LUID *)((char *)a2 + 240)) )
      COverlayContext::s_bXbox = 1;
  }
  if ( v8 )
    CDisplaySet::Release(v8);
  return v9;
}
