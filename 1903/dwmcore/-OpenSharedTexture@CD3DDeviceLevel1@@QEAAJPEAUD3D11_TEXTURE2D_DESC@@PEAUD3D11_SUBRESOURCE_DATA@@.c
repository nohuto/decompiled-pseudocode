/*
 * XREFs of ?OpenSharedTexture@CD3DDeviceLevel1@@QEAAJPEAUD3D11_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAX_NPEAPEAUID3D11Texture2D@@@Z @ 0x18003F2B0
 * Callers:
 *     ?OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@MMVDisplayId@@PEAPEAVCD2DBitmap@@@Z @ 0x18003F0F0 (-OpenSharedHandleAsD2DBitmap@CD3DDeviceManager@@UEAAJU_LUID@@PEAX_NW4DXGI_ALPHA_MODE@@W4DXGI_COL.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x1800EBBE4 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEAX_NIPEAPEAV1@@Z @ 0x18016B75C (-OpenSharedTexture@CD3DVidMemOnlyTexture@@SAJPEAUD3D11_TEXTURE2D_DESC@@PEAVCD3DDeviceLevel1@@PEA.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 *     McTemplateU0x @ 0x18015ECCC (McTemplateU0x.c)
 */

__int64 __fastcall CD3DDeviceLevel1::OpenSharedTexture(
        CD3DDeviceLevel1 *this,
        struct D3D11_TEXTURE2D_DESC *a2,
        struct D3D11_SUBRESOURCE_DATA *a3,
        void *a4,
        bool a5,
        struct ID3D11Texture2D **a6)
{
  int v9; // ebx
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  int v14; // r9d
  unsigned int v15; // [rsp+20h] [rbp-18h]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x(&Microsoft_Windows_Dwm_Core_Provider_Context, &OPEN_SHARED_TEXTURE_EVENT_Start, a4);
  *a6 = 0LL;
  v9 = *((_DWORD *)this + 220);
  if ( v9 < 0 )
  {
    v14 = *((_DWORD *)this + 220);
    v15 = 1951;
  }
  else
  {
    v10 = (__int64 *)*((_QWORD *)this + 79);
    v11 = *v10;
    if ( a5 )
    {
      v12 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, struct ID3D11Texture2D **))(v11 + 384))(
              v10,
              a4,
              &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
              a6);
      v9 = v12;
      if ( v12 >= 0 )
      {
LABEL_6:
        ((void (__fastcall *)(_QWORD, struct D3D11_TEXTURE2D_DESC *))(*a6)->lpVtbl->GetDesc)(*a6, a2);
        goto LABEL_7;
      }
      v15 = 1957;
    }
    else
    {
      v12 = (*(__int64 (__fastcall **)(__int64 *, void *, GUID *, struct ID3D11Texture2D **))(v11 + 224))(
              v10,
              a4,
              &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
              a6);
      v9 = v12;
      if ( v12 >= 0 )
        goto LABEL_6;
      v15 = 1963;
    }
    v14 = v12;
  }
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v14, v15, 0LL);
LABEL_7:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &OPEN_SHARED_TEXTURE_EVENT_Stop);
  return CD3DDeviceLevel1::TranslateDXGIorD3DErrorInContext(this, (unsigned int)v9, 7LL);
}
