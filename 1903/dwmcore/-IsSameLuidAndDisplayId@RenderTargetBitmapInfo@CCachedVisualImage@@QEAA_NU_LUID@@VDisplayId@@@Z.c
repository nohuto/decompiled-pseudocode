/*
 * XREFs of ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x180042774
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18002D874 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayId@@@Z @ 0x180042B6C (-FindExistingRenderTarget@CCachedVisualImage@@AEAAPEAURenderTargetBitmapInfo@1@U_LUID@@VDisplayI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ @ 0x180042368 (-InternalRelease@-$ComPtr@$$CBVCDisplaySet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z @ 0x1800425B4 (-GetDeviceInfo@CRenderTargetBitmap@@QEBAJPEAU_LUID@@PEAVDisplayId@@@Z.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180042CD8 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?GetDisplayColorSpace@CDisplaySet@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z @ 0x180042D20 (-GetDisplayColorSpace@CDisplaySet@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x1800A8990 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
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
    else if ( v11 == (_DWORD)DisplayId::None )
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
