/*
 * XREFs of ??$insert_or_assign@AEAUtagPOINTER_INFO_UNION@@@?$unordered_map@KUtagPOINTER_INFO_UNION@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUtagPOINTER_INFO_UNION@@@Z @ 0x180055BA8
 * Callers:
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x180054B20 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@KUtagPOINTER_INFO_UNION@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBKUtagPOINTER_INFO_UNION@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@1@@Z @ 0x1800561C0 (--$_Insert@AEAU-$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@V-$_List_unchecked_iterator@V-$_List_va.c)
 *     ??$_Buynode@AEBKAEAUtagPOINTER_INFO_UNION@@@?$_List_buy@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@PEAX@1@PEAU21@0AEBKAEAUtagPOINTER_INFO_UNION@@@Z @ 0x180056540 (--$_Buynode@AEBKAEAUtagPOINTER_INFO_UNION@@@-$_List_buy@U-$pair@$$CBKUtagPOINTER_INFO_UNION@@@st.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,tagPOINTER_INFO_UNION>::insert_or_assign<tagPOINTER_INFO_UNION &>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3,
        _OWORD *a4)
{
  __int64 v6; // r10
  unsigned __int64 i; // r11
  __int64 v8; // rax
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 *j; // rax
  __int64 *v14; // rcx
  __int64 *v15; // rcx
  __int64 v16; // rsi
  __int64 *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rax

  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v8 = *((unsigned __int8 *)a3 + i);
    v6 = 0x100000001B3LL * (v8 ^ v6);
  }
  v9 = (__int64 *)a1[1];
  v10 = v6 & a1[6];
  v11 = a1[3];
  v12 = 2 * v10;
  for ( j = *(__int64 **)(v11 + 16 * v10); ; j = (__int64 *)*j )
  {
    v14 = *(__int64 **)(v11 + 8 * v12) == v9 ? (__int64 *)a1[1] : **(__int64 ***)(v11 + 8 * v12 + 8);
    if ( j == v14 )
      break;
    if ( *((_DWORD *)j + 4) == *a3 )
    {
      v15 = j;
      goto LABEL_12;
    }
  }
  j = (__int64 *)a1[1];
  v15 = j;
LABEL_12:
  if ( v15 == v9 )
  {
    v16 = *v9;
    v17 = *(__int64 **)(*v9 + 8);
    v18 = std::_List_buy<std::pair<unsigned long const,tagPOINTER_INFO_UNION>>::_Buynode<unsigned long const &,tagPOINTER_INFO_UNION &>(
            (_DWORD)v15,
            *v9,
            (_DWORD)v17,
            (_DWORD)a3,
            (__int64)a4);
    v19 = a1[2];
    if ( v19 == 0x186186186186185LL )
      std::_Xlength_error("list<T> too long");
    a1[2] = v19 + 1;
    *(_QWORD *)(v16 + 8) = v18;
    *v17 = v18;
    std::_Hash<std::_Umap_traits<unsigned long,tagPOINTER_INFO_UNION,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTER_INFO_UNION>>,0>>::_Insert<std::pair<unsigned long const,tagPOINTER_INFO_UNION> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,tagPOINTER_INFO_UNION>>>>>(
      a1,
      a2,
      *(_QWORD *)a1[1] + 16LL);
  }
  else
  {
    *(_OWORD *)(j + 3) = *a4;
    *(_OWORD *)(j + 5) = a4[1];
    *(_OWORD *)(j + 7) = a4[2];
    *(_OWORD *)(j + 9) = a4[3];
    *(_OWORD *)(j + 11) = a4[4];
    *(_OWORD *)(j + 13) = a4[5];
    *(_OWORD *)(j + 15) = a4[6];
    *(_OWORD *)(j + 17) = a4[7];
    *(_OWORD *)(j + 19) = a4[8];
    *(_QWORD *)a2 = j;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
