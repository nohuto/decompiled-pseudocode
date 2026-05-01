/*
 * XREFs of ?GetSite@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180084F74 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011F158 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_18011F158.c)
 */

__int64 __fastcall winrt::immersive_shell_component::GetSite(RTL_SRWLOCK *this, const struct _GUID *a2, void **a3)
{
  PVOID Ptr; // rcx
  int v7; // ebx
  RTL_SRWLOCK *v9; // [rsp+40h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 10, &v9);
  Ptr = this[9].Ptr;
  if ( Ptr )
  {
    v7 = (*(__int64 (__fastcall **)(PVOID, const struct _GUID *, void **))(*(_QWORD *)Ptr + 24LL))(Ptr, a2, a3);
  }
  else
  {
    *a3 = 0LL;
    v7 = 0;
  }
  if ( v7 >= 0 )
    v7 = 0;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v9);
  return (unsigned int)v7;
}
