/*
 * XREFs of KiLoadMTRRTarget @ 0x1405A31F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x14059DD00 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(__int64 Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
