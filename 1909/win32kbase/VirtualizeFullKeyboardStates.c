/*
 * XREFs of VirtualizeFullKeyboardStates @ 0x1C0182B10
 * Callers:
 *     <none>
 * Callees:
 *     ?VirtualizeFullKeyboardStates@CKeyboardSensor@@QEAAXK@Z @ 0x1C017EB08 (-VirtualizeFullKeyboardStates@CKeyboardSensor@@QEAAXK@Z.c)
 */

void __fastcall VirtualizeFullKeyboardStates(int a1)
{
  if ( qword_1C0208048 )
    CKeyboardSensor::VirtualizeFullKeyboardStates(qword_1C0208048, a1);
}
