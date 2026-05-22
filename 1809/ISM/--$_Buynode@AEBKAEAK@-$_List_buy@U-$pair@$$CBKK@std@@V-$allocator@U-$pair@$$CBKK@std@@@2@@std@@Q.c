/*
 * XREFs of ??$_Buynode@AEBKAEAK@?$_List_buy@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKK@std@@PEAX@1@PEAU21@0AEBKAEAK@Z @ 0x180056504
 * Callers:
 *     ?OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z @ 0x180054B20 (-OnInputReport@PointerInfoAdapter@@UEAAJPEAUInputInfo@@@Z.c)
 *     ??$insert_or_assign@H@?$unordered_map@KKU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@$$QEAK$$QEAH@Z @ 0x1801042D0 (--$insert_or_assign@H@-$unordered_map@KKU-$hash@K@std@@U-$equal_to@K@2@V-$allocator@U-$pair@$$CB.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@PEAU32@0@Z @ 0x180037DA8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned long const,unsigned long>>::_Buynode<unsigned long const &,unsigned long &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>::_Buynode0(
             a1,
             a2,
             a3);
  *((_DWORD *)result + 4) = *a4;
  *((_DWORD *)result + 5) = *a5;
  return result;
}
