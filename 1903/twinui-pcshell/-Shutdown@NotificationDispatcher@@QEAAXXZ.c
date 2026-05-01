/*
 * XREFs of ?Shutdown@NotificationDispatcher@@QEAAXXZ @ 0x180159618
 * Callers:
 *     ?UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180157950 (-UnsubscribeFromServices@CApplicationViewManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x1801590C0 (-Shutdown@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004D924 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall NotificationDispatcher::Shutdown(RTL_SRWLOCK *this)
{
  HWND Ptr; // rbx
  _QWORD *v3; // rsi
  PVOID v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // rcx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v7, this + 10);
  Ptr = (HWND)this[5].Ptr;
  this[5].Ptr = 0LL;
  v3 = this[6].Ptr;
  v4 = this[7].Ptr;
  this[6].Ptr = 0LL;
  this[7].Ptr = 0LL;
  this[8].Ptr = 0LL;
  this[9].Ptr = 0LL;
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v7);
  DestroyWindow(Ptr);
  if ( v3 )
  {
    v5 = 0LL;
    if ( v4 )
    {
      do
      {
        v6 = v3[v5];
        if ( v6 )
        {
          v3[v5] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        ++v5;
      }
      while ( v5 < (unsigned __int64)v4 );
    }
    CoTaskMemFree(v3);
  }
}
