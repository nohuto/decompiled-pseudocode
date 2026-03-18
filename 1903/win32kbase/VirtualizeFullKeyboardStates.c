/*
 * XREFs of VirtualizeFullKeyboardStates @ 0x1C0184D00
 * Callers:
 *     <none>
 * Callees:
 *     ?VirtualizeFullKeyboardStates@CKeyboardSensor@@QEAAXK@Z @ 0x1C0180CF8 (-VirtualizeFullKeyboardStates@CKeyboardSensor@@QEAAXK@Z.c)
 */

void __fastcall VirtualizeFullKeyboardStates(int a1)
{
  if ( qword_1C020B048 )
    CKeyboardSensor::VirtualizeFullKeyboardStates(qword_1C020B048, a1);
}
