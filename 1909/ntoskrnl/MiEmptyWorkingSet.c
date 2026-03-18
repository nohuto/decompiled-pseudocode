/*
 * XREFs of MiEmptyWorkingSet @ 0x1402BF248
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406F7278 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x14015A9F8 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, char a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
