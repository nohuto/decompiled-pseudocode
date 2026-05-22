/*
 * XREFs of ??0KeyboardModifierState@@AEAA@XZ @ 0x180018B64
 * Callers:
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180014E0C (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKK@std@@PEAX@2@PEAU32@0@Z @ 0x180014274 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKK@std@@V-$allocator@U-$pair@$$CBKK@std.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800151F8 (-_Init@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W4Gamep.c)
 */

// Hidden C++ exception states: #wind=3
KeyboardModifierState *__fastcall KeyboardModifierState::KeyboardModifierState(KeyboardModifierState *this)
{
  _QWORD *v2; // rbx

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &KeyboardModifierState::`vftable';
  v2 = (_QWORD *)((char *)this + 16);
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,unsigned long>>>::_Buynode0(
                            (__int64)this,
                            0LL,
                            0LL);
  v2[3] = 0LL;
  v2[4] = 0LL;
  v2[5] = 0LL;
  *(_DWORD *)v2 = 1065353216;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::_Init(
    v2,
    8LL);
  KeyboardModifierState::s_pKeyboardModifierState = 0LL;
  *((_DWORD *)this + 20) = 0;
  return this;
}
