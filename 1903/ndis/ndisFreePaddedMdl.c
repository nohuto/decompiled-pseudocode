/*
 * XREFs of ndisFreePaddedMdl @ 0x1C008A0A0
 * Callers:
 *     ndisMAllocSGListS @ 0x1C0079544 (ndisMAllocSGListS.c)
 *     NdisMSendComplete @ 0x1C0089BE0 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C008A2F0 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C008A520 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C008A940 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C008AD90 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C008B270 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C008B410 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C008BA60 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C008BBE0 (ndisMSendPacketsToMiniport.c)
 *     ndisMAbortPackets @ 0x1C009978C (ndisMAbortPackets.c)
 *     ndisMFakeSendPackets @ 0x1C009A6F0 (ndisMFakeSendPackets.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreePaddedMdl(__int64 a1)
{
  __int64 v1; // rax
  PMDL *v3; // rbx

  v1 = *(unsigned __int16 *)(a1 + 42);
  *(_DWORD *)(a1 + 36) &= ~0x10000u;
  v3 = *(PMDL **)(v1 + a1 + 128);
  *(_QWORD *)(v1 + a1 + 128) = 0LL;
  IoFreeMdl(*v3);
  *v3 = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
}
