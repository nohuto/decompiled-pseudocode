/*
 * XREFs of ?GetLogicalBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x180207220
 * Callers:
 *     <none>
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18005A280 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801448EC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::GetLogicalBackBuffer(
        CHwStereoFullScreenRenderTarget *this,
        struct CD3DSurface **a2)
{
  struct CD3DSurface *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( CHwDisplayRenderTarget::IsValid((CHwStereoFullScreenRenderTarget *)((char *)this - 208)) )
  {
    v5 = (struct CD3DSurface *)*((_QWORD *)this - 1);
    *a2 = v5;
    if ( v5 )
      (**(void (__fastcall ***)(struct CD3DSurface *))v5)(v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\hw\\hwstereofullscreenrendertarget.cpp",
      (const char *)0x8898008DLL);
    return 2291662989LL;
  }
}
