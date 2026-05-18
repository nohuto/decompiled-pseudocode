/*
 * XREFs of sub_180008FA0 @ 0x180008FA0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125BAC (memmove.c)
 */

int sub_180008FA0()
{
  memmove(&qword_18025E288, "CameraEffects", 0xDuLL);
  byte_18025E295 = 0;
  return atexit(sub_18013B940);
}
