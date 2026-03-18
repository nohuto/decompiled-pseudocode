/*
 * XREFs of DestroyEventEntry @ 0x1C0052884
 * Callers:
 *     FlushEventEntryList @ 0x1C029E5A8 (FlushEventEntryList.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
