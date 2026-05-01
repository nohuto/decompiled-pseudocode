/*
 * XREFs of ?GetItemWithFlags@CAppLayout@@UEAAJIW4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@AEBU_GUID@@PEAPEAX@Z @ 0x18041D880
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1800822E4 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180100138 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_180100138.c)
 */

__int64 __fastcall CAppLayout::GetItemWithFlags(RTL_SRWLOCK *a1, int a2, int a3, __int64 a4, RTL_SRWLOCK *a5)
{
  RTL_SRWLOCK *v5; // r15
  PVOID Ptr; // r14
  unsigned __int64 v11; // rbx
  unsigned int v12; // ebp
  __int64 v13; // rcx
  __int64 (__fastcall ***v14)(_QWORD, __int64, RTL_SRWLOCK *); // rcx

  v5 = a5;
  a5->Ptr = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 2, &a5);
  Ptr = a1[9].Ptr;
  v11 = 0LL;
  v12 = -2147024809;
  if ( Ptr )
  {
    do
    {
      v13 = *((_QWORD *)a1[8].Ptr + v11);
      if ( (a3 & (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13)) == a3 )
      {
        if ( !a2 )
        {
          v14 = (__int64 (__fastcall ***)(_QWORD, __int64, RTL_SRWLOCK *))*((_QWORD *)a1[8].Ptr + v11);
          v12 = (**v14)(v14, a4, v5);
          break;
        }
        --a2;
      }
      ++v11;
    }
    while ( v11 < (unsigned __int64)Ptr );
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&a5);
  return v12;
}
