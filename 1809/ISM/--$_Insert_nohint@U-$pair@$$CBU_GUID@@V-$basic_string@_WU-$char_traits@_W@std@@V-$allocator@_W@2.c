/*
 * XREFs of ??$_Insert_nohint@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@UGuidLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@std@@_N@1@_N$$QEAU?$pair@$$CBU_GUID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@U_Not_a_node_tag@1@@Z @ 0x18011D1D4
 * Callers:
 *     ?AddTelemetryGuidMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x18010F0AC (-AddTelemetryGuidMapping@HolographicDeviceSnapshot@Holographic@Internal@Windows@@SAXAEBU_GUID@@A.c)
 *     _lambda_a56f457f58ac66e3e3dc9abfa35bf876_::operator() @ 0x18011B3AC (_lambda_a56f457f58ac66e3e3dc9abfa35bf876_--operator().c)
 * Callees:
 *     ??$_Insert_at@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tmap_traits@USPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@USpatialNodeIdLess@Holographic@Internal@Windows@@V?$allocator@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@PEAX@1@$$QEAU?$pair@$$CBUSPATIAL_NODE_ID@@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@1@U_Not_a_node_tag@1@@Z @ 0x18011DD28 (--$_Insert_at@U-$pair@$$CBUSPATIAL_NODE_ID@@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocato.c)
 *     memcmp_0 @ 0x18012DB53 (memcmp_0.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<_GUID,std::wstring,Windows::Internal::Holographic::GuidLess,std::allocator<std::pair<_GUID const,std::wstring>>,0>>::_Insert_nohint<std::pair<_GUID const,std::wstring>,std::_Not_a_node_tag>(
        __int64 ***a1,
        __int64 a2,
        __int64 a3,
        const void *a4)
{
  int v6; // r13d
  __int64 **v7; // r14
  __int64 *v8; // rbx
  __int64 *v9; // rsi
  bool v10; // r15
  int v11; // eax
  __int64 *v12; // rbx
  __int64 *v13; // rcx
  __int64 result; // rax
  __int64 *v15; // rax
  __int64 *v16; // rax
  __int64 *v17; // rdx
  char v18; // [rsp+70h] [rbp+8h] BYREF

  v6 = (int)a1;
  v7 = *a1;
  v8 = (*a1)[1];
  v9 = (__int64 *)*a1;
  v10 = 1;
  while ( !*((_BYTE *)v8 + 25) )
  {
    v9 = v8;
    v11 = memcmp_0(a4, v8 + 4, 0x10uLL);
    v10 = v11 < 0;
    if ( v11 >= 0 )
      v8 = (__int64 *)v8[2];
    else
      v8 = (__int64 *)*v8;
  }
  try
  {
    v12 = v9;
    v13 = v9;
    if ( v10 )
    {
      if ( v9 == *v7 )
      {
        *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,std::wstring,Windows::Internal::Holographic::SpatialNodeIdLess,std::allocator<std::pair<SPATIAL_NODE_ID const,std::wstring>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,std::wstring>,std::_Not_a_node_tag>(
                                     v6,
                                     (unsigned int)&v18,
                                     1,
                                     (_DWORD)v9,
                                     (__int64)a4);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v9 + 25) )
      {
        v12 = (__int64 *)v9[2];
      }
      else
      {
        v15 = (__int64 *)*v9;
        if ( *(_BYTE *)(*v9 + 25) )
        {
          v16 = (__int64 *)v9[1];
          if ( !*((_BYTE *)v16 + 25) )
          {
            v17 = v9;
            do
            {
              v13 = v17;
              if ( v17 != (__int64 *)*v16 )
                break;
              v12 = v16;
              v16 = (__int64 *)v16[1];
              v17 = v12;
              v13 = v12;
            }
            while ( !*((_BYTE *)v16 + 25) );
          }
          if ( !*((_BYTE *)v12 + 25) )
          {
            v12 = v16;
            v13 = v16;
          }
          goto LABEL_21;
        }
        do
        {
          v12 = v15;
          v15 = (__int64 *)v15[2];
        }
        while ( !*((_BYTE *)v15 + 25) );
      }
      v13 = v12;
    }
LABEL_21:
    if ( memcmp_0(v13 + 4, a4, 0x10uLL) >= 0 )
    {
      *(_QWORD *)a2 = v12;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<SPATIAL_NODE_ID,std::wstring,Windows::Internal::Holographic::SpatialNodeIdLess,std::allocator<std::pair<SPATIAL_NODE_ID const,std::wstring>>,0>>::_Insert_at<std::pair<SPATIAL_NODE_ID const,std::wstring>,std::_Not_a_node_tag>(
                                   v6,
                                   (unsigned int)&v18,
                                   v10,
                                   (_DWORD)v9,
                                   (__int64)a4);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    throw;
  }
  return result;
}
