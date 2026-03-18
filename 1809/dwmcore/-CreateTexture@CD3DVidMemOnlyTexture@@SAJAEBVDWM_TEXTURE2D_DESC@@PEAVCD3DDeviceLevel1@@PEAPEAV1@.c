/*
 * XREFs of ?CreateTexture@CD3DVidMemOnlyTexture@@SAJAEBVDWM_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180093884
 * Callers:
 *     ?Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo@@_N@Z @ 0x1800936AC (-Init@CHwTextureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBVCResourceTag@@IIAEBUPixelFormatInfo.c)
 * Callees:
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x180093A88 (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x180095660 (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DVidMemOnlyTexture::CreateTexture(
        const struct DWM_TEXTURE2D_DESC *a1,
        struct CD3DDeviceLevel1 *a2,
        struct D3D11_SUBRESOURCE_DATA *a3)
{
  int v5; // eax
  unsigned int v6; // ecx
  struct ID3D11Texture2D *v7; // rdi
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // ecx
  struct ID3D11Texture2D *v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = 0LL;
  v5 = CD3DDeviceLevel1::CreateTexture(a2, a1, a3, &v12);
  v7 = v12;
  v8 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x4Cu);
  }
  else
  {
    v9 = CD3DVidMemOnlyTexture::CreateFromTexture(v12, 0, 0, a2, (struct CD3DVidMemOnlyTexture **)a3);
    v8 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x52u);
  }
  if ( v7 )
    ((void (__fastcall *)(struct ID3D11Texture2D *))v7->lpVtbl->Release)(v7);
  return v8;
}
