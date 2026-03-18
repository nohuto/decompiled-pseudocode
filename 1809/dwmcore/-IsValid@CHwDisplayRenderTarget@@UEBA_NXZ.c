/*
 * XREFs of ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18005A280
 * Callers:
 *     ?IsValid@CHwDisplayRenderTarget@@WNA@EBA_NXZ @ 0x1800F1160 (-IsValid@CHwDisplayRenderTarget@@WNA@EBA_NXZ.c)
 *     ?GetLogicalBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x180207220 (-GetLogicalBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwDisplayRenderTarget::IsValid(CHwDisplayRenderTarget *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 30);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1) != 0;
  return v2;
}
