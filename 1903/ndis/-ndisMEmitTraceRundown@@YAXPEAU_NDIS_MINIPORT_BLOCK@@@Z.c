/*
 * XREFs of ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007C3E8
 * Callers:
 *     ndisEnableWppTracingCallback @ 0x1C007E41C (ndisEnableWppTracingCallback.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_LL @ 0x1C001D55C (WPP_RECORDER_SF_LL.c)
 *     WPP_RECORDER_SF_qqZ @ 0x1C003CFD8 (WPP_RECORDER_SF_qqZ.c)
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007BAE4 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C007DA30 (WPP_RECORDER_SF_DDDDD.c)
 */

void __fastcall ndisMEmitTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // r9d
  int v3; // edx
  KIRQL v4; // bp
  _NDIS_FILTER_BLOCK *LowestFilter; // rdi
  _NDIS_OPEN_BLOCK *OpenQueue; // rdi
  int v7; // [rsp+20h] [rbp-48h]
  char v8[8]; // [rsp+30h] [rbp-38h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0x55u,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      (char)a1,
      (char)a1->DriverHandle,
      &a1->pAdapterInstanceName->Length);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a1->DriverHandle->MajorNdisVersion,
        (a1->NetLuid.Value >> 24) & 0xFFFFFF,
        v2,
        v7,
        a1->DriverHandle->MajorNdisVersion,
        a1->DriverHandle->MinorNdisVersion,
        a1->IfIndex,
        *((_WORD *)&a1->NetLuid.Info + 3),
        BYTE3(a1->NetLuid.Value));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v8 = a1->PnPDeviceState;
        WPP_RECORDER_SF_LL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x57u,
          (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
          a1->State,
          *(_QWORD *)v8);
      }
    }
  }
  if ( a1->AoAc )
    ndisAoAcTraceRundown(a1);
  v4 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  LowestFilter = a1->LowestFilter;
  a1->MiniportThread = KeGetCurrentThread();
  if ( LowestFilter )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 1;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        2,
        89,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
      LowestFilter = a1->LowestFilter;
    }
    while ( LowestFilter )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x5Au,
          (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
          (char)LowestFilter,
          (char)LowestFilter->FilterDriver,
          &LowestFilter->FilterFriendlyName->Length);
      LowestFilter = LowestFilter->HigherFilter;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 1;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      2,
      88,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
  }
  OpenQueue = a1->OpenQueue;
  if ( OpenQueue )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = 1;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v3,
        2,
        92,
        (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
      OpenQueue = a1->OpenQueue;
    }
    while ( OpenQueue )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x5Du,
          (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
          (char)OpenQueue,
          (char)OpenQueue->ProtocolHandle,
          &OpenQueue->ProtocolHandle->Name.Length);
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 1;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      2,
      91,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids);
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v4);
}
