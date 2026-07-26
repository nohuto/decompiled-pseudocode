/*
 * XREFs of ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C009797C
 * Callers:
 *     NdisMResetComplete @ 0x1C0098660 (NdisMResetComplete.c)
 *     ndisMProcessDeferred @ 0x1C009B0EC (ndisMProcessDeferred.c)
 * Callees:
 *     ndisMRestoreFilterSettings @ 0x1C006B6A4 (ndisMRestoreFilterSettings.c)
 *     WPP_RECORDER_SF_qDdZ @ 0x1C0098FB8 (WPP_RECORDER_SF_qDdZ.c)
 *     ndisMAbortPackets @ 0x1C009978C (ndisMAbortPackets.c)
 *     ndisMAbortRequests @ 0x1C0099A04 (ndisMAbortRequests.c)
 */

__int64 __fastcall ndisMResetCompleteStage1(struct _NDIS_MINIPORT_BLOCK *a1, int a2, unsigned __int8 a3)
{
  unsigned int v6; // edi
  __int64 result; // rax

  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDdZ(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, a3);
  if ( a2 == -2147418111 )
  {
    a1->Flags &= ~0x80000u;
  }
  else
  {
    if ( a1->MajorNdisVersion < 6u )
    {
      ndisMAbortPackets((char)a1);
      ndisMAbortRequests((char)a1);
    }
    a1->Flags &= ~0x80000u;
    if ( a3 && !a2 && a1->EthDB )
      v6 = ndisMRestoreFilterSettings((__int64)a1, 0LL, 1u);
  }
  result = v6;
  a1->ResetStatus = a2;
  return result;
}
