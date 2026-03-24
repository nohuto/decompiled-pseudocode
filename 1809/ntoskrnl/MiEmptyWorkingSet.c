/*
 * XREFs of MiEmptyWorkingSet @ 0x1402A7B04
 * Callers:
 *     MmProcessWorkingSetControl @ 0x14085ED80 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x140142220 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, char a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
