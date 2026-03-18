/*
 * XREFs of std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180148178
 * Callers:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const_&___ptr64_std::tuple__anonymous_namespace_::AnimationId_const_&___ptr64__std::tuple____ @ 0x180010D00 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__&___ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_ @ 0x180053BEC (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155_ea_180053BEC.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_nohint_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 *a4,
        void *a5)
{
  _QWORD *v7; // rdx
  char v8; // r10
  _QWORD *v9; // r9
  __int64 *v10; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 i; // rax
  __int64 v16; // [rsp+20h] [rbp-18h]
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  v7 = *(_QWORD **)(a1 + 8);
  v8 = 1;
  v9 = v7;
  v10 = (__int64 *)v7[1];
  if ( !*((_BYTE *)v10 + 25) )
  {
    a3 = *a4;
    do
    {
      v9 = v10;
      if ( a3 >= v10[4] )
      {
        v10 = (__int64 *)v10[2];
        v8 = 0;
      }
      else
      {
        v10 = (__int64 *)*v10;
        v8 = 1;
      }
    }
    while ( !*((_BYTE *)v10 + 25) );
  }
  v11 = v9;
  if ( v8 )
  {
    if ( v9 == (_QWORD *)*v7 )
    {
      LOBYTE(a3) = 1;
      goto LABEL_10;
    }
    if ( *((_BYTE *)v9 + 25) )
    {
      v11 = (_QWORD *)v9[2];
    }
    else
    {
      v13 = *v9;
      if ( *(_BYTE *)(*v9 + 25LL) )
      {
        for ( i = v9[1]; !*(_BYTE *)(i + 25) && v11 == *(_QWORD **)i; i = *(_QWORD *)(i + 8) )
          v11 = (_QWORD *)i;
        if ( !*((_BYTE *)v11 + 25) )
          v11 = (_QWORD *)i;
      }
      else
      {
        do
        {
          v11 = (_QWORD *)v13;
          v13 = *(_QWORD *)(v13 + 16);
        }
        while ( !*(_BYTE *)(v13 + 25) );
      }
    }
  }
  if ( v11[4] >= *a4 )
  {
    std::_Deallocate<16,0>(a5, 0x30uLL);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 0;
    return a2;
  }
  LOBYTE(a3) = v8;
LABEL_10:
  v12 = std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::_Insert_at_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______ptr64_std::_Tree_node_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int__void_____ptr64______ptr64_(
          a1,
          &v17,
          a3,
          v9,
          v16,
          (__int64)a5);
  *(_BYTE *)(a2 + 8) = 1;
  *(_QWORD *)a2 = *v12;
  return a2;
}
