/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180053BEC
 * Callers:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const_&___ptr64_std::tuple__anonymous_namespace_::AnimationId_const_&___ptr64__std::tuple____ @ 0x180010D00 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800506D0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180148178 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180148178.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Lrotate @ 0x180053D64 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180053D64.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Rrotate @ 0x180054BD4 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_unsigned_short.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

_QWORD *__fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // r11
  __int64 v9; // r10
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *result; // rax
  _QWORD *v20; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = *(_QWORD *)(a1 + 16);
  v7 = a1;
  if ( v6 >= 0x555555555555554LL )
  {
    std::_Deallocate<16,0>(a6, 48LL);
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  }
  v9 = a6;
  *(_QWORD *)(a1 + 16) = v6 + 1;
  *(_QWORD *)(a6 + 8) = a4;
  v10 = *(_QWORD **)(a1 + 8);
  if ( a4 == v10 )
  {
    v10[1] = a6;
    **(_QWORD **)(a1 + 8) = a6;
    v11 = *(_QWORD *)(a1 + 8);
LABEL_5:
    *(_QWORD *)(v11 + 16) = a6;
    goto LABEL_6;
  }
  if ( (_BYTE)a3 )
  {
    *a4 = a6;
    v20 = *(_QWORD **)(a1 + 8);
    if ( a4 == (_QWORD *)*v20 )
      *v20 = a6;
    goto LABEL_6;
  }
  a4[2] = a6;
  v11 = *(_QWORD *)(a1 + 8);
  if ( a4 == *(_QWORD **)(v11 + 16) )
    goto LABEL_5;
LABEL_6:
  v12 = *(_QWORD *)(a6 + 8);
  v13 = a6;
  while ( !*(_BYTE *)(v12 + 24) )
  {
    v14 = *(_QWORD *)(v13 + 8);
    v15 = *(__int64 **)(v14 + 8);
    v16 = *v15;
    if ( v14 == *v15 )
    {
      v16 = v15[2];
      if ( !*(_BYTE *)(v16 + 24) )
      {
LABEL_15:
        *(_BYTE *)(v14 + 24) = 1;
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 24LL) = 0;
        v13 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL);
        goto LABEL_13;
      }
      if ( v13 == *(_QWORD *)(v14 + 16) )
        std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Lrotate(
          v7,
          *(_QWORD *)(v13 + 8),
          a3,
          *(_QWORD *)(v13 + 8));
      *(_BYTE *)(*(_QWORD *)(v13 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Rrotate(
        v7,
        *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL));
    }
    else
    {
      if ( !*(_BYTE *)(v16 + 24) )
        goto LABEL_15;
      if ( v13 == *(_QWORD *)v14 )
        std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Rrotate(
          v7,
          *(_QWORD *)(v13 + 8));
      *(_BYTE *)(*(_QWORD *)(v13 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 24LL) = 0;
      std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Lrotate(
        v7,
        *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL),
        a3,
        v13);
    }
LABEL_13:
    v12 = *(_QWORD *)(v13 + 8);
  }
  v17 = *(_QWORD *)(v7 + 8);
  *a2 = v9;
  v18 = *(_QWORD *)(v17 + 8);
  result = a2;
  *(_BYTE *)(v18 + 24) = 1;
  return result;
}
