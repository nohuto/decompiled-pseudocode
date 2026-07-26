/*
 * XREFs of ndisMResetMiniportInternal @ 0x1C009BCCC
 * Callers:
 *     ndisQueuedCheckForHang @ 0x1C0009E80 (ndisQueuedCheckForHang.c)
 *     ?ndisQueuedResetMiniport@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0097B40 (-ndisQueuedResetMiniport@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisMSwapOpenHandlers @ 0x1C001BD5C (ndisMSwapOpenHandlers.c)
 *     NdisMSleep @ 0x1C001BEC0 (NdisMSleep.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 *     ?ndisMInvokeReset@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C009747C (-ndisMInvokeReset@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     McTemplateK0jqxzqq @ 0x1C0097CF8 (McTemplateK0jqxzqq.c)
 *     NdisMResetComplete @ 0x1C0098660 (NdisMResetComplete.c)
 *     ?ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00B6524 (-ndisWdfSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 *     ?ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z @ 0x1C00B6B4C (-ndisWdmSetBusySync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_BUSY_REASON@@K@Z.c)
 */

void __fastcall ndisMResetMiniportInternal(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  int v4; // edx
  KIRQL v5; // r15
  __int64 Flags; // rdx
  bool v7; // zf
  unsigned __int64 *p_Lock; // rcx
  int v9; // edx
  __int64 v10; // rcx
  int v11; // edx
  NDIS_STATUS v12; // edi
  KIRQL v13; // si
  BOOLEAN AddressingReset[16]; // [rsp+58h] [rbp-59h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+68h] [rbp-49h] BYREF

  memset(&StatusIndication, 0, sizeof(StatusIndication));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      17,
      246,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      (char)a1,
      a2);
  }
  v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  Flags = a1->Flags;
  a1->MiniportThread = KeGetCurrentThread();
  if ( (Flags & 0x81200000) != 0 || (a1->PnPFlags & 0x80000) != 0 || (unsigned int)(a1->DriverPowerState - 2) <= 2 )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v5);
  }
  else
  {
    if ( a2 == 1 )
    {
      ++a1->InternalResetCount;
    }
    else if ( (unsigned int)(a2 - 2) <= 1 )
    {
      ++a1->MiniportResetCount;
    }
    if ( (byte_1C00E8045 & 0x40) != 0 )
    {
      McTemplateK0jqxzqq(
        a1->InternalResetCount + (unsigned int)a1->MiniportResetCount,
        Flags,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        a1->pAdapterInstanceName->Buffer,
        a2,
        a1->InternalResetCount + a1->MiniportResetCount);
      LODWORD(Flags) = a1->Flags;
    }
    a1->Flags = Flags | 0x200000;
    a1->ResetOpen = 0LL;
    ndisMSwapOpenHandlers(a1, 1);
    a1->Flags |= 0x80000u;
    while ( 1 )
    {
      v7 = a1->RequestCount == 0;
      a1->MiniportThread = 0LL;
      p_Lock = &a1->Lock;
      if ( v7 )
        break;
      KeReleaseSpinLock(p_Lock, v5);
      NdisMSleep(0x32u);
      v5 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->MiniportThread = KeGetCurrentThread();
    }
    KeReleaseSpinLock(p_Lock, v5);
    memset(&StatusIndication, 0, sizeof(StatusIndication));
    StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
    StatusIndication.SourceHandle = a1;
    StatusIndication.StatusCode = 1073807364;
    StatusIndication.StatusBuffer = 0LL;
    StatusIndication.StatusBufferSize = 0;
    NdisMIndicateStatusEx(a1, &StatusIndication);
    if ( (byte_1C00E8041 & 4) != 0 )
      McTemplateK0jqxq(
        v10,
        &CallMiniportReset,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        3);
    if ( a1->SelectiveSuspend )
    {
      if ( (a1->Flags & 0x80u) == 0 )
        ndisWdmSetBusySync(a1, NdisBusyReset, 0);
      else
        ndisWdfSetBusySync(a1, NdisBusyReset, 0);
    }
    if ( a1->MajorNdisVersion < 6u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          17,
          247,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids);
      }
      v13 = KfRaiseIrql(2u);
      v12 = ((__int64 (__fastcall *)(BOOLEAN *, void *))a1->DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler)(
              AddressingReset,
              a1->MiniportAdapterContext);
      if ( v13 != 2 )
        KeLowerIrql(v13);
    }
    else
    {
      v12 = ndisMInvokeReset(a1, AddressingReset);
    }
    if ( v12 != 259 )
      NdisMResetComplete(a1, v12, AddressingReset[0]);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v11) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v11,
        17,
        248,
        (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
        (char)a1,
        a2);
    }
  }
}
