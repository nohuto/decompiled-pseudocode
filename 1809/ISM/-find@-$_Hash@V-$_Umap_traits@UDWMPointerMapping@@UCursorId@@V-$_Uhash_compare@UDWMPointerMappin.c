/*
 * XREFs of ?find@?$_Hash@V?$_Umap_traits@UDWMPointerMapping@@UCursorId@@V?$_Uhash_compare@UDWMPointerMapping@@UDWMMappingHash@@U?$equal_to@UDWMPointerMapping@@@std@@@std@@V?$allocator@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUDWMPointerMapping@@UCursorId@@@std@@@std@@@std@@@2@AEBUDWMPointerMapping@@@Z @ 0x180107468
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x180106A00 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 *     ?GetCursor@DWMCursorBroker@@UEAAJKKPEAPEAUICursor@@@Z @ 0x180107200 (-GetCursor@DWMCursorBroker@@UEAAJKKPEAPEAUICursor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<DWMPointerMapping,CursorId,std::_Uhash_compare<DWMPointerMapping,DWMMappingHash,std::equal_to<DWMPointerMapping>>,std::allocator<std::pair<DWMPointerMapping const,CursorId>>,0>>::find(
        _QWORD *a1,
        __int64 **a2,
        _DWORD *a3)
{
  __int64 v4; // r9
  unsigned __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int64 i; // r11
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 *v11; // rdx
  __int64 v12; // r9
  __int64 *j; // rax
  __int64 v14; // rcx

  v4 = 0xCBF29CE484222325uLL;
  v5 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v8 = *((unsigned __int8 *)a3 + i);
    v6 = 0x100000001B3LL * (v8 ^ v6);
  }
  do
  {
    v9 = *((unsigned __int8 *)a3 + v5++ + 4);
    v4 = 0x100000001B3LL * (v9 ^ v4);
  }
  while ( v5 < 4 );
  v10 = a1[3];
  v11 = (__int64 *)a1[1];
  v12 = 2 * (a1[6] & (v6 ^ v4));
  for ( j = *(__int64 **)(v10 + 8 * v12); ; j = (__int64 *)*j )
  {
    v14 = *(__int64 **)(v10 + 8 * v12) == v11 ? (__int64)v11 : **(_QWORD **)(v10 + 8 * v12 + 8);
    if ( j == (__int64 *)v14 )
      break;
    if ( *((_DWORD *)j + 4) == *a3 && a3[1] == *((_DWORD *)j + 5) )
    {
      *a2 = j;
      return a2;
    }
  }
  *a2 = v11;
  return a2;
}
