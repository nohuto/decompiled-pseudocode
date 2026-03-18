/*
 * XREFs of ?SyncLockForParallelMode@CHwndRenderTarget@@UEAAXI@Z @ 0x1801A83B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwndRenderTarget::SyncLockForParallelMode(CHwndRenderTarget *this, unsigned int a2)
{
  __int64 v3; // rdx

  if ( a2 > (*(unsigned int (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 312LL))(this)
    && *((_QWORD *)this + 22)
    && !*((_BYTE *)this + 859) )
  {
    *((_BYTE *)this + 857) = 1;
    LOBYTE(v3) = 1;
    (*(void (__fastcall **)(char *, __int64, _QWORD))(*((_QWORD *)this + 8) + 64LL))((char *)this + 64, v3, 0LL);
  }
}
