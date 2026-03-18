/*
 * XREFs of DbgkpWerFreePool @ 0x140812D18
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x14026DE6C (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
