/*
 * XREFs of ndisPnPNotifyBinding @ 0x1C012B048
 * Callers:
 *     ndisPnPNotifyBindingUnlocked @ 0x1C0105238 (ndisPnPNotifyBindingUnlocked.c)
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1C0027CEC (WPP_RECORDER_SF_qqZZ.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisLegacyProtocolPauseRestartHandler @ 0x1C00938D4 (ndisLegacyProtocolPauseRestartHandler.c)
 *     WPP_RECORDER_SF_LqqZZ @ 0x1C00A45B0 (WPP_RECORDER_SF_LqqZZ.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00FC974 (ndisDeliverNetPnPEventSynchronously.c)
 *     ndisShallowCopyNetPnPEvent @ 0x1C00FCDB8 (ndisShallowCopyNetPnPEvent.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01279C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

__int64 __fastcall ndisPnPNotifyBinding(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned int v5; // edi
  int v6; // edx
  __int64 v7; // rbx
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  unsigned __int16 *v13; // rdi
  unsigned int v14; // eax
  struct _NDIS_MINIPORT_BLOCK *v16; // rdx
  int v17; // [rsp+20h] [rbp-E0h]
  char v18[8]; // [rsp+38h] [rbp-C8h]
  struct _KEVENT Event; // [rsp+50h] [rbp-B0h] BYREF
  char v20[160]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v21[22]; // [rsp+110h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v5 = -1073741637;
  memset(v21, 0, sizeof(v21));
  ndisShallowCopyNetPnPEvent((__int64)v21, a2);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_BYTE *)(v7 + 56);
  if ( v8 > 6u || v8 == 6 && *(_BYTE *)(v7 + 57) >= 0x32u )
  {
    BYTE1(v21[0]) = 2;
    WORD1(v21[0]) = 172;
  }
  else
  {
    BYTE1(v21[0]) = 1;
    WORD1(v21[0]) = 164;
    if ( (v21[20] & 4) == 0 )
      LODWORD(v21[20]) |= 4u;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      13,
      24,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      a1,
      v21[1]);
    v7 = *(_QWORD *)(a1 + 24);
  }
  if ( *(_BYTE *)(v7 + 56) >= 6u || *(_QWORD *)(v7 + 128) )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v21[4] = &Event;
    v12 = v21[1];
    if ( LODWORD(v21[1]) == 8 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_12:
        *(_QWORD *)(v2 + 3128) = a1;
        v14 = ndisDeliverNetPnPEventSynchronously(v7, a1, (__int64)v21);
        *(_QWORD *)(v2 + 3128) = 0LL;
        v5 = v14;
        if ( LODWORD(v21[1]) == 1 && v14 && v14 != -1073741637 )
          DbgPrint("***NDIS***: Protocol %wZ failed QueryPower %lx\n", v7 + 72, v14);
        goto LABEL_13;
      }
      v13 = (unsigned __int16 *)(v7 + 72);
      WPP_RECORDER_SF_LqqZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        v10,
        v11,
        v17,
        *(_DWORD *)(v21[2] + 8LL),
        v2,
        a1,
        (const wchar_t *)(v7 + 72));
      v12 = v21[1];
    }
    else
    {
      v13 = (unsigned __int16 *)(v7 + 72);
    }
    if ( v12 == 9 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        v10,
        0x1Au,
        (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
        v2,
        a1,
        v13,
        *(unsigned __int16 **)(v2 + 3856));
    goto LABEL_12;
  }
  if ( (unsigned int)(LODWORD(v21[1]) - 1) <= 2 )
  {
LABEL_39:
    v5 = 0;
    goto LABEL_15;
  }
LABEL_13:
  if ( (*(_DWORD *)(a1 + 224) & 0x10000000) != 0 && (unsigned int)(LODWORD(v21[1]) - 8) <= 1 )
    ndisLegacyProtocolPauseRestartHandler(a1, &v21[1]);
  if ( v5 == -1073741637 && !LODWORD(v21[1]) && (unsigned int)(*(_DWORD *)v21[2] - 2) <= 2 )
  {
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v2 + 5104));
    if ( Ndis::BindState::SetBinding(*(Ndis::BindState **)(a1 + 856), BindingDisabled, Reason_MiniportLowPower) )
    {
      memset(v20, 0, sizeof(v20));
      if ( (unsigned __int8)byte_1C00E673B >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_PROTOCOL_LINK **)(a1 + 856),
          (struct NDIS_PNPTRACE_LOCALS *)v20);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)v16,
            0x1Cu,
            0x1Bu,
            (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
            *(unsigned __int16 **)&v20[8],
            *(_QWORD *)v20);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v2 + 5104), v16);
    goto LABEL_39;
  }
LABEL_15:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v18 = v5;
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      0xDu,
      0x1Cu,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      a1,
      v21[1],
      *(_QWORD *)v18);
  }
  return v5;
}
