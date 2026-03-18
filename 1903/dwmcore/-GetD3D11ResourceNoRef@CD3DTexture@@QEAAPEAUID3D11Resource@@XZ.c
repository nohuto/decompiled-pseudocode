/*
 * XREFs of ?GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ @ 0x18015D360
 * Callers:
 *     ?CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z @ 0x18015C1E8 (-CopyTextureRect@CD3DDeviceLevel1@@QEAAXPEAVCD3DTexture@@PEBUtagRECT@@0PEBUtagPOINT@@_N@Z.c)
 *     ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@_NAEBUtagRECT@@W4_D3DDDI_ROTATION@@3@Z @ 0x180163B30 (-VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

struct ID3D11Resource *__fastcall CD3DTexture::GetD3D11ResourceNoRef(CD3DTexture *this)
{
  char *v1; // rbx
  struct ID3D11Resource *result; // rax
  void (__fastcall ***v3)(_QWORD, GUID *, char *); // rcx

  v1 = (char *)this + 200;
  result = (struct ID3D11Resource *)*((_QWORD *)this + 25);
  if ( !result )
  {
    v3 = (void (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 15);
    if ( v3 )
    {
      (**v3)(v3, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, v1);
      return *(struct ID3D11Resource **)v1;
    }
  }
  return result;
}
