/*
 * XREFs of ndisMEvaluateMagicPacketWake @ 0x1C00732F8
 * Callers:
 *     ndisMValidatePMWakePacket @ 0x1C007389C (ndisMValidatePMWakePacket.c)
 * Callees:
 *     ndisCreatePMPdcTaskClientWorkItem @ 0x1C0072E5C (ndisCreatePMPdcTaskClientWorkItem.c)
 *     ndisMValidatePMWakePacketForMagicPacket @ 0x1C00739FC (ndisMValidatePMWakePacketForMagicPacket.c)
 */

void __fastcall ndisMEvaluateMagicPacketWake(__int64 a1)
{
  if ( ndisAcOnLine
    && *(_QWORD *)(a1 + 4456)
    && !*(_DWORD *)(a1 + 464)
    && *(_DWORD *)(a1 + 5700) == 1
    && *(_QWORD *)(a1 + 5480)
    && !*(_DWORD *)(a1 + 5696) )
  {
    if ( (unsigned __int8)ndisMValidatePMWakePacketForMagicPacket() )
      ndisCreatePMPdcTaskClientWorkItem(a1);
  }
}
