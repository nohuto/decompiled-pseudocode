/*
 * XREFs of ?Clone@CAppLayoutItem@@UEAAJPEAPEAUIAppLayoutItem@@@Z @ 0x18041FB70
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1800822E4 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180100138 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_180100138.c)
 *     ?s_CreateInstance_Clone@CAppLayoutItem@@SAJW4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@PEAUtagRECT@@4AEBU_GUID@@PEAPEAX@Z @ 0x18042062C (-s_CreateInstance_Clone@CAppLayoutItem@@SAJW4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FL.c)
 */

__int64 __fastcall CAppLayoutItem::Clone(RTL_SRWLOCK *this, struct IAppLayoutItem **a2)
{
  int Instance_Clone; // ebx
  struct IAppLayoutItem *v6; // [rsp+50h] [rbp+8h] BYREF
  RTL_SRWLOCK *v7; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 3, &v7);
  v6 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  Instance_Clone = CAppLayoutItem::s_CreateInstance_Clone(
                     LODWORD(this[4].Ptr),
                     LODWORD(this[2].Ptr),
                     this[5].Ptr,
                     &this[10],
                     &this[6],
                     &this[8]);
  if ( Instance_Clone >= 0 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v6);
    Instance_Clone = 0;
    *a2 = v6;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v6);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v7);
  return (unsigned int)Instance_Clone;
}
