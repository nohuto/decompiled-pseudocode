/*
 * XREFs of ?EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ @ 0x1801FBFA8
 * Callers:
 *     ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x1801FBB68 (-CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12F.c)
 *     ?GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1801FC61C (-GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     ?TryGetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1801FD3D0 (-TryGetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x18022C684 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z @ 0x1800EF06C (--0-$com_ptr_t@UIDXGIAdapter@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIDXGIAdapter@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CAsyncTask_CD3DDeviceLevel1::D3D12Resources_::Start__lambda_4c4b30c0bdee709bfcbf32217700bd40___ @ 0x1801FAFB4 (CAsyncTask_CD3DDeviceLevel1--D3D12Resources_--Start__lambda_4c4b30c0bdee709bfcbf32217700bd40___.c)
 *     ??_G?$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z @ 0x1801FB1C0 (--_G-$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAPEAXI@Z.c)
 *     ?GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z @ 0x1801FFC70 (-GetDirectInkFactory@CD2DContext@@UEAAJPEAPEAUIDCompositionDirectInkFactoryPartner@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::EnsureBeginCreateD3D12Resources(CD3DDeviceLevel1 *this)
{
  __int64 **v1; // rdi
  int DirectInkFactory; // eax
  int started; // ebx
  __int64 *v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  struct IDCompositionDirectInkFactoryPartner *v8; // [rsp+28h] [rbp-28h] BYREF
  __int64 **v9; // [rsp+30h] [rbp-20h]
  __int64 *v10; // [rsp+38h] [rbp-18h] BYREF
  char v11; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  struct IDCompositionDirectInkFactoryPartner *v13; // [rsp+60h] [rbp+10h] BYREF
  __int64 v14; // [rsp+68h] [rbp+18h] BYREF

  v1 = (__int64 **)((char *)this + 704);
  if ( !*((_QWORD *)this + 88) )
  {
    wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
      &v14,
      *(_QWORD *)(*((_QWORD *)this + 87) + 24LL));
    v13 = 0LL;
    DirectInkFactory = CD2DContext::GetDirectInkFactory(this, &v13);
    started = DirectInkFactory;
    if ( DirectInkFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x111B,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
        (const char *)(unsigned int)DirectInkFactory);
LABEL_11:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v13);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v14);
      return (unsigned int)started;
    }
    wil::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>::com_ptr_t<IDXGIAdapter,wil::err_returncode_policy>(
      &v7,
      v14);
    v8 = v13;
    if ( v13 )
      (*(void (__fastcall **)(struct IDCompositionDirectInkFactoryPartner *))(*(_QWORD *)v13 + 8LL))(v13);
    v10 = 0LL;
    v9 = v1;
    v11 = 1;
    started = CAsyncTask_CD3DDeviceLevel1::D3D12Resources_::Start__lambda_4c4b30c0bdee709bfcbf32217700bd40___(
                (__int64)&v7,
                &v10);
    if ( v11 )
    {
      v5 = *v9;
      *v9 = v10;
      if ( v5 )
        CAsyncTask<CD3DDeviceLevel1::D3D12Resources>::`scalar deleting destructor'(v5);
    }
    if ( started < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1121,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
        (const char *)(unsigned int)started);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v8);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v7);
      goto LABEL_11;
    }
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v8);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v7);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v13);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v14);
  }
  return 0LL;
}
