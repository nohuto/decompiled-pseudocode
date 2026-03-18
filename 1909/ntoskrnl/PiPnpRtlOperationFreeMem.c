/*
 * XREFs of PiPnpRtlOperationFreeMem @ 0x1408632D0
 * Callers:
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlOperationFreeMem(void *a1)
{
  ExFreePoolWithTag(a1, 0x41706E50u);
}
