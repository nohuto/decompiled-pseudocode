/*
 * XREFs of ZwFilterBootOption @ 0x1401B9D10
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x140281648 (IopInitializeInMemoryDumpData.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwFilterBootOption(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
