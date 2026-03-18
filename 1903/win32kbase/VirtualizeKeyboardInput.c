/*
 * XREFs of VirtualizeKeyboardInput @ 0x1C0184D24
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0115520 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     ?VirtualizeKeyboardInput@CKeyboardSensor@@QEAA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C0180DC4 (-VirtualizeKeyboardInput@CKeyboardSensor@@QEAA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SY.c)
 */

_BOOL8 __fastcall VirtualizeKeyboardInput(char a1, __int64 a2, __int64 *a3, void *a4)
{
  return qword_1C020B048 && CKeyboardSensor::VirtualizeKeyboardInput(qword_1C020B048, a1, a2, a3, a4);
}
