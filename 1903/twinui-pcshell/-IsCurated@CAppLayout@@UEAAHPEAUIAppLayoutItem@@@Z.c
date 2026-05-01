/*
 * XREFs of ?IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x18041DBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1800822E4 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180100138 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_180100138.c)
 *     ?_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z @ 0x18041EBD8 (-_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z.c)
 *     ?_AreAllItemsCurated@CAppLayout@@AEAAHXZ @ 0x18041ED24 (-_AreAllItemsCurated@CAppLayout@@AEAAHXZ.c)
 */

__int64 __fastcall CAppLayout::IsCurated(RTL_SRWLOCK *this, struct IAppLayoutItem *a2)
{
  CAppLayout *v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // ebx
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 2, &v8);
  v4 = (CAppLayout *)&this[-5];
  if ( a2 )
    v5 = CAppLayout::_AreAdjacentItemsCurated(v4, a2);
  else
    v5 = CAppLayout::_AreAllItemsCurated(v4);
  v6 = v5;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v8);
  return v6;
}
