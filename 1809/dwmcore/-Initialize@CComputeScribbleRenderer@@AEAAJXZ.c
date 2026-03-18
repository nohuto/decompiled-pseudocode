/*
 * XREFs of ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x18022C684
 * Callers:
 *     ?Create@CComputeScribbleRenderer@@SAJPEAVCHwFullScreenRenderTarget@@PEAPEAV1@@Z @ 0x18022C434 (-Create@CComputeScribbleRenderer@@SAJPEAVCHwFullScreenRenderTarget@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000EB00 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800C2AD8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800EC1D0 (--_V@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ @ 0x1801FBFA8 (-EnsureBeginCreateD3D12Resources@CD3DDeviceLevel1@@AEAAJXZ.c)
 *     ?WaitForResult@?$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAJPEAPEAUD3D12Resources@CD3DDeviceLevel1@@@Z @ 0x1801FD8FC (-WaitForResult@-$CAsyncTask@UD3D12Resources@CD3DDeviceLevel1@@@@QEAAJPEAPEAUD3D12Resources@CD3DD.c)
 *     ?GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z @ 0x180204E9C (-GetPhysicalBuffer@CSwapChainBase@@QEAAJIPEAPEAUID3D12Resource@@@Z.c)
 *     ??1CFramebuffer@CComputeScribbleRenderer@@QEAA@XZ @ 0x18022C2F0 (--1CFramebuffer@CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEAPEAV12@@Z @ 0x18022DB30 (-Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEA.c)
 *     ??1CScheduler@CComputeScribbleRenderer@@QEAA@XZ @ 0x18022EBE4 (--1CScheduler@CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@@Z @ 0x18022EFB8 (-Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@.c)
 */

__int64 __fastcall CComputeScribbleRenderer::Initialize(CComputeScribbleRenderer *this)
{
  __int64 *v2; // r15
  CSwapChainBase *v3; // r13
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // kr00_8
  bool v8; // cf
  SIZE_T v9; // rax
  char *v10; // rax
  char *v11; // rbx
  char *v12; // rcx
  char *v13; // rbx
  __int64 v14; // rsi
  int PhysicalBuffer; // eax
  int v16; // ebx
  __int64 v17; // rax
  CComputeScribbleRenderer::CFramebuffer *v18; // r14
  int D3D12Resources; // eax
  __int64 v20; // rdx
  struct ID3D12CommandQueue *lpVtbl; // rdx
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v25; // rax
  int v26; // edi
  CComputeScribbleRenderer::CScheduler *v27; // rbx
  CComputeScribbleRenderer::CFramebuffer **v28; // [rsp+20h] [rbp-20h]
  CComputeScribbleRenderer::CScheduler **v29; // [rsp+20h] [rbp-20h]
  struct CComputeScribbleRenderer::CFramebuffer *v30; // [rsp+28h] [rbp-18h] BYREF
  char v31; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  struct ID3D12Resource *v33; // [rsp+70h] [rbp+30h] BYREF

  v2 = *(__int64 **)(*(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 104LL))(*(_QWORD *)this) + 16)
                   + 80LL);
  v3 = *(CSwapChainBase **)(*(_QWORD *)this + 240LL);
  v4 = *((_DWORD *)v3 + 40);
  *((_DWORD *)this + 4) = v4;
  v5 = v4;
  v7 = v4;
  v6 = 8LL * v4;
  if ( !is_mul_ok(v7, 8uLL) )
    v6 = -1LL;
  v8 = __CFADD__(v6, 8LL);
  v9 = v6 + 8;
  if ( v8 )
    v9 = -1LL;
  v10 = (char *)operator new(v9);
  if ( v10 )
  {
    v11 = v10 + 8;
    *(_QWORD *)v10 = v5;
    `vector constructor iterator'(
      v10 + 8,
      8LL,
      (unsigned int)v5,
      (void (__fastcall *)(char *))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  }
  else
  {
    v11 = 0LL;
  }
  v12 = (char *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 1) = v11;
  if ( v12 )
  {
    v13 = v12 - 8;
    `vector destructor iterator'(
      v12,
      8LL,
      *((_QWORD *)v12 - 1),
      (void (__fastcall *)(char *))std::unique_ptr<CComputeScribbleRenderer::CFramebuffer>::~unique_ptr<CComputeScribbleRenderer::CFramebuffer>);
    operator delete[](v13);
  }
  v14 = 0LL;
  if ( *((_DWORD *)this + 4) )
  {
    while ( 1 )
    {
      v33 = 0LL;
      PhysicalBuffer = CSwapChainBase::GetPhysicalBuffer(v3, v14, &v33);
      v16 = PhysicalBuffer;
      if ( PhysicalBuffer < 0 )
        break;
      v17 = *((_QWORD *)this + 1);
      v30 = 0LL;
      v31 = 1;
      v28 = (CComputeScribbleRenderer::CFramebuffer **)(v17 + 8 * v14);
      v16 = CComputeScribbleRenderer::CFramebuffer::Create((struct CD3DDeviceLevel1 *)v2, v33, v14, &v30);
      if ( v31 )
      {
        v18 = *v28;
        *v28 = v30;
        if ( v18 )
        {
          CComputeScribbleRenderer::CFramebuffer::~CFramebuffer(v18);
          operator delete(v18);
        }
      }
      if ( v16 < 0 )
      {
        v22 = (unsigned int)v16;
        v23 = 83LL;
        goto LABEL_22;
      }
      wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v33);
      v14 = (unsigned int)(v14 + 1);
      if ( (unsigned int)v14 >= *((_DWORD *)this + 4) )
        goto LABEL_17;
    }
    v22 = (unsigned int)PhysicalBuffer;
    v23 = 80LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
      (const char *)v22);
    wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64 *)&v33);
    return (unsigned int)v16;
  }
LABEL_17:
  D3D12Resources = CD3DDeviceLevel1::EnsureBeginCreateD3D12Resources((CD3DDeviceLevel1 *)v2);
  v16 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v20 = 1298LL;
LABEL_19:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\d3ddevicelevel1.cpp",
      (const char *)(unsigned int)D3D12Resources);
    lpVtbl = (struct ID3D12CommandQueue *)v33;
    goto LABEL_27;
  }
  D3D12Resources = CAsyncTask<CD3DDeviceLevel1::D3D12Resources>::WaitForResult(v2[88], &v33);
  v16 = D3D12Resources;
  if ( D3D12Resources < 0 )
  {
    v20 = 1301LL;
    goto LABEL_19;
  }
  v16 = 0;
  lpVtbl = (struct ID3D12CommandQueue *)v33[1].lpVtbl;
LABEL_27:
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x57,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
      (const char *)(unsigned int)v16);
    return (unsigned int)v16;
  }
  v30 = 0LL;
  v29 = (CComputeScribbleRenderer::CScheduler **)((char *)this + 56);
  v25 = *(_QWORD *)this;
  v31 = 1;
  v26 = CComputeScribbleRenderer::CScheduler::Create(*(const struct CDisplay **)(v25 + 232), lpVtbl, &v30);
  if ( v31 )
  {
    v27 = *v29;
    *v29 = v30;
    if ( v27 )
    {
      CComputeScribbleRenderer::CScheduler::~CScheduler(v27);
      operator delete(v27);
    }
  }
  if ( v26 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5A,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
    (const char *)(unsigned int)v26);
  return (unsigned int)v26;
}
