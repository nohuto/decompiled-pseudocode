/*
 * XREFs of KdpSysReadBusData @ 0x14095654C
 * Callers:
 *     KdSystemDebugControl @ 0x14087DCF0 (KdSystemDebugControl.c)
 *     KdpGetBusData @ 0x140954B4C (KdpGetBusData.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KdpSysReadBusData(
        BUS_DATA_TYPE a1,
        ULONG a2,
        ULONG a3,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length,
        ULONG *a7)
{
  ULONG BusDataByOffset; // eax

  if ( a1 == PCIConfiguration )
    BusDataByOffset = ((__int64 (__fastcall *)(_QWORD, _QWORD, PVOID))qword_140424370)(a2, a3, Buffer);
  else
    BusDataByOffset = HalGetBusDataByOffset(a1, a2, a3, Buffer, Offset, Length);
  *a7 = BusDataByOffset;
  return Length != BusDataByOffset ? 0xC0000001 : 0;
}
