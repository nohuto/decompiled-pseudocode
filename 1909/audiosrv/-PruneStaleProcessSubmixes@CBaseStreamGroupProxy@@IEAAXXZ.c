/*
 * XREFs of ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x1800F01C4
 * Callers:
 *     ?EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800EEB80 (-EnumerateProcessSubmixes@CBaseStreamGroupProxy@@UEAAJAEAV-$vector@V-$ComPtr@UIProcessSubmixProx.c)
 * Callees:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___ @ 0x1800D5308 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef.c)
 *     ?erase@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VWeakRef@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x1800D7DB0 (-erase@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA-AV.c)
 */

void __fastcall CBaseStreamGroupProxy::PruneStaleProcessSubmixes(char **this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  char *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RTL_CRITICAL_SECTION *)(this + 19);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 19));
  std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___(
    &v3,
    this[27],
    this[28]);
  std::vector<Microsoft::WRL::WeakRef>::erase((__int64)(this + 27), &v3, v3, this[28]);
  if ( v1 )
    LeaveCriticalSection(v1);
}
