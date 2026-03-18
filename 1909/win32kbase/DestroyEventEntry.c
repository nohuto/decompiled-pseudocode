/*
 * XREFs of DestroyEventEntry @ 0x1C01C8560
 * Callers:
 *     FlushEventEntryList @ 0x1C0247294 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
