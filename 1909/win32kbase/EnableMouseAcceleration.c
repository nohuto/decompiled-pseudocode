/*
 * XREFs of EnableMouseAcceleration @ 0x1C00A8BC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CDeviceAcceleration *__fastcall EnableMouseAcceleration(char a1)
{
  CDeviceAcceleration *result; // rax

  result = qword_1C02080A8;
  *((_BYTE *)qword_1C02080A8 + 112) = a1;
  return result;
}
