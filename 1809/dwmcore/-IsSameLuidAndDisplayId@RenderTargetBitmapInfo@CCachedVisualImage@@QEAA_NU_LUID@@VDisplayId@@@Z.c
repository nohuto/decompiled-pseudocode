/*
 * XREFs of ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x18008C44C
 * Callers:
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x18008C2E0 (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008FCAC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180067FD4 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?InternalRelease@?$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ @ 0x180072170 (-InternalRelease@-$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18008C59C (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetDisplayColorSpace@CDisplaySet@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x18008C620 (-GetDisplayColorSpace@CDisplaySet@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x18008C810 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 */

char __fastcall CCachedVisualImage::RenderTargetBitmapInfo::IsSameLuidAndDisplayId(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  CRenderTargetBitmap *v3; // rcx
  int v5; // edi
  bool v6; // si
  CDisplayManager *v7; // rcx
  enum DXGI_COLOR_SPACE_TYPE DisplayColorSpace; // eax
  struct _LUID v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+58h] [rbp+10h]
  struct CDisplaySet *v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = a2;
  v3 = *(CRenderTargetBitmap **)(a1 + 8);
  v11 = 0;
  v5 = a2;
  v6 = 0;
  if ( (int)CRenderTargetBitmap::GetDeviceInfo(v3, &v10, (struct DisplayId *)&v11) >= 0
    && v5 == v10.LowPart
    && HIDWORD(v12) == v10.HighPart )
  {
    if ( a3 == v11 )
    {
      return 1;
    }
    else if ( v11 == DisplayId::None )
    {
      v13 = 0LL;
      v6 = 1;
      Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v13);
      if ( (int)CDisplayManager::GetCurrentDisplaySet(v7, &v13) >= 0 )
      {
        DisplayColorSpace = (unsigned int)CDisplaySet::GetDisplayColorSpace(v13, a3);
        v6 = !IsDXGIColorSpaceHDR(DisplayColorSpace);
      }
      Microsoft::WRL::ComPtr<CDisplaySet const>::InternalRelease(&v13);
    }
  }
  return v6;
}
