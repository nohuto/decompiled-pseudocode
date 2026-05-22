/*
 * XREFs of ?DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@K_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E1964
 * Callers:
 *     ?RemoveSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAXPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800356F0 (-RemoveSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal.c)
 *     ?OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E3110 (-OnDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 * Callees:
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007BE74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     _lambda_c565c19ed9733c9533da0ee0ab27a7d0_::operator() @ 0x1800E0F58 (_lambda_c565c19ed9733c9533da0ee0ab27a7d0_--operator().c)
 *     ?DeleteWorkItemsForSourceDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAXPEBVSpatialInteractionSourceDevice@234@@Z @ 0x1800E16D4 (-DeleteWorkItemsForSourceDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Int.c)
 *     ?HasDynamicNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NXZ @ 0x1800E2734 (-HasDynamicNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEBA_NXZ.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800E4260 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DoDeviceRemoval(
        struct _RTL_CRITICAL_SECTION *this,
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice **a2,
        int a3,
        char a4,
        __int64 a5)
{
  bool HasDynamicNode; // si
  __int64 v9; // rdx
  char v10; // r12
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  int v14; // eax
  _QWORD *p_Type; // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  __int64 v18; // r9
  int v19; // eax
  int v20; // eax
  int v22[4]; // [rsp+20h] [rbp-E0h]
  __int128 v23; // [rsp+30h] [rbp-D0h]
  _OWORD v24[2]; // [rsp+50h] [rbp-B0h] BYREF
  char v25; // [rsp+70h] [rbp-90h]
  _QWORD v26[8]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v27[8]; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v28[15]; // [rsp+F8h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]
  _QWORD *v30; // [rsp+180h] [rbp+80h] BYREF
  struct _RTL_CRITICAL_SECTION *v31; // [rsp+188h] [rbp+88h] BYREF
  int v32; // [rsp+190h] [rbp+90h] BYREF
  int v33; // [rsp+198h] [rbp+98h] BYREF

  v32 = a3;
  HasDynamicNode = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::HasDynamicNode(*a2);
  v10 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *, __int64, _QWORD))(*(_QWORD *)*a2 + 40LL))(
          *a2,
          v9,
          *(_QWORD *)*a2);
  v11 = *a2;
  v33 = *((_DWORD *)*a2 + 2);
  *((_BYTE *)v11 + 104) = 1;
  (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *))(*(_QWORD *)v11 + 120LL))(v11);
  *(_QWORD *)v22 = &v33;
  *(_QWORD *)&v22[2] = a2;
  *(_QWORD *)&v23 = this;
  *((_QWORD *)&v23 + 1) = &v32;
  v24[0] = *(_OWORD *)v22;
  v24[1] = v23;
  v25 = 1;
  v12 = a5;
  if ( *((_BYTE *)*a2 + 109) )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  v26[0] = off_180176190;
  v26[1] = this;
  v26[7] = v26;
  v13 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
          this,
          a2,
          v26,
          0LL);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      241LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v13);
  v14 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice *, __int64, __int64))(*(_QWORD *)*a2 + 152LL))(
          *a2,
          5LL,
          v12);
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      243LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v14);
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DeleteWorkItemsForSourceDevice(
    (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)this,
    *a2);
  if ( a4 )
  {
    EnterCriticalSection(this + 11);
    v31 = this + 11;
    if ( HasDynamicNode )
    {
      p_Type = &this[12].DebugInfo->Type;
      v16 = (_QWORD *)*p_Type;
      v30 = (_QWORD *)*p_Type;
      while ( v16 != p_Type )
      {
        v17 = v16 + 5;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)v16[5] + 72LL))(v16[5])
          && (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 32LL))(*v17)
          && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 40LL))(*v17) )
        {
          v27[0] = off_180176068;
          v27[1] = this;
          v27[7] = v27;
          LOBYTE(v18) = 1;
          v19 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
                  this,
                  v17,
                  v27,
                  v18);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              272LL,
              (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
              (const char *)(unsigned int)v19);
        }
        std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v30);
        v16 = v30;
      }
    }
    if ( v10 )
    {
      v28[0] = off_180176038;
      v28[1] = this;
      v28[7] = v28;
      v20 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
              this,
              a2,
              v28,
              0LL);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          285LL,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
          (const char *)(unsigned int)v20);
    }
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v31);
  }
  v25 = 0;
  lambda_c565c19ed9733c9533da0ee0ab27a7d0_::operator()((__int64)v24);
  return 0LL;
}
