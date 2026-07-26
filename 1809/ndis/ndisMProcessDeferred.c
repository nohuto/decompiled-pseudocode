/*
 * XREFs of ndisMProcessDeferred @ 0x1C00632D4
 * Callers:
 *     ndisMProcessSGListS @ 0x1C004D0C0 (ndisMProcessSGListS.c)
 *     ndisMSendPacketsToMiniport @ 0x1C00588B0 (ndisMSendPacketsToMiniport.c)
 *     NdisIMQueueMiniportCallback @ 0x1C00607D0 (NdisIMQueueMiniportCallback.c)
 *     NdisIMRevertBack @ 0x1C00609A0 (NdisIMRevertBack.c)
 *     ndisMReset @ 0x1C0063990 (ndisMReset.c)
 *     ndisMDeferredDpc @ 0x1C00661F0 (ndisMDeferredDpc.c)
 *     ndisMDpc @ 0x1C00662FC (ndisMDpc.c)
 *     ndisMTimerDpc @ 0x1C00667D0 (ndisMTimerDpc.c)
 *     ndisMWakeUpDpc @ 0x1C0066A40 (ndisMWakeUpDpc.c)
 * Callees:
 *     ndisMDoOidRequest @ 0x1C000E0B0 (ndisMDoOidRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     ndisMDeQueueWorkItem @ 0x1C0062524 (ndisMDeQueueWorkItem.c)
 *     ndisMDeferredReturnPackets @ 0x1C00625CC (ndisMDeferredReturnPackets.c)
 *     ndisMProcessResetRequested @ 0x1C00635E8 (ndisMProcessResetRequested.c)
 *     ndisMResetCompleteStage1 @ 0x1C0063D20 (ndisMResetCompleteStage1.c)
 *     ndisMResetCompleteStage2 @ 0x1C0063DD4 (ndisMResetCompleteStage2.c)
 */

void __fastcall ndisMProcessDeferred(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // rdi
  char v2; // bl
  void (__fastcall *v3)(void *, __int64); // rsi
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // esi
  int v8; // eax
  unsigned __int8 v9; // [rsp+70h] [rbp+8h]
  void (__fastcall *v10)(void *, __int64); // [rsp+78h] [rbp+10h] BYREF
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF

  v1 = (struct _NDIS_MINIPORT_BLOCK *)a1;
  v9 = 0;
  if ( (unsigned __int8)byte_1C00A025B >= 4u )
    WPP_SF_q(0x39u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1);
  while ( 1 )
  {
    v2 = 0;
    if ( v1->WorkQueue[1].Next && (v1->Flags & 0x80300000) == 0 )
    {
      ndisMDeQueueWorkItem((__int64)v1, 1, 0LL, 0LL);
      v1->DeferredSendHandler(v1);
      v2 = 1;
    }
    if ( v1->WorkQueue[4].Next )
      break;
    if ( v1->WorkQueue[2].Next )
    {
      ndisMDeQueueWorkItem((__int64)v1, 2, 0LL, 0LL);
      ndisMDeferredReturnPackets((__int64)v1);
    }
    if ( (v1->Flags & 0x80000000) != 0 )
    {
      if ( (unsigned __int8)byte_1C00A025B >= 4u )
        WPP_SF_q(0x3Au, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)v1);
      if ( (byte_1C00A2083 & 1) != 0 )
        McTemplateK0jqxq(
          a1,
          &NotifyMiniportAction,
          &v1->InterfaceGuid,
          (__int64)&v1->InterfaceGuid,
          v1->IfIndex,
          v1->NetLuid.Value,
          0);
      goto LABEL_41;
    }
    if ( v1->WorkQueue[6].Next )
    {
      v10 = 0LL;
      ndisMDeQueueWorkItem((__int64)v1, 6, &v11, &v10);
      v3 = v10;
      if ( v10 )
      {
        v1->MiniportThread = 0LL;
        v1->LockDbg = 0;
        KeReleaseSpinLockFromDpcLevel(&v1->Lock);
        v3(v1->MiniportAdapterContext, v11);
        KeAcquireSpinLockAtDpcLevel(&v1->Lock);
        v1->MiniportThread = KeGetCurrentThread();
        v1->LockDbg = 724596;
      }
      v2 = 1;
    }
    if ( v1->WorkQueue[3].Next )
    {
      if ( (unsigned __int8)byte_1C00A025B >= 4u )
        WPP_SF_q(0x3Bu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)v1);
      if ( (byte_1C00A2083 & 1) != 0 )
        McTemplateK0jqxq(
          a1,
          &NotifyMiniportAction,
          &v1->InterfaceGuid,
          (__int64)&v1->InterfaceGuid,
          v1->IfIndex,
          v1->NetLuid.Value,
          1);
      v4 = ndisMProcessResetRequested(v1);
      v7 = v4;
      if ( v4 == 259 )
      {
        if ( (unsigned __int8)byte_1C00A025B >= 4u )
          WPP_SF_q(0x3Cu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)v1);
        if ( (byte_1C00A2083 & 1) != 0 )
          McTemplateK0jqxq(
            v5,
            &NotifyMiniportAction,
            &v1->InterfaceGuid,
            (__int64)&v1->InterfaceGuid,
            v1->IfIndex,
            v1->NetLuid.Value,
            2);
        goto LABEL_41;
      }
      LOBYTE(v6) = v9;
      v8 = ndisMResetCompleteStage1(v1, v4, v6);
      a1 = v9;
      if ( v8 )
        a1 = 0LL;
      v9 = a1;
      if ( !(_BYTE)a1 || v7 )
      {
        ndisMResetCompleteStage2(v1);
        goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      if ( v1->WorkQueue[0].Next )
      {
        ndisMDeQueueWorkItem((__int64)v1, 0, 0LL, 0LL);
        ndisMDoOidRequest(v1);
        v2 = 1;
      }
      if ( v1->WorkQueue[1].Next )
      {
        ndisMDeQueueWorkItem((__int64)v1, 1, 0LL, 0LL);
        v1->DeferredSendHandler(v1);
        v2 = 1;
      }
      if ( !v2 )
        goto LABEL_41;
    }
  }
  if ( v1->WorkQueue[0].Next )
  {
    ndisMDeQueueWorkItem((__int64)v1, 0, 0LL, 0LL);
    ndisMDoOidRequest(v1);
  }
LABEL_41:
  if ( (unsigned __int8)byte_1C00A025B >= 4u )
    WPP_SF_q(0x3Du, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, (__int64)v1);
}
