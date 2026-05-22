/*
 * XREFs of ?equal_range@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@V12@@2@AEBW4TestCommandMessageType@@@Z @ 0x180092F18
 * Callers:
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAUIRawInputProvider@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180092FFC (-erase@-$_Hash@V-$_Umap_traits@KPEAUIRawInputProvider@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equa.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800C57B4 (-erase@-$_Hash@V-$_Umap_traits@KPEAUDeviceInfo@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBW4TestCommandMessageType@@@Z @ 0x1800D374C (-erase@-$_Hash@V-$_Umap_traits@W4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMes.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::equal_range(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int8 *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // r11
  unsigned __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 *i; // rax
  __int64 *v12; // rbx
  __int64 v13; // rdx
  int v14; // r11d
  __int64 *v15; // r8
  __int64 v16; // rdx

  v5 = 0xCBF29CE484222325uLL;
  v6 = a3;
  if ( a3 < a3 + 4 )
  {
    do
    {
      v7 = *v6++ ^ (unsigned __int64)v5;
      v5 = 0x100000001B3LL * v7;
    }
    while ( v6 - a3 != (a3 + 4 >= a3 ? 4 : 0) );
  }
  v8 = a1[3];
  v9 = a1[1];
  v10 = 2 * (v5 & a1[6]);
  for ( i = *(__int64 **)(v8 + 16 * (v5 & a1[6])); ; i = (__int64 *)*i )
  {
    v12 = i;
    v13 = *(_QWORD *)(v8 + 8 * v10) == v9 ? v9 : **(_QWORD **)(v8 + 8 * v10 + 8);
    if ( i == (__int64 *)v13 )
      break;
    v14 = *(_DWORD *)a3;
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 )
    {
      v15 = i;
      while ( 1 )
      {
        v16 = *(_QWORD *)(v8 + 8 * v10) == v9 ? v9 : **(_QWORD **)(v8 + 8 * v10 + 8);
        if ( i == (__int64 *)v16 || v14 != *((_DWORD *)i + 4) )
          break;
        i = (__int64 *)*i;
      }
      if ( v12 != i )
      {
        *a2 = v15;
        a2[1] = i;
        return a2;
      }
      break;
    }
  }
  *a2 = v9;
  a2[1] = v9;
  return a2;
}
