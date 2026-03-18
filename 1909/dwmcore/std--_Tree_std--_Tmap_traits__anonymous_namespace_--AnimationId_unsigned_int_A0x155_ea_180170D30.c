/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x180170D30
 * Callers:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800C8904 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800C8904.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800C89C8 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800C89C8.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Max @ 0x1800D1D2C (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_const__unsig.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 *v5; // rsi
  __int64 v6; // r10
  __int64 v8; // rbp
  __int64 *v9; // r9
  char v10; // dl
  __int64 v11; // r8
  __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 i; // rax
  __int64 v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(__int64 **)(a1 + 8);
  v6 = a4;
  v8 = a1;
  v9 = v5;
  v10 = 1;
  v11 = v5[1];
  while ( !*(_BYTE *)(v11 + 25) )
  {
    v9 = (__int64 *)v11;
    if ( *(_QWORD *)v6 >= *(_QWORD *)(v11 + 32) || *(_DWORD *)(v6 + 8) >= *(_DWORD *)(v11 + 40) )
    {
      v11 = *(_QWORD *)(v11 + 16);
      v10 = 0;
    }
    else
    {
      v11 = *(_QWORD *)v11;
      v10 = 1;
    }
  }
  v12 = (__int64)v9;
  if ( v10 )
  {
    if ( v9 == (__int64 *)*v5 )
    {
      LOBYTE(v11) = 1;
      goto LABEL_10;
    }
    if ( *((_BYTE *)v9 + 25) )
    {
      v12 = v9[2];
    }
    else
    {
      if ( *(_BYTE *)(*v9 + 25) )
      {
        for ( i = v9[1]; !*(_BYTE *)(i + 25) && v12 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
          v12 = i;
        if ( *(_BYTE *)(v12 + 25) )
          i = v12;
      }
      else
      {
        i = std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Max(*v9);
      }
      v12 = i;
    }
  }
  if ( *(_QWORD *)(v12 + 32) >= *(_QWORD *)v6 || *(_DWORD *)(v12 + 40) >= *(_DWORD *)(v6 + 8) )
  {
    std::_Deallocate<16,0>(a5, 0x38uLL);
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  LOBYTE(v11) = v10;
  a1 = v8;
LABEL_10:
  v13 = std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
          a1,
          &v17,
          v11,
          v9,
          v16,
          a5);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v13;
  return a2;
}
