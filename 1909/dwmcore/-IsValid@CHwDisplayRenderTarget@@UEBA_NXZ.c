/*
 * XREFs of ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x1800BA7D0
 * Callers:
 *     ?IsValid@CHwDisplayRenderTarget@@WJA@EBA_NXZ @ 0x1800F0570 (-IsValid@CHwDisplayRenderTarget@@WJA@EBA_NXZ.c)
 *     ?GetLogicalBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x1801651F0 (-GetLogicalBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwDisplayRenderTarget::IsValid(CHwDisplayRenderTarget *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 22);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1) != 0;
  return v2;
}
