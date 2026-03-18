/*
 * XREFs of ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x18018E7DC
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801906A4 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FBA8 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180095660 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180098AF4 (-CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_V.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180099098 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800A0F10 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x18018E598 (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 */

__int64 __fastcall CCompositionCubeMap::GetOrCreateD3DCubeMap(
        CCompositionCubeMap *this,
        struct ID2DContextOwner *a2,
        struct ID3D11ShaderResourceView **a3)
{
  unsigned int v4; // edi
  __int64 v6; // rcx
  struct _LUID v8; // rbx
  int ExistingDevice; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  int CurrentRenderingRealization; // eax
  __int64 v14; // rcx
  char v15; // dl
  struct D3D11_SUBRESOURCE_DATA *v16; // r8
  int Texture; // eax
  __int64 v18; // rcx
  struct ID3D11Resource *v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rcx
  struct IBitmapRealization *v25; // [rsp+30h] [rbp-79h] BYREF
  CD3DDeviceLevel1 *v26; // [rsp+38h] [rbp-71h] BYREF
  D3D11_SHADER_RESOURCE_VIEW_DESC v27; // [rsp+40h] [rbp-69h] BYREF
  __int128 v28; // [rsp+58h] [rbp-51h]
  DXGI_FORMAT v29[6]; // [rsp+68h] [rbp-41h] BYREF
  _DWORD v30[12]; // [rsp+80h] [rbp-29h] BYREF
  __int128 v31; // [rsp+B0h] [rbp+7h]

  v4 = 0;
  *a3 = 0LL;
  v6 = *((unsigned int *)this + 28);
  v26 = 0LL;
  v8 = *(struct _LUID *)(*(_QWORD *)(*(_QWORD *)(32 * v6 + *((_QWORD *)this + 10) + 8) + 88LL) + 168LL);
  if ( *((_QWORD *)this + 15) != v8 )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 16);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 17);
    *((struct _LUID *)this + 15) = v8;
    *((_BYTE *)this + 144) = 1;
  }
  if ( *((_QWORD *)this + 16) || *((int *)this + 28) < 0 )
    goto LABEL_11;
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v26);
  ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v8, &v26);
  v4 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ExistingDevice, 0x124u);
    goto LABEL_12;
  }
  v11 = *((unsigned int *)this + 28);
  v12 = *((_QWORD *)this + 10);
  v25 = 0LL;
  CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                  (CCompositionSurfaceBitmap *)(*(_QWORD *)(32 * v11 + v12 + 8) + 64LL),
                                  &v25);
  v4 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, CurrentRenderingRealization, 0x127u);
    goto LABEL_17;
  }
  (*(void (__fastcall **)(struct IBitmapRealization *, DXGI_FORMAT *))(*(_QWORD *)v25 + 24LL))(v25, v29);
  v15 = *((_BYTE *)this + 160);
  v30[6] = 0;
  v30[7] = 0;
  *(_QWORD *)&v28 = "DWM Composition Cube Map";
  v30[0] = *((_DWORD *)this + 38);
  v30[1] = v30[0];
  v30[2] = *((_DWORD *)this + 39);
  v30[4] = v29[0];
  DWORD2(v28) = 24;
  v30[3] = 6;
  v30[9] = 0;
  v30[5] = 1;
  v30[8] = v15 != 0 ? 40 : 8;
  v30[10] = (v15 != 0) + 4;
  v31 = v28;
  Texture = CD3DDeviceLevel1::CreateTexture(
              v26,
              (const struct DWM_TEXTURE2D_DESC *)v30,
              v16,
              (struct ID3D11Texture2D **)this + 16);
  v4 = Texture;
  if ( Texture < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, Texture, 0x150u);
    goto LABEL_17;
  }
  v19 = (struct ID3D11Resource *)*((_QWORD *)this + 16);
  v27.Buffer.FirstElement = 0;
  v27.Format = v29[0];
  v27.Buffer.NumElements = *((_DWORD *)this + 39);
  v27.ViewDimension = D3D_SRV_DIMENSION_TEXTURECUBE;
  v20 = CD3DDeviceLevel1::CreateShaderResourceView(v26, v19, &v27, (struct ID3D11ShaderResourceView **)this + 17);
  v4 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x158u);
    goto LABEL_17;
  }
  v22 = CCompositionCubeMap::FlushToD3DCubeMap(this, a2);
  v4 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x15Au);
LABEL_17:
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v25);
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v25);
LABEL_11:
  *a3 = (struct ID3D11ShaderResourceView *)*((_QWORD *)this + 17);
LABEL_12:
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease((__int64 *)&v26);
  return v4;
}
