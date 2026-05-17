/*
 * XREFs of EtwpCheckForEnoughStackSpace @ 0x18010D2D8
 * Callers:
 *     EtwpWriteToPrivateBuffers @ 0x1800530AC (EtwpWriteToPrivateBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     RtlResetStackOverflow @ 0x1800DD728 (RtlResetStackOverflow.c)
 */

char EtwpCheckForEnoughStackSpace()
{
  void *v0; // rsp

  v0 = alloca(2176LL);
  return 1;
}
