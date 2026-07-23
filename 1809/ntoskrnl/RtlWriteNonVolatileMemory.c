/*
 * XREFs of RtlWriteNonVolatileMemory @ 0x1402F4380
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x1401C5DE0 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     RtlFlushNonVolatileMemory @ 0x1402ED220 (RtlFlushNonVolatileMemory.c)
 */

DWORD __cdecl RtlWriteNonVolatileMemory(
        PVOID NvToken,
        void *NvDestination,
        const void *Source,
        SIZE_T Size,
        DWORD Flags)
{
  DWORD v5; // ebx

  v5 = 0;
  if ( ((unsigned __int8)NvToken & 1) == 0 )
    return -1073741811;
  if ( (Flags & 1) != 0 )
    goto LABEL_8;
  if ( (Flags & 2) == 0 )
  {
    memmove(NvDestination, Source, Size);
    return v5;
  }
  if ( Size < 8 )
  {
LABEL_8:
    if ( (Flags & 3) == 1 && (Flags & 0x100) != 0 )
      v5 = 1;
    memmove(NvDestination, Source, Size);
    return RtlFlushNonVolatileMemory(NvToken, NvDestination, Size, v5);
  }
  RtlCopyMemoryNonTemporal(NvDestination, Source, Size);
  return v5;
}
