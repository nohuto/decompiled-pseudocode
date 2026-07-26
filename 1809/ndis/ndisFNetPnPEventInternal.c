/*
 * XREFs of ndisFNetPnPEventInternal @ 0x1C00B8630
 * Callers:
 *     ndisStackExpansionFallbackWorker @ 0x1C005C7D0 (ndisStackExpansionFallbackWorker.c)
 * Callees:
 *     ndisGetHigherFilterWithPnpRef @ 0x1C00186F0 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisDereferenceRef @ 0x1C0018814 (ndisDereferenceRef.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     ?ndisFBindRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0059AE8 (-ndisFBindRequest@@YAHPEAU_NDIS_FILTER_BLOCK@@PEBU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ndisFForwardNetPnPEventToFilter @ 0x1C00B872C (ndisFForwardNetPnPEventToFilter.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00C2FC4 (ndisShallowCopyNetPnPEvent.c)
 *     ndisInitializeNetPnPEvent @ 0x1C00C342C (ndisInitializeNetPnPEvent.c)
 *     ndisPnPNotifyAllTransports @ 0x1C010A900 (ndisPnPNotifyAllTransports.c)
 */

void __fastcall ndisFNetPnPEventInternal(_QWORD *Parameter)
{
  struct _NDIS_FILTER_BLOCK *v1; // rdi
  __int64 v3; // rsi
  int v4; // ebx
  struct _NDIS_MINIPORT_BLOCK *Miniport; // rbp
  int v6; // eax
  __int64 HigherFilterWithPnpRef; // rax
  __int64 v8; // r15
  int v9; // eax
  _BYTE v10[176]; // [rsp+30h] [rbp-D8h] BYREF

  v1 = (struct _NDIS_FILTER_BLOCK *)Parameter[1];
  v3 = Parameter[3];
  v4 = 0;
  Miniport = v1->Miniport;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qqd(0x39u, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, Miniport, v1, *(_DWORD *)(v3 + 8));
  v6 = *(_DWORD *)(v3 + 8);
  if ( v6 != 15 )
  {
    if ( v6 <= 17 || v6 > 21 )
    {
      HigherFilterWithPnpRef = ndisGetHigherFilterWithPnpRef((__int64)Miniport, (__int64)v1);
      v8 = HigherFilterWithPnpRef;
      if ( HigherFilterWithPnpRef )
      {
        v4 = ndisFForwardNetPnPEventToFilter(HigherFilterWithPnpRef, v3);
        ndisDereferenceRef((PKSPIN_LOCK)(v8 + 320), 0xAu);
        goto LABEL_7;
      }
      ndisInitializeNetPnPEvent(v10, 0LL);
      ndisShallowCopyNetPnPEvent(v10, v3);
      v9 = ndisPnPNotifyAllTransports(Miniport);
    }
    else
    {
      v9 = ndisFBindRequest(v1, (const struct _NET_PNP_EVENT_NOTIFICATION *)v3);
    }
    v4 = v9;
  }
LABEL_7:
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qq(0x3Au, &WPP_121f726d2db93de0e5803b82441184b1_Traceguids, Miniport, v1);
  *(_DWORD *)Parameter = v4;
}
