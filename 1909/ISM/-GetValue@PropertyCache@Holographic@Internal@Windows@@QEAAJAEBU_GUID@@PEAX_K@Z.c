/*
 * XREFs of ?GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAX_K@Z @ 0x180158748
 * Callers:
 *     ?GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAX_KP6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x1801556E8 (-GetDevicePropertyOfKnownSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_G.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_s_1 @ 0x1801226C4 (memcpy_s_1.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x180161608 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holog.c)
 */

__int64 __fastcall Windows::Internal::Holographic::PropertyCache::GetValue(
        RTL_SRWLOCK *this,
        const struct _GUID *a2,
        void *a3,
        rsize_t a4)
{
  RTL_SRWLOCK *v4; // rsi
  unsigned int v9; // ebx
  const void *v10; // r8
  rsize_t v11; // r9
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = this + 4;
  AcquireSRWLockShared(this + 4);
  std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
    &this[5],
    &v15,
    a2);
  if ( v15 == this[5].Ptr )
  {
    v9 = -2147023728;
  }
  else
  {
    v10 = (const void *)v15[6];
    v11 = v15[7] - (_QWORD)v10;
    if ( a4 == v11 )
    {
      if ( memcpy_s_1(a3, a4, v10, v11) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          154LL,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
          v12);
        __debugbreak();
      }
      v9 = 0;
    }
    else
    {
      v9 = -2147024883;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x98,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
        (const char *)0x8007000DLL);
    }
  }
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return v9;
}
