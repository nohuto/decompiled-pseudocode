/*
 * XREFs of _dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__ @ 0x180001520
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@std@@@2@@std@@QEAAX_KAEBV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTER_INFO_UNION@@@std@@@std@@@std@@@2@@Z @ 0x180008900 (-assign@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKUta.c)
 *     ?_Reallocate_exactly@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VSystemCursor@@@std@@@std@@@std@@@std@@@std@@@2@@std@@AEAAX_K@Z @ 0x180008CF0 (-_Reallocate_exactly@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@PEAX@2@PEAU32@0@Z @ 0x180037DA8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall dynamic_initializer_for__ControllerProcessor::s_controllerCurrentKeyMap__(__int64 a1)
{
  void *v2; // [rsp+40h] [rbp+8h] BYREF

  qword_180193C98 = (void *)std::_List_alloc<std::_List_base_types<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>>::_Buynode0(
                              a1,
                              0LL,
                              0LL);
  qword_180193CA8 = 0LL;
  xmmword_180193CB0 = 0LL;
  ControllerProcessor::s_controllerCurrentKeyMap = LODWORD(FLOAT_1_0);
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,std::shared_ptr<SystemCursor>>>>>>::_Reallocate_exactly(
    &qword_180193CA8,
    16LL);
  v2 = qword_180193C98;
  std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,tagPOINTER_INFO_UNION>>>>>::assign(
    &qword_180193CA8,
    16LL,
    &v2);
  qword_180193CC0 = 7LL;
  qword_180193CC8 = 8LL;
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__ControllerProcessor::s_controllerCurrentKeyMap__);
}
