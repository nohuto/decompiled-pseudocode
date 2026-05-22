/*
 * XREFs of ?GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@@Z @ 0x18015861C
 * Callers:
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180155874 (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_s_1 @ 0x1801226C4 (memcpy_s_1.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180153414 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?GetRawValue@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAXPEAPEAEPEA_K@Z @ 0x180157B18 (-GetRawValue@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAXPEAPEAEPEA_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x180161608 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holog.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Holographic::PropertyCache::GetValue(
        RTL_SRWLOCK *this,
        const struct _GUID *a2,
        struct Windows::Internal::Holographic::VariableSizeStructWrapperBase *a3)
{
  char v5; // r14
  RTL_SRWLOCK *v6; // rsi
  rsize_t v7; // rbx
  unsigned int v8; // edi
  int v9; // eax
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  rsize_t DestinationSize; // [rsp+70h] [rbp+30h] BYREF
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v14; // [rsp+80h] [rbp+40h]
  void *Destination; // [rsp+88h] [rbp+48h] BYREF

  v14 = a3;
  v5 = 1;
  v6 = this + 4;
  AcquireSRWLockShared(this + 4);
  Destination = v6;
  std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
    &this[5],
    &DestinationSize,
    a2);
  v7 = DestinationSize;
  if ( (PVOID)DestinationSize == this[5].Ptr )
  {
    v8 = -2147023728;
  }
  else
  {
    v9 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(
           v14,
           *(_QWORD *)(DestinationSize + 56) - *(_QWORD *)(DestinationSize + 48));
    v8 = v9;
    if ( v9 >= 0 )
    {
      Windows::Internal::Holographic::VariableSizeStructWrapperBase::GetRawValue(
        v14,
        (unsigned __int8 **)&Destination,
        &DestinationSize);
      if ( memcpy_s_1(
             Destination,
             DestinationSize,
             *(const void *const *)(v7 + 48),
             *(_QWORD *)(v7 + 56) - *(_QWORD *)(v7 + 48)) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          202LL,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
          v10);
        __debugbreak();
      }
      v5 = 0;
      v8 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC5,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
        (const char *)(unsigned int)v9);
    }
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  if ( v5 )
    *((_QWORD *)v14 + 2) = *((_QWORD *)v14 + 1);
  return v8;
}
