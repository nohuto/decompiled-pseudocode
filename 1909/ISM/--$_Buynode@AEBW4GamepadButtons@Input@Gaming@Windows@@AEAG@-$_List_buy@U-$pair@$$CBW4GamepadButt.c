/*
 * XREFs of ??$_Buynode@AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@?$_List_buy@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@1@PEAU21@0AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@Z @ 0x18001175C
 * Callers:
 *     ??$emplace@AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@std@@_N@1@AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@Z @ 0x18001127C (--$emplace@AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@-$_Hash@V-$_Umap_traits@W4GamepadButto.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@PEAU32@0@Z @ 0x180011C78 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@.c)
 */

__int64 __fastcall std::_List_buy<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>::_Buynode<enum Windows::Gaming::Input::GamepadButtons const &,unsigned short &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _WORD *a5)
{
  __int64 result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>::_Buynode0(a1);
  *(_DWORD *)(result + 16) = *a4;
  *(_WORD *)(result + 20) = *a5;
  return result;
}
