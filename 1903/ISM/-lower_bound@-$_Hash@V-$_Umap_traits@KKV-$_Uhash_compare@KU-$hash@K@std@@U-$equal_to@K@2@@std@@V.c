/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@KKV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@2@AEBK@Z @ 0x180026630
 * Callers:
 *     ??$_Insert_or_assign@KH@?$unordered_map@KKU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@$$QEAK$$QEAH@Z @ 0x180014188 (--$_Insert_or_assign@KH@-$unordered_map@KKU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$.c)
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x1801419EC (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<unsigned long,unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::lower_bound(
        _QWORD *a1,
        __int64 **a2,
        unsigned __int8 *a3)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // r11
  unsigned __int64 v6; // rax
  __int64 v7; // r11
  __int64 *v8; // r9
  __int64 v9; // r10
  __int64 *i; // rax
  __int64 *v11; // rcx

  v4 = 0xCBF29CE484222325uLL;
  v5 = a3;
  if ( a3 < a3 + 4 )
  {
    do
    {
      v6 = *v5++ ^ (unsigned __int64)v4;
      v4 = 0x100000001B3LL * v6;
    }
    while ( v5 - a3 != (a3 + 4 >= a3 ? 4 : 0) );
  }
  v7 = a1[3];
  v8 = (__int64 *)a1[1];
  v9 = 2 * (v4 & a1[6]);
  for ( i = *(__int64 **)(v7 + 16 * (v4 & a1[6])); ; i = (__int64 *)*i )
  {
    if ( *(__int64 **)(v7 + 8 * v9) == v8 )
      v11 = (__int64 *)a1[1];
    else
      v11 = **(__int64 ***)(v7 + 8 * v9 + 8);
    if ( i == v11 )
    {
      *a2 = v8;
      return a2;
    }
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 )
      break;
  }
  *a2 = i;
  return a2;
}
