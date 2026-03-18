/*
 * XREFs of ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x18003F0F0
 * Callers:
 *     ?CreateFromSharedHandle@CD2DBitmap@@SAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAV1@@Z @ 0x18003F064 (-CreateFromSharedHandle@CD2DBitmap@@SAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@.c)
 * Callees:
 *     ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18003F2B0 (-OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@.c)
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003FF88 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x1800425F0 (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@_NPEAPEAVCD2DBitmap@@@Z @ 0x1800B3B2C (-CreateD2DBitmapInternal@CD2DContext@@AEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
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
  int v11; // r14d
  CD3DDeviceLevel1 *v15; // rsi
  int v16; // edi
  unsigned __int64 v17; // rcx
  int v18; // eax
  int D3DDevice; // eax
  unsigned int v20; // ecx
  struct D3D11_SUBRESOURCE_DATA *v21; // r8
  int v22; // eax
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

  v11 = a5;
  v29 = a10;
  v27 = 0LL;
  *a10 = 0LL;
  v28 = 0LL;
  v15 = 0LL;
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
    v25 = v16;
    v26 = 1635;
    goto LABEL_28;
  }
  v18 = CD3DDeviceManager::ValidateAdapterLuid((CD3DDeviceManager *)v17, a2);
  v16 = v18;
  if ( v18 < 0 )
  {
    v26 = 1636;
    goto LABEL_25;
  }
  D3DDevice = CD3DDeviceManager::GetD3DDevice((CD3DDeviceManager *)(a1 - 16), a2, &v27);
  v16 = D3DDevice;
  if ( D3DDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, &dword_1802920EC, 1u, D3DDevice, 0x666u, 0LL);
    v15 = v27;
    goto LABEL_15;
  }
  v15 = v27;
  v18 = CD3DDeviceLevel1::OpenSharedTexture(v27, &v35, v21, a3, a4, &v28);
  v16 = v18;
  if ( v18 < 0 )
  {
    v26 = 1644;
LABEL_25:
    v25 = v18;
LABEL_28:
    MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802920EC, 1u, v25, v26, 0LL);
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
  v22 = CD2DContext::CreateD2DBitmapInternal(v15, v28, &v35, &v30, a6, a9, 1, v29, v27);
  v16 = v22;
  if ( v22 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v23, &dword_1802920EC, 1u, v22, 0x697u, 0LL);
LABEL_15:
  if ( v28 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v28->lpVtbl->Release)(v28);
  if ( v15 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v15 + 496));
  return (unsigned int)v16;
}
