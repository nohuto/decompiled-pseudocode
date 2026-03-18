/*
 * XREFs of UpdateMouseSensitivity @ 0x1C008F6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z @ 0x1C008F6F0 (-UpdateMouseSensitivity@MOUSE_SENSITIVITY_INFO@CMouseAcceleration@@QEAAXI@Z.c)
 */

void __fastcall UpdateMouseSensitivity(unsigned int a1)
{
  unsigned int v1; // edx

  v1 = a1;
  if ( a1 - 1 > 0x13 )
    v1 = *((_DWORD *)qword_1C01C3098 + 24);
  CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
    (CDeviceAcceleration *)((char *)qword_1C01C3098 + 104),
    v1);
}
