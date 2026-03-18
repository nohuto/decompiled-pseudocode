/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64__std::_Not_a_node_tag_ @ 0x180069770
 * Callers:
 *     ?SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z @ 0x1800506D0 (-SetOutputValueOnTarget@CBaseExpression@@IEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Rrotate @ 0x180054BD4 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_unsigned_short.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Lrotate @ 0x18006993C (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_std--basic_string_u_ea_18006993C.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 *__fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64__std::_Not_a_node_tag_(
        __int64 a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        _OWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // r8
  char v11; // r11
  __int64 v12; // r10
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 *result; // rax
  __int64 *v22; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 16) >= 0x555555555555554uLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  v11 = 0;
  v12 = v9;
  *(_QWORD *)v9 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v9 + 8) = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(v9 + 16) = *(_QWORD *)(a1 + 8);
  *(_WORD *)(v9 + 24) = 0;
  *(_OWORD *)(v9 + 32) = *a5;
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)(v9 + 8) = a4;
  v13 = *(__int64 **)(a1 + 8);
  if ( a4 == v13 )
  {
    v13[1] = v12;
    **(_QWORD **)(a1 + 8) = v12;
    v14 = *(_QWORD *)(a1 + 8);
LABEL_5:
    *(_QWORD *)(v14 + 16) = v12;
    goto LABEL_6;
  }
  if ( a3 )
  {
    *a4 = v12;
    v22 = *(__int64 **)(a1 + 8);
    if ( a4 == (__int64 *)*v22 )
      *v22 = v12;
    goto LABEL_6;
  }
  a4[2] = v12;
  v14 = *(_QWORD *)(a1 + 8);
  if ( a4 == *(__int64 **)(v14 + 16) )
    goto LABEL_5;
LABEL_6:
  v15 = *(_QWORD *)(v12 + 8);
  v16 = v12;
  while ( *(_BYTE *)(v15 + 24) == v11 )
  {
    v17 = *(_QWORD *)(v16 + 8);
    v18 = *(__int64 **)(v17 + 8);
    v19 = *v18;
    if ( v17 == *v18 )
    {
      v19 = v18[2];
      if ( *(_BYTE *)(v19 + 24) == v11 )
      {
LABEL_7:
        *(_BYTE *)(v17 + 24) = 1;
        *(_BYTE *)(v19 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = v11;
        v16 = *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL);
        goto LABEL_8;
      }
      if ( v16 == *(_QWORD *)(v17 + 16) )
        std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Lrotate(
          a1,
          *(_QWORD *)(v16 + 8),
          v10,
          *(_QWORD *)(v16 + 8));
      *(_BYTE *)(*(_QWORD *)(v16 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = v11;
      std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Rrotate(
        a1,
        *(_QWORD **)(*(_QWORD *)(v16 + 8) + 8LL));
    }
    else
    {
      if ( *(_BYTE *)(v19 + 24) == v11 )
        goto LABEL_7;
      if ( v16 == *(_QWORD *)v17 )
        std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Rrotate(
          a1,
          *(_QWORD **)(v16 + 8));
      *(_BYTE *)(*(_QWORD *)(v16 + 8) + 24LL) = 1;
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) + 24LL) = v11;
      std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_____ptr64____0___::_Lrotate(
        a1,
        *(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL),
        v10,
        v16);
    }
LABEL_8:
    v15 = *(_QWORD *)(v16 + 8);
  }
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
  result = a2;
  *a2 = v12;
  *(_BYTE *)(v20 + 24) = 1;
  return result;
}
