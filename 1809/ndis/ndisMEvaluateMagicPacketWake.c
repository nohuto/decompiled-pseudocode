/*
 * XREFs of ndisMEvaluateMagicPacketWake @ 0x1C004A36C
 * Callers:
 *     ndisMValidatePMWakePacket @ 0x1C004A8F8 (ndisMValidatePMWakePacket.c)
 * Callees:
 *     ndisCreatePMPdcTaskClientWorkItem @ 0x1C004A0A8 (ndisCreatePMPdcTaskClientWorkItem.c)
 *     ndisMValidatePMWakePacketForMagicPacket @ 0x1C004AA30 (ndisMValidatePMWakePacketForMagicPacket.c)
 */

void __fastcall ndisMEvaluateMagicPacketWake(__int64 a1)
{
  if ( ndisAcOnLine
    && *(_QWORD *)(a1 + 4496)
    && !*(_DWORD *)(a1 + 464)
    && *(_DWORD *)(a1 + 5764) == 1
    && *(_QWORD *)(a1 + 5544)
    && !*(_DWORD *)(a1 + 5760) )
  {
    if ( (unsigned __int8)ndisMValidatePMWakePacketForMagicPacket() )
      ndisCreatePMPdcTaskClientWorkItem(a1);
  }
}
