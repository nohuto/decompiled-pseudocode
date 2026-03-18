/*
 * XREFs of ?VideoProcessorBlt@CHwTextureRenderTarget@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@_NAEBUtagRECT@@W4_D3DDDI_ROTATION@@3@Z @ 0x180162440
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ @ 0x18015BC80 (-GetD3D11ResourceNoRef@CD3DTexture@@QEAAPEAUID3D11Resource@@XZ.c)
 *     ?VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUtagRECT@@W4_D3DDDI_ROTATION@@0II2@Z @ 0x18015CD24 (-VideoProcessorBlt@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4DXGI_COLOR_SPACE_TYPE@@IIIAEBUt.c)
 */

__int64 __fastcall CHwTextureRenderTarget::VideoProcessorBlt(
        __int64 a1,
        _QWORD *a2,
        int a3,
        unsigned int a4,
        unsigned __int8 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  __int64 (__fastcall **v8)(_QWORD *, GUID *, __int64 *); // rax
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  CD3DTexture *v16; // rcx
  __int64 v17; // rbx
  struct ID3D11Resource *D3D11ResourceNoRef; // rax
  signed int v19; // eax
  __int64 v20; // rcx
  __int64 v22; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v23[12]; // [rsp+78h] [rbp-70h] BYREF

  v8 = (__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*a2;
  v22 = 0LL;
  ((void (__fastcall *)(_QWORD *, unsigned int *))v8[10])(a2, v23);
  v13 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, __int64 *))*a2)(
          a2,
          &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d,
          &v22);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x292u, 0LL);
  }
  else
  {
    v16 = *(CD3DTexture **)(a1 + 32);
    v17 = *(_QWORD *)(*((_QWORD *)v16 + 2) + 80LL);
    D3D11ResourceNoRef = CD3DTexture::GetD3D11ResourceNoRef(v16);
    v19 = CD3DDeviceLevel1::VideoProcessorBlt(
            v17,
            v22,
            a3,
            a4,
            v23[0],
            v23[1],
            a5,
            a6,
            a7,
            (__int64)D3D11ResourceNoRef,
            *(_DWORD *)(a1 - 136),
            *(_DWORD *)(a1 - 132),
            a8);
    v15 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x29Fu, 0LL);
  }
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v15;
}
