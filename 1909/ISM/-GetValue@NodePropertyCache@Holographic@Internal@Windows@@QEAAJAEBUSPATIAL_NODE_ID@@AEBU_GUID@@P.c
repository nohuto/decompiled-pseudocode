/*
 * XREFs of ?GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@@Z @ 0x1801583EC
 * Callers:
 *     ?GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180156CCC (-GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_s_1 @ 0x1801226C4 (memcpy_s_1.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180153414 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?FindPropertyMapForNode@NodePropertyCache@Holographic@Internal@Windows@@AEAAPEAV?$map@U_GUID@@V?$vector@EV?$allocator@E@std@@@std@@UGuidLess@PropertyCache@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$vector@EV?$allocator@E@std@@@std@@@std@@@3@@std@@AEBUSPATIAL_NODE_ID@@@Z @ 0x180155690 (-FindPropertyMapForNode@NodePropertyCache@Holographic@Internal@Windows@@AEAAPEAV-$map@U_GUID@@V-.c)
 *     ?GetRawValue@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAXPEAPEAEPEA_K@Z @ 0x180157B18 (-GetRawValue@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAXPEAPEAEPEA_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x180161608 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holog.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Holographic::NodePropertyCache::GetValue(
        RTL_SRWLOCK *this,
        const struct SPATIAL_NODE_ID *a2,
        const struct _GUID *a3,
        struct Windows::Internal::Holographic::VariableSizeStructWrapperBase *a4)
{
  char v6; // r14
  RTL_SRWLOCK *v7; // rsi
  __int64 PropertyMapForNode; // rax
  _QWORD *v9; // rdi
  rsize_t v10; // rbx
  int v11; // eax
  unsigned int v12; // edi
  const char *v13; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  void *Destination; // [rsp+70h] [rbp+30h] BYREF
  rsize_t DestinationSize; // [rsp+80h] [rbp+40h] BYREF
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v18; // [rsp+88h] [rbp+48h]

  v18 = a4;
  DestinationSize = (rsize_t)a3;
  v6 = 1;
  v7 = this + 2;
  AcquireSRWLockShared(this + 2);
  Destination = v7;
  PropertyMapForNode = Windows::Internal::Holographic::NodePropertyCache::FindPropertyMapForNode(
                         (__int64)this,
                         (__int64)a2);
  v9 = (_QWORD *)PropertyMapForNode;
  if ( !PropertyMapForNode
    || (std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
          PropertyMapForNode,
          &DestinationSize,
          &SPATIAL_DYNAMIC_NODE_PROPERTY_ERROR_STATUSES),
        v10 = DestinationSize,
        DestinationSize == *v9) )
  {
    v12 = -2147023728;
  }
  else
  {
    v11 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(
            v18,
            *(_QWORD *)(DestinationSize + 56) - *(_QWORD *)(DestinationSize + 48));
    v12 = v11;
    if ( v11 >= 0 )
    {
      Windows::Internal::Holographic::VariableSizeStructWrapperBase::GetRawValue(
        v18,
        (unsigned __int8 **)&Destination,
        &DestinationSize);
      if ( memcpy_s_1(
             Destination,
             DestinationSize,
             *(const void *const *)(v10 + 48),
             *(_QWORD *)(v10 + 56) - *(_QWORD *)(v10 + 48)) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          477LL,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
          v13);
        __debugbreak();
      }
      v6 = 0;
      v12 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D8,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
        (const char *)(unsigned int)v11);
    }
  }
  if ( v7 )
    ReleaseSRWLockShared(v7);
  if ( v6 )
    *((_QWORD *)v18 + 2) = *((_QWORD *)v18 + 1);
  return v12;
}
