/*
 * XREFs of ?ReleaseNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXXZ @ 0x180167AE8
 * Callers:
 *     ??1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1801632C0 (--1SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?OnBeforeClearDynamicNodeInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@EEAAXXZ @ 0x180166800 (-OnBeforeClearDynamicNodeInfo@SpatialInteractionSourceController@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180167B44 (-ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractio.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandler(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v3; // rdx
  struct _RTL_CRITICAL_SECTION *v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 696);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 696));
  v4 = v2;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandlerUnderLock(
    this,
    v3);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v4);
}
