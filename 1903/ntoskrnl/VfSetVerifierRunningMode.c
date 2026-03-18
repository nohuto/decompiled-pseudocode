/*
 * XREFs of VfSetVerifierRunningMode @ 0x140976D44
 * Callers:
 *     VfSetVerifierInformationEx @ 0x14098A510 (VfSetVerifierInformationEx.c)
 *     ViInitSystemPhase0 @ 0x140A1E0C0 (ViInitSystemPhase0.c)
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
  dword_14044665C = a1;
  return result;
}
