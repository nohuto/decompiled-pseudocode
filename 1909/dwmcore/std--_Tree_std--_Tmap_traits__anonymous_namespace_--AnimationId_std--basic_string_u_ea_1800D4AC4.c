/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____std::_Not_a_node_tag_ @ 0x1800D4AC4
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800760D0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18003DFF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate @ 0x1800D4C34 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_const__std--.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180172148 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

__int64 *__fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const___A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const______0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____std::_Not_a_node_tag_(
        __int64 a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        __int64 a5)
{
  _QWORD *v5; // rbx
  __int64 v9; // rax
  __int64 v10; // r8
  char v11; // r11
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 *result; // rax
  __int64 v18; // rax
  __int64 *v19; // rdx
  __int64 v20; // rcx

  v5 = (_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(a1 + 16) >= 0x492492492492491uLL )
    std::_Xlength_error((const char *)a1);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  v11 = 0;
  v12 = v9;
  *(_QWORD *)v9 = *v5;
  *(_QWORD *)(v9 + 8) = *v5;
  *(_QWORD *)(v9 + 16) = *v5;
  *(_WORD *)(v9 + 24) = 0;
  *(_OWORD *)(v9 + 32) = *(_OWORD *)a5;
  *(_QWORD *)(v9 + 48) = *(_QWORD *)(a5 + 16);
  ++v5[1];
  *(_QWORD *)(v9 + 8) = a4;
  if ( a4 == (__int64 *)*v5 )
  {
    *(_QWORD *)(*v5 + 8LL) = v9;
    *(_QWORD *)*v5 = v9;
    v13 = *v5;
LABEL_4:
    *(_QWORD *)(v13 + 16) = v12;
    goto LABEL_5;
  }
  if ( a3 )
  {
    *a4 = v9;
    if ( a4 == *(__int64 **)*v5 )
      *(_QWORD *)*v5 = v9;
    goto LABEL_5;
  }
  a4[2] = v9;
  v13 = *v5;
  if ( a4 == *(__int64 **)(*v5 + 16LL) )
    goto LABEL_4;
LABEL_5:
  v14 = *(_QWORD *)(v12 + 8);
  v15 = v12;
  while ( *(_BYTE *)(v14 + 24) == v11 )
  {
    v18 = *(_QWORD *)(v15 + 8);
    v19 = *(__int64 **)(v18 + 8);
    v20 = *v19;
    if ( v18 == *v19 )
    {
      v20 = v19[2];
      if ( *(_BYTE *)(v20 + 24) == v11 )
      {
LABEL_17:
        *(_BYTE *)(v18 + 24) = 1;
        *(_BYTE *)(v20 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = v11;
        v15 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL);
        goto LABEL_16;
      }
      if ( v15 == *(_QWORD *)(v18 + 16) )
        std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate(
          v5,
          *(_QWORD *)(v15 + 8),
          v10,
          *(_QWORD *)(v15 + 8));
      *(_BYTE *)(*(_QWORD *)(v15 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = v11;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
        v5,
        *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL),
        v10,
        v15);
    }
    else
    {
      if ( *(_BYTE *)(v20 + 24) == v11 )
        goto LABEL_17;
      if ( v15 == *(_QWORD *)v18 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
          v5,
          *(_QWORD *)(v15 + 8),
          v10,
          *(_QWORD *)(v15 + 8));
      *(_BYTE *)(*(_QWORD *)(v15 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL) + 24LL) = v11;
      std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate(
        v5,
        *(_QWORD *)(*(_QWORD *)(v15 + 8) + 8LL),
        v10,
        v15);
    }
LABEL_16:
    v14 = *(_QWORD *)(v15 + 8);
  }
  v16 = *(_QWORD *)(*v5 + 8LL);
  result = a2;
  *a2 = v12;
  *(_BYTE *)(v16 + 24) = 1;
  return result;
}
