/*
 * XREFs of ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C00B68D8
 * Callers:
 *     ndisSetBusyAsync @ 0x1C00B98E0 (ndisSetBusyAsync.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001B218 (ndisScheduleWorkItemInternal.c)
 *     McTemplateK0qq @ 0x1C007D584 (McTemplateK0qq.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C008B504 (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C00B57D0 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C00B5BE4 (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C00B5D40 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C00B7E2C (ndisCancelDequeuedDirectOidRequests.c)
 *     PktMonClientNblDropNdis @ 0x1C00C9768 (PktMonClientNblDropNdis.c)
 */

char __fastcall ndisWdmSetBusyAsync(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        unsigned __int32 a3,
        void *a4,
        unsigned int a5)
{
  _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  struct _NET_BUFFER_LIST *v7; // rdi
  char v8; // r15
  unsigned int Arg1; // r12d
  __int64 v11; // r9
  KIRQL v12; // r13
  unsigned int Value; // eax
  int LastResumeContext; // r9d
  int v15; // edx
  _DWORD *v16; // rcx
  struct _MCGEN_TRACE_CONTEXT *v17; // rcx
  int v18; // r8d
  struct _NET_BUFFER_LIST *Alignment; // rax
  char v21; // [rsp+40h] [rbp-20h]
  unsigned __int8 v22; // [rsp+41h] [rbp-1Fh]
  struct _NET_BUFFER_LIST *v23; // [rsp+48h] [rbp-18h] BYREF
  struct _LIST_ENTRY v24; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v25; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+48h]
  void *v27; // [rsp+B8h] [rbp+58h]

  v27 = a4;
  v26 = a2;
  SelectiveSuspend = a1->SelectiveSuspend;
  v24.Blink = &v24;
  v7 = 0LL;
  v8 = 1;
  v24.Flink = &v24;
  v22 = 1;
  v23 = 0LL;
  Arg1 = 0;
  v25 = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  Value = SelectiveSuspend->Flags.Value;
  if ( (Value & 0x14) == 0 || (Value & 0x200) != 0 )
  {
    v21 = 1;
    v22 = ndisIncrementAsyncIdleCountersLocked(SelectiveSuspend, v26, (enum _NDIS_SS_BUSY_REASON)a3, v11);
    ndisSelectiveSuspendSetResumeBusyReason(v16, 0, a3, 0);
  }
  else
  {
    v21 = 0;
    ndisPendWorkOnSetBusyAsyncLocked(
      SelectiveSuspend,
      (enum _NDIS_SS_BUSY_REASON)a3,
      (unsigned int *)v27,
      a5,
      &v23,
      &v24,
      &v25);
    if ( v25 && (SelectiveSuspend->Flags.Value & 0xC0) == 0 )
    {
      if ( a3 == 50 )
        LastResumeContext = SelectiveSuspend->LastResumeContext;
      else
        LastResumeContext = 0;
      ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, 1, a3, LastResumeContext);
      Arg1 = a3;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = 4;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v15,
          15,
          38,
          (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
          (char)a1,
          a3);
      }
      SelectiveSuspend->Flags.Value |= 0x40u;
      ndisScheduleWorkItemInternal((__int64)&SelectiveSuspend->IdleCancelWorkItem);
    }
    v7 = v23;
  }
  if ( (SelectiveSuspend->Flags.Value & 0x200) != 0 )
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v12);
  }
  else
  {
    KeReleaseSpinLock(&SelectiveSuspend->Lock, v12);
    if ( v7 )
    {
      if ( byte_1C00E5E20 && (*((_DWORD *)&a1->PktMonComp + 3) & 2) != 0 )
        PktMonClientNblDropNdis((_DWORD)a1 + 5800, (_DWORD)v7, v18, 2, -1071448017, -536866805);
      Alignment = v7;
      do
      {
        Alignment->Status = -1071448052;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      ndisMSendNetBufferListsCompleteInternal(a1, v7, 0);
    }
    if ( v24.Flink != &v24 )
      ndisCancelDequeuedDirectOidRequests((char)a1);
    if ( Arg1 && (byte_1C00E8041 & 8) != 0 )
      McTemplateK0qq(v17, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, Arg1);
    if ( !v21 || !v22 )
      return 0;
  }
  return v8;
}
