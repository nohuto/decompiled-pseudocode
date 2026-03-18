/*
 * XREFs of ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A57DC
 * Callers:
 *     ?PreRender@CRemoteAppRenderTarget@@UEAAJXZ @ 0x1801A5D50 (-PreRender@CRemoteAppRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C7C00 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x18015AA10 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18015F2A0 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ @ 0x1801A665C (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ.c)
 *     ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x18023F998 (-Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?GetCompSurfHandle@CHwCompSwapChainTarget@@QEBAPEAXXZ @ 0x18023FCE4 (-GetCompSurfHandle@CHwCompSwapChainTarget@@QEBAPEAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::EnsureRenderTarget(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // esi
  __int64 *v2; // r15
  signed int DefaultD3DDevice; // eax
  __int64 v5; // rcx
  struct CD3DDeviceLevel1 *v6; // rbx
  signed int v7; // eax
  __int64 v8; // rcx
  CHwCompSwapChainTarget *v9; // rdi
  void *CompSurfHandle; // r12
  signed int v11; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rax
  signed int v16; // eax
  __int64 v17; // rcx
  CMILPoolResource *v18; // rcx
  void *v20; // [rsp+20h] [rbp-20h]
  __int64 v21; // [rsp+80h] [rbp+40h] BYREF
  CHwCompSwapChainTarget *v22; // [rsp+88h] [rbp+48h] BYREF
  struct CD3DDeviceLevel1 *v23; // [rsp+90h] [rbp+50h] BYREF

  v1 = 0;
  v2 = (__int64 *)((char *)this + 176);
  if ( !*((_QWORD *)this + 22) && *(_DWORD *)(*((_QWORD *)this + 2) + 1096LL) == 6 )
  {
    v22 = 0LL;
    v21 = 0LL;
    v23 = 0LL;
    DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v23);
    v1 = DefaultD3DDevice;
    if ( DefaultD3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, DefaultD3DDevice, 0x141u, 0LL);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v21);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v22);
      if ( v23 )
      {
        v18 = (struct CD3DDeviceLevel1 *)((char *)v23 + 496);
        goto LABEL_20;
      }
    }
    else
    {
      wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)&v22);
      v6 = v23;
      LODWORD(v20) = 8;
      v7 = CHwCompSwapChainTarget::Create(
             v23,
             *((_DWORD *)this + 22),
             *((_DWORD *)this + 23),
             3u,
             v20,
             (CRemoteAppRenderTarget *)((char *)this + 96),
             &v22);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x149u, 0LL);
      }
      else
      {
        v9 = v22;
        CompSurfHandle = CHwCompSwapChainTarget::GetCompSurfHandle(v22);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        v11 = (**(__int64 (__fastcall ***)(CHwCompSwapChainTarget *, GUID *, __int64 *))v9)(
                v9,
                &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
                &v21);
        v1 = v11;
        if ( v11 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x14Eu, 0LL);
        }
        else
        {
          v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v21 + 24LL))(v21, (char *)this + 80);
          v1 = v13;
          if ( v13 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x14Fu, 0LL);
          }
          else
          {
            *((_QWORD *)this + 23) = CompSurfHandle;
            wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
              v2,
              (__int64)v9);
            v15 = v21;
            v21 = 0LL;
            *((_QWORD *)this + 17) = v15;
            v16 = CRemoteAppRenderTarget::SendCompSurfHandle(this);
            v1 = v16;
            if ( v16 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x155u, 0LL);
            else
              *((_BYTE *)this + 161) = 1;
          }
        }
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v21);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v22);
      if ( v6 )
      {
        v18 = (struct CD3DDeviceLevel1 *)((char *)v6 + 496);
LABEL_20:
        CMILPoolResource::Release(v18);
      }
    }
  }
  return v1;
}
