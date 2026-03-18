/*
 * XREFs of VerifierKeWaitForSingleObjectNoReboot @ 0x140978EC0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeWaitForSingleObjectCommon @ 0x14097995C (ViKeWaitForSingleObjectCommon.c)
 */

__int64 __fastcall VerifierKeWaitForSingleObjectNoReboot(int a1, int a2, int a3, int a4, __int64 a5)
{
  return ViKeWaitForSingleObjectCommon(a1, a2, a3, a4, a5);
}
