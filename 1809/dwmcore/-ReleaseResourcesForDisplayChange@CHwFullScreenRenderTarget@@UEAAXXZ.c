/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@UEAAXXZ @ 0x1800E8F00
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@WNA@EAAXXZ @ 0x1800F1210 (-ReleaseResourcesForDisplayChange@CHwFullScreenRenderTarget@@WNA@EAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ @ 0x180207480 (-ReleaseResourcesForDisplayChange@CHwStereoFullScreenRenderTarget@@UEAAXXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ @ 0x180209F90 (-ReleaseResourcesForDisplayChange@CHDRConversionRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??1CComputeScribbleRenderer@@QEAA@XZ @ 0x18022C250 (--1CComputeScribbleRenderer@@QEAA@XZ.c)
 */

void __fastcall CHwFullScreenRenderTarget::ReleaseResourcesForDisplayChange(CHwFullScreenRenderTarget *this)
{
  __int64 v2; // rcx
  CComputeScribbleRenderer *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 30);
  if ( v2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 136LL))(v2) )
    {
      v5 = 0LL;
      (*(void (__fastcall **)(char *, _QWORD, __int64 *))(*((_QWORD *)this + 26) + 400LL))((char *)this + 208, 0LL, &v5);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  v3 = (CComputeScribbleRenderer *)*((_QWORD *)this + 69);
  *((_QWORD *)this + 69) = 0LL;
  if ( v3 )
  {
    CComputeScribbleRenderer::~CComputeScribbleRenderer(v3);
    operator delete(v3, 0x40uLL);
  }
  *((_BYTE *)this + 560) = 0;
  v4 = *((_QWORD *)this + 30);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 30) = 0LL;
  }
  CHwSurfaceRenderTarget::ReleaseResourcesForDisplayChange(this);
}
