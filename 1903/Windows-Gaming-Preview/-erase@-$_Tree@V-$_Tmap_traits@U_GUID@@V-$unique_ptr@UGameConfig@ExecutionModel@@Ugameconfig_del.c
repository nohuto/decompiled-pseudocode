/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x18001D2F0
 * Callers:
 *     _lambda_a9c571ff0e3bbbe6412332e11260abf2_::operator() @ 0x18001C5F8 (_lambda_a9c571ff0e3bbbe6412332e11260abf2_--operator().c)
 * Callees:
 *     ?clear@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x18001D414 (-clear@-$_Tree@V-$_Tmap_traits@U_GUID@@V-$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_del.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@PEAX@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@std@@@std@@@2@@Z @ 0x18001D4B0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@V-$unique_ptr@UGameConfig@Execut.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180042DE4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::erase(
        _QWORD **a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *j; // rbx
  __int64 **v8; // r8
  _QWORD *v9; // rdx
  char v10; // r9
  __int64 i; // rax
  __int64 *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *k; // rcx
  __int64 *m; // rcx
  const struct std::nothrow_t *v16; // rdx
  _QWORD *v17; // rbp
  void *v18; // rcx

  j = a3;
  if ( a3 == (_QWORD *)**a1 && a4 == *a1 )
  {
    std::_Tree<std::_Tmap_traits<_GUID,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>,Windows::Gaming::Preview::GamesEnumeration::GameIdLess,std::allocator<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>,0>>::clear();
    *a2 = **a1;
  }
  else
  {
    while ( j != a4 )
    {
      v8 = (__int64 **)j[2];
      v9 = j;
      v10 = *((_BYTE *)v8 + 25);
      if ( v10 )
      {
        for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          j = (_QWORD *)i;
        j = (_QWORD *)i;
      }
      else
      {
        v12 = *v8;
        for ( j = (_QWORD *)j[2]; !*((_BYTE *)v12 + 25); v12 = (__int64 *)*v12 )
          j = v12;
      }
      v13 = v9;
      if ( v10 )
      {
        for ( k = (_QWORD *)v9[1]; !*((_BYTE *)k + 25) && v13 == (_QWORD *)k[2]; k = (_QWORD *)k[1] )
          v13 = k;
      }
      else
      {
        for ( m = *v8; !*((_BYTE *)m + 25); m = (__int64 *)*m )
          ;
      }
      v17 = (_QWORD *)std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,std::unique_ptr<ExecutionModel::GameConfig,gameconfig_delete>>>>::_Extract(a1);
      v18 = (void *)v17[6];
      if ( v18 )
        operator delete(v18, v16);
      operator delete(v17, (const struct std::nothrow_t *)0x38);
    }
    *a2 = j;
  }
  return a2;
}
