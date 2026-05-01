/*
 * XREFs of ?OnTabTransferCompleted@TabViewManager@@AEAAJPEAUIInspectable@@0@Z @ 0x1801E0F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?TabTransferCompletedWorker@TabViewManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x1801EB9B8 (-TabTransferCompletedWorker@TabViewManager@@AEAAJPEAUIInspectable@@UShellTabId@Tabs@ComposableSh.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x1801F1F14 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared.c)
 */

__int64 __fastcall TabViewManager::OnTabTransferCompleted(
        RTL_SRWLOCK *this,
        struct IInspectable *a2,
        struct IInspectable *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int Ptr; // eax
  __int64 v8; // rdx
  PSRWLOCK SRWLock[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  SRWLock[1] = (PSRWLOCK)-2LL;
  v4 = ((__int64 (__fastcall *)(struct IInspectable *, __int128 *))a3->lpVtbl[3].Release)(a3, &v11);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5CD,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  AcquireSRWLockShared(this + 184);
  SRWLock[0] = this + 184;
  Ptr = (int)this[182].Ptr;
  if ( (Ptr & 1) != 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      SRWLock,
      0LL);
    v10 = v11;
    v5 = TabViewManager::TabTransferCompletedWorker(this, v8, &v10);
    if ( SRWLock[0] )
      ReleaseSRWLockShared(SRWLock[0]);
    return v5;
  }
  LODWORD(this[182].Ptr) = Ptr | 2;
  if ( this != (RTL_SRWLOCK *)-1472LL )
    ReleaseSRWLockShared(this + 184);
  return 0LL;
}
