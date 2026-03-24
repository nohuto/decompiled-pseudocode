/*
 * XREFs of DbgkpWerFreePool @ 0x140812CF8
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14026DF6C (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
