/*
 * XREFs of ndisRestoreFilterHandlersForMediaDisconnect @ 0x1C001651C
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00176B8 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusInternal @ 0x1C001817C (ndisFIndicateStatusInternal.c)
 * Callees:
 *     ndisUpdateFilterFakeStatus @ 0x1C00252A8 (ndisUpdateFilterFakeStatus.c)
 *     ndisMiniportXStateClearFlag @ 0x1C0025350 (ndisMiniportXStateClearFlag.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 */

char __fastcall ndisRestoreFilterHandlersForMediaDisconnect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  bool v6; // zf
  void (__fastcall *v7)(_QWORD *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int, int); // rax
  int v8; // ecx
  _QWORD *v9; // rcx

  v4 = a2;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qqq(75LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, a2, a3);
  if ( a3 )
  {
    v6 = (*(_BYTE *)(a3 + 384) & 0xFE) == 0;
    *(_BYTE *)(a3 + 384) &= ~1u;
    if ( v6 )
    {
      if ( (unsigned __int8)byte_1C00A025C >= 4u )
        WPP_SF_q(74LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a3);
      *(_QWORD *)(a3 + 632) = ndisFilterSendNetBufferLists;
      *(_QWORD *)(a3 + 648) = ndisFilterCancelSendNetBufferLists;
LABEL_8:
      if ( v4 )
      {
        v7 = ndisFilterIndicateReceiveNetBufferLists;
        *(_QWORD *)(v4 + 640) = ndisFilterIndicateReceiveNetBufferLists;
        goto LABEL_10;
      }
      goto LABEL_17;
    }
    ndisUpdateFilterFakeStatus(a3);
    if ( (unsigned __int8)byte_1C00A025C >= 4u )
      WPP_SF_qD(76LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a3, *(unsigned __int8 *)(a3 + 384));
    LOBYTE(v7) = Microsoft_Windows_NDISEnableBits;
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      LOBYTE(v7) = McTemplateK0jqxq(
                     *(_QWORD *)(a3 + 704),
                     (unsigned int)&KeptFilterFakeHandlers,
                     (int)a3 + 680,
                     (int)a3 + 680,
                     *(_DWORD *)(a3 + 696),
                     *(_QWORD *)(*(_QWORD *)(a3 + 704) + 1312LL),
                     *(_BYTE *)(a3 + 384));
  }
  else
  {
    LOBYTE(a2) = 2;
    if ( (unsigned __int8)ndisMiniportXStateClearFlag(a1, a2) )
    {
      v9 = *(_QWORD **)(a1 + 56);
      *(_DWORD *)(a1 + 2684) = *(_DWORD *)(a1 + 2688);
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
      goto LABEL_8;
    }
    if ( (unsigned __int8)byte_1C00A025C >= 4u )
      WPP_SF_qD(77LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, *(unsigned __int8 *)(a1 + 930));
    LOBYTE(v7) = Microsoft_Windows_NDISEnableBits;
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      LOBYTE(v7) = McTemplateK0jqxq(
                     v8,
                     (unsigned int)&KeptMiniportFakeHandlers,
                     (int)a1 + 4040,
                     (int)a1 + 4040,
                     *(_DWORD *)(a1 + 4088),
                     *(_QWORD *)(a1 + 4056),
                     *(_BYTE *)(a1 + 930));
    if ( !v4 )
    {
LABEL_17:
      *(_QWORD *)(a1 + 432) = *(_QWORD *)(a1 + 1904);
      LOBYTE(v7) = *(_BYTE *)(a1 + 2692);
      *(_BYTE *)(a1 + 2680) = (_BYTE)v7;
    }
  }
LABEL_10:
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    LOBYTE(v7) = WPP_SF_qqq(78LL, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, a1, v4, a3);
  return (char)v7;
}
