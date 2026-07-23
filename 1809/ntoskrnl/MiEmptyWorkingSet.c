/*
 * XREFs of MiEmptyWorkingSet @ 0x1402A7CF4
 * Callers:
 *     MmProcessWorkingSetControl @ 0x14085FFE0 (MmProcessWorkingSetControl.c)
 * Callees:
 *     MiEmptyWorkingSetInitiate @ 0x140142320 (MiEmptyWorkingSetInitiate.c)
 */

__int64 __fastcall MiEmptyWorkingSet(__int64 a1, char a2)
{
  return MiEmptyWorkingSetInitiate(a1, a2, 0LL, -1LL);
}
