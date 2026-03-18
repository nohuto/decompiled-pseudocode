/*
 * XREFs of DbgkpWerFreePool @ 0x14084C748
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x140281A68 (DbgkCaptureLiveKernelDump.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall DbgkpWerFreePool(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x57676244u);
}
