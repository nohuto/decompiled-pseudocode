/*
 * XREFs of ?Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ @ 0x18022DF34
 * Callers:
 *     ?Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEAPEAV12@@Z @ 0x18022DB30 (-Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEA.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180085E50 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180143A08 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18015930C (-reset@-$com_ptr_t@UIDwmSpatialWorld@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12Fence@@@Z @ 0x1801FBB68 (-CreateSharedFence@CD3DDeviceLevel1@@QEAAJAEBVCResourceTag@@_KPEAPEAUID3D11Fence@@PEAPEAUID3D12F.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CFramebuffer::Initialize(CComputeScribbleRenderer::CFramebuffer *this)
{
  __int64 v1; // rbx
  int SharedFence; // eax
  signed int LastErrorFailHr; // ebx
  __int64 v5; // rdx
  struct ID3D11Fence *v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  struct ID3D11Fence *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  wil::details *v13; // rcx
  wil::details *Event; // rbx
  __int64 v15; // r8
  const char *v16; // r9
  unsigned __int64 v17; // r9
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdx
  wil::details *v24; // rcx
  wil::details *v25; // rbx
  __int64 v26; // r8
  const char *v27; // r9
  struct ID3D11Fence *v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v33; // [rsp+50h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 1);
  v33 = 0LL;
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset(&v33);
  SharedFence = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v1 + 56LL))(
                  v1,
                  &GUID_189819f1_1db6_4b57_be54_1821339b85f7,
                  &v33);
  LastErrorFailHr = SharedFence;
  if ( SharedFence < 0 )
  {
    v5 = 45LL;
LABEL_37:
    v17 = (unsigned int)SharedFence;
    goto LABEL_38;
  }
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)this + 8);
  v8 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  SharedFence = CD3DDeviceLevel1::CreateSharedFence(
                  *(CD3DDeviceLevel1 **)this,
                  v6,
                  v7,
                  (struct ID3D11Fence **)this + 7,
                  (struct ID3D12Fence **)this + 8);
  LastErrorFailHr = SharedFence;
  if ( SharedFence < 0 )
  {
    v5 = 49LL;
    goto LABEL_37;
  }
  wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)this + 10);
  v11 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  SharedFence = CD3DDeviceLevel1::CreateSharedFence(
                  *(CD3DDeviceLevel1 **)this,
                  v9,
                  v10,
                  (struct ID3D11Fence **)this + 9,
                  (struct ID3D12Fence **)this + 10);
  LastErrorFailHr = SharedFence;
  if ( SharedFence < 0 )
  {
    v5 = 51LL;
    goto LABEL_37;
  }
  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
      (wil::details **)this + 11,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v13, v12, v15, v16);
  }
  if ( LastErrorFailHr >= 0 )
  {
    v18 = v33;
    v19 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = 0LL;
    if ( v19 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    SharedFence = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, char *))(*(_QWORD *)v18 + 72LL))(
                    v18,
                    2LL,
                    &GUID_6102dee4_af59_4b09_b999_b44d73f09b24,
                    (char *)this + 16);
    LastErrorFailHr = SharedFence;
    if ( SharedFence < 0 )
    {
      v5 = 56LL;
      goto LABEL_37;
    }
    v20 = v33;
    v21 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    SharedFence = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, GUID *, char *))(*(_QWORD *)v20 + 96LL))(
                    v20,
                    0LL,
                    2LL,
                    *((_QWORD *)this + 2),
                    0LL,
                    &GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455,
                    (char *)this + 24);
    LastErrorFailHr = SharedFence;
    if ( SharedFence < 0 )
    {
      v5 = 59LL;
      goto LABEL_37;
    }
    SharedFence = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 72LL))(*((_QWORD *)this + 3));
    LastErrorFailHr = SharedFence;
    if ( SharedFence < 0 )
    {
      v5 = 60LL;
      goto LABEL_37;
    }
    v22 = v33;
    wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)this + 4);
    SharedFence = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v22 + 288LL))(
                    v22,
                    0LL,
                    1LL,
                    &GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76,
                    (char *)this + 32);
    LastErrorFailHr = SharedFence;
    if ( SharedFence < 0 )
    {
      v5 = 66LL;
      goto LABEL_37;
    }
    v25 = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
    if ( v25 )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
        (wil::details **)this + 5,
        v25);
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v24, v23, v26, v27);
    }
    if ( LastErrorFailHr >= 0 )
    {
      wil::com_ptr_t<IDwmSpatialWorld,wil::err_returncode_policy>::reset((__int64 *)this + 28);
      v30 = *((_QWORD *)this + 27);
      *((_QWORD *)this + 27) = 0LL;
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
      SharedFence = CD3DDeviceLevel1::CreateSharedFence(
                      *(CD3DDeviceLevel1 **)this,
                      v28,
                      v29,
                      (struct ID3D11Fence **)this + 27,
                      (struct ID3D12Fence **)this + 28);
      LastErrorFailHr = SharedFence;
      if ( SharedFence >= 0 )
      {
        LastErrorFailHr = 0;
        goto LABEL_40;
      }
      v5 = 71LL;
      goto LABEL_37;
    }
    v17 = (unsigned int)LastErrorFailHr;
    v5 = 67LL;
  }
  else
  {
    v17 = (unsigned int)LastErrorFailHr;
    v5 = 52LL;
  }
LABEL_38:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
    (const char *)v17);
LABEL_40:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v33);
  return (unsigned int)LastErrorFailHr;
}
