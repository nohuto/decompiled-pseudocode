/*
 * XREFs of ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800E4490
 * Callers:
 *     ?DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@K_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E1BA4 (-DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKKPEAUIHidDevice@234@PEAUMPCSourceDeviceInfo@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E3200 (-OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800E33DC (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E3E90 (-OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     ?OnTrackingTimeoutExpired@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJK@Z @ 0x1800E4094 (-OnTrackingTimeoutExpired@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 *     _lambda_a95b93df32bd5c2434c79e330695bd51_::operator() @ 0x1800EB3F8 (_lambda_a95b93df32bd5c2434c79e330695bd51_--operator().c)
 *     ?AddSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800EB9DC (-AddSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     ?CompositorRunningStateChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJ_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800EBD10 (-CompositorRunningStateChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inte.c)
 *     ?InitializeDdiDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialObjectDDIClientFactory@Holographic@34@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800ECA50 (-InitializeDdiDevices@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$make_shared@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@7@AEA_N@std@@YA?AV?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@0@AEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@0@AEAV?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@0@AEA_N@Z @ 0x1800E0308 (--$make_shared@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteraction.c)
 *     ?push_back@?$deque@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@std@@@2@@std@@QEAAX$$QEAV?$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@2@@Z @ 0x1800E71EC (-push_back@-$deque@V-$shared_ptr@VAsynchronousWorkItem@SpatialInteractionSourceDeviceCollection@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        char a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  _QWORD *v8; // rax
  const char *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // [rsp+28h] [rbp-30h] BYREF
  std::_Ref_count_base *v17; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+70h] [rbp+18h]
  char v21; // [rsp+78h] [rbp+20h] BYREF

  v21 = a4;
  v20 = a3;
  v7 = (struct _RTL_CRITICAL_SECTION *)(a1 + 496);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 496));
  v19 = v7;
  if ( !*(_BYTE *)(a1 + 536) )
  {
    try
    {
      v8 = std::make_shared<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice> &,std::function<void (std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice> const &)> &,bool &>(
             &v16,
             a2,
             a3,
             &v21);
      std::deque<std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AsynchronousWorkItem>>::push_back(
        a1 + 544,
        v8);
      if ( v17 )
        std::_Ref_count_base::_Decref(v17);
      if ( *(_QWORD *)(a1 + 576) == 1LL )
        SubmitThreadpoolWork(*(PTP_WORK *)(a1 + 584));
    }
    catch ( ... )
    {
      LODWORD(v19) = wil::details::in1diag3::Return_CaughtException(
                       retaddr,
                       (void *)0x19B,
                       (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourc"
                                "edevicecollection.cpp",
                       v9);
      v13 = v20;
      v14 = *(_QWORD *)(v20 + 56);
      if ( v14 )
      {
        LOBYTE(v15) = v14 != v20;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v15);
        *(_QWORD *)(v13 + 56) = 0LL;
      }
      return (unsigned int)v19;
    }
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v19);
  v11 = *(_QWORD *)(a3 + 56);
  if ( v11 )
  {
    LOBYTE(v10) = v11 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v10);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return 0LL;
}
