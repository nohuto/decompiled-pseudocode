/*
 * XREFs of ndisMSendNetBufferListsCompleteInternal @ 0x1C008B6D4
 * Callers:
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C007B5CC (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ?ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z @ 0x1C0089B10 (-ndisMLoopbackNetBufferLists@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKPEAPEAU2@@Z.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C008B8B0 (ndisMSendNetBufferListsToPackets.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00B62CC (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00B64A0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00B6AA8 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisRequestPowerResume @ 0x1C00B8DE0 (ndisRequestPowerResume.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C000BDC8 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ??0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003BBAC (--0NDIS_PCW_CONTEXT@@QEAA@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C007AE58 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0090394 (ndisInvokeNextSendCompleteHandler.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00AF688 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00AF81C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

void __fastcall ndisMSendNetBufferListsCompleteInternal(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NET_BUFFER_LIST *a2,
        char a3)
{
  __int64 v6; // rdx
  char v7; // r9
  KIRQL v8; // di
  struct NDIS_NBL_TRACKER_HANDLE__ *v9; // rdx
  __int16 DatapathCyclesMask; // bp
  struct NDIS_PCW_CONTEXT v11; // [rsp+30h] [rbp-38h] BYREF

  NDIS_PCW_CONTEXT::NDIS_PCW_CONTEXT(&v11, a1);
  v8 = 2;
  if ( *(_DWORD *)ndisNblTrackerMode )
  {
    if ( v7 )
      v9 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v6 + 4080);
    else
      v9 = 0LL;
    ndisNblTrackerTransferOwnershipInternal(
      a2,
      v9,
      (unsigned __int64)a1->Next.SendNetBufferListsCompleteTracker,
      0x93u,
      a3 & 1);
  }
  if ( byte_1C00E5E20 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(a2);
  DatapathCyclesMask = v11.DatapathCyclesMask;
  if ( (v11.DatapathCyclesMask & 0x100) != 0 )
  {
    if ( (a3 & 1) == 0 )
      v8 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v11, 8u);
    DatapathCyclesMask = v11.DatapathCyclesMask;
  }
  ndisInvokeNextSendCompleteHandler(
    a2,
    a1->Next.SendNetBufferListsCompleteContext,
    (void (*)(void))a1->Next.SendNetBufferListsCompleteHandler);
  if ( (DatapathCyclesMask & 0x100) != 0 )
  {
    ndisPcwEndCycleCounter(&v11, 8u, 0x15uLL);
    if ( v8 != 2 )
      KeLowerIrql(v8);
  }
}
