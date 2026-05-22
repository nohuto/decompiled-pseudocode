/*
 * XREFs of ?OnDeviceRemoval@DWMInputRouter@@UEAAJPEAUDeviceInfo@@@Z @ 0x180089D70
 * Callers:
 *     <none>
 * Callees:
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@std@@X@?$_Hash@V?$_Umap_traits@KUInputContext@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInputContext@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInputContext@@@std@@@std@@@std@@@1@V21@@Z @ 0x18008D0F0 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKUInputContext@@@std@@.c)
 */

__int64 __fastcall DWMInputRouter::OnDeviceRemoval(DWMInputRouter *this, struct DeviceInfo *a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 *v9; // rcx
  __int64 v10; // r9
  __int64 *j; // r8
  __int64 *v12; // rax
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v6 = *((unsigned __int8 *)a2 + i);
    v4 = 0x100000001B3LL * (v6 ^ v4);
  }
  v7 = *((_QWORD *)this + 87);
  v9 = (__int64 *)*((_QWORD *)this + 85);
  v8 = v4 & *((_QWORD *)this + 90);
  v10 = 2 * v8;
  for ( j = *(__int64 **)(v7 + 16 * v8); ; j = (__int64 *)*j )
  {
    v12 = *(__int64 **)(v7 + 8 * v10) == v9 ? (__int64 *)*((_QWORD *)this + 85) : **(__int64 ***)(v7 + 8 * v10 + 8);
    if ( j == v12 )
      break;
    if ( *((_DWORD *)j + 4) == *(_DWORD *)a2 )
      goto LABEL_11;
  }
  j = (__int64 *)*((_QWORD *)this + 85);
LABEL_11:
  if ( j != v9 )
    std::_Hash<std::_Umap_traits<unsigned long,InputContext,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,InputContext>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputContext>>>>,void>(
      (char *)this + 672,
      &v14);
  return DWMInputRouter::OnDeviceChange((__int64 **)this, a2, 0);
}
