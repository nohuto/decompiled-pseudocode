/*
 * XREFs of ?UpdateBackBuffer@CHwFullScreenRenderTarget@@IEAAJXZ @ 0x18007CD68
 * Callers:
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z @ 0x18007CC80 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEBURenderTargetPresentParameters@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::UpdateBackBuffer(CHwFullScreenRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  void (__fastcall ***v5)(_QWORD); // rcx

  v2 = *((_QWORD *)this + 30);
  if ( v2 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2) )
  {
    v3 = *((_QWORD *)this + 25);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *((_QWORD *)this + 25) = 0LL;
    }
    v4 = (_QWORD *)*((_QWORD *)this + 30);
    v5 = *(void (__fastcall ****)(_QWORD))(v4[48]
                                         + 8LL
                                         * (*(unsigned int (__fastcall **)(_QWORD *, _QWORD))(*v4 + 344LL))(v4, 0LL));
    *((_QWORD *)this + 25) = v5;
    (**v5)(v5);
  }
  return 0LL;
}
