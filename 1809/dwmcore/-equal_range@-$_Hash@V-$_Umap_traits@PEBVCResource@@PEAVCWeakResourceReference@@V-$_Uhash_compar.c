/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@std@@V12@@2@AEBQEBVCResource@@@Z @ 0x1800C489C
 * Callers:
 *     ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800678B8 (-OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ.c)
 *     ??_ECWeakResourceReference@@MEAAPEAXI@Z @ 0x1800BCEE0 (--_ECWeakResourceReference@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@_K@Z @ 0x1800693C8 (-_End@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBVC.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::equal_range(
        __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  _QWORD *i; // r10
  _QWORD *v8; // rbp
  _QWORD *v9; // rax
  _QWORD *v10; // r10
  _QWORD *v11; // r11
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v17 = a1;
  v4 = std::_Hash_bytes(a3, 8uLL);
  v5 = qword_18030BDC8;
  v6 = qword_18030BDE0 & v4;
  for ( i = *(_QWORD **)(qword_18030BDC8 + 16 * (qword_18030BDE0 & v4)); ; i = (_QWORD *)*v10 )
  {
    v8 = i;
    v9 = std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_End(
           (__int64)&CWeakResourceReference::s_weakReferenceMap,
           &v17,
           v6);
    v12 = qword_18030BDB8;
    if ( v10 == (_QWORD *)*v9 )
      break;
    if ( v10[2] == *(_QWORD *)a3 )
    {
      v13 = v10;
      v14 = 2 * v6;
      while ( 1 )
      {
        v15 = *(_QWORD *)(v5 + 8 * v14) == qword_18030BDB8 ? qword_18030BDB8 : **(_QWORD **)(v5 + 8 * v14 + 8);
        if ( v10 == (_QWORD *)v15 || *(_QWORD *)a3 != v10[2] )
          break;
        v10 = (_QWORD *)*v10;
      }
      if ( v8 != v10 )
      {
        *v11 = v13;
        v11[1] = v10;
        return v11;
      }
      break;
    }
  }
  *v11 = qword_18030BDB8;
  v11[1] = v12;
  return v11;
}
