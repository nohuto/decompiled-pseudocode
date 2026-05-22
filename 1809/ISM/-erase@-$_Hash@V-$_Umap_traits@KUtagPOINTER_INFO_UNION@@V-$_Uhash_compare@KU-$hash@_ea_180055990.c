/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINTER_INFO_UNION@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@2@@Z @ 0x180055990
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINTER_INFO_UNION@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18005573C (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINTER_INFO_UNION@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equ.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@KUtagPOINTER_INFO_UNION@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@1@V21@@Z @ 0x180056460 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKUtagPOINTER_INFO_UNIO.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,tagPOINTER_INFO_UNION,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTER_INFO_UNION>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned __int64 i; // r10
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx

  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)a3 + i + 16);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = v5 & a1[6];
  v9 = a1[3];
  v10 = 2 * v8;
  if ( *(_QWORD **)(v9 + 8 * v10 + 8) == a3 )
  {
    if ( *(_QWORD **)(v9 + 8 * v10) == a3 )
    {
      *(_QWORD *)(v9 + 8 * v10) = a1[1];
      v9 = a1[3];
      v11 = a1[1];
    }
    else
    {
      v11 = a3[1];
    }
    *(_QWORD *)(v9 + 8 * v10 + 8) = v11;
  }
  else if ( *(_QWORD **)(v9 + 8 * v10) == a3 )
  {
    *(_QWORD *)(v9 + 8 * v10) = *a3;
  }
  v12 = *a3;
  *(_QWORD *)a3[1] = *a3;
  *(_QWORD *)(*a3 + 8LL) = a3[1];
  --a1[2];
  operator delete(a3, (const struct std::nothrow_t *)0xA8);
  *a2 = v12;
  return a2;
}
