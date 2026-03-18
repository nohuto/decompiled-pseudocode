/*
 * XREFs of ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x1800BAEA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwndRenderTarget::IsPrimaryMonitor(CHwndRenderTarget *this)
{
  char v2; // bl
  __int64 v3; // rax

  v2 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 248LL))(this) )
  {
    v3 = *((_QWORD *)this + 21);
    if ( *(_BYTE *)(v3 + 313) )
      return *(_BYTE *)(v3 + 314) != 0;
  }
  return v2;
}
