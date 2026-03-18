/*
 * XREFs of ?IsUsingOverlays@CHwFullScreenRenderTarget@@MEBA_NXZ @ 0x180203910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwFullScreenRenderTarget::IsUsingOverlays(CHwFullScreenRenderTarget *this)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(CHwFullScreenRenderTarget *))(*(_QWORD *)this + 32LL))(this) )
    return (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 192LL))(*((_QWORD *)this + 30)) != 0;
  return v2;
}
