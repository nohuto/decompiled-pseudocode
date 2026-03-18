/*
 * XREFs of ?IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x1800BD8D0
 * Callers:
 *     ?IsHardwareProtected@CHwDisplayRenderTarget@@WJA@EBA_NXZ @ 0x1800EC8A0 (-IsHardwareProtected@CHwDisplayRenderTarget@@WJA@EBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwDisplayRenderTarget::IsHardwareProtected(CHwDisplayRenderTarget *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 256LL))(*((_QWORD *)this + 22));
  return v2;
}
