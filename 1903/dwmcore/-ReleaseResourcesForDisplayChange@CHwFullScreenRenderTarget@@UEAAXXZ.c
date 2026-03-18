/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x180023F70
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@WJA@EAAXXZ @ 0x1800EC9C0 (-ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@WJA@EAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x180166B60 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ @ 0x180169DF0 (-ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180023F3C (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x1801AD490 (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 */

void __fastcall CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(CHwFullScreenRenderTarget *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  CComputeScribbleRenderer *v4; // rdi
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 176);
  v3 = *((_QWORD *)this + 22);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 144LL))(v3) )
    {
      v5 = 0LL;
      (*(void (__fastcall **)(char *, _QWORD, __int64 *))(*((_QWORD *)this + 18) + 408LL))((char *)this + 144, 0LL, &v5);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v4 = (CComputeScribbleRenderer *)*((_QWORD *)this + 61);
  *((_QWORD *)this + 61) = 0LL;
  if ( v4 )
  {
    CComputeScribbleRenderer::~CComputeScribbleRenderer(v4);
    operator delete(v4, 0x40uLL);
  }
  *((_BYTE *)this + 496) = 0;
  ReleaseInterface<CD3DSurface>(v1);
  CHwSurfaceRenderTarget::ReleaseResourcesForDisplayChange(this);
}
