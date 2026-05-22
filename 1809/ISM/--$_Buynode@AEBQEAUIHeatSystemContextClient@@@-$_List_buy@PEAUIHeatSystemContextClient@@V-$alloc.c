/*
 * XREFs of ??$_Buynode@AEBQEAUIHeatSystemContextClient@@@?$_List_buy@PEAUIHeatSystemContextClient@@V?$allocator@PEAUIHeatSystemContextClient@@@std@@@std@@QEAAPEAU?$_List_node@PEAUIHeatSystemContextClient@@PEAX@1@PEAU21@0AEBQEAUIHeatSystemContextClient@@@Z @ 0x18003A8C0
 * Callers:
 *     ??$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUIHeatSystemContextClient@@V?$_Uhash_compare@PEAUIHeatSystemContextClient@@U?$hash@PEAUIHeatSystemContextClient@@@std@@U?$equal_to@PEAUIHeatSystemContextClient@@@3@@std@@V?$allocator@PEAUIHeatSystemContextClient@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUIHeatSystemContextClient@@@std@@@std@@@std@@_N@1@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@1@@Z @ 0x18003A4DC (--$_Insert@AEBQEAUIHeatSystemContextClient@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@PEAUI.c)
 *     ?SupportedInputUpdated@GazeProcessor@@UEAAJPEAUIDWMSupportedInputTarget@@@Z @ 0x1800EC400 (-SupportedInputUpdated@GazeProcessor@@UEAAJPEAUIDWMSupportedInputTarget@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@PEAU32@0@Z @ 0x180037DA8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@.c)
 */

_QWORD *__fastcall std::_List_buy<IHeatSystemContextClient *>::_Buynode<IHeatSystemContextClient * const &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>::_Buynode0(
             a1,
             a2,
             a3);
  result[2] = *a4;
  return result;
}
