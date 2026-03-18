/*
 * XREFs of MmSecureVirtualMemory @ 0x1406BE4B0
 * Callers:
 *     RtlFileMapMapView @ 0x140345380 (RtlFileMapMapView.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x1406BE4E0 (MmSecureVirtualMemoryEx.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  __int64 v4; // r8

  v4 = 4LL;
  if ( ProbeMode == 2 )
    v4 = 2LL;
  return (HANDLE)MmSecureVirtualMemoryEx(Address, Size, v4);
}
