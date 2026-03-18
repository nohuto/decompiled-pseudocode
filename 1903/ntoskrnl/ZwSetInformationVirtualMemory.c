/*
 * XREFs of ZwSetInformationVirtualMemory @ 0x1401C33D0
 * Callers:
 *     CmSiPrefetchVirtualMemoryRange @ 0x140098DF0 (CmSiPrefetchVirtualMemoryRange.c)
 *     PspMapSystemDll @ 0x140678D60 (PspMapSystemDll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetInformationVirtualMemory(__int64 a1, __int64 a2, __int64 a3)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2, a3);
}
