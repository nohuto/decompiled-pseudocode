/*
 * XREFs of ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJAEBUtagRECT@@@Z @ 0x1800DC984
 * Callers:
 *     ?RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z @ 0x1800DC6D8 (-RemotingIndirectPresent@CDWMOffScreenSwapChain@@QEAAJPEBVCRegion@@_N1@Z.c)
 * Callees:
 *     ?Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x1800473A4 (-Map@CD3DDeviceLevel1@@QEAAJPEAUID3D11Resource@@IW4D3D11_MAP@@IPEAUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800484B8 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x18004F31C (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyFromSurfaceToMem@@YAXPEAEIIAEBUtagRECT@@II0@Z @ 0x1800DCB48 (-CopyFromSurfaceToMem@@YAXPEAEIIAEBUtagRECT@@II0@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::CopyFromTexture(CDWMOffScreenSwapChain *this, const struct tagRECT *a2)
{
  unsigned int v2; // ebx
  struct ID3D11Texture2D **v5; // rsi
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned __int8 PixelFormatSize; // al
  CD3DDeviceLevel1 *v10; // rcx
  int v11; // eax
  __int64 v12; // xmm1_8
  struct D3D11_SUBRESOURCE_DATA *v13; // r8
  signed int Texture; // eax
  __int64 v15; // rcx
  unsigned int v16; // [rsp+20h] [rbp-49h]
  __int128 v17; // [rsp+40h] [rbp-29h]
  struct D3D11_MAPPED_SUBRESOURCE v18; // [rsp+50h] [rbp-19h] BYREF
  _OWORD v19[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  __int128 v22; // [rsp+90h] [rbp+27h]

  v2 = 0;
  if ( *((_QWORD *)this + 56) )
  {
    v5 = (struct ID3D11Texture2D **)((char *)this + 456);
    if ( *((_QWORD *)this + 57) )
      goto LABEL_3;
    (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 53) + 80LL))(
      *((_QWORD *)this + 53),
      (char *)this + 464);
    *((_DWORD *)this + 124) = 0;
    *((_DWORD *)this + 126) = 0;
    v10 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 54);
    *((_DWORD *)this + 123) = 3;
    *((_DWORD *)this + 125) = 0x20000;
    *(_QWORD *)&v17 = "DWM Offscreen SwapChain Readback";
    v11 = *((_DWORD *)this + 126);
    v19[0] = *((_OWORD *)this + 29);
    v12 = *((_QWORD *)this + 62);
    DWORD2(v17) = 32;
    v21 = v11;
    v20 = v12;
    v22 = v17;
    v19[1] = *((_OWORD *)this + 30);
    Texture = CD3DDeviceLevel1::CreateTexture(v10, (const struct DWM_TEXTURE2D_DESC *)v19, v13, v5);
    v2 = Texture;
    if ( Texture >= 0 )
    {
LABEL_3:
      (*(void (__fastcall **)(_QWORD, struct ID3D11Texture2D *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 54) + 640LL)
                                                                       + 376LL))(
        *(_QWORD *)(*((_QWORD *)this + 54) + 640LL),
        *v5,
        *((_QWORD *)this + 53));
      v6 = CD3DDeviceLevel1::Map(*((CD3DDeviceLevel1 **)this + 54), (struct ID3D11Resource *)*v5, 0LL, 1LL, v16, &v18);
      v2 = v6;
      if ( v6 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x176u, 0LL);
      }
      else
      {
        PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 120));
        CopyFromSurfaceToMem(
          (unsigned __int8 *)v18.pData,
          PixelFormatSize >> 3,
          v18.RowPitch,
          a2,
          *((_DWORD *)this + 30),
          *((_DWORD *)this + 31),
          *((unsigned __int8 **)this + 56));
        (*(void (__fastcall **)(_QWORD, struct ID3D11Texture2D *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 54) + 640LL)
                                                                         + 120LL))(
          *(_QWORD *)(*((_QWORD *)this + 54) + 640LL),
          *v5,
          0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, Texture, 0x16Cu, 0LL);
    }
  }
  return v2;
}
