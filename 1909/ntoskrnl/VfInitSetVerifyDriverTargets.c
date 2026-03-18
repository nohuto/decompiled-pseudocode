/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x140A3DDA4
 * Callers:
 *     ViInitSystemPhase0 @ 0x140A1E29C (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x140A3E00C (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, unsigned int a2)
{
  int v2; // ebx
  void *result; // rax

  if ( a2 > 0x1800 )
  {
    word_140A51BEE = 0;
    a2 = 6142;
  }
  v2 = a2;
  result = memmove(MmVerifyDriverBuffer, Src, a2);
  VfOptionFlags &= ~1u;
  MmVerifyDriverBufferLength = v2;
  return result;
}
