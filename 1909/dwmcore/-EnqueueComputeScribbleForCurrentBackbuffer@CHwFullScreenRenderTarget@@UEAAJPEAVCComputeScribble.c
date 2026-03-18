/*
 * XREFs of ?EnqueueComputeScribbleForCurrentBackbuffer@CHwFullScreenRenderTarget@@UEAAJPEAVCComputeScribble@@@Z @ 0x1801660D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1801ABBD0 (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 *     ?Create@CComputeScribbleRenderer@@SAJPEAVCHwFullScreenRenderTarget@@PEAPEAV1@@Z @ 0x1801ABE34 (-Create@CComputeScribbleRenderer@@SAJPEAVCHwFullScreenRenderTarget@@PEAPEAV1@@Z.c)
 *     ?EnqueueForCurrentBackbuffer@CComputeScribbleRenderer@@QEAAXPEAVCComputeScribble@@@Z @ 0x1801ABEE8 (-EnqueueForCurrentBackbuffer@CComputeScribbleRenderer@@QEAAXPEAVCComputeScribble@@@Z.c)
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z @ 0x1801AC578 (-PreRender@CComputeScribbleRenderer@@QEAAJPEAVCRegion@@@Z.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::EnqueueComputeScribbleForCurrentBackbuffer(
        CHwFullScreenRenderTarget *this,
        struct CComputeScribble *a2)
{
  CComputeScribbleRenderer **v2; // r14
  CComputeScribbleRenderer *v4; // rcx
  unsigned int v6; // ebx
  CComputeScribbleRenderer *v7; // rdi
  CComputeScribbleRenderer *v9; // rcx
  int v10; // eax
  struct CComputeScribbleRenderer *v11; // [rsp+28h] [rbp-41h] BYREF
  char v12; // [rsp+30h] [rbp-39h]
  int *v13; // [rsp+40h] [rbp-29h] BYREF
  int v14; // [rsp+48h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v2 = (CComputeScribbleRenderer **)((char *)this + 344);
  v4 = (CComputeScribbleRenderer *)*((_QWORD *)this + 43);
  if ( !v4 )
  {
    v11 = 0LL;
    v12 = 1;
    v6 = CComputeScribbleRenderer::Create((CHwFullScreenRenderTarget *)((char *)this - 144), &v11);
    if ( v12 )
    {
      v7 = *v2;
      *v2 = v11;
      if ( v7 )
      {
        CComputeScribbleRenderer::~CComputeScribbleRenderer(v7);
        operator delete(v7);
      }
    }
    if ( (v6 & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A2,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
        (const char *)v6);
      return v6;
    }
    v9 = *v2;
    v14 = 0;
    v13 = &v14;
    v10 = CComputeScribbleRenderer::PreRender(v9, (struct CRegion *)&v13);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2A7,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwfullscreenrendertarget.cpp",
        (const char *)(unsigned int)v10);
      FastRegion::CRegion::FreeMemory((void **)&v13);
      return v6;
    }
    FastRegion::CRegion::FreeMemory((void **)&v13);
    v4 = (CComputeScribbleRenderer *)*((_QWORD *)this + 43);
  }
  CComputeScribbleRenderer::EnqueueForCurrentBackbuffer(v4, a2);
  return 0LL;
}
