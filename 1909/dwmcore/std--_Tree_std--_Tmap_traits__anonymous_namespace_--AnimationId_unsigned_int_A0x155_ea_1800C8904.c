/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800C8904
 * Callers:
 *     _anonymous_namespace_::SequenceEncoder::Serialize @ 0x180041404 (_anonymous_namespace_--SequenceEncoder--Serialize.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const_&_std::tuple__anonymous_namespace_::AnimationId_const_&__std::tuple____ @ 0x1800C889C (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800C889C.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x1800C89C8 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_1800C89C8.c)
 *     std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__ @ 0x1800D0340 (std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Max @ 0x1800D1D2C (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_const__unsig.c)
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______ @ 0x180170D30 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180170D30.c)
 */

_QWORD *__fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_hint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 a5)
{
  _QWORD *v6; // r9
  _QWORD *v7; // rsi
  _QWORD *v8; // rbx
  int v9; // r11d
  unsigned __int64 v11; // r14
  unsigned int v12; // r10d
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdx
  unsigned int v16; // ebp
  char v17; // [rsp+30h] [rbp-28h] BYREF
  _QWORD *v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0LL;
  v6 = a3;
  v7 = *(_QWORD **)(a1 + 8);
  v8 = a2;
  v9 = a1;
  if ( *(_QWORD *)(a1 + 16) )
  {
    if ( a3 == (_QWORD *)*v7 )
    {
      if ( (unsigned __int64)*a4 < a3[4] && *((_DWORD *)a4 + 2) < *((_DWORD *)a3 + 10) )
        goto LABEL_3;
      goto LABEL_9;
    }
    if ( a3 == v7 )
    {
      v6 = (_QWORD *)v7[2];
      if ( v6[4] < (unsigned __int64)*a4 && *((_DWORD *)v6 + 10) < *((_DWORD *)a4 + 2) )
        goto LABEL_11;
      goto LABEL_9;
    }
    v11 = *a4;
    if ( (unsigned __int64)*a4 >= a3[4] || (v12 = *((_DWORD *)a4 + 2), v12 >= *((_DWORD *)a3 + 10)) )
    {
LABEL_34:
      if ( v6[4] < v11 )
      {
        v16 = *((_DWORD *)a4 + 2);
        if ( *((_DWORD *)v6 + 10) < v16 )
        {
          v18 = v6;
          std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__(&v18);
          if ( v18 == v7 || v11 < v18[4] && v16 < *((_DWORD *)v18 + 10) )
          {
            LODWORD(a2) = (_DWORD)v8;
            LODWORD(a1) = v9;
            if ( !*(_BYTE *)(v6[2] + 25LL) )
            {
              LODWORD(v6) = (_DWORD)v18;
              goto LABEL_3;
            }
LABEL_11:
            LODWORD(a3) = 0;
            goto LABEL_4;
          }
        }
      }
LABEL_9:
      *v8 = *(_QWORD *)std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
                         v9,
                         (unsigned int)&v17,
                         (_DWORD)a3,
                         (_DWORD)a4,
                         a5);
      return v8;
    }
    v13 = (__int64)a3;
    v18 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v13 = a3[2];
    }
    else
    {
      if ( *(_BYTE *)(*a3 + 25LL) )
      {
        v14 = a3[1];
        if ( !*(_BYTE *)(v14 + 25) )
        {
          v15 = a3;
          do
          {
            LODWORD(a3) = v14;
            if ( v15 != *(_QWORD **)v14 )
              break;
            v13 = v14;
            v18 = (_QWORD *)v14;
            v14 = *(_QWORD *)(v14 + 8);
            v15 = (_QWORD *)v13;
          }
          while ( !*(_BYTE *)(v14 + 25) );
        }
        if ( !*(_BYTE *)(v13 + 25) )
        {
          v13 = v14;
          v18 = (_QWORD *)v14;
        }
LABEL_28:
        if ( *(_QWORD *)(v13 + 32) < v11 && *(_DWORD *)(v13 + 40) < v12 )
        {
          LODWORD(a2) = (_DWORD)v8;
          if ( *(_BYTE *)(*(_QWORD *)(v13 + 16) + 25LL) )
          {
            LODWORD(v6) = v13;
            LODWORD(a3) = 0;
          }
          else
          {
            LOBYTE(a3) = 1;
          }
          LODWORD(a1) = v9;
          goto LABEL_4;
        }
        goto LABEL_34;
      }
      v13 = std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Max(*a3);
    }
    v18 = (_QWORD *)v13;
    goto LABEL_28;
  }
  v6 = *(_QWORD **)(a1 + 8);
LABEL_3:
  LOBYTE(a3) = 1;
LABEL_4:
  std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void______(
    a1,
    (_DWORD)a2,
    (_DWORD)a3,
    (_DWORD)v6);
  return v8;
}
