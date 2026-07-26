/*
 * XREFs of ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C012D370
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C01056FC (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1C0027CDC (WPP_RECORDER_SF_qqZZ.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0juqjzzz @ 0x1C00BE9F0 (McTemplateK0juqjzzz.c)
 *     ndisFInvokeRestart @ 0x1C010585C (ndisFInvokeRestart.c)
 */

__int64 __fastcall ndisRestartFilterInner(struct _NDIS_FILTER_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  int v5; // edx
  KIRQL v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  _NDIS_FILTER_BLOCK *LowerFilter; // rcx
  unsigned int v10; // edi
  KIRQL v11; // al
  int v12; // edx
  _NDIS_MINIPORT_BLOCK *v14; // rcx
  KIRQL v15; // al
  _BYTE v16[40]; // [rsp+58h] [rbp-19h] BYREF
  int v17; // [rsp+80h] [rbp+Fh] BYREF
  _NDIS_MEDIUM MediaType; // [rsp+84h] [rbp+13h]
  _NDIS_PHYSICAL_MEDIUM PhysicalMediaType; // [rsp+88h] [rbp+17h]
  int v20; // [rsp+8Ch] [rbp+1Bh]
  struct NDIS_RESTART_INFORMATION *v21; // [rsp+90h] [rbp+1Fh]
  unsigned int IfIndex; // [rsp+98h] [rbp+27h]
  int v23; // [rsp+9Ch] [rbp+2Bh]
  _NET_LUID_LH v24; // [rsp+A0h] [rbp+2Fh]
  __int64 v25; // [rsp+A8h] [rbp+37h]

  Miniport = a1->Miniport;
  memset(v16, 0, sizeof(v16));
  v20 = 0;
  v23 = 0;
  v25 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      1,
      15,
      (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
      (char)a1);
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  a1->LockThread = 0LL;
  LOBYTE(a1->Flags) = 0;
  a1->Flags |= 0x20u;
  KeReleaseSpinLock(&a1->Lock, v6);
  a1->State = NdisFilterRestarting;
  if ( (byte_1C00E8083 & 1) != 0 )
    McTemplateK0juqjzzz(
      (__int64)&a1->Miniport->InterfaceGuid,
      (__int64)a1->FilterInstanceName.__ptr_.__value_,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      3,
      3,
      (__int64)&a1->Miniport->InterfaceGuid,
      a1->Miniport->pAdapterInstanceName->Buffer,
      a1->FilterInstanceName.__ptr_.__value_->Buffer,
      a1->FilterFriendlyName->Buffer);
  KeInitializeEvent((PRKEVENT)&v16[16], NotificationEvent, 0);
  LowerFilter = a1->LowerFilter;
  a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)v16;
  v17 = 3146139;
  v21 = a2;
  if ( LowerFilter )
  {
    MediaType = LowerFilter->MediaType;
    PhysicalMediaType = LowerFilter->PhysicalMediaType;
    IfIndex = LowerFilter->IfIndex;
    v24.Value = (ULONG64)LowerFilter->IfBlock->NetLuid;
  }
  else
  {
    v14 = a1->Miniport;
    MediaType = v14->MiniportMediaType;
    PhysicalMediaType = v14->MiniportPhysicalMediumType;
    IfIndex = v14->IfIndex;
    v24.Value = (ULONG64)v14->NetLuid;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      v8,
      0x10u,
      (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
      (char)Miniport,
      (char)a1,
      &a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length,
      &Miniport->pAdapterInstanceName->Length);
  v10 = ndisFInvokeRestart((__int64)a1, (__int64)&v17);
  if ( v10 == 259 )
  {
    KeWaitForSingleObject(&v16[16], Executive, 0, 0, 0LL);
    v10 = *(_DWORD *)&v16[8];
  }
  a1->AsyncOpContext = 0LL;
  if ( v10 )
  {
    a1->State = NdisFilterPaused;
    if ( (byte_1C00E8083 & 1) != 0 )
      McTemplateK0juqjzzz(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        2,
        4,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
    v15 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = 0LL;
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 4u;
    KeReleaseSpinLock(&a1->Lock, v15);
  }
  else
  {
    a1->IfBlock->AccessType = a2->General.AccessType;
    a1->IfBlock->ConnectionType = a2->General.ConnectionType;
    a1->IfBlock->ifMtu = a2->General.MtuSize;
    v11 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
    a1->LockThread = 0LL;
    LOBYTE(a1->Flags) = 0;
    a1->Flags |= 0x10u;
    KeReleaseSpinLock(&a1->Lock, v11);
    a1->State = NdisFilterRunning;
    if ( (byte_1C00E8083 & 1) != 0 )
      McTemplateK0juqjzzz(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        4,
        5,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      1,
      17,
      (struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
      (char)a1,
      v10);
  }
  return v10;
}
