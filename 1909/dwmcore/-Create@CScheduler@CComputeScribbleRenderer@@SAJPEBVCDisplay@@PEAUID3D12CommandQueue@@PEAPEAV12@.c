/*
 * XREFs of ?Create@CScheduler@CComputeScribbleRenderer@@SAJPEBVCDisplay@@PEAUID3D12CommandQueue@@PEAPEAV12@@Z @ 0x1801B5724
 * Callers:
 *     ?Initialize@CComputeScribbleRenderer@@AEAAJXZ @ 0x1801AC0A0 (-Initialize@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CScheduler@CComputeScribbleRenderer@@AEAA@PEAUID3D12CommandQueue@@@Z @ 0x1801B52B4 (--0CScheduler@CComputeScribbleRenderer@@AEAA@PEAUID3D12CommandQueue@@@Z.c)
 *     ??1CScheduler@CComputeScribbleRenderer@@QEAA@XZ @ 0x1801B5350 (--1CScheduler@CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z @ 0x1801B5C5C (-Initialize@CScheduler@CComputeScribbleRenderer@@AEAAJPEBVCDisplay@@@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CScheduler::Create(
        const struct CDisplay *a1,
        struct ID3D12CommandQueue *a2,
        struct CComputeScribbleRenderer::CScheduler **a3)
{
  CComputeScribbleRenderer::CScheduler *v6; // rax
  CComputeScribbleRenderer::CScheduler *v7; // rbx
  int v8; // eax
  void *v9; // rdx
  unsigned int v10; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (CComputeScribbleRenderer::CScheduler *)operator new(0x98uLL);
  if ( v6 )
    v7 = CComputeScribbleRenderer::CScheduler::CScheduler(v6, a2);
  else
    v7 = 0LL;
  v8 = CComputeScribbleRenderer::CScheduler::Initialize(v7, a1);
  v10 = v8;
  if ( v8 >= 0 )
  {
    v10 = 0;
    *a3 = v7;
    v7 = 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
      (const char *)(unsigned int)v8);
  }
  if ( v7 )
  {
    CComputeScribbleRenderer::CScheduler::~CScheduler(v7, v9);
    operator delete(v7);
  }
  return v10;
}
