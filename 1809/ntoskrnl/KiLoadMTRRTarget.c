/*
 * XREFs of KiLoadMTRRTarget @ 0x140574B20
 * Callers:
 *     <none>
 * Callees:
 *     KeLoadMTRR @ 0x14056F550 (KeLoadMTRR.c)
 */

ULONG_PTR __fastcall KiLoadMTRRTarget(__int64 Argument)
{
  KeLoadMTRR(Argument);
  return 0LL;
}
