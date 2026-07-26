/*
 * XREFs of ?ndisFNetPnPEventInternal@@YAXPEAX@Z @ 0x1C0013EA0
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C0090B40 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C0014018 (ndisGetHigherFilterWithPnpRef.c)
 *     ?ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00140BC (-ndisFForwardNetPnPEventToFilter@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ndisInitializeNetPnPEvent @ 0x1C001BF38 (ndisInitializeNetPnPEvent.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisBindRequest @ 0x1C00A49B4 (ndisBindRequest.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00FCDB8 (ndisShallowCopyNetPnPEvent.c)
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 */

void __fastcall ndisFNetPnPEventInternal(_QWORD *Parameter, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // rdi
  ULONG_PTR v5; // rsi
  int v6; // ebx
  __int64 v7; // r15
  int v8; // eax
  struct _NDIS_FILTER_BLOCK *HigherFilterWithPnpRef; // rax
  struct _NDIS_FILTER_BLOCK *v10; // rbp
  __int64 v11; // rax
  unsigned __int8 v12; // cl
  _BYTE v13[176]; // [rsp+40h] [rbp-E8h] BYREF

  v3 = Parameter[1];
  v5 = Parameter[3];
  v6 = 0;
  v7 = *(_QWORD *)(v3 + 32);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      60,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      v7,
      v3,
      *(_DWORD *)(v5 + 8));
  v8 = *(_DWORD *)(v5 + 8);
  if ( v8 != 15 )
  {
    if ( v8 <= 17 || v8 > 21 )
    {
      LOBYTE(a3) = 10;
      HigherFilterWithPnpRef = (struct _NDIS_FILTER_BLOCK *)ndisGetHigherFilterWithPnpRef(v7, v3, a3);
      v10 = HigherFilterWithPnpRef;
      if ( HigherFilterWithPnpRef )
      {
        v6 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, (PNET_PNP_EVENT_NOTIFICATION)v5);
        ndisDereferenceRef(&v10->PnPRef.SpinLock);
      }
      else
      {
        memset(v13, 0, sizeof(v13));
        ndisInitializeNetPnPEvent(v13, 0LL);
        ndisShallowCopyNetPnPEvent(v13, v5);
        v6 = ndisPnPNotifyAllTransports(v7);
      }
    }
    else
    {
      v11 = *(_QWORD *)(v3 + 16);
      v12 = *(_BYTE *)(v11 + 100);
      if ( v12 > 6u || v12 == 6 && *(_BYTE *)(v11 + 101) >= 0x32u )
        ndisBindRequest(v3, (Ndis::BindEngine *)(*(_QWORD *)(v3 + 32) + 5104LL), *(Ndis::BindState **)(v3 + 760), v5);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      61,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      v7,
      v3);
  *(_DWORD *)Parameter = v6;
}
