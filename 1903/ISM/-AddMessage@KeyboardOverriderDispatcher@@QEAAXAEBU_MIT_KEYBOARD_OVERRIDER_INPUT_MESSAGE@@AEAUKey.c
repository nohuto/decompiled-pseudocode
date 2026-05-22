/*
 * XREFs of ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x1800C033C
 * Callers:
 *     ?ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800BDEC0 (-ProcessLowLevelKeyboardInputMessage@Win32kInterop@@AEAAXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSA.c)
 * Callees:
 *     ?ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x18003570C (-ReturnMessageToInputProcessing@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_OVERRIDER_IN.c)
 *     ?ShouldSendToNarrator@KeyboardOverriderDispatcher@@AEBA_NAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800357B0 (-ShouldSendToNarrator@KeyboardOverriderDispatcher@@AEBA_NAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSA.c)
 *     ?SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKeyboardInputInfo@@@Z @ 0x1800C0D28 (-SendMessageToNarrator@KeyboardOverriderDispatcher@@AEAAXAEBU_MIT_KEYBOARD_INPUT_MESSAGE@@AEBUKe.c)
 *     ?empty@?$queue@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@@std@@QEBA_NXZ @ 0x1800C163C (-empty@-$queue@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_M.c)
 *     ?push@?$queue@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@@std@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z @ 0x1800C1664 (-push@-$queue@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V-$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_ME.c)
 *     memcpy_s_0 @ 0x1800C1878 (memcpy_s_0.c)
 */

void __fastcall KeyboardOverriderDispatcher::AddMessage(
        KeyboardOverriderDispatcher *this,
        const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *a2,
        struct KeyboardInputInfo *a3)
{
  rsize_t v6; // rdx
  rsize_t v7; // r9
  const struct _MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE *v8; // rdx

  if ( (*(_BYTE *)a3 & 4) != 0 )
  {
    if ( KeyboardOverriderDispatcher::ShouldSendToNarrator((KeyboardOverriderDispatcher *)((char *)this + 24), a2) )
    {
      std::queue<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::push();
      if ( !*((_BYTE *)this + 360) )
        memcpy_s_0((char *)this + 104, v6, (char *)a2 + 14, v7);
      KeyboardOverriderDispatcher::SendMessageToNarrator(this, a2, a3);
    }
    else if ( (unsigned __int8)std::queue<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::empty() )
    {
      KeyboardOverriderDispatcher::ReturnMessageToInputProcessing(this, v8);
    }
    else
    {
      std::queue<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::push();
    }
  }
}
