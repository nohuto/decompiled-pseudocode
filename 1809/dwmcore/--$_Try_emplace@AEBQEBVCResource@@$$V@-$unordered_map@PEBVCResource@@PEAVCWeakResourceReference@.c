/*
 * XREFs of ??$_Try_emplace@AEBQEBVCResource@@$$V@?$unordered_map@PEBVCResource@@PEAVCWeakResourceReference@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@4@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEBQEBVCResource@@@Z @ 0x1800C4970
 * Callers:
 *     ??1CResource@@MEAA@XZ @ 0x18004E218 (--1CResource@@MEAA@XZ.c)
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x1800BD9C0 (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ??0CWeakResourceReference@@AEAA@PEAVCResource@@@Z @ 0x1800BDA90 (--0CWeakResourceReference@@AEAA@PEAVCResource@@@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@1@@Z @ 0x1800C4AB4 (--$_Insert@AEAU-$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V-$_List_unchecked_iterat.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::unordered_map<CResource const *,CWeakResourceReference *>::_Try_emplace<CResource const * const &,>(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r9
  _QWORD *i; // rax
  __int64 v10; // rcx
  __int64 v12; // rsi
  _QWORD *v13; // r14
  _QWORD *v14; // rdx
  __int64 v15; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v5 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  do
  {
    v7 = *((unsigned __int8 *)a3 + v5++);
    v6 = 0x100000001B3LL * (v7 ^ v6);
  }
  while ( v5 < 8 );
  v8 = 2 * (qword_18030BDE0 & v6);
  for ( i = *(_QWORD **)(qword_18030BDC8 + 16 * (qword_18030BDE0 & v6)); ; i = (_QWORD *)*i )
  {
    v10 = *(_QWORD *)(qword_18030BDC8 + 8 * v8) == qword_18030BDB8
        ? qword_18030BDB8
        : **(_QWORD **)(qword_18030BDC8 + 8 * v8 + 8);
    if ( i == (_QWORD *)v10 )
      break;
    if ( i[2] == *a3 )
      goto LABEL_8;
  }
  i = (_QWORD *)qword_18030BDB8;
LABEL_8:
  if ( i == (_QWORD *)qword_18030BDB8 )
  {
    v12 = *(_QWORD *)qword_18030BDB8;
    v13 = *(_QWORD **)(*(_QWORD *)qword_18030BDB8 + 8LL);
    v14 = (_QWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
    *v14 = v12;
    v14[1] = v13;
    v15 = *a3;
    v14[3] = 0LL;
    v14[2] = v15;
    if ( qword_18030BDC0 == 0x7FFFFFFFFFFFFFELL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    ++qword_18030BDC0;
    *(_QWORD *)(v12 + 8) = v14;
    *v13 = v14;
    std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Insert<std::pair<CResource const * const,CWeakResourceReference *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<CResource const * const,CWeakResourceReference *>>>>>(
      &CWeakResourceReference::s_weakReferenceMap,
      a2,
      *(_QWORD *)qword_18030BDB8 + 16LL,
      *(_QWORD *)qword_18030BDB8);
  }
  else
  {
    *(_QWORD *)a2 = i;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
