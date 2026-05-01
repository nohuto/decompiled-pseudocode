/*
 * XREFs of ?GetHostIdentifierForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1803A5970
 * Callers:
 *     ?DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1803A4FA0 (-DisconnectComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 *     ?GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAW4CRSComponentRelationshipFlags@2345@PEAUtagHostIdentifier@2345@@Z @ 0x1803A58D0 (-GetHostIdentifierForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Win.c)
 *     ?UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJI@Z @ 0x1803A7DA0 (-UnregisterComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetHostIdentifierForComponentNoLock(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this,
        int a2,
        enum Windows::Internal::OneCore::ViewEventHandlers::CRSComponentRelationshipFlags *a3,
        struct Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier *a4)
{
  char *v5; // rbp
  __int64 v9; // r12
  __int64 v10; // r15
  _QWORD *v11; // rax
  __int64 v12; // r10
  char *v13; // r11
  __int64 v14; // rsi
  _QWORD *v15; // rax
  __int64 v17; // [rsp+60h] [rbp+8h] BYREF
  int v18; // [rsp+68h] [rbp+10h] BYREF

  v18 = a2;
  v5 = (char *)this + 152;
  v9 = std::_Hash_bytes((const unsigned __int8 *)&v18, 4uLL);
  v10 = v9 & *((_QWORD *)v5 + 6);
  while ( 1 )
  {
    v11 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
            (__int64)v5,
            &v17,
            v10);
    if ( v12 == *v11 )
      break;
    if ( *(_DWORD *)(v12 + 16) == a2 )
      goto LABEL_6;
  }
  v12 = *((_QWORD *)v5 + 1);
LABEL_6:
  if ( v12 != *((_QWORD *)this + 20) )
  {
    *(_QWORD *)a4 = *(_QWORD *)(v12 + 24);
    *((_DWORD *)a4 + 2) = *(_DWORD *)(v12 + 32);
LABEL_14:
    if ( a3 )
      *(_DWORD *)a3 = *(_DWORD *)(v12 + 60);
    return 0LL;
  }
  v13 = (char *)this + 216;
  *(_QWORD *)a4 = 0LL;
  *((_DWORD *)a4 + 2) = 0;
  v14 = v9 & *((_QWORD *)this + 33);
  while ( 1 )
  {
    v15 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
            (__int64)v13,
            &v17,
            v14);
    if ( v12 == *v15 )
      break;
    if ( *(_DWORD *)(v12 + 16) == a2 )
      goto LABEL_13;
  }
  v12 = *((_QWORD *)v13 + 1);
LABEL_13:
  if ( v12 != *((_QWORD *)this + 28) )
    goto LABEL_14;
  if ( a3 )
    *(_DWORD *)a3 = 0;
  return 0LL;
}
