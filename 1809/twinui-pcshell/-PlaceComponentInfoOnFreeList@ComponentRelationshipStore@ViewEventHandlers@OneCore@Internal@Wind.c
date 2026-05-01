/*
 * XREFs of ?PlaceComponentInfoOnFreeList@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJI@Z @ 0x1803A6AF4
 * Callers:
 *     ?UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJUtagHostIdentifier@2345@I@Z @ 0x1803A7F94 (-UnregisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windo.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??1ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ @ 0x1802118DC (--1ComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@QEAA@XZ.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 *     ??$emplace@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@?$_Hash@V?$_Umap_traits@IUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@8@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@@Z @ 0x1803A47CC (--$emplace@AEAIUComponentInfo@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Wind.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::PlaceComponentInfoOnFreeList(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this,
        int a2)
{
  char *v3; // rbx
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // r10
  int v7; // r11d
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // edi
  const char *v11; // r9
  unsigned __int8 v13[8]; // [rsp+20h] [rbp-98h] BYREF
  _QWORD v14[3]; // [rsp+28h] [rbp-90h] BYREF
  __int64 v15; // [rsp+40h] [rbp-78h] BYREF
  __int64 v16; // [rsp+50h] [rbp-68h] BYREF
  int v17; // [rsp+58h] [rbp-60h]
  int v18; // [rsp+5Ch] [rbp-5Ch]
  __int64 v19[2]; // [rsp+60h] [rbp-58h] BYREF
  int v20; // [rsp+70h] [rbp-48h]
  int v21; // [rsp+74h] [rbp-44h]
  int v22; // [rsp+78h] [rbp-40h]
  __int128 v23; // [rsp+80h] [rbp-38h]
  __int64 v24; // [rsp+90h] [rbp-28h]
  char v25; // [rsp+98h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v14[2] = -2LL;
  *(_DWORD *)v13 = a2;
  v14[0] = 0LL;
  v3 = (char *)this + 152;
  v4 = std::_Hash_bytes(v13, 4uLL) & *((_QWORD *)this + 25);
  while ( 1 )
  {
    v5 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
           (__int64)v3,
           &v15,
           v4);
    if ( v6 == *v5 )
      break;
    if ( *(_DWORD *)(v6 + 16) == v7 )
      goto LABEL_6;
  }
  v6 = *((_QWORD *)v3 + 1);
LABEL_6:
  if ( v6 != *((_QWORD *)this + 20) )
  {
    v8 = *(_QWORD *)(v6 + 40);
    v9 = *(_QWORD *)(v6 + 48);
    v10 = *(_DWORD *)(v6 + 60);
    v16 = v14[0];
    v17 = 0;
    v18 = 0;
    v19[0] = v8;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
    try
    {
      v19[1] = v9;
      v20 = 0;
      v21 = v10;
      v22 = 0;
      v23 = 0LL;
      v24 = 0LL;
      v25 = 1;
      std::_Hash<std::_Umap_traits<unsigned int,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>>,0>>::emplace<unsigned int &,Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo>(
        (__int64)this + 216,
        (__int64)v14,
        v13,
        (__int64)&v16);
      Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo::~ComponentInfo((Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::ComponentInfo *)&v16);
    }
    catch ( ... )
    {
      return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                             retaddr,
                             (void *)0x128,
                             (__int64)"onecoreuap\\shell\\onecore\\componentrelationshipstore\\componentrelationshipstore.cpp",
                             v11);
    }
  }
  return 0LL;
}
