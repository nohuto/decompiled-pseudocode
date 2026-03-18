/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@std@@@std@@@2@0@Z @ 0x1800C4614
 * Callers:
 *     ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800678B8 (-OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ.c)
 *     ??_ECWeakResourceReference@@MEAAPEAXI@Z @ 0x1800BCEE0 (--_ECWeakResourceReference@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18005E3D8 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800E4F18 (-_Init@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 *     ?clear@?$list@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@2@@std@@QEAAXXZ @ 0x1800EA4A4 (-clear@-$list@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V-$allocator@U-$pair@QEBV.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // rbp
  _QWORD *v6; // rbx
  _QWORD *v8; // r14
  const unsigned __int8 *v9; // r11
  __int64 v10; // rax
  _QWORD *v11; // r11
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax

  v4 = qword_18030BDB8;
  v6 = a3;
  if ( a3 == *(_QWORD **)qword_18030BDB8 && a4 == (_QWORD *)qword_18030BDB8 )
  {
    std::list<std::pair<CResource const * const,CWeakResourceReference *>>::clear(&qword_18030BDB8);
    std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Init(
      &CWeakResourceReference::s_weakReferenceMap,
      8LL);
    *a2 = *(_QWORD *)qword_18030BDB8;
  }
  else
  {
    while ( 1 )
    {
      v8 = v6;
      if ( v6 == a4 )
        break;
      v9 = (const unsigned __int8 *)v6;
      v6 = (_QWORD *)*v6;
      v10 = std::_Hash_bytes(v9 + 16, 8uLL);
      v12 = qword_18030BDC8;
      v13 = 2 * (qword_18030BDE0 & v10);
      if ( *(_QWORD **)(qword_18030BDC8 + 16 * (qword_18030BDE0 & v10) + 8) == v11 )
      {
        if ( *(_QWORD **)(qword_18030BDC8 + 16 * (qword_18030BDE0 & v10)) == v11 )
        {
          *(_QWORD *)(qword_18030BDC8 + 16 * (qword_18030BDE0 & v10)) = v4;
          v12 = qword_18030BDC8;
          v14 = qword_18030BDB8;
        }
        else
        {
          v14 = v11[1];
        }
        *(_QWORD *)(v12 + 8 * v13 + 8) = v14;
      }
      else if ( *(_QWORD **)(qword_18030BDC8 + 16 * (qword_18030BDE0 & v10)) == v8 )
      {
        *(_QWORD *)(qword_18030BDC8 + 16 * (qword_18030BDE0 & v10)) = v6;
      }
      *(_QWORD *)v11[1] = *v11;
      *(_QWORD *)(*v11 + 8LL) = v11[1];
      --qword_18030BDC0;
      operator delete(v11, 0x20uLL);
      v4 = qword_18030BDB8;
    }
    *a2 = v6;
  }
  return a2;
}
