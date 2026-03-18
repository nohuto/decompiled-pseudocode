/*
 * XREFs of ?GetSizeForIndex@CCursorSizes@@QEBA_NIPEAI@Z @ 0x1C00F1508
 * Callers:
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00F1354 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00E4048 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CCursorSizes::GetSizeForIndex(CCursorSizes *this, unsigned int a2, unsigned int *a3)
{
  CCursorSizes *v3; // rdi
  __int64 v5; // rsi
  CPushLock *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // eax
  bool v11; // di

  v3 = gpCursorSizes;
  v5 = a2;
  v6 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  if ( (**((unsigned __int8 (__fastcall ***)(char *))gpCursorSizes + 8))((char *)gpCursorSizes + 64) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx((char *)v6 + 8, 0LL);
    if ( !(**(unsigned __int8 (__fastcall ***)(CPushLock *))v6)(v6) )
      CPushLock::ReleaseLock(v6, v7, v8, v9);
  }
  if ( *((_DWORD *)v3 + 2 * v5 + 6) )
    v10 = *((_DWORD *)v3 + 2 * v5 + 7);
  else
    v10 = 0;
  *a3 = v10;
  v11 = v10 != 0;
  CPushLock::ReleaseLock(v6, v7, v8, v9);
  return v11;
}
