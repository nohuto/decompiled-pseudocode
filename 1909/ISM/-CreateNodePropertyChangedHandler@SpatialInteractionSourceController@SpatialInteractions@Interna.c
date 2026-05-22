/*
 * XREFs of ?CreateNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphDriverClient@Holographic@34@@Z @ 0x180164FC0
 * Callers:
 *     ?EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@PEAK@Z @ 0x1801653E0 (-EnsureDynamicNodeForDevice@SpatialInteractionSourceController@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ??$MakeAndInitialize@VNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@V1234@PEAVSpatialInteractionSourceController@234@AEBUSPATIAL_NODE_ID@@AEAPEAUISpatialGraphDriverClient@Holographic@34@@Details@WRL@Microsoft@@YAJPEAPEAVNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@$$QEAPEAVSpatialInteractionSourceController@456@AEBUSPATIAL_NODE_ID@@AEAPEAUISpatialGraphDriverClient@Holographic@56@@Z @ 0x1801620B0 (--$MakeAndInitialize@VNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@V1234@PEA.c)
 *     ?ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x180167B44 (-ReleaseNodePropertyChangedHandlerUnderLock@SpatialInteractionSourceController@SpatialInteractio.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::CreateNodePropertyChangedHandler(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        const struct SPATIAL_NODE_ID *a2,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient *a3)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v6; // rdx
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *v11; // [rsp+50h] [rbp+8h] BYREF
  struct Windows::Internal::Holographic::ISpatialGraphDriverClient *v12; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = a3;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 696);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 696));
  v13 = v5;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReleaseNodePropertyChangedHandlerUnderLock(
    this,
    v6);
  v11 = this;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 92);
  v7 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::NodePropertyChangedHandler,Windows::Internal::SpatialInteractions::NodePropertyChangedHandler,Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *,SPATIAL_NODE_ID const &,Windows::Internal::Holographic::ISpatialGraphDriverClient * &>(
         (Windows::Internal::SpatialInteractions::NodePropertyChangedHandler **)this + 92,
         &v11,
         a2,
         &v12);
  v8 = v7;
  if ( v7 >= 0 )
    v8 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x627,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)(unsigned int)v7);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v13);
  return v8;
}
