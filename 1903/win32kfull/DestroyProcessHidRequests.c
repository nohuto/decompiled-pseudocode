/*
 * XREFs of DestroyProcessHidRequests @ 0x1C013E350
 * Callers:
 *     <none>
 * Callees:
 *     FreeProcessHidTable @ 0x1C013E364 (FreeProcessHidTable.c)
 */

__int64 DestroyProcessHidRequests()
{
  return FreeProcessHidTable();
}
