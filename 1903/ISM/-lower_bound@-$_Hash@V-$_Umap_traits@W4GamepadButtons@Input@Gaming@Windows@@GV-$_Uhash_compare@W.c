/*
 * XREFs of ?lower_bound@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@2@AEBW4GamepadButtons@Input@Gaming@Windows@@@Z @ 0x1800064C0
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x18000D650 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z @ 0x1800738B8 (-RegisterControllerProcessor@ControllerNavigationManager@@QEAAJKPEAVControllerProcessor@@@Z.c)
 *     ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x1800774D0 (-SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 **__fastcall std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::lower_bound(
        __int64 a1,
        __int64 **a2,
        unsigned __int8 *a3)
{
  __int64 v4; // rax
  unsigned __int8 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 *v8; // r9
  __int64 v9; // rdx
  __int64 *i; // rax
  __int64 v11; // rcx

  v4 = 0xCBF29CE484222325uLL;
  v5 = a3;
  if ( a3 < a3 + 4 )
  {
    do
    {
      v6 = *v5++;
      v4 = 0x100000001B3LL * (v6 ^ v4);
    }
    while ( v5 - a3 != 4 );
  }
  v7 = 16 * (v4 & qword_1801E1530);
  v8 = *(__int64 **)(v7 + qword_1801E1518);
  v9 = qword_1801E1518 + v7;
  for ( i = v8; ; i = (__int64 *)*i )
  {
    v11 = v8 == (__int64 *)qword_1801E1508 ? qword_1801E1508 : **(_QWORD **)(v9 + 8);
    if ( i == (__int64 *)v11 )
      break;
    if ( *((_DWORD *)i + 4) == *(_DWORD *)a3 )
    {
      *a2 = i;
      return a2;
    }
  }
  *a2 = (__int64 *)qword_1801E1508;
  return a2;
}
