/*
 * XREFs of VfSetVerifierRunningMode @ 0x140937490
 * Callers:
 *     VfSetVerifierInformationEx @ 0x14094AB28 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x1409DAF34 (ViInitSystemPhase0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfSetVerifierRunningMode(int a1)
{
  __int64 result; // rax

  if ( (unsigned int)(a1 - 1) > 3 )
    return 3221225485LL;
  VfVerifyMode = a1;
  result = 0LL;
  dword_14041A9FC = a1;
  return result;
}
