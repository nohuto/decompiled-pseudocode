/*
 * XREFs of ?IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180060270
 * Callers:
 *     ?IsHardwareProtected@CHwDisplayRenderTarget@@WNA@EBA_NXZ @ 0x1800F1150 (-IsHardwareProtected@CHwDisplayRenderTarget@@WNA@EBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwDisplayRenderTarget::IsHardwareProtected(CHwDisplayRenderTarget *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CHwDisplayRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 248LL))(*((_QWORD *)this + 30));
  return v2;
}
