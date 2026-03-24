/*
 * XREFs of HvlRestoreEnlightenment @ 0x140271118
 * Callers:
 *     PopHiberCheckResume @ 0x14056B320 (PopHiberCheckResume.c)
 * Callees:
 *     HvlpTryConfigureInterface @ 0x14017C368 (HvlpTryConfigureInterface.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     HvlpPhase0Enlightenments @ 0x140279108 (HvlpPhase0Enlightenments.c)
 */

__int64 __fastcall HvlRestoreEnlightenment(char a1)
{
  __int64 result; // rax
  int v2; // eax

  result = (unsigned int)HvlpEnlightenments;
  HvlEnlightenments = HvlpEnlightenments;
  if ( a1 == 1 )
  {
    result = (unsigned int)HvlpFlags;
    if ( (HvlpFlags & 2) == 0 )
    {
      v2 = HvlpTryConfigureInterface(0LL);
      if ( v2 < 0 )
        KeBugCheckEx(0x20001u, v2, 0LL, 0LL, 0LL);
      result = HvlpPhase0Enlightenments(0LL);
      if ( (int)result < 0 )
        KeBugCheckEx(0x20001u, (int)result, 0LL, 0LL, 0LL);
    }
  }
  return result;
}
