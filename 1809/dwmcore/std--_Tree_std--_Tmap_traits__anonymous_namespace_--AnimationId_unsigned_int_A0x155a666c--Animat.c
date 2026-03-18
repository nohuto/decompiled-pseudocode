/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const_&___ptr64_std::tuple__anonymous_namespace_::AnimationId_const_&___ptr64__std::tuple____ @ 0x180010D00
 * Callers:
 *     std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_&___ptr64_ @ 0x180010C7C (std--map__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--AnimationId--LessThan_std-.c)
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x1800DDDFC (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 * Callees:
 *     std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__ @ 0x180015DE0 (std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180053BEC (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180053BEC.c)
 *     std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buynode0 @ 0x1800C509C (std--_Tree_comp_alloc_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_ea_1800C509C.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180148178 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180148178.c)
 */

_QWORD *std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const_____ptr64_std::tuple__anonymous_namespace_::AnimationId_const_____ptr64__std::tuple____(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        ...)
{
  __int64 v6; // rax
  int v7; // r8d
  unsigned __int64 **v8; // r9
  __int64 v9; // r10
  unsigned __int64 *v10; // r9
  unsigned __int64 v11; // rax
  _QWORD *v12; // r11
  _QWORD *v13; // r9
  int v14; // edx
  int v15; // ecx
  unsigned __int64 v17; // rbp
  _QWORD *v18; // rax
  _QWORD *i; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  _QWORD *v22; // r11
  char v23; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v24; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+78h] [rbp+20h]
  unsigned __int64 **v26; // [rsp+80h] [rbp+28h]
  va_list va1; // [rsp+88h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v24 = va_arg(va1, _QWORD *);
  v26 = va_arg(va1, unsigned __int64 **);
  v6 = std::_Tree_comp_alloc_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Buynode0();
  v8 = v26;
  v9 = v6;
  v24 = 0LL;
  *(_WORD *)(v6 + 24) = 0;
  v10 = *v8;
  v11 = *v10;
  *(_QWORD *)(v9 + 32) = *v10;
  *(_DWORD *)(v9 + 40) = 0;
  v12 = *(_QWORD **)(a1 + 8);
  if ( !*(_QWORD *)(a1 + 16) )
  {
    v13 = *(_QWORD **)(a1 + 8);
    goto LABEL_10;
  }
  if ( a3 == (_QWORD *)*v12 )
  {
    if ( v11 >= a3[4] )
      goto LABEL_37;
    LODWORD(v13) = (_DWORD)a3;
LABEL_10:
    LOBYTE(v7) = 1;
    goto LABEL_6;
  }
  if ( a3 != v12 )
  {
    v17 = v11;
    if ( v11 >= a3[4] )
      goto LABEL_34;
    v24 = a3;
    v18 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v13 = (_QWORD *)a3[2];
    }
    else
    {
      v13 = (_QWORD *)*a3;
      if ( *(_BYTE *)(*a3 + 25LL) )
      {
        v20 = a3[1];
        if ( !*(_BYTE *)(v20 + 25) )
        {
          v21 = a3;
          do
          {
            v7 = v20;
            if ( v21 != *(_QWORD **)v20 )
              break;
            v18 = (_QWORD *)v20;
            v24 = (_QWORD *)v20;
            v20 = *(_QWORD *)(v20 + 8);
            v21 = v18;
          }
          while ( !*(_BYTE *)(v20 + 25) );
        }
        v13 = v18;
        if ( !*((_BYTE *)v18 + 25) )
          v13 = (_QWORD *)v20;
      }
      else
      {
        for ( i = (_QWORD *)v13[2]; !*((_BYTE *)i + 25); i = (_QWORD *)i[2] )
          v13 = i;
      }
    }
    v24 = v13;
    if ( v13[4] >= v17 )
    {
LABEL_34:
      if ( a3[4] >= v17 )
        goto LABEL_37;
      v24 = a3;
      std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__((_QWORD **)va);
      LODWORD(v13) = (_DWORD)v24;
      if ( v24 != v22 && v17 >= v24[4] )
        goto LABEL_37;
      v14 = (int)a2;
      v15 = a1;
      if ( !*(_BYTE *)(a3[2] + 25LL) )
      {
LABEL_30:
        LOBYTE(v7) = 1;
        goto LABEL_7;
      }
      LODWORD(v13) = (_DWORD)a3;
    }
    else
    {
      v14 = (int)a2;
      v15 = a1;
      if ( !*(_BYTE *)(v13[2] + 25LL) )
      {
        LODWORD(v13) = (_DWORD)a3;
        goto LABEL_30;
      }
    }
    v7 = 0;
    goto LABEL_7;
  }
  v13 = (_QWORD *)v12[2];
  if ( v13[4] >= v11 )
  {
LABEL_37:
    *a2 = *(_QWORD *)std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_(
                       a1,
                       (unsigned int)&v23,
                       v7,
                       (int)v9 + 32,
                       v9);
    return a2;
  }
  v7 = 0;
LABEL_6:
  v14 = (int)a2;
  v15 = a1;
LABEL_7:
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_(
    v15,
    v14,
    v7,
    (_DWORD)v13);
  return a2;
}
