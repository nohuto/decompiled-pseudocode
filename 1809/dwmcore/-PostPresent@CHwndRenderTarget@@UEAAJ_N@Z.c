/*
 * XREFs of ?PostPresent@CHwndRenderTarget@@UEAAJ_N@Z @ 0x180065D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::PostPresent(CHwndRenderTarget *this, char a2)
{
  __int64 v2; // r8

  v2 = *((_QWORD *)this + 14);
  *((_BYTE *)this + 801) = 0;
  if ( v2 && (!a2 || *(int *)(*((_QWORD *)this - 6) + 1080LL) >= 5) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 240LL))(v2);
  return 0LL;
}
