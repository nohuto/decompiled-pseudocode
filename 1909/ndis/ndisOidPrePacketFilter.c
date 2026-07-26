/*
 * XREFs of ndisOidPrePacketFilter @ 0x1C0026530
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C001D460 (WPP_RECORDER_SF_qqqd.c)
 *     ndisSetMiniportPacketFilter @ 0x1C0026684 (ndisSetMiniportPacketFilter.c)
 *     ndisSetOpenPacketFilter @ 0x1C0026A58 (ndisSetOpenPacketFilter.c)
 *     ?ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0068998 (-ndisSetRestorePacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisQueryMiniportPacketFilter @ 0x1C006F57C (ndisQueryMiniportPacketFilter.c)
 *     ndisQueryOpenPacketFilter @ 0x1C006F810 (ndisQueryOpenPacketFilter.c)
 */

unsigned __int8 __fastcall ndisOidPrePacketFilter(__int64 a1, char a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rbp
  __int64 v4; // rsi
  unsigned __int8 v5; // di
  __int64 v6; // r14
  int v7; // eax
  bool v9; // zf
  int OpenPacketFilter; // eax
  __int64 v11; // rax
  struct _NDIS_MINIPORT_BLOCK *v12; // rcx

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v4 = *(_QWORD *)(a1 + 32);
  v5 = 0;
  v6 = *(_QWORD *)(a1 + 24);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      11,
      85,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v2,
      v6,
      v4);
  v7 = *(_DWORD *)(v4 + 4);
  switch ( v7 )
  {
    case 2:
      v9 = *(_QWORD *)a1 == 0LL;
      goto LABEL_17;
    case 0:
      if ( v6 )
      {
        OpenPacketFilter = ndisQueryOpenPacketFilter(v6, v4);
        goto LABEL_19;
      }
      v9 = v2 == 0LL;
LABEL_17:
      if ( v9 )
        break;
      OpenPacketFilter = ndisQueryMiniportPacketFilter(v2, v4);
      if ( OpenPacketFilter == 259 )
        break;
LABEL_19:
      *(_DWORD *)(a1 + 40) = OpenPacketFilter;
      v5 = 1;
      break;
    case 1:
      if ( !v6 || (v5 = ndisSetOpenPacketFilter(v6, v4), v5 != 1) )
      {
        if ( *(_UNKNOWN **)(v4 + 104) != &ndisIntReqRestore )
          goto LABEL_8;
        v11 = *(_QWORD *)(a1 + 16);
        v12 = v2;
        if ( v11 )
          v12 = *(struct _NDIS_MINIPORT_BLOCK **)(v11 + 32);
        v5 = ndisSetRestorePacketFilter(v12, (struct _NDIS_OID_REQUEST *)v4, (int *)(a1 + 40));
        if ( v5 != 1 )
        {
LABEL_8:
          if ( v2 )
            v5 = ndisSetMiniportPacketFilter((char)v2);
        }
      }
      break;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0xBu,
      0x56u,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      (char)v2,
      v6,
      v4,
      v5);
  return v5;
}
