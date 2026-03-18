/*
 * XREFs of KiLoadMTRRTarget @ 0x1405A31D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x14059DCE0 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(__int64 Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
