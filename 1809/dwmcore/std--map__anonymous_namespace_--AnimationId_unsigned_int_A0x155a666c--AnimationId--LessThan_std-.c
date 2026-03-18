/*
 * XREFs of std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_&___ptr64_ @ 0x180010C7C
 * Callers:
 *     _anonymous_namespace_::SendFramesReport @ 0x1800DD1CC (_anonymous_namespace_--SendFramesReport.c)
 * Callees:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const_&___ptr64_std::tuple__anonymous_namespace_::AnimationId_const_&___ptr64__std::tuple____ @ 0x180010D00 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 */

__int64 __fastcall std::map__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Try_emplace__anonymous_namespace_::AnimationId_const_____ptr64_(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 *v4; // rdx
  __int64 *v6; // r8
  __int64 *v7; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+58h] [rbp+20h] BYREF

  v4 = *(__int64 **)(a1 + 8);
  v6 = v4;
  v7 = (__int64 *)v4[1];
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( (unsigned __int64)v7[4] >= *a3 )
    {
      v6 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      v7 = (__int64 *)v7[2];
    }
  }
  if ( v6 == v4 || *a3 < (unsigned __int64)v6[4] )
  {
    v10 = a3;
    v9 = (_QWORD *)std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::emplace_hint_std::piecewise_construct_t_const_____ptr64_std::tuple__anonymous_namespace_::AnimationId_const_____ptr64__std::tuple____(
                     a1,
                     (unsigned int)&v11,
                     (_DWORD)v6,
                     (_DWORD)a3,
                     (__int64)&v10);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v9;
  }
  else
  {
    *(_QWORD *)a2 = v6;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
