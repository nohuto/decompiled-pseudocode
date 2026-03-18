/*
 * XREFs of _anonymous_namespace_::CreateD3D12ResourcesInternal @ 0x18015AC08
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4c4b30c0bdee709bfcbf32217700bd40__long_CD3DDeviceLevel1::D3D12Resources___::_Do_call @ 0x18015D2E0 (std--_Func_impl_no_alloc__lambda_4c4b30c0bdee709bfcbf32217700bd40__long_CD3DDeviceL_ea_18015D2E0.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x180159330 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0d @ 0x18015D590 (McTemplateU0d.c)
 */

__int64 __fastcall anonymous_namespace_::CreateD3D12ResourcesInternal(IUnknown **a1, __int64 *a2, void **a3)
{
  HRESULT v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // r8
  int v9; // eax
  int v10; // edi
  void *v11; // rbx
  __int64 (__fastcall *v12)(void *, _DWORD *, GUID *, __int64 *); // rdi
  int v13; // eax
  __int64 v14; // rdx
  void *v15; // rcx
  void *v16; // rbx
  __int64 v18; // [rsp+30h] [rbp-40h] BYREF
  void *ppDevice; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v20[2]; // [rsp+40h] [rbp-30h] BYREF
  int v21; // [rsp+48h] [rbp-28h]
  _DWORD v22[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  ppDevice = 0LL;
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&ppDevice);
  v6 = D3D12CreateDevice(*a1, D3D_FEATURE_LEVEL_12_0, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, &ppDevice);
  v7 = v6;
  if ( v6 == -2005270524 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v8 = 6LL;
LABEL_11:
      McTemplateU0d(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_COMPUTESCRIBBLE_INCOMPATIBLE, v8);
      goto LABEL_12;
    }
    goto LABEL_12;
  }
  if ( v6 >= 0 )
  {
    v23 = 0LL;
    v21 = 0;
    v22[1] = 10000;
    v20[1] = 10000;
    v22[0] = 2;
    v20[0] = 2;
    v9 = (*(__int64 (__fastcall **)(void *, __int64, _DWORD *, __int64))(*(_QWORD *)ppDevice + 104LL))(
           ppDevice,
           20LL,
           v20,
           12LL);
    v10 = v9;
    if ( v9 >= 0 )
    {
      if ( !v21 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          v8 = 2LL;
          goto LABEL_11;
        }
LABEL_12:
        wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(a3);
        wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(a3 + 1);
LABEL_23:
        v7 = 0;
        goto LABEL_24;
      }
      v11 = ppDevice;
      v18 = 0LL;
      v12 = *(__int64 (__fastcall **)(void *, _DWORD *, GUID *, __int64 *))(*(_QWORD *)ppDevice + 64LL);
      wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset(&v18);
      v13 = v12(v11, v22, &GUID_0ec870a6_5d7e_4c22_8cfc_5baae07616ed, &v18);
      v7 = v13;
      if ( v13 >= 0 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)*a2 + 32LL))(*a2, ppDevice, v18);
        v7 = v13;
        if ( v13 >= 0 )
        {
          v15 = ppDevice;
          v16 = *a3;
          *a3 = ppDevice;
          if ( v15 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v15 + 8LL))(v15);
          if ( v16 )
            (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 16LL))(v16);
          wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
            (__int64 *)a3 + 1,
            v18);
          wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v18);
          goto LABEL_23;
        }
        v14 = 4379LL;
      }
      else
      {
        v14 = 4376LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
        (const char *)(unsigned int)v13);
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v18);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x110A,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
        (const char *)(unsigned int)v9);
      v7 = v10;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10F1,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
      (const char *)(unsigned int)v6);
  }
LABEL_24:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&ppDevice);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)a1);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(a2);
  return v7;
}
