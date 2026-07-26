/*
 * XREFs of ndisMSendNetBufferListsCompleteInternal @ 0x1C0058008
 * Callers:
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004E928 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ndisMLoopbackNetBufferLists @ 0x1C00578B8 (ndisMLoopbackNetBufferLists.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0058230 (ndisMSendNetBufferListsToPackets.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C0072D4C (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C0072F18 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C0073304 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisRequestPowerResume @ 0x1C0075358 (ndisRequestPowerResume.c)
 * Callees:
 *     ndisMarkNetBufferListCorrelationIdsAsUsed @ 0x1C004E064 (ndisMarkNetBufferListCorrelationIdsAsUsed.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C005C4D0 (ndisInvokeNextSendCompleteHandler.c)
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C006B784 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 */

void __fastcall ndisMSendNetBufferListsCompleteInternal(__int64 a1, struct _NET_BUFFER_LIST *a2, char a3, char a4)
{
  unsigned int v5; // esi
  KIRQL v8; // di
  struct NDIS_NBL_TRACKER_HANDLE__ *v9; // rdx
  struct NDIS_PCW_CONTEXT v10; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(_DWORD *)(a1 + 80);
  v10.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v10.CurrentCpu = -1;
  v8 = 2;
  v10.DatapathEventsMask = *(_DWORD *)(a1 + 48);
  v10.DatapathCyclesMask = v5;
  if ( ndisNblTrackerMode )
  {
    if ( a4 )
      v9 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 4112);
    else
      v9 = 0LL;
    ndisNblTrackerTransferOwnershipInternal(
      a2,
      v9,
      *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 2600),
      NdisNblTrackerEvent_MiniportSendCompleted,
      a3 & 1);
  }
  if ( byte_1C009FE30 )
    ndisMarkNetBufferListCorrelationIdsAsUsed(a2);
  if ( (v5 & 0x100) != 0 )
  {
    if ( (a3 & 1) == 0 )
      v8 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v10, 8u);
    LOWORD(v5) = v10.DatapathCyclesMask;
  }
  ndisInvokeNextSendCompleteHandler(a2, *(void **)(a1 + 2592), *(void (**)(void))(a1 + 2632));
  if ( (v5 & 0x100) != 0 )
  {
    ndisPcwEndCycleCounter(&v10, 8u, 0x15uLL);
    if ( v8 != 2 )
      KeLowerIrql(v8);
  }
}
