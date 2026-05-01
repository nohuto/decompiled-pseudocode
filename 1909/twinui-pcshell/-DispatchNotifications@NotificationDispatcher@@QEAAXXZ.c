/*
 * XREFs of ?DispatchNotifications@NotificationDispatcher@@QEAAXXZ @ 0x1801785B8
 * Callers:
 *     ?FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ @ 0x180174F00 (-FlushChangeNotifications@CApplicationViewManager@@UEAAJXZ.c)
 *     ?FlushChangeNotifications@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ @ 0x180177A70 (-FlushChangeNotifications@ApplicationViewManagerVisibilityDebouncer@@UEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x18004FD9C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockExclusive@Details@234@PEAU_RTL_SRWLO.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800500AC (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall NotificationDispatcher::DispatchNotifications(NotificationDispatcher *this)
{
  RTL_SRWLOCK *v2; // rsi
  _QWORD *v3; // rdi
  unsigned __int64 v4; // rbp
  _QWORD *v5; // r15
  _QWORD *i; // r14
  unsigned __int64 j; // rbx
  __int64 v8; // rcx
  RTL_SRWLOCK *v9; // [rsp+70h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 88) )
  {
    *((_BYTE *)this + 88) = 1;
    v2 = (RTL_SRWLOCK *)((char *)this + 80);
    Microsoft::WRL::Wrappers::SRWLock::LockExclusive(&v9, (RTL_SRWLOCK *)this + 10);
    v3 = (_QWORD *)*((_QWORD *)this + 6);
    v4 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v9);
    v5 = &v3[v4];
    for ( i = v3; i != v5; ++i )
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*i + 24LL))(*i, 0LL);
    *((_BYTE *)this + 88) = 0;
    AcquireSRWLockShared(v2);
    if ( *((_QWORD *)this + 7) )
      PostMessageW(*((HWND *)this + 5), 0x401u, 0LL, 0LL);
    if ( v2 )
      ReleaseSRWLockShared(v2);
    if ( v3 )
    {
      for ( j = 0LL; j < v4; ++j )
      {
        v8 = v3[j];
        if ( v8 )
        {
          v3[j] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
        }
      }
      CoTaskMemFree(v3);
    }
  }
}
