/*
 * XREFs of ?Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801B45D0
 * Callers:
 *     ?Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEAPEAV12@@Z @ 0x1801B41CC (-Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEA.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800B2D2C (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180153F48 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x18015AF1C (-CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12F.c)
 *     ?reset@?$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015D370 (-reset@-$com_ptr_t@UID3D12Fence@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CFramebuffer::Initialize(CComputeScribbleRenderer::CFramebuffer *this)
{
  __int64 v1; // rdi
  __int64 (__fastcall *v3)(__int64, GUID *, __int64 *); // rbx
  int SharedFence; // eax
  signed int LastErrorFailHr; // ebx
  __int64 v6; // rdx
  CD3DDeviceLevel1 *v7; // rsi
  const struct CResourceTag *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  CD3DDeviceLevel1 *v11; // rsi
  const struct CResourceTag *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  wil::details *v16; // rcx
  wil::details *Event; // rbx
  __int64 v18; // r8
  const char *v19; // r9
  unsigned __int64 v20; // r9
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 (__fastcall *v24)(__int64, __int64, GUID *, char *); // rdi
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 (__fastcall *v28)(__int64, _QWORD, __int64, _QWORD, _QWORD, GUID *, char *); // rbp
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, _QWORD, __int64, GUID *, char *); // rsi
  __int64 v31; // rdx
  wil::details *v32; // rcx
  wil::details *v33; // rbx
  __int64 v34; // r8
  const char *v35; // r9
  CD3DDeviceLevel1 *v36; // rdi
  const struct CResourceTag *v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 *v42; // [rsp+60h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 1);
  v42 = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v1 + 56LL);
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)&v42);
  SharedFence = v3(v1, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, (__int64 *)&v42);
  LastErrorFailHr = SharedFence;
  if ( SharedFence < 0 )
  {
    v6 = 45LL;
LABEL_37:
    v20 = (unsigned int)SharedFence;
    goto LABEL_38;
  }
  v7 = *(CD3DDeviceLevel1 **)this;
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)this + 8);
  v10 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  SharedFence = CD3DDeviceLevel1::CreateSharedFence(
                  v7,
                  v8,
                  v9,
                  (struct ID3D11Fence **)this + 7,
                  (struct ID3D12Fence **)this + 8);
  LastErrorFailHr = SharedFence;
  if ( SharedFence < 0 )
  {
    v6 = 49LL;
    goto LABEL_37;
  }
  v11 = *(CD3DDeviceLevel1 **)this;
  wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)this + 10);
  v14 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  SharedFence = CD3DDeviceLevel1::CreateSharedFence(
                  v11,
                  v12,
                  v13,
                  (struct ID3D11Fence **)this + 9,
                  (struct ID3D12Fence **)this + 10);
  LastErrorFailHr = SharedFence;
  if ( SharedFence < 0 )
  {
    v6 = 51LL;
    goto LABEL_37;
  }
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 11,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v16, v15, v18, v19);
  }
  if ( LastErrorFailHr >= 0 )
  {
    v21 = (__int64)v42;
    v22 = *((_QWORD *)this + 2);
    v23 = *v42;
    *((_QWORD *)this + 2) = 0LL;
    v24 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, char *))(v23 + 72);
    if ( v22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    SharedFence = v24(v21, 2LL, &GUID_6102dee4_af59_4b09_b999_b44d73f09b24, (char *)this + 16);
    LastErrorFailHr = SharedFence;
    if ( SharedFence < 0 )
    {
      v6 = 56LL;
      goto LABEL_37;
    }
    v25 = (__int64)v42;
    v26 = *((_QWORD *)this + 3);
    v27 = *v42;
    *((_QWORD *)this + 3) = 0LL;
    v28 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, GUID *, char *))(v27 + 96);
    if ( v26 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    SharedFence = v28(
                    v25,
                    0LL,
                    2LL,
                    *((_QWORD *)this + 2),
                    0LL,
                    &GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455,
                    (char *)this + 24);
    LastErrorFailHr = SharedFence;
    if ( SharedFence < 0 )
    {
      v6 = 59LL;
      goto LABEL_37;
    }
    SharedFence = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 72LL))(*((_QWORD *)this + 3));
    LastErrorFailHr = SharedFence;
    if ( SharedFence < 0 )
    {
      v6 = 60LL;
      goto LABEL_37;
    }
    v29 = (__int64)v42;
    v30 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*v42 + 288);
    wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)this + 4);
    SharedFence = v30(v29, 0LL, 1LL, &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76, (char *)this + 32);
    LastErrorFailHr = SharedFence;
    if ( SharedFence < 0 )
    {
      v6 = 66LL;
      goto LABEL_37;
    }
    v33 = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( v33 )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (wil::details **)this + 5,
        v33);
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v32, v31, v34, v35);
    }
    if ( LastErrorFailHr >= 0 )
    {
      v36 = *(CD3DDeviceLevel1 **)this;
      wil::com_ptr_t<ID3D12Fence,wil::err_returncode_policy>::reset((__int64 *)this + 28);
      v39 = *((_QWORD *)this + 27);
      *((_QWORD *)this + 27) = 0LL;
      if ( v39 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
      SharedFence = CD3DDeviceLevel1::CreateSharedFence(
                      v36,
                      v37,
                      v38,
                      (struct ID3D11Fence **)this + 27,
                      (struct ID3D12Fence **)this + 28);
      LastErrorFailHr = SharedFence;
      if ( SharedFence >= 0 )
      {
        LastErrorFailHr = 0;
        goto LABEL_40;
      }
      v6 = 71LL;
      goto LABEL_37;
    }
    v20 = (unsigned int)LastErrorFailHr;
    v6 = 67LL;
  }
  else
  {
    v20 = (unsigned int)LastErrorFailHr;
    v6 = 52LL;
  }
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
    (const char *)v20);
LABEL_40:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v42);
  return (unsigned int)LastErrorFailHr;
}
