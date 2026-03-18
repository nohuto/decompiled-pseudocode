/*
 * XREFs of KiEnclsDebugRead @ 0x1401BCCA0
 * Callers:
 *     KeDebugReadEnclaveMemory @ 0x1408439D8 (KeDebugReadEnclaveMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnclsDebugRead(__int64 a1, __int64 a2)
{
  __asm { encls }
  return a2;
}
