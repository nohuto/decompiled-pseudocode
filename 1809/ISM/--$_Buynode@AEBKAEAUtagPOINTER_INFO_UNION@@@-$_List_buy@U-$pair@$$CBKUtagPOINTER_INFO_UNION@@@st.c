/*
 * XREFs of ??$_Buynode@AEBKAEAUtagPOINTER_INFO_UNION@@@?$_List_buy@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@PEAX@1@PEAU21@0AEBKAEAUtagPOINTER_INFO_UNION@@@Z @ 0x180056540
 * Callers:
 *     ??$insert_or_assign@AEAUtagPOINTER_INFO_UNION@@@?$unordered_map@KUtagPOINTER_INFO_UNION@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@std@@_N@1@AEBKAEAUtagPOINTER_INFO_UNION@@@Z @ 0x180055BA8 (--$insert_or_assign@AEAUtagPOINTER_INFO_UNION@@@-$unordered_map@KUtagPOINTER_INFO_UNION@@U-$hash.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@PEAX@2@PEAU32@0@Z @ 0x180055D28 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@V-$alloc.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned long const,tagPOINTER_INFO_UNION>>::_Buynode<unsigned long const &,tagPOINTER_INFO_UNION &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        _OWORD *a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,tagPOINTER_INFO_UNION>>>::_Buynode0(
             a1,
             a2,
             a3);
  *((_DWORD *)result + 4) = *a4;
  *(_OWORD *)(result + 3) = *a5;
  *(_OWORD *)(result + 5) = a5[1];
  *(_OWORD *)(result + 7) = a5[2];
  *(_OWORD *)(result + 9) = a5[3];
  *(_OWORD *)(result + 11) = a5[4];
  *(_OWORD *)(result + 13) = a5[5];
  *(_OWORD *)(result + 15) = a5[6];
  *(_OWORD *)(result + 17) = a5[7];
  *(_OWORD *)(result + 19) = a5[8];
  return result;
}
