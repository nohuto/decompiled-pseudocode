/*
 * XREFs of ?ShareToD3D12@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z @ 0x1801FD1D8
 * Callers:
 *     ?GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z @ 0x180204E9C (-GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180063A40 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x1801FC61C (-GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::ShareToD3D12(
        CD3DDeviceLevel1 *this,
        struct ID3D11Texture2D *a2,
        struct ID3D12Resource **a3)
{
  unsigned int D3D12DeviceNoRef; // ebx
  __int64 v6; // rdx
  struct ID3D12Device *v7; // rdi
  struct ID3D11Texture2DVtbl *lpVtbl; // rax
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v14; // [rsp+30h] [rbp-18h] BYREF
  struct ID3D12Device *v15; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE hObject; // [rsp+68h] [rbp+20h] BYREF

  D3D12DeviceNoRef = CD3DDeviceLevel1::GetD3D12DeviceNoRef(this, &v15);
  if ( (D3D12DeviceNoRef & 0x80000000) == 0 )
  {
    v7 = v15;
    if ( !v15 )
    {
      D3D12DeviceNoRef = -2003292404;
      v6 = 1768LL;
      goto LABEL_3;
    }
    lpVtbl = a2->lpVtbl;
    v14 = 0LL;
    v9 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))lpVtbl->QueryInterface)(
           a2,
           &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
           &v14);
    D3D12DeviceNoRef = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6EC,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
        (const char *)(unsigned int)v9);
LABEL_16:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v14);
      return D3D12DeviceNoRef;
    }
    hObject = 0LL;
    v10 = v14;
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v10 + 104LL))(
            v10,
            0LL,
            0x10000000LL,
            0LL,
            &hObject);
    D3D12DeviceNoRef = v11;
    if ( v11 >= 0 )
    {
      v11 = ((__int64 (__fastcall *)(struct ID3D12Device *, HANDLE, GUID *, struct ID3D12Resource **))v7->lpVtbl->OpenSharedHandle)(
              v7,
              hObject,
              &GUID_696442be_a72e_4059_bc79_5b5c98040fad,
              a3);
      D3D12DeviceNoRef = v11;
      if ( v11 >= 0 )
      {
        D3D12DeviceNoRef = 0;
LABEL_14:
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        goto LABEL_16;
      }
      v12 = 1777LL;
    }
    else
    {
      v12 = 1775LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_14;
  }
  v6 = 1764LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
    (const char *)D3D12DeviceNoRef);
  return D3D12DeviceNoRef;
}
