/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800C89C8
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800760D0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800C8904 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800C8904.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x180170D30 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180170D30.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate @ 0x1800D4C34 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_const__std--.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x180159B0C (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180172148 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

_QWORD *__fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 *v6; // r11
  unsigned __int64 v8; // rax
  _QWORD *v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  _QWORD *v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *result; // rax
  __int64 v16; // rax
  __int64 *v17; // rdx
  __int64 v18; // rcx
  const char *v19; // rcx

  v6 = (__int64 *)(a1 + 8);
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 >= 0x492492492492491LL )
  {
    std::_Deallocate<16,0>(a6, 0x38uLL);
    std::_Xlength_error(v19);
  }
  v9 = a6;
  *(_QWORD *)(a1 + 16) = v8 + 1;
  a6[1] = a4;
  if ( a4 == (_QWORD *)*v6 )
  {
    *(_QWORD *)(*v6 + 8) = a6;
    *(_QWORD *)*v6 = a6;
    v10 = *v6;
LABEL_4:
    *(_QWORD *)(v10 + 16) = a6;
    goto LABEL_5;
  }
  if ( (_BYTE)a3 )
  {
    *a4 = a6;
    if ( a4 == *(_QWORD **)*v6 )
      *(_QWORD *)*v6 = a6;
    goto LABEL_5;
  }
  a4[2] = a6;
  v10 = *v6;
  if ( a4 == *(_QWORD **)(*v6 + 16) )
    goto LABEL_4;
LABEL_5:
  v11 = a6[1];
  v12 = a6;
  while ( !*(_BYTE *)(v11 + 24) )
  {
    v16 = v12[1];
    v17 = *(__int64 **)(v16 + 8);
    v18 = *v17;
    if ( v16 == *v17 )
    {
      v18 = v17[2];
      if ( !*(_BYTE *)(v18 + 24) )
      {
LABEL_24:
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(v18 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(v12[1] + 8LL) + 24LL) = 0;
        v12 = *(_QWORD **)(v12[1] + 8LL);
        goto LABEL_18;
      }
      if ( v12 == *(_QWORD **)(v16 + 16) )
        std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate(
          v6,
          v12[1],
          a3,
          v12[1]);
      *(_BYTE *)(v12[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v12[1] + 8LL) + 24LL) = 0;
      std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
        v6,
        *(_QWORD *)(v12[1] + 8LL),
        a3,
        v12);
    }
    else
    {
      if ( !*(_BYTE *)(v18 + 24) )
        goto LABEL_24;
      if ( v12 == *(_QWORD **)v16 )
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
          v6,
          v12[1],
          a3,
          v12[1]);
      *(_BYTE *)(v12[1] + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(v12[1] + 8LL) + 24LL) = 0;
      std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate(
        v6,
        *(_QWORD *)(v12[1] + 8LL),
        a3,
        v12);
    }
LABEL_18:
    v11 = v12[1];
  }
  v13 = *v6;
  *a2 = v9;
  v14 = *(_QWORD *)(v13 + 8);
  result = a2;
  *(_BYTE *)(v14 + 24) = 1;
  return result;
}
