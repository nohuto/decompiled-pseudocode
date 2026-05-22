/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@PEAX@2@PEAU32@0@Z @ 0x180055D28
 * Callers:
 *     ??0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z @ 0x180054600 (--0PointerInfoAdapter@@QEAA@PEAUIPointerInfoAdapterClient@@_N@Z.c)
 *     ??$_Buynode@AEBKAEAUtagPOINTER_INFO_UNION@@@?$_List_buy@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@PEAX@1@PEAU21@0AEBKAEAUtagPOINTER_INFO_UNION@@@Z @ 0x180056540 (--$_Buynode@AEBKAEAUtagPOINTER_INFO_UNION@@@-$_List_buy@U-$pair@$$CBKUtagPOINTER_INFO_UNION@@@st.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,tagPOINTER_INFO_UNION>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax

  result = operator new(0xA8uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
