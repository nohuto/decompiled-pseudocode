/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x18014F11C
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x18014D9E4 (--$_Insert_hint@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU-$_Tree_node@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000A190 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memcmp_0 @ 0x180037D63 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@USpatialNodeIdComp@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@1@1@Z @ 0x18014C8A4 (--$_Insert_at@AEAU-$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@PEAU-$_Tree_node@U-.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_nohint<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        _QWORD *a5)
{
  const void *v5; // r10
  _QWORD *v8; // r14
  _QWORD *v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rbx
  char i; // r12
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF
  const void *v24; // [rsp+88h] [rbp+20h]

  v24 = a4;
  v5 = a4;
  v8 = a5;
  v9 = (_QWORD *)*a1;
  v10 = *a1;
  v11 = *(_QWORD *)(*a1 + 8);
  for ( i = 1; !*(_BYTE *)(v11 + 25); v5 = v24 )
  {
    v10 = v11;
    v13 = memcmp_0(v5, (const void *)(v11 + 32), 0x10uLL);
    if ( v13 >= 0 )
    {
      i = 0;
      v11 = *(_QWORD *)(v11 + 16);
    }
    else
    {
      i = 1;
      v11 = *(_QWORD *)v11;
    }
  }
  try
  {
    v14 = v10;
    v15 = v10;
    if ( i )
    {
      if ( v10 == *v9 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
                           a1,
                           &v23,
                           1,
                           (_QWORD *)v10,
                           v22,
                           (__int64)v8);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v10 + 25) )
      {
        v14 = *(_QWORD *)(v10 + 16);
      }
      else
      {
        v18 = *(_QWORD *)v10;
        if ( *(_BYTE *)(*(_QWORD *)v10 + 25LL) )
        {
          v19 = *(_QWORD *)(v10 + 8);
          if ( !*(_BYTE *)(v19 + 25) )
          {
            v20 = v10;
            do
            {
              v15 = v20;
              if ( v20 != *(_QWORD *)v19 )
                break;
              v14 = v19;
              v19 = *(_QWORD *)(v19 + 8);
              v20 = v14;
              v15 = v14;
            }
            while ( !*(_BYTE *)(v19 + 25) );
          }
          if ( !*(_BYTE *)(v14 + 25) )
          {
            v14 = v19;
            v15 = v19;
          }
          goto LABEL_21;
        }
        do
        {
          v14 = v18;
          v18 = *(_QWORD *)(v18 + 16);
        }
        while ( !*(_BYTE *)(v18 + 25) );
      }
      v15 = v14;
    }
LABEL_21:
    if ( memcmp_0((const void *)(v15 + 32), v5, 0x10uLL) >= 0 )
    {
      v21 = v8[6];
      if ( v21 )
      {
        v8[6] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)0x38);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef> &,std::_Tree_node<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>,void *> *>(
                         a1,
                         &v23,
                         i,
                         (_QWORD *)v10,
                         v22,
                         (__int64)v8);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,Microsoft::WRL::WeakRef,Windows::Internal::Holographic::SpatialNodeIdComp,std::allocator<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>,0>>::_Destroy_if_node(
      v16,
      a5);
    throw;
  }
  return result;
}
