/*
 * XREFs of WheapClearPoison @ 0x1408DBFA4
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x1408DBD6C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1400E5D40 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140123200 (MmUnmapIoSpace.c)
 *     MmAddPhysicalMemory @ 0x14084D8C0 (MmAddPhysicalMemory.c)
 *     MmRemovePhysicalMemory @ 0x14084D920 (MmRemovePhysicalMemory.c)
 */

int __fastcall WheapClearPoison(PPHYSICAL_ADDRESS StartAddress)
{
  int result; // eax
  void *v3; // rax
  LARGE_INTEGER NumberOfBytes; // [rsp+38h] [rbp+10h] BYREF

  NumberOfBytes.QuadPart = 4096LL;
  result = MmRemovePhysicalMemory(StartAddress, &NumberOfBytes);
  if ( result >= 0 )
  {
    v3 = (void *)MmMapIoSpaceEx(StartAddress->QuadPart, 64LL, 4u);
    if ( v3 )
    {
      __asm { clzero }
      _mm_mfence();
      MmUnmapIoSpace(v3, 0x40uLL);
    }
    return MmAddPhysicalMemory(StartAddress, &NumberOfBytes);
  }
  return result;
}
