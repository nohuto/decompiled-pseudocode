/*
 * XREFs of EnableMouseAcceleration @ 0x1C0095A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CDeviceAcceleration *__fastcall EnableMouseAcceleration(char a1)
{
  CDeviceAcceleration *result; // rax

  result = qword_1C01C3098;
  *((_BYTE *)qword_1C01C3098 + 112) = a1;
  return result;
}
