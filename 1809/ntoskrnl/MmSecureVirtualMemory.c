/*
 * XREFs of MmSecureVirtualMemory @ 0x1405F6DF0
 * Callers:
 *     RtlFileMapMapView @ 0x140178D58 (RtlFileMapMapView.c)
 * Callees:
 *     MmSecureVirtualMemoryEx @ 0x1405F6CB0 (MmSecureVirtualMemoryEx.c)
 */

HANDLE __stdcall MmSecureVirtualMemory(PVOID Address, SIZE_T Size, ULONG ProbeMode)
{
  int v4; // r8d

  v4 = 4;
  if ( ProbeMode == 2 )
    v4 = 2;
  return (HANDLE)MmSecureVirtualMemoryEx((unsigned __int64)Address, Size, v4, 0);
}
