/*
 * XREFs of PspSetJobIoAttributionProcessCallback @ 0x1406EEEE0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetDiskIoAttributionOnProcess @ 0x1400C84AC (IoSetDiskIoAttributionOnProcess.c)
 */

__int64 __fastcall PspSetJobIoAttributionProcessCallback(__int64 a1, __int64 *a2)
{
  IoSetDiskIoAttributionOnProcess(*a2, a1);
  return 0LL;
}
