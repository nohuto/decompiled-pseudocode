/*
 * XREFs of ?FindAppItem@CAppLayout@@UEAAJPEAUIImmersiveApplication@@PEAPEAUIAppLayoutItem@@PEAI@Z @ 0x18041D190
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x1800822E4 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180100138 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@_ea_180100138.c)
 *     ??$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByApplication@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18041C5E8 (--$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@U.c)
 */

__int64 __fastcall CAppLayout::FindAppItem(
        RTL_SRWLOCK *this,
        struct IImmersiveApplication *a2,
        struct IAppLayoutItem **a3,
        unsigned int *a4)
{
  RTL_SRWLOCK *v8; // r14
  __int64 v9; // r8
  int v10; // esi
  unsigned int v11; // ebp
  struct IImmersiveApplication *v13; // [rsp+60h] [rbp+8h] BYREF
  __int64 v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v16; // [rsp+78h] [rbp+20h] BYREF

  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 2, &v16);
  v14 = 0LL;
  v13 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v13);
  v8 = this + 8;
  v10 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByApplication>(
          &this[8].Ptr,
          (__int64)&v13,
          v9,
          &v15);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  if ( v10 >= 0 )
  {
    v11 = v15;
    if ( a3 )
      v10 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IAppLayoutItem **))v8->Ptr + v15))(
              *((_QWORD *)v8->Ptr + v15),
              &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
              a3);
    if ( v10 >= 0 && a4 )
      *a4 = v11;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v16);
  return (unsigned int)v10;
}
