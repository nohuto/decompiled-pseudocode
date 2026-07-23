/*
 * XREFs of MmAddPhysicalMemory @ 0x14084EB00
 * Callers:
 *     WheapClearPoison @ 0x1408DD244 (WheapClearPoison.c)
 * Callees:
 *     MiAddPhysicalMemoryChunks @ 0x14084E040 (MiAddPhysicalMemoryChunks.c)
 */

NTSTATUS __stdcall MmAddPhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  LONGLONG QuadPart; // r8
  bool v3; // zf
  LONGLONG v5; // [rsp+30h] [rbp+8h] BYREF

  QuadPart = StartAddress->QuadPart;
  v3 = (StartAddress->QuadPart & 0xFFF) == 0;
  v5 = QuadPart;
  if ( (QuadPart & 1) != 0 && !v3 )
    LODWORD(v5) = QuadPart & 0xFFFFFFFE;
  return MiAddPhysicalMemoryChunks(
           &MiSystemPartition,
           &v5,
           (__int64 *)NumberOfBytes,
           (unsigned __int8)((QuadPart & 1) != 0 && !v3) << 8);
}
