/*
 * XREFs of ?EnsureBufferResources@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@@Z @ 0x18023FAA4
 * Callers:
 *     ?InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z @ 0x18023FFD0 (-InitTargetSurface@CHwCompSwapChainTarget@@IEAAJPEAVCD3DDeviceLevel1@@AEBUPixelFormatInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x1800B25D4 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPEAV1@@Z @ 0x1800B277C (-CreateFromTexture@CD3DVidMemOnlyTexture@@SAJPEAUID3D11Texture2D@@I_NPEAVCD3DDeviceLevel1@@PEAPE.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DSurface@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C993C (-reset@-$com_ptr_t@VCD3DSurface@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18017C888 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ @ 0x180240364 (-ReleaseBufferResources@CHwCompSwapChainTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CHwCompSwapChainTarget::EnsureBufferResources(
        CHwCompSwapChainTarget *this,
        struct CD3DDeviceLevel1 *a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, GUID *, struct ID3D11Texture2D **); // rbx
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  signed int v9; // eax
  __int64 v10; // rcx
  char *v11; // rdi
  __int64 v12; // rdx
  signed int D3DSurfaceLevel; // eax
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  void (__fastcall ***v17)(_QWORD); // rcx
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, _QWORD, GUID *, struct ID3D11Texture2D **); // rbx
  signed int v20; // eax
  __int64 v21; // rcx
  signed int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  signed int v25; // eax
  __int64 v26; // rcx
  CMILPoolResource *v28; // [rsp+50h] [rbp+20h] BYREF
  struct ID3D11Texture2D *v29; // [rsp+60h] [rbp+30h] BYREF

  v2 = *((_QWORD *)this + 27);
  v29 = 0LL;
  v28 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct ID3D11Texture2D **))(*(_QWORD *)v2 + 72LL);
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)&v29);
  v6 = v5(v2, 0LL, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v29);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xFFu, 0LL);
  }
  else
  {
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(&v28);
    v9 = CD3DVidMemOnlyTexture::CreateFromTexture(v29, 0, 1, a2, &v28);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x106u, 0LL);
    }
    else
    {
      v11 = (char *)this + 224;
      wil::com_ptr_t<CD3DSurface,wil::err_returncode_policy>::reset((__int64 *)this + 28);
      D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(v28, v12, (struct CD3DSurface **)this + 28);
      v8 = D3DSurfaceLevel;
      if ( D3DSurfaceLevel < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, D3DSurfaceLevel, 0x108u, 0LL);
      }
      else
      {
        v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*(_QWORD *)v11 + 24LL) + 24LL))(
                *(_QWORD *)v11 + 24LL,
                (char *)this + 200);
        v8 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x109u, 0LL);
        }
        else
        {
          v17 = *(void (__fastcall ****)(_QWORD))v11;
          *((_QWORD *)this + 17) = *(_QWORD *)v11;
          (**v17)(v17);
          wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)&v29);
          wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(&v28);
          v18 = *((_QWORD *)this + 27);
          v19 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct ID3D11Texture2D **))(*(_QWORD *)v18 + 72LL);
          wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)&v29);
          v20 = v19(v18, (unsigned int)(*((_DWORD *)this + 114) - 1), &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v29);
          v8 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x112u, 0LL);
          }
          else
          {
            wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset(&v28);
            v22 = CD3DVidMemOnlyTexture::CreateFromTexture(v29, 0, 1, a2, &v28);
            v8 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x119u, 0LL);
            }
            else
            {
              wil::com_ptr_t<CD3DSurface,wil::err_returncode_policy>::reset((__int64 *)this + 29);
              v25 = CD3DTexture::GetD3DSurfaceLevel(v28, v24, (struct CD3DSurface **)this + 29);
              v8 = v25;
              if ( v25 >= 0 )
                goto LABEL_16;
              MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x11Bu, 0LL);
            }
          }
        }
      }
    }
  }
  CHwCompSwapChainTarget::ReleaseBufferResources(this);
LABEL_16:
  if ( v28 )
    CMILPoolResource::Release(v28);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v29);
  return v8;
}
