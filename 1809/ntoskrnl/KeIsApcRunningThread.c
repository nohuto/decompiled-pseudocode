/*
 * XREFs of KeIsApcRunningThread @ 0x140294E00
 * Callers:
 *     VerifierKeIsApcRunningThread @ 0x14093ABF0 (VerifierKeIsApcRunningThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsApcRunningThread(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 192);
}
