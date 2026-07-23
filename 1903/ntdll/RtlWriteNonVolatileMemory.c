/*
 * XREFs of RtlWriteNonVolatileMemory @ 0x1800F6030
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopyMemoryNonTemporal @ 0x1800A0F30 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     RtlFlushNonVolatileMemory @ 0x1800F5680 (RtlFlushNonVolatileMemory.c)
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
  if ( (Flags & 3) == 1 )
  {
    v5 = (Flags & 0x100) != 0;
    goto LABEL_10;
  }
  if ( (Flags & 2) == 0 )
  {
    memmove(NvDestination, Source, Size);
    return v5;
  }
  if ( Size < 8 )
  {
LABEL_10:
    memmove(NvDestination, Source, Size);
    return RtlFlushNonVolatileMemory(NvToken, NvDestination, Size, v5);
  }
  RtlCopyMemoryNonTemporal((__m128i *)NvDestination, (__int64)Source, Size);
  return v5;
}
