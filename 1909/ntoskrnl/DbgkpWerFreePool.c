/*
 * XREFs of DbgkpWerFreePool @ 0x14084BE48
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1402817C8 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
