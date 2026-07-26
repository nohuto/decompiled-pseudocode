/*
 * XREFs of ndisNotifyWmiBindUnbind @ 0x1C0027818
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093A48 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C01169C0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011D50C (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     ?ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C013BD64 (-ndisUnbindProtocolOpen@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     ndisSetupWmiNode @ 0x1C001B83C (ndisSetupWmiNode.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     McTemplateK0qqq @ 0x1C007D5F8 (McTemplateK0qqq.c)
 */

void __fastcall ndisNotifyWmiBindUnbind(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r14
  __int128 *v7; // r9
  int v8; // edx
  PVOID v9; // rbp
  char *v10; // rbx
  NTSTATUS v11; // eax
  struct _MCGEN_TRACE_CONTEXT *v12; // rcx
  unsigned int v13; // ebx
  char v14; // [rsp+30h] [rbp-38h]
  PVOID Argument1; // [rsp+70h] [rbp+8h] BYREF

  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      47,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      a1,
      v14,
      a3);
  }
  v7 = (__int128 *)&GUID_NDIS_NOTIFY_BIND;
  if ( !a3 )
    v7 = (__int128 *)&GUID_NDIS_NOTIFY_UNBIND;
  ndisSetupWmiNode(
    a1,
    *(const void ***)(a1 + 3856),
    *(unsigned __int16 *)(*(_QWORD *)(a1 + 3768) + 8LL) + *(unsigned __int16 *)(v4 + 72) + 4,
    v7,
    &Argument1);
  v9 = Argument1;
  if ( Argument1 )
  {
    v10 = (char *)Argument1 + *((unsigned int *)Argument1 + 14);
    memmove(v10, *(const void **)(v4 + 80), *(unsigned __int16 *)(v4 + 72));
    memmove(
      &v10[*(unsigned __int16 *)(v4 + 72) + 2],
      *(const void **)(*(_QWORD *)(a1 + 3768) + 16LL),
      *(unsigned __int16 *)(*(_QWORD *)(a1 + 3768) + 8LL));
    if ( ndisBindUnbindCallbackObject )
      ExNotifyCallback(ndisBindUnbindCallbackObject, v9, 0LL);
    v11 = IoWMIWriteEvent(v9);
    v13 = v11;
    if ( v11 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_D(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v8,
          13,
          48,
          (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
          v11);
      }
      if ( (byte_1C00E8041 & 0x10) != 0 )
        McTemplateK0qqq(v12, &IoWMIWriteEventFailed, (const GUID *)(a1 + 4008), v13, 0x10004u, 0);
      ExFreePoolWithTag(v9, 0);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      13,
      49,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      a1,
      v4,
      a3);
  }
}
