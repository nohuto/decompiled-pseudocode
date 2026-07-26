/*
 * XREFs of ndisMUpdateNameOnPMWakePacket @ 0x1C004A7B0
 * Callers:
 *     ndisMValidatePMWakePacket @ 0x1C004A8F8 (ndisMValidatePMWakePacket.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_SqZ @ 0x1C0049BE4 (WPP_SF_SqZ.c)
 *     WPP_SF_dqZ @ 0x1C0049CB0 (WPP_SF_dqZ_ea_1C0049CB0.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     ndisMValidatePMWakePacketForMagicPacket @ 0x1C004AA30 (ndisMValidatePMWakePacketForMagicPacket.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00836E8 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall ndisMUpdateNameOnPMWakePacket(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 *v6; // rdi

  *(_WORD *)(a2 + 12) = 0;
  if ( (unsigned __int8)ndisMValidatePMWakePacketForMagicPacket() )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_qZ(0x7Eu, &WPP_293c7713174a39067998d2cc62157da6_Traceguids, a1, *(const wchar_t **)(a1 + 3888));
    return;
  }
  v6 = *(__int64 **)(a1 + 968);
  if ( v6 )
  {
    while ( *((_DWORD *)v6 + 49) != *(_DWORD *)(a2 + 8) )
    {
      v6 = (__int64 *)*v6;
      if ( !v6 )
        goto LABEL_10;
    }
    *(_WORD *)(a2 + 12) = *((_WORD *)v6 + 32);
    memset((void *)(a2 + 14), 0, 0x80uLL);
    memcpy_s((void *)(a2 + 14), 0x7EuLL, (char *)v6 + 66, *((unsigned __int16 *)v6 + 32));
    v5 = *(_QWORD *)(a1 + 4496);
    if ( v5 )
      *(_DWORD *)(v5 + 1100) = *((_DWORD *)v6 + 10);
  }
LABEL_10:
  if ( *(_DWORD *)(a2 + 8) != 131073 )
  {
    if ( v6 )
      goto LABEL_14;
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  if ( v6 )
  {
LABEL_14:
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_SqZ(v5, v4, (const wchar_t *)(a2 + 14), a1, *(_QWORD *)(a1 + 3888));
    return;
  }
  if ( (unsigned __int8)byte_1C00A025D >= 3u )
    WPP_SF_dqZ(v5, v4, *(_DWORD *)(a2 + 8), a1, *(_QWORD *)(a1 + 3888));
}
