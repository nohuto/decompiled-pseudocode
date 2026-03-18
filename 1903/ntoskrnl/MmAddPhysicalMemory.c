/*
 * XREFs of MmAddPhysicalMemory @ 0x140889290
 * Callers:
 *     WheapClearPoison @ 0x14091A1B0 (WheapClearPoison.c)
 * Callees:
 *     MiAddPhysicalMemoryChunks @ 0x1408884D4 (MiAddPhysicalMemoryChunks.c)
 */

NTSTATUS __stdcall MmAddPhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  bool v2; // zf
  bool v3; // r8
  LONGLONG QuadPart; // [rsp+30h] [rbp+8h] BYREF

  v2 = (StartAddress->QuadPart & 0xFFF) == 0;
  QuadPart = StartAddress->QuadPart;
  v3 = (QuadPart & 1) != 0 && !v2;
  if ( v3 )
    LODWORD(QuadPart) = QuadPart & 0xFFFFFFFE;
  return MiAddPhysicalMemoryChunks(
           &MiSystemPartition,
           (unsigned __int64 *)&QuadPart,
           NumberOfBytes,
           (unsigned __int8)v3 << 8);
}
