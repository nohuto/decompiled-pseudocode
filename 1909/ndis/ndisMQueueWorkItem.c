/*
 * XREFs of ndisMQueueWorkItem @ 0x1C009B7F8
 * Callers:
 *     ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C0078B10 (-ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 *     NdisMSendComplete @ 0x1C0089DB0 (NdisMSendComplete.c)
 *     NdisMSendResourcesAvailable @ 0x1C0089F30 (NdisMSendResourcesAvailable.c)
 *     ndisMSendCompleteSG @ 0x1C008B440 (ndisMSendCompleteSG.c)
 *     ndisMSendPacketsToMiniport @ 0x1C008BDB0 (ndisMSendPacketsToMiniport.c)
 *     ndisMWanSend @ 0x1C008C5F0 (ndisMWanSend.c)
 *     ndisMReset @ 0x1C009B920 (ndisMReset.c)
 *     ndisMWakeUpDpc @ 0x1C00A1730 (ndisMWakeUpDpc.c)
 *     ndisReturnPacketToMiniport @ 0x1C00AF434 (ndisReturnPacketToMiniport.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 */

__int64 __fastcall ndisMQueueWorkItem(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  unsigned int v7; // edi

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      12,
      51,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1);
  }
  v6 = *(_QWORD *)(a1 + 8 * v4 + 880);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 8 * v4 + 880) = *(_QWORD *)v6;
    *(_DWORD *)(v6 + 8) = v4;
    *(_QWORD *)(v6 + 16) = a3;
    *(_QWORD *)v6 = *(_QWORD *)(a1 + 8 * v4 + 824);
    *(_QWORD *)(a1 + 8 * v4 + 824) = v6;
    v7 = 0;
  }
  else
  {
    v7 = 65539;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x48000) == 0x8000 && !v7 )
    KeInsertQueueDpc((PRKDPC)(a1 + 1528), 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      12,
      52,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      v7);
  }
  return v7;
}
