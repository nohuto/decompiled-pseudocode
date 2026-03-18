/*
 * XREFs of ?Create@CSecondaryD2DBitmap@@SAJU_LUID@@IIAEBUPixelFormatInfo@@AEBVCResourceTag@@PEAPEAV1@@Z @ 0x18004E9C4
 * Callers:
 *     ?CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18004E7D8 (-CreateAndCacheBitmap@CD2DBitmapCache@@IEAAJU_LUID@@PEAPEAVCSecondaryD2DBitmap@@@Z.c)
 * Callees:
 *     ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x18004EAA0 (-CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Create(
        struct _LUID a1,
        int a2,
        int a3,
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
  _DWORD v14[12]; // [rsp+60h] [rbp-19h] BYREF
  __int128 v15; // [rsp+90h] [rbp+17h]

  v14[6] = 0;
  v14[7] = 0;
  v6 = *(_OWORD *)a5;
  v7 = *a4;
  v14[9] = 0;
  v14[10] = 0;
  v13.bitmapOptions = D2D1_BITMAP_OPTIONS_NONE;
  v13.colorContext = 0LL;
  v12[0] = v7;
  v14[4] = v7;
  v12[1] = a4[1];
  v14[0] = a2;
  v13.pixelFormat = *(D2D1_PIXEL_FORMAT *)v12;
  v12[0] = a4[2];
  v14[2] = 1;
  v14[3] = 1;
  v14[5] = 1;
  v14[1] = a3;
  v15 = v6;
  v14[8] = 8;
  v13.dpiX = 96.0;
  v13.dpiY = 96.0;
  v8 = CD3DDeviceManager::CreateSecondaryD2DBitmap(
         (CD3DDeviceManager *)&g_D3DDeviceManager,
         a1,
         (struct DWM_TEXTURE2D_DESC *)v14,
         &v13,
         v12,
         a6);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x34u, 0LL);
  return v10;
}
