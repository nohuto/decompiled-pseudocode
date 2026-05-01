/*
 * XREFs of ?GetAdjacentItem@CAppLayout@@UEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x18043CB30
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x180084F74 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18011F158 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_18011F158.c)
 *     ?_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x18043E91C (-_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_T.c)
 */

__int64 __fastcall CAppLayout::GetAdjacentItem(
        RTL_SRWLOCK *a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  RTL_SRWLOCK *v7; // rbx
  RTL_SRWLOCK *v11; // [rsp+40h] [rbp+8h] BYREF

  v7 = a1;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a1 + 2, &v11);
  LODWORD(v7) = CAppLayout::_GetAdjacentItem(&v7[-5], a2, a3, a4, a5, a6);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v11);
  return (unsigned int)v7;
}
