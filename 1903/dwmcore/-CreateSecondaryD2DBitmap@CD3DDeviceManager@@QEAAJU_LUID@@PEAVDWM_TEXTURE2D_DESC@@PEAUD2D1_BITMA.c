/*
 * XREFs of ?CreateSecondaryD2DBitmap@CD3DDeviceManager@@QEAAJU_LUID@@PEAVDWM_TEXTURE2D_DESC@@PEAUD2D1_BITMAP_PROPERTIES1@@PEAW4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800B36A4
 * Callers:
 *     ?Create@CSecondaryD2DBitmap@@SAJU_LUID@@IIAEBUPixelFormatInfo@@AEBVCResourceTag@@PEAPEAV1@@Z @ 0x1800B35C8 (-Create@CSecondaryD2DBitmap@@SAJU_LUID@@IIAEBUPixelFormatInfo@@AEBVCResourceTag@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x18003FF88 (-GetD3DDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x1800425F0 (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1800B3800 (-CreateSecondaryD2DBitmap@CD2DContext@@MEAAJPEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800B3F2C (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?GetCompatibleTextureFormat@CD3DDeviceLevel1@@QEBA?AW4DXGI_FORMAT@@W42@@Z @ 0x1800B4044 (-GetCompatibleTextureFormat@CD3DDeviceLevel1@@QEBA-AW4DXGI_FORMAT@@W42@@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DDeviceManager::CreateSecondaryD2DBitmap(
        CD3DDeviceManager *this,
        struct _LUID a2,
        struct D3D11_TEXTURE2D_DESC *a3,
        struct D2D1_BITMAP_PROPERTIES1 *a4,
        enum DXGI_COLOR_SPACE_TYPE *a5,
        struct CSecondaryD2DBitmap **a6)
{
  DXGI_FORMAT Format; // r13d
  CD3DDeviceLevel1 *v7; // rsi
  struct ID3D11Texture2D *v8; // r15
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // edi
  signed int D3DDevice; // eax
  __int64 v17; // rcx
  int v18; // ecx
  int v19; // edx
  enum DXGI_FORMAT CompatibleTextureFormat; // eax
  CD3DDeviceLevel1 *v21; // rcx
  struct D3D11_SUBRESOURCE_DATA *v22; // r8
  enum DXGI_COLOR_SPACE_TYPE *v23; // rbx
  signed int v24; // eax
  __int64 v25; // rcx
  signed int SecondaryD2DBitmap; // eax
  __int64 v27; // rcx
  CD3DDeviceLevel1 *v29; // [rsp+30h] [rbp-38h] BYREF
  struct ID3D11Texture2D *v30; // [rsp+80h] [rbp+18h] BYREF

  Format = a3->Format;
  v7 = 0LL;
  v29 = 0LL;
  v8 = 0LL;
  v30 = 0LL;
  *a6 = 0LL;
  v13 = CD3DDeviceManager::ValidateAdapterLuid(this, a2);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_1802920EC, 1u, v13, 0x610u, 0LL);
  }
  else
  {
    D3DDevice = CD3DDeviceManager::GetD3DDevice(this, a2, &v29);
    v15 = D3DDevice;
    if ( D3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_1802920EC, 1u, D3DDevice, 0x612u, 0LL);
      v7 = v29;
      goto LABEL_14;
    }
    v7 = v29;
    v18 = *((_DWORD *)v29 + 188);
    v19 = *((_DWORD *)v29 + 189);
    if ( a3->Width > v18 )
    {
      a4->dpiX = (float)((float)v18 / (float)(int)a3->Width) * a4->dpiX;
      a3->Width = v18;
    }
    if ( a3->Height > v19 )
    {
      a4->dpiY = (float)((float)v19 / (float)(int)a3->Height) * a4->dpiY;
      a3->Height = v19;
    }
    CompatibleTextureFormat = CD3DDeviceLevel1::GetCompatibleTextureFormat(v7, a3->Format);
    v23 = a5;
    a3->Format = CompatibleTextureFormat;
    if ( Format != CompatibleTextureFormat )
    {
      a4->pixelFormat.format = CompatibleTextureFormat;
      *v23 = a3->Format == DXGI_FORMAT_R16G16B16A16_FLOAT;
    }
    v24 = CD3DDeviceLevel1::CreateTexture(v21, (const struct DWM_TEXTURE2D_DESC *)a3, v22, &v30);
    v15 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, &dword_1802920EC, 1u, v24, 0x634u, 0LL);
      v8 = v30;
    }
    else
    {
      v8 = v30;
      SecondaryD2DBitmap = CD2DContext::CreateSecondaryD2DBitmap(v7, v30, a3, a4, *v23, a6);
      v15 = SecondaryD2DBitmap;
      if ( SecondaryD2DBitmap < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v27, &dword_1802920EC, 1u, SecondaryD2DBitmap, 0x63Fu, 0LL);
    }
  }
  if ( v8 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v8->lpVtbl->Release)(v8);
LABEL_14:
  if ( v7 )
    CMILPoolResource::Release((CD3DDeviceLevel1 *)((char *)v7 + 496));
  return v15;
}
