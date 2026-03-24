/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1401BB470
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x14000F060 (CmSiPrefetchVirtualMemoryRange.c)
 *     PspMapSystemDll @ 0x1406779AC (PspMapSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationVirtualMemory(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
