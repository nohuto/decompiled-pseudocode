/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$unordered_map@KPEAUDeviceInfo@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800133F8
 * Callers:
 *     ?OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z @ 0x180028D24 (-OnDeviceChange@DWMInputRouter@@IEAAJPEAUDeviceInfo@@_N@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBKPEAUDeviceInfo@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKPEAUDeviceInfo@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@1@@Z @ 0x1800132A8 (--$_Insert@AEAU-$pair@$$CBKPEAUDeviceInfo@@@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_Li.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBKPEAUDeviceInfo@@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAUDeviceInfo@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180013518 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_List_buy@U-$pair@$.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,DeviceInfo *>::_Try_emplace<unsigned long const &,>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v5; // rax
  unsigned __int8 *v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // r10
  __int64 *v9; // rdx
  __int64 v10; // r9
  __int64 *i; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rsi
  __int64 *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int8 *v19; // [rsp+40h] [rbp+8h] BYREF

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
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(__int64 **)(a1 + 8);
  v10 = 2 * (v5 & *(_QWORD *)(a1 + 48));
  for ( i = *(__int64 **)(v8 + 16 * (v5 & *(_QWORD *)(a1 + 48))); ; i = (__int64 *)*i )
  {
    if ( *(__int64 **)(v8 + 8 * v10) == v9 )
      v12 = *(__int64 **)(a1 + 8);
    else
      v12 = **(__int64 ***)(v8 + 8 * v10 + 8);
    if ( i == v12 )
    {
      i = *(__int64 **)(a1 + 8);
      v13 = i;
      goto LABEL_8;
    }
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 )
      break;
  }
  v13 = i;
LABEL_8:
  if ( v13 == v9 )
  {
    v14 = *v9;
    v19 = a3;
    v15 = *(__int64 **)(v14 + 8);
    v16 = std::_List_buy<std::pair<unsigned long const,DeviceInfo *>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
            (_DWORD)v13,
            v14,
            (_DWORD)v15,
            v10,
            (__int64)&v19);
    v17 = *(_QWORD *)(a1 + 16);
    if ( v17 == 0x7FFFFFFFFFFFFFELL )
      std::_Xlength_error("list<T> too long");
    *(_QWORD *)(a1 + 16) = v17 + 1;
    *(_QWORD *)(v14 + 8) = v16;
    *v15 = v16;
    std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Insert<std::pair<unsigned long const,DeviceInfo *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,DeviceInfo *>>>>>(
      a1,
      a2,
      (unsigned __int8 *)(**(_QWORD **)(a1 + 8) + 16LL),
      **(__int64 ***)(a1 + 8));
  }
  else
  {
    *(_QWORD *)a2 = i;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
