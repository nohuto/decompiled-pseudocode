/*
 * XREFs of WheapClearPoison @ 0x1408DD244
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x1408DD00C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1400E5DE0 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x1401232F0 (MmUnmapIoSpace.c)
 *     MmAddPhysicalMemory @ 0x14084EB00 (MmAddPhysicalMemory.c)
 *     MmRemovePhysicalMemory @ 0x14084EB60 (MmRemovePhysicalMemory.c)
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
