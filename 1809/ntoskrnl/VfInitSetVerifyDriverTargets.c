/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x1409F8498
 * Callers:
 *     ViInitSystemPhase0 @ 0x1409DAF34 (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x1409F8700 (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x1401D1540 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, unsigned int a2)
{
  int v2; // ebx
  void *result; // rax

  if ( a2 > 0x1800 )
  {
    word_140A0CBAE = 0;
    a2 = 6142;
  }
  v2 = a2;
  result = memmove(MmVerifyDriverBuffer, Src, a2);
  VfOptionFlags &= ~1u;
  MmVerifyDriverBufferLength = v2;
  return result;
}
