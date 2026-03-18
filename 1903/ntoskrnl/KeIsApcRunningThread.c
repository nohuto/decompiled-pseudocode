/*
 * XREFs of KeIsApcRunningThread @ 0x1402AB4F0
 * Callers:
 *     VerifierKeIsApcRunningThread @ 0x140978220 (VerifierKeIsApcRunningThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsApcRunningThread(__int64 a1)
{
  return *(unsigned __int8 *)(a1 + 192);
}
