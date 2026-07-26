/*
 * XREFs of ?ndisSetOpenToTranslationMode@@_Y2PAGENPNP@@AXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0138DC8
 * Callers:
 *     ndisMOpenAdapter @ 0x1C012C0CC (ndisMOpenAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     NdisInitializeEvent @ 0x1C003E290 (NdisInitializeEvent.c)
 */

void __fastcall ndisSetOpenToTranslationMode(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rdi
  int (__fastcall *v3)(void *, _NDIS_PACKET *); // rax

  MiniportHandle = a1->MiniportHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      150,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1);
  a1->OpenFlags |= 0x10000000u;
  KeInitializeSpinLock(&a1->PnPStateLock._NDIS_COMMON_OPEN_BLOCK::SpinLock);
  a1->PnPState = Ndis5StateRunning;
  NdisInitializeEvent(&a1->PauseEvent);
  a1->OutstandingSends = 0;
  if ( MiniportHandle->MediaType != NdisMediumWan
    || (v3 = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisMWanSend, (MiniportHandle->Flags & 0x20000) != 0) )
  {
    v3 = (int (__fastcall *)(void *, _NDIS_PACKET *))ndisSendWithPause;
  }
  a1->SendHandler = v3;
  a1->SendPacketsHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisSendPacketsWithPause;
  a1->SendCompleteHandler = (void (__fastcall *)(void *, _NDIS_PACKET *, int))ndisSendCompleteWithPause;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      6,
      151,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1);
}
