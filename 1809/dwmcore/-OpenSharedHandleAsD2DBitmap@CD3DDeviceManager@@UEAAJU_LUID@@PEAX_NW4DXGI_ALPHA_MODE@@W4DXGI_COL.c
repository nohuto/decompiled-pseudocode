/*
 * XREFs of ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x180098CE0
 * Callers:
 *     ?CreateFromSharedHandle@CD2DBitmap@@SAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x180098C50 (-CreateFromSharedHandle@CD2DBitmap@@SAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18002FEF4 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@_NPEAPEAVCD2DBitmap@@@Z @ 0x180098100 (-CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2.c)
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x180098E9C (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x1800991F0 (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::OpenSharedHandleAsD2DBitmap(
        __int64 a1,
        struct _LUID a2,
        void *a3,
        bool a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        _QWORD *a10)
{
  CD3DDeviceLevel1 *v10; // rsi
  int v11; // r14d
  int v16; // edi
  unsigned __int64 v17; // rcx
  int v18; // eax
  int D3DDevice; // eax
  unsigned int v20; // ecx
  struct D3D11_SUBRESOURCE_DATA *v21; // r8
  int D2DBitmapInternal; // eax
  unsigned int v23; // ecx
  int v25; // r9d
  unsigned int v26; // [rsp+20h] [rbp-91h]
  CD3DDeviceLevel1 *v27; // [rsp+40h] [rbp-71h] BYREF
  struct ID3D11Texture2D *v28; // [rsp+48h] [rbp-69h] BYREF
  _QWORD *v29; // [rsp+50h] [rbp-61h]
  unsigned __int64 v30; // [rsp+58h] [rbp-59h] BYREF
  int v31; // [rsp+60h] [rbp-51h]
  int v32; // [rsp+64h] [rbp-4Dh]
  BOOL v33; // [rsp+68h] [rbp-49h]
  __int64 v34; // [rsp+70h] [rbp-41h]
  D3D11_TEXTURE2D_DESC v35; // [rsp+78h] [rbp-39h] BYREF

  v10 = 0LL;
  v11 = a5;
  v28 = 0LL;
  v29 = a10;
  *a10 = 0LL;
  v27 = 0LL;
  v16 = -2147024809;
  v17 = a5;
  if ( a5 )
  {
    v17 = a5 - 1;
    if ( a5 == 1 || a5 == 3 )
      v16 = 0;
  }
  if ( v16 < 0 )
  {
    v26 = 1647;
    v25 = v16;
    goto LABEL_28;
  }
  v18 = CD3DDeviceManager::ValidateAdapterLuid((CD3DDeviceManager *)v17, a2);
  v16 = v18;
  if ( v18 < 0 )
  {
    v26 = 1648;
    goto LABEL_25;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 16), a2, &v27);
  v16 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_18024C878, 1u, D3DDevice, 0x672u);
    v10 = v27;
    goto LABEL_15;
  }
  v10 = v27;
  v18 = CD3DDeviceLevel1::OpenSharedTexture(v27, &v35, v21, a3, a4, &v28);
  v16 = v18;
  if ( v18 < 0 )
  {
    v26 = 1656;
LABEL_25:
    v25 = v18;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_18024C878, 1u, v25, v26);
    goto LABEL_15;
  }
  if ( v35.Format == DXGI_FORMAT_R8_UNORM || v35.Format == DXGI_FORMAT_R8G8_UNORM )
    v11 = 3;
  v33 = 0;
  v27 = (CD3DDeviceLevel1 *)__PAIR64__(v11, v35.Format);
  v30 = __PAIR64__(v11, v35.Format);
  v31 = a7;
  v32 = a8;
  if ( (v35.BindFlags & 0x20) != 0 && v35.Format != DXGI_FORMAT_R10G10B10A2_UNORM )
    v33 = v35.Format != DXGI_FORMAT_B8G8R8X8_UNORM;
  v34 = 0LL;
  D2DBitmapInternal = CD2DContext::CreateD2DBitmapInternal(
                        (__int64)v10,
                        v28,
                        (__int64)&v35,
                        (__int64)&v30,
                        a6,
                        a9,
                        1,
                        v29);
  v16 = D2DBitmapInternal;
  if ( D2DBitmapInternal < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v23, &dword_18024C878, 1u, D2DBitmapInternal, 0x6A3u);
LABEL_15:
  if ( v28 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v28->lpVtbl->Release)(v28);
  if ( v10 )
    CD3DSurface::Release((CD3DDeviceLevel1 *)((char *)v10 + 496));
  return (unsigned int)v16;
}
