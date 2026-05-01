/*
 * XREFs of ?GetViewForComponentNoLock@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJIPEAPEAUIInspectable@@@Z @ 0x1803A6504
 * Callers:
 *     ?GetViewForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJIPEAPEAUIInspectable@@@Z @ 0x1803A64A0 (-GetViewForComponent@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAA.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18006C630 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEBA?AV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@_K@Z @ 0x1802C92FC (-_End@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$hash.c)
 */

__int64 __fastcall Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore::GetViewForComponentNoLock(
        Windows::Internal::OneCore::ViewEventHandlers::ComponentRelationshipStore *this,
        int a2,
        struct IInspectable **a3)
{
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // rbx
  _QWORD *v9; // rax
  __int64 v10; // r10
  struct IInspectable **v11; // rbx
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  int v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  *a3 = 0LL;
  v6 = std::_Hash_bytes((const unsigned __int8 *)&v14, 4uLL);
  v8 = *(_QWORD *)(v7 + 48) & v6;
  while ( 1 )
  {
    v9 = std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_End(
           v7,
           &v13,
           v8);
    if ( v10 == *v9 )
      break;
    if ( *(_DWORD *)(v10 + 16) == a2 )
      goto LABEL_6;
  }
  v10 = *(_QWORD *)(v7 + 8);
LABEL_6:
  if ( v10 == *((_QWORD *)this + 20) )
    return 2154299395LL;
  v11 = (struct IInspectable **)(v10 + 40);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(v10 + 40));
  *a3 = *v11;
  return 0LL;
}
