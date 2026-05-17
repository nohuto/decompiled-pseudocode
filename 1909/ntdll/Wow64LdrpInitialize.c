/*
 * XREFs of Wow64LdrpInitialize @ 0x1800853B4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Wow64LdrpInitialize(__int64 a1)
{
  return g_LdrpWow64LdrpInitialize(a1);
}
