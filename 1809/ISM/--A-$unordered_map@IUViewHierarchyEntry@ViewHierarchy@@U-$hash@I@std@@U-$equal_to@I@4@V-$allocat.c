/*
 * XREFs of ??A?$unordered_map@IUViewHierarchyEntry@ViewHierarchy@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@@std@@QEAAAEAUViewHierarchyEntry@ViewHierarchy@@AEBI@Z @ 0x18000EE04
 * Callers:
 *     ?OnPropertyChanged@ViewHierarchy@@UEAAJPEAUIMessageProxy@@G@Z @ 0x18000DC30 (-OnPropertyChanged@ViewHierarchy@@UEAAJPEAUIMessageProxy@@G@Z.c)
 *     ?OnAdded@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z @ 0x18000DEF0 (-OnAdded@ViewHierarchy@@UEAAJPEAUIMessageList@@HPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@1@@Z @ 0x18000F8B8 (--$_Insert@AEAU-$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V-$_List_unchecked_iterator@.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18000FB54 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_List_buy@U-$pair@$.c)
 */

__int64 *__fastcall std::unordered_map<unsigned int,ViewHierarchy::ViewHierarchyEntry>::operator[](
        _QWORD *a1,
        _DWORD *a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 *j; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rdi
  int v15; // edx
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD v20[3]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD *v21; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = *((unsigned __int8 *)a2 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = (__int64 *)a1[1];
  v8 = v4 & a1[6];
  v9 = a1[3];
  v10 = 2 * v8;
  for ( j = *(__int64 **)(v9 + 16 * v8); ; j = (__int64 *)*j )
  {
    v12 = *(__int64 **)(v9 + 8 * v10) == v7 ? (__int64 *)a1[1] : **(__int64 ***)(v9 + 8 * v10 + 8);
    if ( j == v12 )
      break;
    if ( *((_DWORD *)j + 4) == *a2 )
    {
      v13 = j;
      goto LABEL_12;
    }
  }
  j = (__int64 *)a1[1];
  v13 = j;
LABEL_12:
  if ( v13 == v7 )
  {
    v14 = *v7;
    v15 = *v7;
    v21 = a2;
    v16 = *(__int64 **)(v14 + 8);
    v17 = std::_List_buy<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            (_DWORD)v13,
            v15,
            (_DWORD)v16,
            v10,
            (__int64)&v21);
    v18 = a1[2];
    if ( v18 == 0x666666666666665LL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v18 + 1;
    *(_QWORD *)(v14 + 8) = v17;
    *v16 = v17;
    std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::_Insert<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>>>>(
      a1,
      v20,
      *(_QWORD *)a1[1] + 16LL);
    j = (__int64 *)v20[0];
  }
  return j + 3;
}
