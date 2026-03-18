/*
 * XREFs of ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x18015C5FC
 * Callers:
 *     ?Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801B5E70 (-Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ?CreateSharedHandleFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW4D3D11_FENCE_FLAG@@@Z @ 0x180025A64 (-CreateSharedHandleFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAXW.c)
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800DF1A8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ @ 0x18015CB5C (-EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18015D3A4 (-GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015EA50 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::CreateSharedFence(
        CD3DDeviceLevel1 *this,
        const struct CResourceTag *a2,
        __int64 a3,
        struct ID3D11Fence **a4,
        struct ID3D12Fence **a5)
{
  struct ID3D11Fence *v5; // rbx
  signed int D3D12Resources; // eax
  __int64 v9; // rcx
  unsigned int v10; // edi
  struct ID3D12Device *v11; // rsi
  const struct CResourceTag *v12; // rdx
  struct ID3D11Fence *v13; // r8
  signed int v14; // eax
  __int64 v15; // rcx
  HRESULT (__stdcall *OpenSharedHandle)(ID3D12Device *, HANDLE, const IID *const, void **); // rbx
  signed int v17; // eax
  __int64 v18; // rcx
  struct ID3D12Fence *v19; // rcx
  unsigned int v21; // [rsp+20h] [rbp-20h]
  HANDLE hObject; // [rsp+30h] [rbp-10h] BYREF
  struct ID3D12Device *v23; // [rsp+38h] [rbp-8h] BYREF
  struct ID3D11Fence *v24; // [rsp+78h] [rbp+38h] BYREF
  struct ID3D12Fence *v25; // [rsp+80h] [rbp+40h] BYREF

  v5 = 0LL;
  v25 = 0LL;
  hObject = 0LL;
  v24 = 0LL;
  D3D12Resources = CD3DDeviceLevel1::EnsureBeginCreateD3D12Resources(this);
  v10 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v21 = 2171;
    goto LABEL_13;
  }
  D3D12Resources = CD3DDeviceLevel1::GetD3D12DeviceNoRef(this, &v23);
  v10 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v21 = 2174;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, D3D12Resources, v21, 0LL);
    goto LABEL_14;
  }
  v11 = v23;
  if ( !v23 )
  {
    v10 = -2003292404;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x88982F0C, 0x882u, 0LL);
    goto LABEL_14;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
    &hObject,
    0LL);
  v14 = CD3DDeviceLevel1::CreateSharedHandleFence(this, v12, v13, &v24, &hObject, D3D11_FENCE_FLAG_NONE);
  v10 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x885u, 0LL);
  }
  else
  {
    OpenSharedHandle = v11->lpVtbl->OpenSharedHandle;
    wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v25);
    v17 = ((__int64 (__fastcall *)(struct ID3D12Device *, HANDLE, GUID *, struct ID3D12Fence **))OpenSharedHandle)(
            v11,
            hObject,
            &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
            &v25);
    v10 = v17;
    if ( v17 >= 0 )
    {
      v5 = 0LL;
      v19 = v25;
      v25 = 0LL;
      *a4 = v24;
      *a5 = v19;
      goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x887u, 0LL);
  }
  v5 = v24;
LABEL_14:
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v25);
  if ( v5 )
    ((void (__fastcall *)(struct ID3D11Fence *))v5->lpVtbl->Release)(v5);
  return v10;
}
