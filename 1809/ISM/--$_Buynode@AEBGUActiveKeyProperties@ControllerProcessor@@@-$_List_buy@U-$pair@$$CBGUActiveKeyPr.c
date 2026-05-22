/*
 * XREFs of ??$_Buynode@AEBGUActiveKeyProperties@ControllerProcessor@@@?$_List_buy@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@PEAX@1@PEAU21@0AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x180038354
 * Callers:
 *     ??$insert_or_assign@UActiveKeyProperties@ControllerProcessor@@@?$unordered_map@GUActiveKeyProperties@ControllerProcessor@@U?$hash@G@std@@U?$equal_to@G@4@V?$allocator@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBGUActiveKeyProperties@ControllerProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBG$$QEAUActiveKeyProperties@ControllerProcessor@@@Z @ 0x180037B28 (--$insert_or_assign@UActiveKeyProperties@ControllerProcessor@@@-$unordered_map@GUActiveKeyProper.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@PEAU32@0@Z @ 0x180037DA8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned short const,ControllerProcessor::ActiveKeyProperties>>::_Buynode<unsigned short const &,ControllerProcessor::ActiveKeyProperties>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _WORD *a4,
        _BYTE *a5)
{
  _QWORD *result; // rax

  result = std::_List_alloc<std::_List_base_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>::_Buynode0(
             a1,
             a2,
             a3);
  *((_WORD *)result + 8) = *a4;
  *((_BYTE *)result + 18) = *a5;
  return result;
}
