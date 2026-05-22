/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@AEBUDWMPointerMapping@@@Z @ 0x180013AE4
 * Callers:
 *     ??$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@?$unordered_map@UDWMPointerMapping@@UCursorId@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@5@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@std@@_N@1@$$QEAUDWMPointerMapping@@AEAUCursorId@@@Z @ 0x180013860 (--$_Insert_or_assign@UDWMPointerMapping@@AEAUCursorId@@@-$unordered_map@UDWMPointerMapping@@UCur.c)
 *     ?GetCursor@DWMCursorBroker@@UEAAJKKPEAPEAUICursor@@@Z @ 0x1801439F0 (-GetCursor@DWMCursorBroker@@UEAAJKKPEAPEAUICursor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::lower_bound(
        _QWORD *a1,
        __int64 **a2,
        unsigned __int8 *a3)
{
  unsigned __int8 *v4; // r11
  __int64 v5; // r10
  unsigned __int8 *v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 *v14; // rdx
  __int64 v15; // r10
  __int64 *i; // rax
  __int64 *v17; // rcx

  v4 = a3 + 4;
  v5 = 0xCBF29CE484222325uLL;
  v6 = a3;
  v8 = 0xCBF29CE484222325uLL;
  v9 = a3 + 4 >= a3 ? 4 : 0;
  if ( a3 < a3 + 4 )
  {
    do
    {
      v10 = *a3++;
      v8 = 0x100000001B3LL * (v10 ^ v8);
    }
    while ( a3 - v6 != v9 );
  }
  v11 = v4;
  if ( v4 < v4 + 4 )
  {
    do
    {
      v12 = *v11++;
      v5 = 0x100000001B3LL * (v12 ^ v5);
    }
    while ( v11 - v4 != (v4 + 4 >= v4 ? 4 : 0) );
  }
  v13 = a1[3];
  v14 = (__int64 *)a1[1];
  v15 = 2 * (a1[6] & (v8 ^ v5));
  for ( i = *(__int64 **)(v13 + 8 * v15); ; i = (__int64 *)*i )
  {
    if ( *(__int64 **)(v13 + 8 * v15) == v14 )
      v17 = (__int64 *)a1[1];
    else
      v17 = **(__int64 ***)(v13 + 8 * v15 + 8);
    if ( i == v17 )
    {
      *a2 = v14;
      return a2;
    }
    if ( *((_DWORD *)i + 4) == *(_DWORD *)v6 && *((_DWORD *)i + 5) == *(_DWORD *)v4 )
      break;
  }
  if ( *(_DWORD *)v6 != *((_DWORD *)i + 4) || *(_DWORD *)v4 != *((_DWORD *)i + 5) )
    i = (__int64 *)a1[1];
  *a2 = i;
  return a2;
}
