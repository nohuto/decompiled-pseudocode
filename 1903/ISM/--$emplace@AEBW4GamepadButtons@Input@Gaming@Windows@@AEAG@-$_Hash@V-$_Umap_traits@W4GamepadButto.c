/*
 * XREFs of ??$emplace@AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@std@@_N@1@AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@Z @ 0x18001130C
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x18000D650 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x1800738B8 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 * Callees:
 *     ??$_Buynode@AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@?$_List_buy@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@1@PEAU21@0AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@Z @ 0x1800117EC (--$_Buynode@AEBW4GamepadButtons@Input@Gaming@Windows@@AEAG@-$_List_buy@U-$pair@$$CBW4GamepadButt.c)
 *     ??$_Insert@AEAU?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@1@@Z @ 0x18001305C (--$_Insert@AEAU-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V-$_List_unchecked_itera.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::emplace<enum Windows::Gaming::Input::GamepadButtons const &,unsigned short &>(
        int a1,
        __int64 a2,
        int a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 *v6; // rsi
  __int64 v7; // rdx

  v5 = *(_QWORD *)qword_1801E1508;
  v6 = *(__int64 **)(*(_QWORD *)qword_1801E1508 + 8LL);
  v7 = std::_List_buy<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>::_Buynode<enum Windows::Gaming::Input::GamepadButtons const &,unsigned short &>(
         a1,
         *(_QWORD *)qword_1801E1508,
         (_DWORD)v6,
         a3,
         a4);
  if ( qword_1801E1510 == 0xAAAAAAAAAAAAAA9LL )
    std::_Xlength_error("list<T> too long");
  ++qword_1801E1510;
  *(_QWORD *)(v5 + 8) = v7;
  *v6 = v7;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Insert<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>>>(
    &ControllerProcessor::s_controllerCurrentKeyMap,
    a2,
    *(_QWORD *)qword_1801E1508 + 16LL);
  return a2;
}
