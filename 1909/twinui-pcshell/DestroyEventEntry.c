/*
 * XREFs of DestroyEventEntry @ 0x1801250B4
 * Callers:
 *     FlushEventEntryList @ 0x1801251F4 (FlushEventEntryList.c)
 *     InsertEventEntryInLookUpTable @ 0x180125370 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  HANDLE ProcessHeap; // rax

  if ( a1 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 16));
  }
}
