/*
 * XREFs of ?Present@CHwDisplayRenderTarget@@UEAAJ_N@Z @ 0x180203A20
 * Callers:
 *     ?Present@CHwDisplayRenderTarget@@WNA@EAAJ_N@Z @ 0x1800F1190 (-Present@CHwDisplayRenderTarget@@WNA@EAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Present(CHwDisplayRenderTarget *this, __int64 a2)
{
  return (*(__int64 (__fastcall **)(char *, __int64, _QWORD, _QWORD))(*((_QWORD *)this + 26) + 232LL))(
           (char *)this + 208,
           a2,
           0LL,
           0LL);
}
