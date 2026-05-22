/*
 * XREFs of ?SendGamepadAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180077290
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180076750 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?lower_bound@?$_Hash@V?$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV?$_Uhash_compare@W4GamepadButtons@Input@Gaming@Windows@@U?$hash@W4GamepadButtons@Input@Gaming@Windows@@@std@@U?$equal_to@W4GamepadButtons@Input@Gaming@Windows@@@6@@std@@V?$allocator@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@6@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4GamepadButtons@Input@Gaming@Windows@@G@std@@@std@@@std@@@2@AEBW4GamepadButtons@Input@Gaming@Windows@@@Z @ 0x1800064C0 (-lower_bound@-$_Hash@V-$_Umap_traits@W4GamepadButtons@Input@Gaming@Windows@@GV-$_Uhash_compare@W.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180077D1C (-TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@W4GamepadButtons@Input.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x1800784FC (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::SendGamepadAsVirtualKeysForNavigation(
        ControllerProcessor *this,
        struct InputInfo *a2)
{
  char v2; // bp
  unsigned __int16 v4; // si
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((_BYTE *)a2 + 128);
  v9 = 8;
  v4 = 0;
  std::_Hash<std::_Umap_traits<enum Windows::Gaming::Input::GamepadButtons,unsigned short,std::_Uhash_compare<enum Windows::Gaming::Input::GamepadButtons,std::hash<enum Windows::Gaming::Input::GamepadButtons>,std::equal_to<enum Windows::Gaming::Input::GamepadButtons>>,std::allocator<std::pair<enum Windows::Gaming::Input::GamepadButtons const,unsigned short>>,0>>::lower_bound(
    (__int64)this,
    &v10,
    (unsigned __int8 *)&v9);
  if ( v10 != (__int64 *)qword_1801E1508 )
    v4 = *((_WORD *)v10 + 10);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 8LL, v4);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 32LL, 198LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 1024LL, 200LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 2048LL, 199LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 2LL, 208LL);
  if ( !*((_BYTE *)a2 + 2024) )
    ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 0x40000000LL, 7LL);
  if ( (*((_BYTE *)this + 2232) & 0x40) != 0 && !v2 )
  {
    ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 64LL, 38LL);
    ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 128LL, 40LL);
    ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 256LL, 37LL);
    ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 512LL, 39LL);
  }
  updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
  if ( updated < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      2252LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)updated);
    __debugbreak();
  }
  return 0LL;
}
