/*
 * XREFs of ?GetCacheEntry@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKKPEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800E26BC
 * Callers:
 *     ?OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E3340 (-OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEADKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E3CE0 (-OnInputReport@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 *     ?OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E3E90 (-OnTrackingRequestedHeartbeat@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     ?OnTrackingTimeoutExpired@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJK@Z @ 0x1800E4094 (-OnTrackingTimeoutExpired@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@.c)
 *     ?SetInputDeviceHapticsFeedback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKEEGPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E4990 (-SetInputDeviceHapticsFeedback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002B220 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@_J@2@V?$allocator@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_JV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@2@AEB_J@Z @ 0x1800E705C (-find@-$_Tree@V-$_Tmap_traits@_JV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteraction.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::GetCacheEntry(
        struct _RTL_CRITICAL_SECTION *a1,
        int a2,
        __int64 a3,
        _QWORD *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  unsigned int v6; // esi
  __int64 v8; // rdx
  _QWORD *v9; // r10
  __int64 v10; // r8
  std::_Ref_count_base *v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v16; // [rsp+40h] [rbp+8h] BYREF
  int v17; // [rsp+44h] [rbp+Ch]

  v4 = a1 + 11;
  v17 = a2;
  v6 = 0;
  v16 = 0;
  EnterCriticalSection(a1 + 11);
  v14 = v4;
  std::_Tree<std::_Tmap_traits<__int64,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<__int64>,std::allocator<std::pair<__int64 const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::find(
    &a1[12],
    &v13,
    &v16);
  v8 = v13;
  if ( v13 == *v9 )
  {
    v6 = -2147023728;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x15F,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)0x80070490LL);
  }
  else
  {
    v10 = *(_QWORD *)(v13 + 48);
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      v10 = *(_QWORD *)(v8 + 48);
    }
    *a4 = *(_QWORD *)(v8 + 40);
    v11 = (std::_Ref_count_base *)a4[1];
    a4[1] = v10;
    if ( v11 )
      std::_Ref_count_base::_Decref(v11);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v14);
  return v6;
}
