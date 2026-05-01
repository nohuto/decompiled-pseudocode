/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBUHostIdentifierKey@@I@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUHostIdentifierKey@@I@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@1@@Z @ 0x1803A4644
 * Callers:
 *     ??$emplace@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@Z @ 0x1803A4870 (--$emplace@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@-$_Hash@V-$_Um.c)
 *     ?_Reinsert@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAXXZ @ 0x1803A81CC (-_Reinsert@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 *     ??R?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@QEBA_NAEBUHostIdentifierKey@@0@Z @ 0x1803A4C84 (--R-$_Uhash_compare@UHostIdentifierKey@@U-$hash@UHostIdentifierKey@@@std@@U-$equal_to@UHostIdent.c)
 *     ?_Check_size@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAXXZ @ 0x1803A80F4 (-_Check_size@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Insert<std::pair<HostIdentifierKey const,unsigned int> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD **a4)
{
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r10
  __int64 v12; // r11
  __int64 v13; // r11
  _QWORD *v14; // r15
  _QWORD *v15; // rax
  _QWORD *v16; // rdx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD **v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 result; // rax
  __int64 v26; // [rsp+70h] [rbp+18h] BYREF
  _QWORD **v27; // [rsp+78h] [rbp+20h]

  v27 = a4;
  if ( *a3 == 1 )
    v8 = a3[2];
  else
    v8 = a3[1];
  LODWORD(v26) = v8;
  v9 = std::_Hash_bytes((const unsigned __int8 *)&v26, 4uLL);
  v11 = (_QWORD *)*std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
                     (__int64)a1,
                     &v26,
                     v9 & a1[6]);
  v13 = 2 * v12;
  v14 = *(_QWORD **)(a1[3] + 8 * v13);
  while ( v11 != v14 )
  {
    if ( !(unsigned __int8)std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>::operator()(
                             v10,
                             a3,
                             v11[1] + 16LL) )
    {
      v11 = (_QWORD *)*v11;
      break;
    }
  }
  v15 = *a4;
  if ( v11 != *a4 )
  {
    *a4[1] = v15;
    *(_QWORD *)v15[1] = v11;
    *(_QWORD *)v11[1] = a4;
    v16 = (_QWORD *)v11[1];
    v11[1] = v15[1];
    v15[1] = a4[1];
    a4[1] = v16;
  }
  v17 = a1[3];
  v18 = *(_QWORD **)(v17 + 8 * v13);
  if ( v18 == (_QWORD *)a1[1] )
  {
    *(_QWORD *)(v17 + 8 * v13) = a4;
    v19 = a1[3];
    *(_QWORD *)(v19 + 8 * v13 + 8) = a4;
  }
  else if ( v18 == v11 )
  {
    *(_QWORD *)(v17 + 8 * v13) = a4;
  }
  else
  {
    v20 = *(_QWORD **)(v17 + 8 * v13 + 8);
    v21 = (_QWORD **)*v20;
    *(_QWORD *)(v17 + 8 * v13 + 8) = *v20;
    if ( v21 != a4 )
    {
      v22 = a1[3];
      v23 = *(_QWORD *)(v22 + 8 * v13 + 8);
      *(_QWORD *)(v22 + 8 * v13 + 8) = *(_QWORD *)(v23 + 8);
    }
  }
  try
  {
    std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Check_size(a1);
    *(_QWORD *)a2 = a4;
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::erase(
      a1,
      &v26,
      v27);
    throw;
  }
  return result;
}
