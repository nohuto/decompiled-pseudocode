/*
 * XREFs of ?Present@CHwDisplayRenderTarget@@UEAAJ_N@Z @ 0x18015FCC0
 * Callers:
 *     ?Present@CHwDisplayRenderTarget@@WJA@EAAJ_N@Z @ 0x1800EC8E0 (-Present@CHwDisplayRenderTarget@@WJA@EAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Present(CHwDisplayRenderTarget *this, __int64 a2)
{
  return (*(__int64 (__fastcall **)(char *, __int64, _QWORD, _QWORD))(*((_QWORD *)this + 18) + 232LL))(
           (char *)this + 144,
           a2,
           0LL,
           0LL);
}
