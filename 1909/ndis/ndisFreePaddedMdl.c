/*
 * XREFs of ndisFreePaddedMdl @ 0x1C008A270
 * Callers:
 *     ndisMAllocSGListS @ 0x1C0079714 (ndisMAllocSGListS.c)
 *     NdisMSendComplete @ 0x1C0089DB0 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C008A4C0 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C008A6F0 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C008AB10 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C008AF60 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C008B440 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C008B5E0 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C008BC30 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C008BDB0 (ndisMSendPacketsToMiniport.c)
 *     ndisMAbortPackets @ 0x1C009995C (ndisMAbortPackets.c)
 *     ndisMFakeSendPackets @ 0x1C009A8C0 (ndisMFakeSendPackets.c)
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
