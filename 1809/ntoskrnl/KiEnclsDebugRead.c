/*
 * XREFs of KiEnclsDebugRead @ 0x1401BCE20
 * Callers:
 *     KeDebugReadEnclaveMemory @ 0x140844C18 (KeDebugReadEnclaveMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEnclsDebugRead(__int64 a1, __int64 a2)
{
  __asm { encls }
  return a2;
}
