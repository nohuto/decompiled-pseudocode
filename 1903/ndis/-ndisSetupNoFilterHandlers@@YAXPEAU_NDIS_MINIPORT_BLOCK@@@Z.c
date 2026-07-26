/*
 * XREFs of ?ndisSetupNoFilterHandlers@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003CE00
 * Callers:
 *     ndisSetupLwfMiniportHandlers @ 0x1C00240B4 (ndisSetupLwfMiniportHandlers.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

void __fastcall ndisSetupNoFilterHandlers(struct _NDIS_MINIPORT_BLOCK *a1)
{
  bool v2; // zf
  unsigned __int8 MajorNdisVersion; // dl
  void (__fastcall *SendNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rcx
  void (__fastcall *v5)(void *, void *); // r8
  _NDIS_SEND_PATH_TYPE v6; // eax
  void (__fastcall *IndicateNetBufferListsHandler)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int); // r9
  void *IndicateNetBufferListsContext; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      64,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1);
  v2 = (a1->Flags & 0x20000000) == 0;
  MajorNdisVersion = a1->MajorNdisVersion;
  SendNetBufferListsHandler = a1->NoFilter.SendNetBufferListsHandler;
  a1->NextSendPacketsHandler = a1->FinalSendPacketsHandler;
  a1->Next.CancelSendHandler = a1->NoFilter.CancelSendHandler;
  a1->Next.CancelSendContext = a1->NoFilter.CancelSendContext;
  a1->Next.SendNetBufferListsTracker = a1->NoFilter.SendNetBufferListsTracker;
  if ( v2 )
  {
    v5 = (void (__fastcall *)(void *, void *))ndisFakeMiniportCancelSendPackets;
    v6 = (MajorNdisVersion < 6u) + 1;
  }
  else
  {
    a1->NextSendNetBufferListsHandler = SendNetBufferListsHandler;
    v5 = (void (__fastcall *)(void *, void *))ndisOpenCancelSendNetBufferLists;
    v6 = (MajorNdisVersion < 6u) + 1;
    a1->SendPathType = v6;
  }
  a1->SavedSendPathType = v6;
  a1->SavedNextSendNetBufferListsHandler = SendNetBufferListsHandler;
  a1->NextCancelSendNetBufferListsHandler = v5;
  IndicateNetBufferListsHandler = a1->NoFilter.IndicateNetBufferListsHandler;
  IndicateNetBufferListsContext = a1->NoFilter.IndicateNetBufferListsContext;
  a1->Next.ReturnNetBufferListsHandler = a1->NoFilter.ReturnNetBufferListsHandler;
  a1->Next.ReturnNetBufferListsContext = a1->NoFilter.ReturnNetBufferListsContext;
  a1->Next.ReturnNetBufferListsTracker = a1->NoFilter.ReturnNetBufferListsTracker;
  a1->Next.ReturnNetBufferListsObject = a1->NoFilter.ReturnNetBufferListsObject;
  a1->Next.SendNetBufferListsCompleteHandler = a1->NoFilter.SendNetBufferListsCompleteHandler;
  a1->Next.SendNetBufferListsCompleteContext = a1->NoFilter.SendNetBufferListsCompleteContext;
  a1->Next.SendNetBufferListsCompleteTracker = a1->NoFilter.SendNetBufferListsCompleteTracker;
  a1->Next.SendNetBufferListsCompleteObject = a1->NoFilter.SendNetBufferListsCompleteObject;
  a1->Next.IndicateNetBufferListsTracker = a1->NoFilter.IndicateNetBufferListsTracker;
  a1->Next.IndicateNetBufferListsObject = a1->NoFilter.IndicateNetBufferListsObject;
  a1->Next.RequestHandle = a1;
  a1->Next.DirectRequestHandle = a1;
  a1->Next.IndicateNetBufferListsHandler = IndicateNetBufferListsHandler;
  a1->Next.IndicateNetBufferListsContext = IndicateNetBufferListsContext;
  a1->Next.SaveIndicateNetBufferListsHandler = IndicateNetBufferListsHandler;
  a1->Next.SaveIndicateNetBufferListsContext = IndicateNetBufferListsContext;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      65,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1);
}
