/*
 * XREFs of WheapClearPoison @ 0x1408DBF84
 * Callers:
 *     WheapAttemptPhysicalPageOffline @ 0x1408DBD4C (WheapAttemptPhysicalPageOffline.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x1400E5D60 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x140123220 (MmUnmapIoSpace.c)
 *     MmAddPhysicalMemory @ 0x14084D8A0 (MmAddPhysicalMemory.c)
 *     MmRemovePhysicalMemory @ 0x14084D900 (MmRemovePhysicalMemory.c)
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
