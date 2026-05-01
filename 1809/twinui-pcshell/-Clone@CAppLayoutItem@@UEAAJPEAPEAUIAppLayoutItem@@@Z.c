/*
 * XREFs of ?Clone@CAppLayoutItem@@UEAAJPEAPEAUIAppLayoutItem@@@Z @ 0x1803BD160
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18007F754 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     ??1CAutoSRWSharedLock@@QEAA@XZ @ 0x1800DE21C (--1CAutoSRWSharedLock@@QEAA@XZ.c)
 *     ?s_CreateInstance_Clone@CAppLayoutItem@@SAJW4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@PEAUIApplicationView@@PEAUAPPLICATION_VIEW_DATA@@PEAUtagRECT@@4AEBU_GUID@@PEAPEAX@Z @ 0x1803BDC38 (-s_CreateInstance_Clone@CAppLayoutItem@@SAJW4APP_LAYOUT_ITEM_TYPE@@W4APP_LAYOUT_ITEM_BEHAVIOR_FL.c)
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
  CAutoSRWSharedLock::~CAutoSRWSharedLock(&v7);
  return (unsigned int)Instance_Clone;
}
