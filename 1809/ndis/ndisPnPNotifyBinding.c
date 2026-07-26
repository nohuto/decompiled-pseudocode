/*
 * XREFs of ndisPnPNotifyBinding @ 0x1C010D39C
 * Callers:
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00C33BC (ndisPnPNotifyBindingUnlocked.c)
 *     ndisPnPNotifyAllTransports @ 0x1C010A900 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     WPP_SF_qqZZ @ 0x1C005E910 (WPP_SF_qqZZ.c)
 *     ndisLegacyProtocolPauseRestartHandler @ 0x1C005EAB0 (ndisLegacyProtocolPauseRestartHandler.c)
 *     WPP_SF_LqqZZ @ 0x1C0068BA0 (WPP_SF_LqqZZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00C2B20 (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00C2FC4 (ndisShallowCopyNetPnPEvent.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01075F8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisPnPNotifyBinding(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v4; // ebx
  __int64 v5; // rsi
  unsigned __int8 v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  unsigned int v11; // eax
  struct _NDIS_MINIPORT_BLOCK *v13; // rdx
  __int64 v14; // [rsp+20h] [rbp-E0h]
  struct _KEVENT Event; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[20]; // [rsp+60h] [rbp-A0h] BYREF
  char v17; // [rsp+100h] [rbp+0h] BYREF
  char v18; // [rsp+101h] [rbp+1h]
  __int16 v19; // [rsp+102h] [rbp+2h]
  int v20; // [rsp+108h] [rbp+8h] BYREF
  _DWORD *v21; // [rsp+110h] [rbp+10h]
  struct _KEVENT *p_Event; // [rsp+120h] [rbp+20h]
  int v23; // [rsp+1A0h] [rbp+A0h]

  v2 = *(_QWORD *)(a1 + 16);
  v4 = -1073741637;
  ndisShallowCopyNetPnPEvent((__int64)&v17, a2);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_BYTE *)(v5 + 56);
  if ( v6 > 6u || v6 == 6 && *(_BYTE *)(v5 + 57) >= 0x32u )
  {
    v18 = 2;
    v19 = 172;
  }
  else
  {
    v18 = 1;
    v19 = 164;
    if ( (v23 & 4) == 0 )
      v23 |= 4u;
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
  {
    WPP_SF_qD(0x18u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a1, v20);
    v5 = *(_QWORD *)(a1 + 24);
  }
  if ( *(_BYTE *)(v5 + 56) >= 6u || *(_QWORD *)(v5 + 128) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    p_Event = &Event;
    v9 = v20;
    if ( v20 == 8 )
    {
      if ( (unsigned __int8)byte_1C00A0258 < 4u )
      {
LABEL_12:
        *(_QWORD *)(v2 + 3144) = a1;
        v11 = ndisDeliverNetPnPEventSynchronously((_QWORD *)v5, (_QWORD *)a1, (__int64)&v17);
        *(_QWORD *)(v2 + 3144) = 0LL;
        v4 = v11;
        if ( v20 == 1 && v11 && v11 != -1073741637 )
          DbgPrint("***NDIS***: Protocol %wZ failed QueryPower %lx\n", v5 + 72, v11);
        goto LABEL_13;
      }
      v10 = v5 + 72;
      WPP_SF_LqqZZ(v8, v7, v21[2], v2, a1, v5 + 72, *(_QWORD *)(v2 + 3888));
      v9 = v20;
    }
    else
    {
      v10 = v5 + 72;
    }
    if ( v9 == 9 && (unsigned __int8)byte_1C00A0258 >= 4u )
      WPP_SF_qqZZ(0x1Au, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, v2, a1, v10, *(_QWORD *)(v2 + 3888));
    goto LABEL_12;
  }
  if ( (unsigned int)(v20 - 1) <= 2 )
  {
LABEL_38:
    v4 = 0;
    goto LABEL_15;
  }
LABEL_13:
  if ( (*(_DWORD *)(a1 + 224) & 0x10000000) != 0 && (unsigned int)(v20 - 8) <= 1 )
    ndisLegacyProtocolPauseRestartHandler(a1, &v20);
  if ( v4 == -1073741637 && !v20 && (unsigned int)(*v21 - 2) <= 2 )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v2 + 5144));
    if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(a1 + 856), BindingDisabled, Reason_MiniportLowPower)
      && (unsigned __int8)byte_1C00A026B >= 4u )
    {
      ndisGetBindLinkNameForTracing(*(struct NDIS_BIND_PROTOCOL_LINK **)(a1 + 856), (struct NDIS_PNPTRACE_LOCALS *)v16);
      WPP_SF_Zq(0x1Bu, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (const wchar_t *)v16[1], v16[0]);
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v2 + 5144), v13);
    goto LABEL_38;
  }
LABEL_15:
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
  {
    LODWORD(v14) = v4;
    WPP_SF_qdD(0x1Cu, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a1, v20, v14);
  }
  return v4;
}
