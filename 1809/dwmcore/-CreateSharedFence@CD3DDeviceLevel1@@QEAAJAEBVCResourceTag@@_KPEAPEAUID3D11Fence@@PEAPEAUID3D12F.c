/*
 * XREFs of ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x1801FBB68
 * Callers:
 *     ?Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ @ 0x18022DF34 (-Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180063A40 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateSharedHandleFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x1800D66A8 (-CreateSharedHandleFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ @ 0x1801FBFA8 (-EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1801FC61C (-GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSharedFence(
        CD3DDeviceLevel1 *this,
        struct ID3D11Fence *a2,
        __int64 a3,
        struct ID3D11Fence **a4,
        struct ID3D12Fence **a5)
{
  struct ID3D11Fence *v5; // rbx
  int D3D12Resources; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  struct ID3D11Fence *v11; // rsi
  const struct CResourceTag *v12; // rdx
  struct ID3D11Fence *v13; // r8
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  struct ID3D12Fence *v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-20h]
  HANDLE hObject[2]; // [rsp+30h] [rbp-10h] BYREF
  struct ID3D11Fence *v22; // [rsp+78h] [rbp+38h] BYREF
  struct ID3D12Fence *v23; // [rsp+80h] [rbp+40h] BYREF

  v22 = a2;
  v5 = 0LL;
  v23 = 0LL;
  hObject[0] = 0LL;
  D3D12Resources = CD3DDeviceLevel1::EnsureBeginCreateD3D12Resources(this);
  v10 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v20 = 2170;
    goto LABEL_13;
  }
  D3D12Resources = CD3DDeviceLevel1::GetD3D12DeviceNoRef(this, (struct ID3D12Device **)&v22);
  v10 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v20 = 2173;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, D3D12Resources, v20);
    goto LABEL_14;
  }
  v11 = v22;
  if ( !v22 )
  {
    v10 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003292404, 0x881u);
    goto LABEL_14;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    hObject,
    0LL);
  v22 = 0LL;
  v14 = CD3DDeviceLevel1::CreateSharedHandleFence(this, v12, v13, &v22, hObject, D3D11_FENCE_FLAG_NONE);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x884u);
  }
  else
  {
    wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)&v23);
    v16 = ((__int64 (__fastcall *)(struct ID3D11Fence *, HANDLE, GUID *, struct ID3D12Fence **))v11->lpVtbl[3].Release)(
            v11,
            hObject[0],
            &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
            &v23);
    v10 = v16;
    if ( v16 >= 0 )
    {
      v18 = v23;
      v23 = 0LL;
      *a4 = v22;
      *a5 = v18;
      goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x886u);
  }
  v5 = v22;
LABEL_14:
  if ( (unsigned __int64)hObject[0] - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(hObject[0]);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v23);
  if ( v5 )
    ((void (__fastcall *)(struct ID3D11Fence *))v5->lpVtbl->Release)(v5);
  return v10;
}
