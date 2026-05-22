/*
 * XREFs of ?GetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_K@Z @ 0x1801109B0
 * Callers:
 *     ?GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180114E24 (-GetNodePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPAT.c)
 * Callees:
 *     memcpy_s @ 0x1800019E8 (memcpy_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x1801188B0 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holog.c)
 */

__int64 __fastcall Windows::Internal::Holographic::NodePropertyCache::GetValue(
        RTL_SRWLOCK *this,
        const struct SPATIAL_NODE_ID *a2,
        const struct _GUID *a3,
        void *a4,
        rsize_t DestinationSize)
{
  RTL_SRWLOCK *v5; // rsi
  _QWORD *v10; // rbx
  const void *v11; // r8
  rsize_t v12; // r9
  unsigned int v13; // ebx
  const char *v14; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v17; // [rsp+40h] [rbp+8h] BYREF

  v5 = this + 2;
  AcquireSRWLockShared(this + 2);
  std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
    &this[3],
    &v17,
    a2);
  if ( v17 == this[3].Ptr )
    v10 = 0LL;
  else
    v10 = v17 + 6;
  if ( !v10
    || (std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
          v10,
          &v17,
          a3),
        v17 == (_QWORD *)*v10) )
  {
    v13 = -2147023728;
  }
  else
  {
    v11 = (const void *)v17[6];
    v12 = v17[7] - (_QWORD)v11;
    if ( DestinationSize == v12 )
    {
      if ( memcpy_s(a4, DestinationSize, v11, v12) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1A6,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
          v14);
        JUMPOUT(0x180110AA1LL);
      }
      v13 = 0;
    }
    else
    {
      v13 = -2147024883;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A4,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
        (const char *)0x8007000DLL);
    }
  }
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return v13;
}
