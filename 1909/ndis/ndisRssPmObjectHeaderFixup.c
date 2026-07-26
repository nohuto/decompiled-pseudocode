/*
 * XREFs of ndisRssPmObjectHeaderFixup @ 0x1C0030244
 * Callers:
 *     ndisMSetPowerManagementCapabilities @ 0x1C00300A8 (ndisMSetPowerManagementCapabilities.c)
 *     ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x1C00301B0 (-ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qsDDs @ 0x1C00994A4 (WPP_RECORDER_SF_qsDDs.c)
 */

char __fastcall ndisRssPmObjectHeaderFixup(__int64 a1, __int64 a2, char a3, char a4, unsigned __int16 a5)
{
  char result; // al

  result = 0;
  if ( *(_BYTE *)a2 != a3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsDDs(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 124);
    *(_BYTE *)a2 = a3;
    result = 1;
  }
  if ( *(_BYTE *)(a2 + 1) != a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsDDs(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 125);
    *(_BYTE *)(a2 + 1) = a4;
    result = 1;
  }
  if ( *(_WORD *)(a2 + 2) < a5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsDDs(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 126);
    *(_WORD *)(a2 + 2) = a5;
    return 1;
  }
  return result;
}
