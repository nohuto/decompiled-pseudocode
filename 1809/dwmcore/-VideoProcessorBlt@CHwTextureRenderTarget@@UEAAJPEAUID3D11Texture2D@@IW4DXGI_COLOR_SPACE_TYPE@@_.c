/*
 * XREFs of ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@_NAEBUtagRECT@@3@Z @ 0x180203470
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ @ 0x1801FC5D8 (-GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ.c)
 *     ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUtagRECT@@0II2@Z @ 0x1801FD56C (-VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUt.c)
 */

__int64 __fastcall CHwTextureRenderTarget::VideoProcessorBlt(
        CHwTextureRenderTarget *this,
        struct ID3D11Texture2D *a2,
        int a3,
        unsigned int a4,
        bool a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7)
{
  struct ID3D11Texture2DVtbl *lpVtbl; // rax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  CD3DTexture *v15; // rcx
  CD3DDeviceLevel1 *v16; // rbx
  struct ID3D11Resource *D3D11ResourceNoRef; // rax
  int v18; // eax
  __int64 v19; // rcx
  struct ID3D11Resource *v21; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v22[12]; // [rsp+68h] [rbp-70h] BYREF

  lpVtbl = a2->lpVtbl;
  v21 = 0LL;
  ((void (__fastcall *)(struct ID3D11Texture2D *, unsigned int *))lpVtbl->GetDesc)(a2, v22);
  v12 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, struct ID3D11Resource **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
          &v21);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x294u);
  }
  else
  {
    v15 = (CD3DTexture *)*((_QWORD *)this + 4);
    v16 = *(CD3DDeviceLevel1 **)(*((_QWORD *)v15 + 2) + 80LL);
    D3D11ResourceNoRef = CD3DTexture::GetD3D11ResourceNoRef(v15);
    v18 = CD3DDeviceLevel1::VideoProcessorBlt(
            v16,
            v21,
            a3,
            a4,
            v22[0],
            v22[1],
            a5,
            a6,
            D3D11ResourceNoRef,
            *((_DWORD *)this - 50),
            *((_DWORD *)this - 49),
            a7);
    v14 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x2A0u);
  }
  if ( v21 )
    ((void (__fastcall *)(struct ID3D11Resource *))v21->lpVtbl->Release)(v21);
  return v14;
}
