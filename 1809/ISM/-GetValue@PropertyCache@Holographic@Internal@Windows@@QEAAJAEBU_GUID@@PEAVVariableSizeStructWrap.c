/*
 * XREFs of ?GetValue@PropertyCache@Holographic@Internal@Windows@@QEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@@Z @ 0x18011058C
 * Callers:
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x180114AD0 (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 * Callees:
 *     memcpy_s @ 0x1800019E8 (memcpy_s.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180109EE0 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@2@AEBUSPATIAL_NODE_ID@@@Z @ 0x1801188B0 (-find@-$_Tree@V-$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holog.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Holographic::PropertyCache::GetValue(
        RTL_SRWLOCK *this,
        const struct _GUID *a2,
        struct Windows::Internal::Holographic::VariableSizeStructWrapperBase *a3)
{
  char v5; // bp
  RTL_SRWLOCK *v6; // rsi
  const void *const *v7; // rbx
  unsigned int v8; // edi
  int v9; // eax
  const char *v10; // r9
  unsigned __int64 v11; // rdx
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  const void *const *v15; // [rsp+60h] [rbp+8h] BYREF
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v16; // [rsp+70h] [rbp+18h]
  RTL_SRWLOCK *v17; // [rsp+78h] [rbp+20h]

  v16 = a3;
  v5 = 1;
  v6 = this + 4;
  AcquireSRWLockShared(this + 4);
  v17 = v6;
  std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::find(
    &this[5],
    &v15,
    a2);
  v7 = v15;
  if ( v15 == this[5].Ptr )
  {
    v8 = -2147023728;
  }
  else
  {
    v9 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(v16);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v10 = (const char *)*((_QWORD *)v16 + 1);
      v11 = *((_QWORD *)v16 + 2) - (_QWORD)v10;
      if ( v11 < *(_QWORD *)v16 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x34,
          (__int64)"onecoreuap\\analog\\input\\common\\inc\\holographicdriverclienttypes.h",
          v10);
        JUMPOUT(0x1801106B7LL);
      }
      if ( memcpy_s(
             (void *const)&v10[*(_QWORD *)v16],
             v11 - *(_QWORD *)v16,
             v7[6],
             *((_QWORD *)v7 + 7) - *((_QWORD *)v7 + 6)) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0xCA,
          (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\propertycache.h",
          v12);
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
    *((_QWORD *)v16 + 2) = *((_QWORD *)v16 + 1);
  return v8;
}
