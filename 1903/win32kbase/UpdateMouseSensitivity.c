/*
 * XREFs of UpdateMouseSensitivity @ 0x1C00A3BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1C00A3C00 (-UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z.c)
 */

void __fastcall UpdateMouseSensitivity(unsigned int a1)
{
  unsigned int v1; // edx

  v1 = a1;
  if ( a1 - 1 > 0x13 )
    v1 = *((_DWORD *)qword_1C020B0A8 + 24);
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
    (CDeviceAcceleration *)((char *)qword_1C020B0A8 + 104),
    v1);
}
