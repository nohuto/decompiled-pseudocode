/*
 * XREFs of ?empty@?$queue@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$deque@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@V?$allocator@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@std@@@std@@@std@@QEBA_NXZ @ 0x1800C163C
 * Callers:
 *     ?AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKeyboardInputInfo@@@Z @ 0x1800C033C (-AddMessage@KeyboardOverriderDispatcher@@QEAAXAEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@AEAUKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall std::queue<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::empty(__int64 a1)
{
  return *(_QWORD *)(a1 + 32) == 0LL;
}
