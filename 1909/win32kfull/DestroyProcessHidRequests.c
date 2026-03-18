/*
 * XREFs of DestroyProcessHidRequests @ 0x1C0118350
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x1C0118364 (FreeProcessHidTable.c)
 */

__int64 DestroyProcessHidRequests()
{
  return FreeProcessHidTable();
}
