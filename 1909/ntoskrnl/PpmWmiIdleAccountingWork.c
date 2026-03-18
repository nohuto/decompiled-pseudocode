/*
 * XREFs of PpmWmiIdleAccountingWork @ 0x1408B3670
 * Callers:
 *     <none>
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140098ED8 (PopExecuteOnTargetProcessors.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmWmiIdleAccountingWork(void *a1)
{
  ExFreePoolWithTag(a1, 0x656C6469u);
  return PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmWmiFireIdleAccountingEvent, 0LL, 0LL);
}
