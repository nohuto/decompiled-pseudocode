/*
 * XREFs of EnableMouseAcceleration @ 0x1C012DDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CDeviceAcceleration *__fastcall EnableMouseAcceleration(char a1)
{
  CDeviceAcceleration *result; // rax

  result = qword_1C019AA88;
  *((_BYTE *)qword_1C019AA88 + 112) = a1;
  return result;
}
