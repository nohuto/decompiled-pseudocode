/*
 * XREFs of ?GetDirectFlipPresentFlags@CHwFullScreenRenderTarget@@MEBAIXZ @ 0x180208370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetDirectFlipPresentFlags(CHwFullScreenRenderTarget *this)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( *((_QWORD *)this + 71) == (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 30) + 176LL))(*((_QWORD *)this + 30)) )
    return 2;
  return v1;
}
