/*
 * XREFs of ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015F568
 * Callers:
 *     ?PreRender@CRemoteAppRenderTarget@@UEAAJXZ @ 0x18015FAC0 (-PreRender@CRemoteAppRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x180064450 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x1800EF5B8 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ @ 0x180160354 (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ.c)
 *     ?GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x1801FAA20 (-GetDefaultD3DDevice@CD3DDeviceManager@@QEAAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z @ 0x180200638 (-Create@CHwCompSwapChainTarget@@SAJPEAVCD3DDeviceLevel1@@IIIIAEBUPixelFormatInfo@@PEAPEAV1@@Z.c)
 *     ?GetCompSurfHandle@CHwCompSwapChainTarget@@QEBAPEAXXZ @ 0x180200968 (-GetCompSurfHandle@CHwCompSwapChainTarget@@QEBAPEAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::EnsureRenderTarget(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // esi
  __int64 *v2; // r15
  int DefaultD3DDevice; // eax
  __int64 v5; // rcx
  struct CD3DDeviceLevel1 *v6; // rbx
  int v7; // eax
  __int64 v8; // rcx
  CHwCompSwapChainTarget *v9; // rdi
  void *CompSurfHandle; // rax
  __int64 v11; // rcx
  void *v12; // r12
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  CD3DSurface *v20; // rcx
  __int64 v22; // [rsp+80h] [rbp+40h] BYREF
  CHwCompSwapChainTarget *v23; // [rsp+88h] [rbp+48h] BYREF
  struct CD3DDeviceLevel1 *v24; // [rsp+90h] [rbp+50h] BYREF

  v1 = 0;
  v2 = (__int64 *)((char *)this + 176);
  if ( !*((_QWORD *)this + 22) && *(_DWORD *)(*((_QWORD *)this + 2) + 1080LL) == 6 )
  {
    v23 = 0LL;
    v22 = 0LL;
    v24 = 0LL;
    DefaultD3DDevice = CD3DDeviceManager::GetDefaultD3DDevice((CD3DDeviceManager *)&g_D3DDeviceManager, &v24);
    v1 = DefaultD3DDevice;
    if ( DefaultD3DDevice < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, DefaultD3DDevice, 0x141u);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v22);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v23);
      if ( v24 )
      {
        v20 = (struct CD3DDeviceLevel1 *)((char *)v24 + 496);
        goto LABEL_20;
      }
    }
    else
    {
      wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)&v23);
      v6 = v24;
      v7 = CHwCompSwapChainTarget::Create(
             v24,
             *((_DWORD *)this + 22),
             *((_DWORD *)this + 23),
             3u,
             8u,
             (CRemoteAppRenderTarget *)((char *)this + 96),
             &v23);
      v1 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x149u);
      }
      else
      {
        v9 = v23;
        CompSurfHandle = CHwCompSwapChainTarget::GetCompSurfHandle(v23);
        v11 = v22;
        v12 = CompSurfHandle;
        v22 = 0LL;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v13 = (**(__int64 (__fastcall ***)(CHwCompSwapChainTarget *, GUID *, __int64 *))v9)(
                v9,
                &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
                &v22);
        v1 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x14Eu);
        }
        else
        {
          v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v22 + 24LL))(v22, (char *)this + 80);
          v1 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x14Fu);
          }
          else
          {
            *((_QWORD *)this + 23) = v12;
            wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
              v2,
              (__int64)v9);
            v17 = v22;
            v22 = 0LL;
            *((_QWORD *)this + 17) = v17;
            v18 = CRemoteAppRenderTarget::SendCompSurfHandle(this);
            v1 = v18;
            if ( v18 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x155u);
            else
              *((_BYTE *)this + 161) = 1;
          }
        }
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v22);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v23);
      if ( v6 )
      {
        v20 = (struct CD3DDeviceLevel1 *)((char *)v6 + 496);
LABEL_20:
        CD3DSurface::Release(v20);
      }
    }
  }
  return v1;
}
