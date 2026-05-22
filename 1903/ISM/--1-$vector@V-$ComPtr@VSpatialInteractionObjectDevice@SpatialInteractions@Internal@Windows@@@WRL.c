/*
 * XREFs of ??1?$vector@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VSpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x180058FA8
 * Callers:
 *     _ActivationListenerWindowIdAdapter::SetActiveWindowId_::_1_::dtor$7 @ 0x18003C0C0 (_ActivationListenerWindowIdAdapter--SetActiveWindowId_--_1_--dtor$7.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$3 @ 0x18003CE94 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$3.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$10 @ 0x18003CF43 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$10.c)
 *     _ViewHierarchy::ViewHierarchy_::_1_::dtor$8 @ 0x18003DBFF (_ViewHierarchy--ViewHierarchy_--_1_--dtor$8.c)
 *     _DWMInputRouter::GetTargetListFromHitTestResult_::_1_::dtor$0 @ 0x1800C3E3C (_DWMInputRouter--GetTargetListFromHitTestResult_--_1_--dtor$0.c)
 *     _DWMInputRouter::HitTest_::_1_::dtor$4 @ 0x1800C44F4 (_DWMInputRouter--HitTest_--_1_--dtor$4.c)
 *     _Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveSpatialObjectDevice_::_1_::dtor$0 @ 0x1800ED5D8 (_Windows--Internal--SpatialInteractions--SpatialInteractionSourceDeviceCollection--RemoveSpatial.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>::~vector<Microsoft::WRL::ComPtr<Windows::Internal::SpatialInteractions::SpatialInteractionObjectDevice>>(
        __int64 a1)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rcx

  v2 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v2 != v3 )
    {
      do
      {
        v4 = *v2;
        if ( *v2 )
        {
          *v2 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
        ++v2;
      }
      while ( v2 != v3 );
      v2 = *(__int64 **)a1;
    }
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
