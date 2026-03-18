/*
 * XREFs of VirtualizeKeyboardInput @ 0x1C0182B34
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0112BB0 (NtMITSynthesizeKeyboardInput.c)
 * Callees:
 *     ?VirtualizeKeyboardInput@CKeyboardSensor@@QEAA?AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SYNTHESIZE_KEYBOARD_OPTIONS@@AEBUCONTAINER_ID@@AEBU_KEYBOARD_INPUT_DATA@@PEAX@Z @ 0x1C017EBD4 (-VirtualizeKeyboardInput@CKeyboardSensor@@QEAA-AW4_SYNTHESIZED_KEYBOARD_PROCESSING_RESULT@@W4_SY.c)
 */

_BOOL8 __fastcall VirtualizeKeyboardInput(char a1, __int64 a2, __int64 *a3, void *a4)
{
  return qword_1C0208048 && CKeyboardSensor::VirtualizeKeyboardInput(qword_1C0208048, a1, a2, a3, a4);
}
