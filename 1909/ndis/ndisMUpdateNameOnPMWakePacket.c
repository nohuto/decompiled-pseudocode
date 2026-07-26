/*
 * XREFs of ndisMUpdateNameOnPMWakePacket @ 0x1C0073704
 * Callers:
 *     ndisMValidatePMWakePacket @ 0x1C007389C (ndisMValidatePMWakePacket.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     WPP_RECORDER_SF_SqZ @ 0x1C00726D4 (WPP_RECORDER_SF_SqZ.c)
 *     WPP_RECORDER_SF_dqZ @ 0x1C00728AC (WPP_RECORDER_SF_dqZ_ea_1C00728AC.c)
 *     ndisMValidatePMWakePacketForMagicPacket @ 0x1C00739FC (ndisMValidatePMWakePacketForMagicPacket.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C00C902C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall ndisMUpdateNameOnPMWakePacket(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  _UNKNOWN **result; // rax
  __int64 *v8; // rdi
  __int64 v9; // rcx
  int v10; // [rsp+20h] [rbp-28h]

  *(_WORD *)(a2 + 12) = 0;
  if ( (unsigned __int8)ndisMValidatePMWakePacketForMagicPacket() )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_qZ(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            v4,
                            0xEu,
                            0x7Eu,
                            (struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
                            a1,
                            *(unsigned __int16 **)(a1 + 3856));
    return result;
  }
  v8 = *(__int64 **)(a1 + 968);
  if ( v8 )
  {
    while ( *((_DWORD *)v8 + 49) != *(_DWORD *)(a2 + 8) )
    {
      v8 = (__int64 *)*v8;
      if ( !v8 )
        goto LABEL_10;
    }
    *(_WORD *)(a2 + 12) = *((_WORD *)v8 + 32);
    memset((void *)(a2 + 14), 0, 0x80uLL);
    memcpy_s((void *)(a2 + 14), 0x7EuLL, (char *)v8 + 66, *((unsigned __int16 *)v8 + 32));
    v9 = *(_QWORD *)(a1 + 4456);
    if ( v9 )
      *(_DWORD *)(v9 + 1100) = *((_DWORD *)v8 + 10);
  }
LABEL_10:
  if ( *(_DWORD *)(a2 + 8) != 131073 )
  {
    if ( v8 )
      goto LABEL_14;
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  }
  if ( v8 )
  {
LABEL_14:
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_SqZ(
                            *((_QWORD *)WPP_GLOBAL_Control + 8),
                            v4,
                            v5,
                            v6,
                            v10,
                            (const wchar_t *)(a2 + 14),
                            a1,
                            *(unsigned __int16 **)(a1 + 3856));
    return result;
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_dqZ(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v4,
                          v5,
                          v6,
                          v10,
                          *(_DWORD *)(a2 + 8),
                          a1,
                          *(unsigned __int16 **)(a1 + 3856));
  return result;
}
