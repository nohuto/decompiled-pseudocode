/*
 * XREFs of ?GetSizeForIndex@CCursorSizes@@QEBA_NIPEAI@Z @ 0x1C0117548
 * Callers:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C0117394 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C0109AA8 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCursorSizes::GetSizeForIndex(CCursorSizes *this, unsigned int a2, unsigned int *a3)
{
  CCursorSizes *v3; // rdi
  __int64 v5; // rsi
  CPushLock *v6; // rbx
  unsigned int v7; // eax
  bool v8; // di

  v3 = gpCursorSizes;
  v5 = a2;
  v6 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  if ( (**((unsigned __int8 (__fastcall ***)(char *))gpCursorSizes + 8))((char *)gpCursorSizes + 64) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v6 + 8, 0LL);
    if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))v6)(v6) )
      CPushLock::ReleaseLock(v6);
  }
  if ( *((_DWORD *)v3 + 2 * v5 + 6) )
    v7 = *((_DWORD *)v3 + 2 * v5 + 7);
  else
    v7 = 0;
  *a3 = v7;
  v8 = v7 != 0;
  CPushLock::ReleaseLock(v6);
  return v8;
}
