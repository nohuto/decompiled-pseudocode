/*
 * XREFs of ndisMProcessDeferred @ 0x1C009B0EC
 * Callers:
 *     ?ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1C0078940 (-ndisMProcessSGListS@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z.c)
 *     ndisMSendPacketsToMiniport @ 0x1C008BBE0 (ndisMSendPacketsToMiniport.c)
 *     NdisIMQueueMiniportCallback @ 0x1C0097EB0 (NdisIMQueueMiniportCallback.c)
 *     NdisIMRevertBack @ 0x1C0098030 (NdisIMRevertBack.c)
 *     ndisMReset @ 0x1C009B750 (ndisMReset.c)
 *     ?ndisMDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A0414 (-ndisMDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisMDeferredDpc @ 0x1C00A1290 (ndisMDeferredDpc.c)
 *     ndisMTimerDpc @ 0x1C00A1350 (ndisMTimerDpc.c)
 *     ndisMWakeUpDpc @ 0x1C00A1560 (ndisMWakeUpDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisMDoOidRequest @ 0x1C0006D10 (ndisMDoOidRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 *     ?ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0096EBC (-ndisMDeferredReturnPackets@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0097550 (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z @ 0x1C009797C (-ndisMResetCompleteStage1@@YAHPEAU_NDIS_MINIPORT_BLOCK@@HE@Z.c)
 *     ndisMDeQueueWorkItem @ 0x1C009A118 (ndisMDeQueueWorkItem.c)
 *     ndisMResetCompleteStage2 @ 0x1C009BB24 (ndisMResetCompleteStage2.c)
 */

void __fastcall ndisMProcessDeferred(__int64 a1)
{
  __int64 v1; // rdi
  char v2; // si
  void (__fastcall *v3)(_QWORD, __int64); // rsi
  int v4; // eax
  __int64 v5; // rcx
  int v6; // ebx
  int v7; // eax
  unsigned __int8 v8; // [rsp+80h] [rbp+8h] BYREF
  void (__fastcall *v9)(_QWORD, __int64); // [rsp+88h] [rbp+10h] BYREF
  __int64 v10; // [rsp+90h] [rbp+18h] BYREF

  v1 = a1;
  v8 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      57,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1);
  while ( 1 )
  {
    v2 = 0;
    if ( *(_QWORD *)(v1 + 832) && (*(_DWORD *)(v1 + 120) & 0x80300000) == 0 )
    {
      ndisMDeQueueWorkItem(v1, 1, 0LL, 0LL);
      (*(void (__fastcall **)(__int64))(v1 + 632))(v1);
      v2 = 1;
    }
    if ( *(_QWORD *)(v1 + 856) )
      break;
    if ( *(_QWORD *)(v1 + 840) )
    {
      ndisMDeQueueWorkItem(v1, 2, 0LL, 0LL);
      ndisMDeferredReturnPackets((struct _NDIS_MINIPORT_BLOCK *)v1);
    }
    if ( *(int *)(v1 + 120) < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          12,
          58,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          v1);
      if ( (byte_1C00E8043 & 1) != 0 )
        McTemplateK0jqxq(
          a1,
          &NotifyMiniportAction,
          (const GUID *)(v1 + 4008),
          v1 + 4008,
          *(_DWORD *)(v1 + 4056),
          *(_QWORD *)(v1 + 4024),
          0);
      goto LABEL_41;
    }
    if ( *(_QWORD *)(v1 + 872) )
    {
      v9 = 0LL;
      ndisMDeQueueWorkItem(v1, 6, &v10, &v9);
      v3 = v9;
      if ( v9 )
      {
        *(_QWORD *)(v1 + 520) = 0LL;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v1 + 96));
        v3(*(_QWORD *)(v1 + 24), v10);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 96));
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
      }
      v2 = 1;
    }
    if ( *(_QWORD *)(v1 + 848) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4,
          12,
          59,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          v1);
      if ( (byte_1C00E8043 & 1) != 0 )
        McTemplateK0jqxq(
          a1,
          &NotifyMiniportAction,
          (const GUID *)(v1 + 4008),
          v1 + 4008,
          *(_DWORD *)(v1 + 4056),
          *(_QWORD *)(v1 + 4024),
          1);
      v4 = ndisMProcessResetRequested((struct _NDIS_MINIPORT_BLOCK *)v1, &v8);
      v6 = v4;
      if ( v4 == 259 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4,
            12,
            60,
            (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
            v1);
        if ( (byte_1C00E8043 & 1) != 0 )
          McTemplateK0jqxq(
            v5,
            &NotifyMiniportAction,
            (const GUID *)(v1 + 4008),
            v1 + 4008,
            *(_DWORD *)(v1 + 4056),
            *(_QWORD *)(v1 + 4024),
            2);
        goto LABEL_41;
      }
      v7 = ndisMResetCompleteStage1((struct _NDIS_MINIPORT_BLOCK *)v1, v4, v8);
      a1 = v8;
      if ( v7 )
        a1 = 0LL;
      v8 = a1;
      if ( !(_BYTE)a1 || v6 )
      {
        ndisMResetCompleteStage2(v1);
        goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      if ( *(_QWORD *)(v1 + 824) )
      {
        ndisMDeQueueWorkItem(v1, 0, 0LL, 0LL);
        ndisMDoOidRequest((struct _NDIS_MINIPORT_BLOCK *)v1);
        v2 = 1;
      }
      if ( *(_QWORD *)(v1 + 832) )
      {
        ndisMDeQueueWorkItem(v1, 1, 0LL, 0LL);
        (*(void (__fastcall **)(__int64))(v1 + 632))(v1);
        v2 = 1;
      }
      if ( !v2 )
        goto LABEL_41;
    }
  }
  if ( *(_QWORD *)(v1 + 824) )
  {
    ndisMDeQueueWorkItem(v1, 0, 0LL, 0LL);
    ndisMDoOidRequest((struct _NDIS_MINIPORT_BLOCK *)v1);
  }
LABEL_41:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      12,
      61,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      v1);
}
