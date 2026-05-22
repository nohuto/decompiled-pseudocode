/*
 * XREFs of ??$_Buynode@AEBQEAUISystemContextObserver@@@?$_List_buy@PEAUISystemContextObserver@@V?$allocator@PEAUISystemContextObserver@@@std@@@std@@QEAAPEAU?$_List_node@PEAUISystemContextObserver@@PEAX@1@PEAU21@0AEBQEAUISystemContextObserver@@@Z @ 0x180011C44
 * Callers:
 *     ??$_Insert@AEBQEAUISystemContextObserver@@U_Not_a_node_tag@std@@@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@PEAUISystemContextObserver@@@std@@@std@@@std@@_N@1@AEBQEAUISystemContextObserver@@U_Not_a_node_tag@1@@Z @ 0x180011618 (--$_Insert@AEBQEAUISystemContextObserver@@U_Not_a_node_tag@std@@@-$_Hash@V-$_Uset_traits@PEAUISy.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@PEAU32@0@Z @ 0x180011C78 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@.c)
 */

__int64 __fastcall std::_List_buy<ISystemContextObserver *>::_Buynode<ISystemContextObserver * const &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>::_Buynode0(a1);
  *(_QWORD *)(result + 16) = *a4;
  return result;
}
