/*
 * XREFs of ?GetOrCreateD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x1801CE8E4
 * Callers:
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801D115C (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_VIEW_DESC@@PEAPEAUID3D11ShaderResourceView@@@Z @ 0x180049510 (-CreateShaderResourceView@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@PEBUD3D11_SHADER_RESOURCE_V.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18004F31C (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z @ 0x180053C94 (-GetExistingDevice@CD3DDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z @ 0x1800AB870 (-GetCurrentRenderingRealization@CCompositionSurfaceBitmap@@UEAAJPEAPEAVIBitmapRealization@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z @ 0x1801CE698 (-FlushToD3DCubeMap@CCompositionCubeMap@@QEAAJPEAVID2DContextOwner@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ @ 0x1801CEBA0 (-InternalRelease@-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionCubeMap::GetOrCreateD3DCubeMap(
        CCompositionCubeMap *this,
        struct ID2DContextOwner *a2,
        struct ID3D11ShaderResourceView **a3)
{
  __int64 v5; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  signed int ExistingDevice; // eax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  signed int CurrentRenderingRealization; // eax
  __int64 v14; // rcx
  char v15; // dl
  struct D3D11_SUBRESOURCE_DATA *v16; // r8
  signed int Texture; // eax
  __int64 v18; // rcx
  struct ID3D11Resource *v19; // rdx
  signed int v20; // eax
  __int64 v21; // rcx
  signed int v22; // eax
  __int64 v23; // rcx
  struct IBitmapRealization *v25; // [rsp+30h] [rbp-79h] BYREF
  struct CD3DDeviceLevel1 *v26; // [rsp+38h] [rbp-71h] BYREF
  struct _LUID v27; // [rsp+40h] [rbp-69h] BYREF
  D3D11_SHADER_RESOURCE_VIEW_DESC v28; // [rsp+48h] [rbp-61h] BYREF
  __int128 v29; // [rsp+60h] [rbp-49h]
  DXGI_FORMAT v30[4]; // [rsp+70h] [rbp-39h] BYREF
  _DWORD v31[5]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v32; // [rsp+94h] [rbp-15h]
  int v33; // [rsp+9Ch] [rbp-Dh]
  int v34; // [rsp+A0h] [rbp-9h]
  int v35; // [rsp+A4h] [rbp-5h]
  int v36; // [rsp+A8h] [rbp-1h]
  __int128 v37; // [rsp+B0h] [rbp+7h]

  *a3 = 0LL;
  v5 = *((unsigned int *)this + 28);
  v26 = 0LL;
  v7 = 0;
  v8 = *(_QWORD *)(*(_QWORD *)(32 * v5 + *((_QWORD *)this + 10) + 8) + 88LL);
  (*(void (__fastcall **)(__int64, struct _LUID *))(*(_QWORD *)v8 + 256LL))(v8, &v27);
  if ( *((_QWORD *)this + 15) != v27 )
  {
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 16);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 17);
    *((struct _LUID *)this + 15) = v27;
    *((_BYTE *)this + 144) = 1;
  }
  if ( *((_QWORD *)this + 16) || *((int *)this + 28) < 0 )
    goto LABEL_11;
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(&v26);
  ExistingDevice = CD3DDeviceManager::GetExistingDevice((CD3DDeviceManager *)&g_D3DDeviceManager, v27, &v26);
  v7 = ExistingDevice;
  if ( ExistingDevice < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, ExistingDevice, 0x122u, 0LL);
    goto LABEL_12;
  }
  v11 = *((_QWORD *)this + 10);
  v12 = 32LL * *((unsigned int *)this + 28);
  v25 = 0LL;
  CurrentRenderingRealization = CCompositionSurfaceBitmap::GetCurrentRenderingRealization(
                                  (CCompositionSurfaceBitmap *)(*(_QWORD *)(v12 + v11 + 8) + 64LL),
                                  &v25);
  v7 = CurrentRenderingRealization;
  if ( CurrentRenderingRealization < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, CurrentRenderingRealization, 0x125u, 0LL);
    goto LABEL_17;
  }
  (*(void (__fastcall **)(struct IBitmapRealization *, DXGI_FORMAT *))(*(_QWORD *)v25 + 24LL))(v25, v30);
  v15 = *((_BYTE *)this + 160);
  *(_QWORD *)&v29 = "DWM Composition Cube Map";
  v31[0] = *((_DWORD *)this + 38);
  v31[1] = v31[0];
  v31[2] = *((_DWORD *)this + 39);
  v31[4] = v30[0];
  DWORD2(v29) = 24;
  v31[3] = 6;
  v32 = 1LL;
  v33 = 0;
  v34 = v15 != 0 ? 40 : 8;
  v35 = 0;
  v36 = (v15 != 0) + 4;
  v37 = v29;
  Texture = CD3DDeviceLevel1::CreateTexture(
              v26,
              (const struct DWM_TEXTURE2D_DESC *)v31,
              v16,
              (struct ID3D11Texture2D **)this + 16);
  v7 = Texture;
  if ( Texture < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, Texture, 0x14Eu, 0LL);
    goto LABEL_17;
  }
  v19 = (struct ID3D11Resource *)*((_QWORD *)this + 16);
  v28.Format = v30[0];
  v28.Buffer.NumElements = *((_DWORD *)this + 39);
  *(_QWORD *)&v28.ViewDimension = 9LL;
  v20 = CD3DDeviceLevel1::CreateShaderResourceView(v26, v19, &v28, (struct ID3D11ShaderResourceView **)this + 17);
  v7 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x156u, 0LL);
    goto LABEL_17;
  }
  v22 = CCompositionCubeMap::FlushToD3DCubeMap(this, a2);
  v7 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x158u, 0LL);
LABEL_17:
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v25);
    goto LABEL_12;
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v25);
LABEL_11:
  *a3 = (struct ID3D11ShaderResourceView *)*((_QWORD *)this + 17);
LABEL_12:
  Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::InternalRelease(&v26);
  return v7;
}
