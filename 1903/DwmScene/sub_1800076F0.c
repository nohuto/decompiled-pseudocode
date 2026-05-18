/*
 * XREFs of sub_1800076F0 @ 0x1800076F0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180125A9C (memmove.c)
 */

int sub_1800076F0()
{
  memmove(&qword_18025C5D8, "Background", 0xAuLL);
  byte_18025C5E2 = 0;
  return atexit(sub_180138880);
}
