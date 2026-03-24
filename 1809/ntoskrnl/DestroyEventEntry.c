/*
 * XREFs of DestroyEventEntry @ 0x140127C80
 * Callers:
 *     FlushEventEntryList @ 0x1406AF274 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
