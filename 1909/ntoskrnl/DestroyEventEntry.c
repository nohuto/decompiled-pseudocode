/*
 * XREFs of DestroyEventEntry @ 0x1401132A4
 * Callers:
 *     FlushEventEntryList @ 0x1406BCCA8 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
