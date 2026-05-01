/*
 * XREFs of ?ContainsApp@CAppLayout@@UEAAHPEAUIImmersiveApplication@@@Z @ 0x1803BA6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 *     ??$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@?$CTSimpleFixedArray@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@@@@@QEBAJAEBVCAppLayoutItemFinderByApplication@AppLayoutFinders@@AEBV?$ComPtr@UIAppLayoutItem@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1803B9C4C (--$FindEx@VCAppLayoutItemFinderByApplication@AppLayoutFinders@@@-$CTSimpleFixedArray@V-$ComPtr@U.c)
 */

_BOOL8 __fastcall CAppLayout::ContainsApp(RTL_SRWLOCK *this, struct IImmersiveApplication *a2)
{
  __int64 v4; // r8
  BOOL v5; // esi
  struct IImmersiveApplication *v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  RTL_SRWLOCK *v9; // [rsp+60h] [rbp+18h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(this + 2, &v9);
  v7 = a2;
  v8 = 0LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
  v5 = (int)CTSimpleFixedArray<Microsoft::WRL::ComPtr<IAppLayoutItem>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IAppLayoutItem>>>::FindEx<AppLayoutFinders::CAppLayoutItemFinderByApplication>(
              &this[8].Ptr,
              (__int64)&v7,
              v4,
              &v10) >= 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v9);
  return v5;
}
