/*
 * XREFs of ?Create@CSecondaryD2DBitmap@@SAJU_LUID@@IIAEBUPixelFormatInfo@@AEBVCResourceTag@@PEAPEAV1@@Z @ 0x180097210
 * Callers:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800953F8 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 * Callees:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18009576C (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Create(
        struct _LUID a1,
        UINT a2,
        UINT a3,
        enum DXGI_COLOR_SPACE_TYPE *a4,
        const struct CResourceTag *a5,
        struct CSecondaryD2DBitmap **a6)
{
  __int128 v6; // xmm0
  enum DXGI_COLOR_SPACE_TYPE v7; // eax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // ebx
  enum DXGI_COLOR_SPACE_TYPE v12[2]; // [rsp+30h] [rbp-49h] BYREF
  struct D2D1_BITMAP_PROPERTIES1 v13; // [rsp+38h] [rbp-41h] BYREF
  struct D3D11_TEXTURE2D_DESC v14; // [rsp+60h] [rbp-19h] BYREF
  __int128 v15; // [rsp+90h] [rbp+17h]

  v14.SampleDesc.Quality = 0;
  v14.Usage = D3D11_USAGE_DEFAULT;
  v6 = *(_OWORD *)a5;
  v7 = *a4;
  v14.CPUAccessFlags = 0;
  v14.MiscFlags = 0;
  v13.bitmapOptions = D2D1_BITMAP_OPTIONS_NONE;
  v13.colorContext = 0LL;
  v12[0] = v7;
  v14.Format = v7;
  v12[1] = a4[1];
  v14.Width = a2;
  v13.pixelFormat = *(D2D1_PIXEL_FORMAT *)v12;
  v12[0] = a4[2];
  v14.MipLevels = 1;
  v14.ArraySize = 1;
  v14.SampleDesc.Count = 1;
  v14.Height = a3;
  v15 = v6;
  v14.BindFlags = 8;
  v13.dpiX = 96.0;
  v13.dpiY = 96.0;
  v8 = CD3DDeviceManager::CreateSecondaryD2DBitmap((CD3DDeviceManager *)&g_D3DDeviceManager, a1, &v14, &v13, v12, a6);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x37u);
  return v10;
}
