/*
 * XREFs of ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001C33C
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ?ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C001C4EC (-ndisFilterXStateClearFlag@@YAEPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     ndisMiniportXStateClearFlag @ 0x1C001C54C (ndisMiniportXStateClearFlag.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 */

char __fastcall ndisRestoreFilterHandlersForMediaDisconnect(__int64 a1, __int64 a2, struct _NDIS_FILTER_BLOCK *a3)
{
  __int64 v4; // rsi
  int v6; // edx
  void (__fastcall *v7)(__int64, struct _NET_BUFFER_LIST *, int, unsigned int, unsigned int); // rax
  int v8; // ecx
  _QWORD *v9; // rcx
  char v11; // [rsp+30h] [rbp-18h]

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      78,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1,
      v11,
      (char)a3);
  }
  if ( a3 )
  {
    if ( ndisFilterXStateClearFlag(a3, a2) )
    {
      a3->FilterSendNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisFilterSendNetBufferLists;
      a3->FilterCancelSendNetBufferListsHandler = (void (__fastcall *)(void *, void *))ndisFilterCancelSendNetBufferLists;
      goto LABEL_6;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        13,
        79,
        (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
        (char)a3,
        a3->XState);
    }
    LOBYTE(v7) = Microsoft_Windows_NDISEnableBits;
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      LOBYTE(v7) = McTemplateK0jqxq(
                     a3->IfBlock,
                     (unsigned int)&KeptFilterFakeHandlers,
                     (int)a3 + 672,
                     (int)a3 + 672,
                     a3->IfIndex,
                     a3->IfBlock->NetLuid.Value,
                     a3->XState);
  }
  else
  {
    if ( (unsigned __int8)ndisMiniportXStateClearFlag(a1) )
    {
      v9 = *(_QWORD **)(a1 + 56);
      *(_DWORD *)(a1 + 2668) = *(_DWORD *)(a1 + 2672);
      *(_QWORD *)(a1 + 656) = *(_QWORD *)(a1 + 680);
      *(_QWORD *)(a1 + 184) = ndisOpenCancelSendNetBufferLists;
      while ( v9 )
      {
        v9[12] = v9[72];
        v9[21] = v9[70];
        v9[37] = v9[71];
        v9[22] = ndisMReset;
        v9 = (_QWORD *)v9[49];
      }
LABEL_6:
      if ( v4 )
      {
        v7 = ndisFilterIndicateReceiveNetBufferLists;
        *(_QWORD *)(v4 + 632) = ndisFilterIndicateReceiveNetBufferLists;
        goto LABEL_8;
      }
      goto LABEL_16;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        13,
        80,
        (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
        a1,
        *(_BYTE *)(a1 + 930));
    }
    LOBYTE(v7) = Microsoft_Windows_NDISEnableBits;
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      LOBYTE(v7) = McTemplateK0jqxq(
                     v8,
                     (unsigned int)&KeptMiniportFakeHandlers,
                     (int)a1 + 4008,
                     (int)a1 + 4008,
                     *(_DWORD *)(a1 + 4056),
                     *(_QWORD *)(a1 + 4024),
                     *(_BYTE *)(a1 + 930));
    if ( !v4 )
    {
LABEL_16:
      *(_QWORD *)(a1 + 432) = *(_QWORD *)(a1 + 1896);
      LOBYTE(v7) = *(_BYTE *)(a1 + 2676);
      *(_BYTE *)(a1 + 2664) = (_BYTE)v7;
    }
  }
LABEL_8:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    LOBYTE(v7) = WPP_RECORDER_SF_qqq(
                   *((_QWORD *)WPP_GLOBAL_Control + 8),
                   v6,
                   13,
                   81,
                   (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
                   a1,
                   v4,
                   (char)a3);
  }
  return (char)v7;
}
