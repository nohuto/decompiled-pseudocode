/*
 * XREFs of ?ShareToD3D12@CD3DDeviceLevel1@@QEAAJPEAUID3D11Texture2D@@PEAPEAUID3D12Resource@@@Z @ 0x18015E160
 * Callers:
 *     ?GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z @ 0x1801652B8 (-GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180026730 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800DF1A8 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z @ 0x18015D3A4 (-GetD3D12DeviceNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAUID3D12Device@@@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::ShareToD3D12(
        CD3DDeviceLevel1 *this,
        struct ID3D11Texture2D *a2,
        struct ID3D12Resource **a3)
{
  unsigned int D3D12DeviceNoRef; // ebx
  __int64 v6; // rdx
  struct ID3D12Device *v7; // rsi
  struct ID3D11Texture2DVtbl *lpVtbl; // rax
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64, _QWORD, HANDLE *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  struct ID3D12Device *v16; // [rsp+38h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  HANDLE hObject; // [rsp+68h] [rbp+20h] BYREF

  D3D12DeviceNoRef = CD3DDeviceLevel1::GetD3D12DeviceNoRef(this, &v16);
  if ( (D3D12DeviceNoRef & 0x80000000) == 0 )
  {
    v7 = v16;
    if ( !v16 )
    {
      D3D12DeviceNoRef = -2003292404;
      v6 = 1773LL;
      goto LABEL_3;
    }
    lpVtbl = a2->lpVtbl;
    v15 = 0LL;
    v9 = ((__int64 (__fastcall *)(struct ID3D11Texture2D *, GUID *, __int64 *))lpVtbl->QueryInterface)(
           a2,
           &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
           &v15);
    D3D12DeviceNoRef = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6F1,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
        (const char *)(unsigned int)v9);
LABEL_16:
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v15);
      return D3D12DeviceNoRef;
    }
    v10 = v15;
    hObject = 0LL;
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, HANDLE *))(*(_QWORD *)v15 + 104LL);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
      &hObject,
      0LL);
    v12 = v11(v10, 0LL, 0x10000000LL, 0LL, &hObject);
    D3D12DeviceNoRef = v12;
    if ( v12 >= 0 )
    {
      v12 = ((__int64 (__fastcall *)(struct ID3D12Device *, HANDLE, GUID *, struct ID3D12Resource **))v7->lpVtbl->OpenSharedHandle)(
              v7,
              hObject,
              &GUID_696442be_a72e_4059_bc79_5b5c98040fad,
              a3);
      D3D12DeviceNoRef = v12;
      if ( v12 >= 0 )
      {
        D3D12DeviceNoRef = 0;
LABEL_14:
        if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
          CloseHandle(hObject);
        goto LABEL_16;
      }
      v13 = 1782LL;
    }
    else
    {
      v13 = 1780LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_14;
  }
  v6 = 1769LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
    (const char *)D3D12DeviceNoRef);
  return D3D12DeviceNoRef;
}
