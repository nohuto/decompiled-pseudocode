/*
 * XREFs of DestroyEventEntry @ 0x140113A14
 * Callers:
 *     FlushEventEntryList @ 0x1406BD518 (FlushEventEntryList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall DestroyEventEntry(__int64 a1)
{
  if ( a1 )
    ExFreePoolWithTag(*(PVOID *)(a1 + 16), 0);
}
