/*
 * XREFs of ?GetCurrentInputTypesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x180089BB8
 * Callers:
 *     ?GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x180089590 (-GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoA.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180025270 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18006F254 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18006F294 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x18007BE74 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x18008877C (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800888E8 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18008B600 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x18008B8CC (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall MPCConstantManager::GetCurrentInputTypesString(__int64 a1, _QWORD *a2)
{
  int v4; // esi
  __int64 *v5; // rbx
  __int64 v6; // rax
  signed int v7; // edx
  _WORD *v8; // rax
  _WORD *v9; // rax
  __int64 v10; // rax
  _QWORD v12[3]; // [rsp+30h] [rbp-61h] BYREF
  char v13[16]; // [rsp+48h] [rbp-49h] BYREF
  __int64 v14; // [rsp+58h] [rbp-39h]
  __int64 v15; // [rsp+60h] [rbp-31h]
  _OWORD v16[4]; // [rsp+68h] [rbp-29h] BYREF
  _WORD v17[3]; // [rsp+B2h] [rbp+21h] BYREF

  v12[1] = -2LL;
  v12[2] = a2;
  std::wstring::wstring(a2, (const unsigned __int16 *)((char *)&word_180182F5B + 1));
  v4 = 1;
  v5 = *(__int64 **)(a1 + 56);
  v6 = *v5;
  v12[0] = *v5;
  while ( (__int64 *)v6 != v5 )
  {
    v7 = *(_DWORD *)(v6 + 32);
    if ( a2[2] )
    {
      if ( v7 >= 0 )
      {
        v9 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v17, v7);
      }
      else
      {
        v9 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v17, -v7) - 1;
        *v9 = 45;
      }
      v14 = 0LL;
      v15 = 7LL;
      *(_WORD *)v13 = 0;
      if ( v9 != v17 )
        std::wstring::assign(v13, v9, v17 - v9);
      v10 = std::wstring::insert(v13);
      v16[0] = *(_OWORD *)v10;
      v16[1] = *(_OWORD *)(v10 + 16);
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_QWORD *)(v10 + 24) = 7LL;
      *(_WORD *)v10 = 0;
      v4 |= 0x38u;
      std::wstring::append(a2);
      std::wstring::_Tidy_deallocate((__int64)v16);
    }
    else
    {
      if ( v7 >= 0 )
      {
        v8 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v17, v7);
      }
      else
      {
        v8 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v17, -v7) - 1;
        *v8 = 45;
      }
      v14 = 0LL;
      v15 = 7LL;
      *(_WORD *)v13 = 0;
      if ( v8 != v17 )
        std::wstring::assign(v13, v8, v17 - v8);
      v4 |= 6u;
      std::wstring::operator=(a2, (__int64)v13);
    }
    std::wstring::_Tidy_deallocate((__int64)v13);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(v12);
    v6 = v12[0];
  }
  return a2;
}
