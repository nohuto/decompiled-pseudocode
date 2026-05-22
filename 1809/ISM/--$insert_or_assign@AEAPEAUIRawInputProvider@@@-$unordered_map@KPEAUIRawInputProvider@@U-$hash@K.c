/*
 * XREFs of ??$insert_or_assign@AEAPEAUIRawInputProvider@@@?$unordered_map@KPEAUIRawInputProvider@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800541E8
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x1800532C0 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBKPEAUDeviceInfo@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KPEAUDeviceInfo@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKPEAUDeviceInfo@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAUDeviceInfo@@@std@@@std@@@std@@@1@@Z @ 0x180026654 (--$_Insert@AEAU-$pair@$$CBKPEAUDeviceInfo@@@std@@V-$_List_unchecked_iterator@V-$_List_val@U-$_Li.c)
 *     ??$_Buynode@AEBKAEAPEAUIRawInputProvider@@@?$_List_buy@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@V?$allocator@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAUIRawInputProvider@@@std@@PEAX@1@PEAU21@0AEBKAEAPEAUIRawInputProvider@@@Z @ 0x1800269E0 (--$_Buynode@AEBKAEAPEAUIRawInputProvider@@@-$_List_buy@U-$pair@$$CBKPEAUIRawInputProvider@@@std@.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,IRawInputProvider *>::insert_or_assign<IRawInputProvider * &>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // r10
  unsigned __int64 i; // r11
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r10
  __int64 j; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rsi
  _QWORD *v18; // r14
  _QWORD *v19; // rdx
  __int64 v20; // rax

  v7 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v9 = *((unsigned __int8 *)a3 + i);
    v7 = 0x100000001B3LL * (v9 ^ v7);
  }
  v10 = *(_QWORD *)(a1 + 24);
  v11 = *(__int64 **)(a1 + 8);
  v12 = v7 & *(_QWORD *)(a1 + 48);
  v13 = 2 * v12;
  for ( j = *(_QWORD *)(v10 + 16 * v12); ; j = *(_QWORD *)j )
  {
    v15 = *(__int64 **)(v10 + 8 * v13) == v11 ? *(_QWORD *)(a1 + 8) : **(_QWORD **)(v10 + 8 * v13 + 8);
    if ( j == v15 )
      break;
    if ( *(_DWORD *)(j + 16) == *a3 )
    {
      v16 = j;
      goto LABEL_12;
    }
  }
  j = *(_QWORD *)(a1 + 8);
  v16 = j;
LABEL_12:
  if ( (__int64 *)v16 == v11 )
  {
    v17 = *v11;
    v18 = *(_QWORD **)(*v11 + 8);
    v19 = std::_List_buy<std::pair<unsigned long const,IRawInputProvider *>>::_Buynode<unsigned long const &,IRawInputProvider * &>(
            v16,
            (_QWORD *)v17,
            *(_QWORD **)(v17 + 8),
            a3,
            a4);
    v20 = *(_QWORD *)(a1 + 16);
    if ( v20 == 0x7FFFFFFFFFFFFFELL )
      std::_Xlength_error("list<T> too long");
    *(_QWORD *)(a1 + 16) = v20 + 1;
    *(_QWORD *)(v17 + 8) = v19;
    *v18 = v19;
    std::_Hash<std::_Umap_traits<unsigned long,DeviceInfo *,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DeviceInfo *>>,0>>::_Insert<std::pair<unsigned long const,DeviceInfo *> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,DeviceInfo *>>>>>(
      (float *)a1,
      a2,
      (_DWORD *)(**(_QWORD **)(a1 + 8) + 16LL),
      **(__int64 ***)(a1 + 8));
  }
  else
  {
    *(_QWORD *)(j + 24) = *a4;
    *(_QWORD *)a2 = j;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
