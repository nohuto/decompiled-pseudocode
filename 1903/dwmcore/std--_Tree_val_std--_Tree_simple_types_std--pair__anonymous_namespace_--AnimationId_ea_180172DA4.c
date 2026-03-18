/*
 * XREFs of std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Extract @ 0x180172DA4
 * Callers:
 *     std::_Tree_std::_Tmap_traits__anonymous_namespace_::AnimationId_unsigned_int_A0x155a666c::AnimationId::LessThan_std::allocator_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int____0___::erase @ 0x180072874 (std--_Tree_std--_Tmap_traits__anonymous_namespace_--AnimationId_unsigned_int_A0x155a666c--Animat.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@_K@std@@@std@@SAPEAU?$_Tree_node@_KPEAX@2@PEAU32@@Z @ 0x18001F6C8 (-_Min@-$_Tree_val@U-$_Tree_simple_types@_K@std@@@std@@SAPEAU-$_Tree_node@_KPEAX@2@PEAU32@@Z.c)
 *     std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__ @ 0x1800D0060 (std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Max @ 0x1800D181C (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_const__unsig.c)
 *     std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate @ 0x1800D4C04 (std--_Tree_val_std--_Tree_simple_types_std--pair__anonymous_namespace_--AnimationId_const__std--.c)
 *     ?_Rrotate@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@@std@@@std@@QEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$ComPtr@UICompObjectDiagnosticsRootProxy@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x180173898 (-_Rrotate@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBIV-$ComPtr@UICompObjectDiagnosticsRootPr.c)
 */

__int64 *__fastcall std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Extract(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v3; // r8
  __int64 *v4; // r11
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rax
  char v10; // dl
  __int64 *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *v17; // [rsp+38h] [rbp+10h] BYREF

  v17 = a2;
  std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int______std::_Iterator_base0_::operator__(&v17);
  v5 = v4[2];
  if ( *(_BYTE *)(*v4 + 25) )
    goto LABEL_5;
  if ( *(_BYTE *)(v5 + 25) )
  {
    v5 = *v4;
LABEL_5:
    v7 = v4[1];
    if ( !*(_BYTE *)(v5 + 25) )
      *(_QWORD *)(v5 + 8) = v7;
    if ( *(__int64 **)(*a1 + 8LL) == v4 )
    {
      *(_QWORD *)(*a1 + 8LL) = v5;
    }
    else if ( *(__int64 **)v7 == v4 )
    {
      *(_QWORD *)v7 = v5;
    }
    else
    {
      *(_QWORD *)(v7 + 16) = v5;
    }
    v3 = (_QWORD *)*a1;
    if ( *(__int64 **)*a1 == v4 )
    {
      if ( *(_BYTE *)(v5 + 25) )
        v8 = (_QWORD *)v7;
      else
        v8 = std::_Tree_val<std::_Tree_simple_types<unsigned __int64>>::_Min((_QWORD *)v5);
      *v3 = v8;
      v3 = (_QWORD *)*a1;
    }
    if ( (__int64 *)v3[2] == v4 )
    {
      if ( *(_BYTE *)(v5 + 25) )
        v9 = v7;
      else
        v9 = std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__unsigned_int_____::_Max(v5);
      v3[2] = v9;
    }
    v10 = *((_BYTE *)v4 + 24);
    goto LABEL_34;
  }
  v6 = (__int64)v17;
  v5 = v17[2];
  if ( v17 == v4 )
    goto LABEL_5;
  *(_QWORD *)(*v4 + 8) = v17;
  *(_QWORD *)v6 = *v4;
  if ( v6 == v4[2] )
  {
    v7 = v6;
  }
  else
  {
    v7 = *(_QWORD *)(v6 + 8);
    if ( !*(_BYTE *)(v5 + 25) )
      *(_QWORD *)(v5 + 8) = v7;
    *(_QWORD *)v7 = v5;
    *(_QWORD *)(v6 + 16) = v4[2];
    *(_QWORD *)(v4[2] + 8) = v6;
  }
  if ( *(__int64 **)(*a1 + 8LL) == v4 )
  {
    *(_QWORD *)(*a1 + 8LL) = v6;
  }
  else
  {
    v11 = (__int64 *)v4[1];
    if ( (__int64 *)*v11 == v4 )
      *v11 = v6;
    else
      v11[2] = v6;
  }
  *(_QWORD *)(v6 + 8) = v4[1];
  v10 = *(_BYTE *)(v6 + 24);
  *(_BYTE *)(v6 + 24) = *((_BYTE *)v4 + 24);
  *((_BYTE *)v4 + 24) = v10;
LABEL_34:
  if ( v10 == 1 )
  {
    if ( v5 != *(_QWORD *)(*a1 + 8LL) )
    {
      do
      {
        v12 = v7;
        if ( *(_BYTE *)(v5 + 24) != 1 )
          break;
        v13 = *(_QWORD *)v7;
        if ( v5 == *(_QWORD *)v7 )
        {
          v13 = *(_QWORD *)(v7 + 16);
          if ( !*(_BYTE *)(v13 + 24) )
          {
            *(_BYTE *)(v13 + 24) = 1;
            *(_BYTE *)(v7 + 24) = 0;
            std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate(
              (__int64)a1,
              v7);
            v13 = *(_QWORD *)(v7 + 16);
          }
          if ( *(_BYTE *)(v13 + 25) )
            goto LABEL_52;
          if ( *(_BYTE *)(*(_QWORD *)v13 + 24LL) != 1 || *(_BYTE *)(*(_QWORD *)(v13 + 16) + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(v13 + 16) + 24LL) == 1 )
            {
              *(_BYTE *)(*(_QWORD *)v13 + 24LL) = 1;
              *(_BYTE *)(v13 + 24) = 0;
              std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
                a1,
                v13,
                v3,
                v7);
              v13 = *(_QWORD *)(v7 + 16);
            }
            *(_BYTE *)(v13 + 24) = *(_BYTE *)(v7 + 24);
            *(_BYTE *)(v7 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)(v13 + 16) + 24LL) = 1;
            std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate(
              (__int64)a1,
              v7);
            break;
          }
        }
        else
        {
          if ( !*(_BYTE *)(v13 + 24) )
          {
            *(_BYTE *)(v13 + 24) = 1;
            *(_BYTE *)(v7 + 24) = 0;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              a1,
              v7,
              v3,
              v7);
            v13 = *(_QWORD *)v7;
          }
          if ( *(_BYTE *)(v13 + 25) )
            goto LABEL_52;
          v14 = *(_QWORD *)(v13 + 16);
          if ( *(_BYTE *)(v14 + 24) != 1 || *(_BYTE *)(*(_QWORD *)v13 + 24LL) != 1 )
          {
            if ( *(_BYTE *)(*(_QWORD *)v13 + 24LL) == 1 )
            {
              *(_BYTE *)(v14 + 24) = 1;
              *(_BYTE *)(v13 + 24) = 0;
              std::_Tree_val_std::_Tree_simple_types_std::pair__anonymous_namespace_::AnimationId_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const_______::_Lrotate(
                (__int64)a1,
                v13);
              v13 = *(_QWORD *)v7;
            }
            *(_BYTE *)(v13 + 24) = *(_BYTE *)(v7 + 24);
            *(_BYTE *)(v7 + 24) = 1;
            *(_BYTE *)(*(_QWORD *)v13 + 24LL) = 1;
            std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,Microsoft::WRL::ComPtr<ICompObjectDiagnosticsRootProxy>>>>::_Rrotate(
              a1,
              v7,
              v3,
              v7);
            break;
          }
        }
        *(_BYTE *)(v13 + 24) = 0;
LABEL_52:
        v5 = v12;
        v7 = *(_QWORD *)(v7 + 8);
      }
      while ( v12 != *(_QWORD *)(*a1 + 8LL) );
    }
    *(_BYTE *)(v5 + 24) = 1;
  }
  v15 = a1[1];
  if ( v15 )
    a1[1] = v15 - 1;
  return v4;
}
