/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@PEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@V?$_Uhash_compare@PEAUIDCompInputTarget@@UDCompTargetHash@@UDCompTargetEqual@@@3@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800BA6B0
 * Callers:
 *     _std::_Hash_std::_Umap_traits_IDCompInputTarget___std::vector_unsigned_long_std::allocator_unsigned_long____std::_Uhash_compare_IDCompInputTarget___DCompTargetHash_DCompTargetEqual__std::allocator_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long________0___::_Insert_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long______&_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_IDCompInputTarget___const_std::vector_unsigned_long_std::allocator_unsigned_long______________::_1_::catch$53 @ 0x1800BA48E (_std--_Hash_std--_Umap_traits_IDCompInputTarget___std--vector_unsigned_long_std--al_ea_1800BA48E.c)
 * Callees:
 *     ??RDCompTargetHash@@QEBA_KPEBUIDCompInputTarget@@@Z @ 0x1800BB62C (--RDCompTargetHash@@QEBA_KPEBUIDCompInputTarget@@@Z.c)
 *     ?erase@?$list@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@V?$allocator@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIDCompInputTarget@@V?$vector@KV?$allocator@K@std@@@std@@@std@@@std@@@std@@@2@@Z @ 0x1800BFA68 (-erase@-$list@U-$pair@QEAUIDCompInputTarget@@V-$vector@KV-$allocator@K@std@@@std@@@std@@V-$alloc.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<IDCompInputTarget *,std::vector<unsigned long>,std::_Uhash_compare<IDCompInputTarget *,DCompTargetHash,DCompTargetEqual>,std::allocator<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>>>,void>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax

  v6 = DCompTargetHash::operator()(a1, a3[2]);
  v7 = a1[3];
  v8 = 2 * (v6 & a1[6]);
  if ( *(_QWORD **)(v7 + 16 * (v6 & a1[6]) + 8) == a3 )
  {
    if ( *(_QWORD **)(v7 + 16 * (v6 & a1[6])) == a3 )
    {
      *(_QWORD *)(v7 + 16 * (v6 & a1[6])) = a1[1];
      v7 = a1[3];
      v9 = a1[1];
    }
    else
    {
      v9 = a3[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(v7 + 16 * (v6 & a1[6])) == a3 )
  {
    *(_QWORD *)(v7 + 16 * (v6 & a1[6])) = *a3;
  }
  std::list<std::pair<IDCompInputTarget * const,std::vector<unsigned long>>>::erase(a1 + 1, a2, a3);
  return a2;
}
