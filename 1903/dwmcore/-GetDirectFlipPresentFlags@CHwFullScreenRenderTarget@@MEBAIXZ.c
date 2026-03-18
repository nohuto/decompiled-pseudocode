/*
 * XREFs of ?GetDirectFlipPresentFlags@CHwFullScreenRenderTarget@@MEBAIXZ @ 0x1801679A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetDirectFlipPresentFlags(CHwFullScreenRenderTarget *this)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( *((_QWORD *)this + 63) == (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 184LL))(*((_QWORD *)this + 22)) )
    return 2;
  return v1;
}
