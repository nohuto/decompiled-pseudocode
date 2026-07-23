/*
 * XREFs of VfSetVerifierRunningMode @ 0x140938490
 * Callers:
 *     VfSetVerifierInformationEx @ 0x14094BB28 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x1409DBF34 (ViInitSystemPhase0.c)
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
  dword_14041BADC = a1;
  return result;
}
