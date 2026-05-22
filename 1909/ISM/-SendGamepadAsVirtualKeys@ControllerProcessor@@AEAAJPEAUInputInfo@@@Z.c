/*
 * XREFs of ?SendGamepadAsVirtualKeys@ControllerProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180077034
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180076750 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@W4GamepadButtons@Input@Gaming@Windows@@G@Z @ 0x180077D1C (-TestButtonAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@W4GamepadButtons@Input.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NGG_N@Z @ 0x180077D48 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NGG_N@Z.c)
 *     ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NG@Z @ 0x180077E0C (-TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAXPEAUInputInfo@@NG@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x1800784FC (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::SendGamepadAsVirtualKeys(ControllerProcessor *this, struct InputInfo *a2)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 1LL, 207LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 2LL, 208LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 4LL, 195LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 8LL, 196LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 16LL, 197LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 32LL, 198LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 64LL, 203LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 128LL, 204LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 256LL, 205LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 512LL, 206LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 1024LL, 200LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 2048LL, 199LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 4096LL, 209LL);
  ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 0x2000LL, 210LL);
  if ( !*((_BYTE *)a2 + 2024) )
    ControllerProcessor::TestButtonAndSetVirtualKeyState(this, a2, 0x40000000LL, 7LL);
  ControllerProcessor::TestTriggerAndSetVirtualKeyState(this, a2, *((double *)a2 + 10), 0xC9u);
  ControllerProcessor::TestTriggerAndSetVirtualKeyState(this, a2, *((double *)a2 + 11), 0xCAu);
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, a2, *((double *)a2 + 13), 0xD3u, 0xD4u, 0);
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, a2, *((double *)a2 + 12), 0xD5u, 0xD6u, 0);
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, a2, *((double *)a2 + 15), 0xD7u, 0xD8u, 0);
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, a2, *((double *)a2 + 14), 0xD9u, 0xDAu, 0);
  updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
  if ( updated < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      2170LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)updated);
    __debugbreak();
  }
  return 0LL;
}
