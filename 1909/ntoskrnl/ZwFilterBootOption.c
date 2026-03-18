/*
 * XREFs of ZwFilterBootOption @ 0x1401C2810
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x140296B74 (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
