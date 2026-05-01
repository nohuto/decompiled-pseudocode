/*
 * XREFs of ??$emplace@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@Z @ 0x1803A4870
 * Callers:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x1803A7214 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 * Callees:
 *     ??$_Buynode@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@?$_List_buy@U?$pair@$$CBUHostIdentifierKey@@I@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBUHostIdentifierKey@@I@std@@PEAX@1@PEAU21@0AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@Z @ 0x1803A444C (--$_Buynode@AEAUtagHostIdentifier@ViewEventHandlers@OneCore@Internal@Windows@@AEAI@-$_List_buy@U.c)
 *     ??$_Insert@AEAU?$pair@$$CBUHostIdentifierKey@@I@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUHostIdentifierKey@@I@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@1@@Z @ 0x1803A4644 (--$_Insert@AEAU-$pair@$$CBUHostIdentifierKey@@I@std@@V-$_List_unchecked_iterator@V-$_List_val@U-.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::emplace<Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier &,unsigned int &>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4)
{
  _QWORD **v4; // rax
  __int64 v7; // rsi
  _QWORD *v8; // r14
  _DWORD *v9; // rdx
  __int64 v10; // rax

  v4 = (_QWORD **)a1[1];
  v7 = (__int64)*v4;
  v8 = (_QWORD *)(*v4)[1];
  v9 = std::_List_buy<std::pair<HostIdentifierKey const,unsigned int>>::_Buynode<Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier &,unsigned int &>(
         (__int64)a1,
         *v4,
         v8,
         a3,
         a4);
  v10 = a1[2];
  if ( v10 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error("list<T> too long");
  a1[2] = v10 + 1;
  *(_QWORD *)(v7 + 8) = v9;
  *v8 = v9;
  std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Insert<std::pair<HostIdentifierKey const,unsigned int> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>>(
    a1,
    a2,
    (_DWORD *)(*(_QWORD *)a1[1] + 16LL),
    *(_QWORD ***)a1[1]);
  return a2;
}
