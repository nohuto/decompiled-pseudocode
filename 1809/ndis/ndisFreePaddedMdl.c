/*
 * XREFs of ndisFreePaddedMdl @ 0x1C005613C
 * Callers:
 *     ndisMAllocSGListS @ 0x1C004C928 (ndisMAllocSGListS.c)
 *     NdisMSendComplete @ 0x1C00556F0 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C0056450 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C00566E0 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0056B70 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C0057030 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C0057CE0 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0057ED0 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00586B0 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C00588B0 (ndisMSendPacketsToMiniport.c)
 *     ndisMAbortPackets @ 0x1C0061E4C (ndisMAbortPackets.c)
 *     ndisMFakeSendPackets @ 0x1C0062830 (ndisMFakeSendPackets.c)
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
