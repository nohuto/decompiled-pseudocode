/*
 * XREFs of ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1801ABBD0
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x18002BEA0 (-ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ.c)
 *     ??1CHwFullScreenRenderTarget@@MEAA@XZ @ 0x1800DA43C (--1CHwFullScreenRenderTarget@@MEAA@XZ.c)
 *     ?EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble@@@Z @ 0x1801660D0 (-EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble.c)
 *     ?SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z @ 0x1801666D0 (-SetHardwareProtection@CHwFullScreenRenderTarget@@UEAAJ_N@Z.c)
 *     ?Create@CComputeScribbleRenderer@@SAJPEAVCHwFullScreenRenderTarget@@PEAPEAV1@@Z @ 0x1801ABE34 (-Create@CComputeScribbleRenderer@@SAJPEAVCHwFullScreenRenderTarget@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002DE70 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x18007AE34 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_V@YAXPEAX_K@Z @ 0x1800E958C (--_V@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180187DB0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CScheduler@CComputeScribbleRenderer@@QEAA@XZ @ 0x1801B5350 (--1CScheduler@CComputeScribbleRenderer@@QEAA@XZ.c)
 */

void __fastcall CComputeScribbleRenderer::~CComputeScribbleRenderer(CComputeScribbleRenderer::CScheduler **this)
{
  int v2; // eax
  int v3; // eax
  CComputeScribbleRenderer::CScheduler *v4; // rdi
  CComputeScribbleRenderer::CScheduler *v5; // rdi
  char *v6; // rcx
  char *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0LL;
  v2 = (*(__int64 (__fastcall **)(CComputeScribbleRenderer::CScheduler *, __int64 *))(*(_QWORD *)*this + 40LL))(
         *this,
         &v10);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v9 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 168LL))(v10, &v9);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 64LL))(v9);
  v4 = this[7];
  this[7] = 0LL;
  if ( v4 )
  {
    CComputeScribbleRenderer::CScheduler::~CScheduler(v4);
    operator delete(v4);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v9);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v10);
  v5 = this[7];
  if ( v5 )
  {
    CComputeScribbleRenderer::CScheduler::~CScheduler(this[7]);
    operator delete(v5);
  }
  v6 = (char *)this[1];
  if ( v6 )
  {
    v7 = v6 - 8;
    `vector destructor iterator'(
      v6,
      8LL,
      *((_QWORD *)v6 - 1),
      (void (__fastcall *)(char *))std::unique_ptr<CComputeScribbleRenderer::CFramebuffer>::~unique_ptr<CComputeScribbleRenderer::CFramebuffer>);
    operator delete[](v7);
  }
}
