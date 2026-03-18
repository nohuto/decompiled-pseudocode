/*
 * XREFs of ?Create@CFramebuffer@CComputeScribbleRenderer@@SAJPEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@EPEAPEAV12@@Z @ 0x1801B41CC
 * Callers:
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801AC0A0 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CFramebuffer@CComputeScribbleRenderer@@QEAA@XZ @ 0x1801ABD00 (--1CFramebuffer@CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ??0CFramebuffer@CComputeScribbleRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@E@Z @ 0x1801B3C10 (--0CFramebuffer@CComputeScribbleRenderer@@AEAA@PEAVCD3DDeviceLevel1@@PEAUID3D12Resource@@E@Z.c)
 *     ?Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801B45D0 (-Initialize@CFramebuffer@CComputeScribbleRenderer@@AEAAJXZ.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CFramebuffer::Create(
        struct CD3DDeviceLevel1 *a1,
        struct ID3D12Resource *a2,
        char a3,
        struct CComputeScribbleRenderer::CFramebuffer **a4)
{
  CComputeScribbleRenderer::CFramebuffer *v8; // rax
  CComputeScribbleRenderer::CFramebuffer *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v8 = (CComputeScribbleRenderer::CFramebuffer *)operator new(0xF8uLL);
  if ( v8 )
    v9 = CComputeScribbleRenderer::CFramebuffer::CFramebuffer(v8, a1, a2, a3);
  else
    v9 = 0LL;
  v10 = CComputeScribbleRenderer::CFramebuffer::Initialize(v9);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v11 = 0;
    *a4 = v9;
    v9 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
      (const char *)(unsigned int)v10);
  }
  if ( v9 )
  {
    CComputeScribbleRenderer::CFramebuffer::~CFramebuffer(v9);
    operator delete(v9);
  }
  return v11;
}
