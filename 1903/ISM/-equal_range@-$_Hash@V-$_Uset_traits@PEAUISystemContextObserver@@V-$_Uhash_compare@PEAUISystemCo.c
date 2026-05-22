/*
 * XREFs of ?equal_range@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@std@@V12@@2@AEBQEAUISystemContextObserver@@@Z @ 0x1800D3484
 * Callers:
 *     ?erase@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAA_KAEBQEAUISystemContextObserver@@@Z @ 0x1800D3568 (-erase@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUIS_ea_1800D3568.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::equal_range(
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
  _QWORD *i; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rdx
  __int64 v14; // r11
  _QWORD *v15; // r8
  _QWORD *v16; // rdx

  v5 = 0xCBF29CE484222325uLL;
  v6 = a3;
  if ( a3 < a3 + 8 )
  {
    do
    {
      v7 = *v6++ ^ (unsigned __int64)v5;
      v5 = 0x100000001B3LL * v7;
    }
    while ( v6 - a3 != (a3 + 8 >= a3 ? 8 : 0) );
  }
  v8 = a1[3];
  v9 = a1[1];
  v10 = 2 * (v5 & a1[6]);
  for ( i = *(_QWORD **)(v8 + 16 * (v5 & a1[6])); ; i = (_QWORD *)*i )
  {
    v12 = i;
    v13 = *(_QWORD *)(v8 + 8 * v10) == v9 ? (_QWORD *)v9 : **(_QWORD ***)(v8 + 8 * v10 + 8);
    if ( i == v13 )
      break;
    v14 = *(_QWORD *)a3;
    if ( i[2] == *(_QWORD *)a3 )
    {
      v15 = i;
      while ( 1 )
      {
        v16 = *(_QWORD *)(v8 + 8 * v10) == v9 ? (_QWORD *)v9 : **(_QWORD ***)(v8 + 8 * v10 + 8);
        if ( i == v16 || v14 != i[2] )
          break;
        i = (_QWORD *)*i;
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
