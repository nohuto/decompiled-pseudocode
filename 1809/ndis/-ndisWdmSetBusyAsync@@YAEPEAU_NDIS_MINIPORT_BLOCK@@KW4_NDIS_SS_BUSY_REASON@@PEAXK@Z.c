/*
 * XREFs of ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C0073304
 * Callers:
 *     ndisSetBusyAsync @ 0x1C0075F2C (ndisSetBusyAsync.c)
 * Callees:
 *     ndisScheduleWorkItemInternal @ 0x1C00170D0 (ndisScheduleWorkItemInternal.c)
 *     PktMonClientNblDropNdis @ 0x1C0026AD8 (PktMonClientNblDropNdis.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     McTemplateK0qq @ 0x1C004F3F0 (McTemplateK0qq.c)
 *     ndisMSendNetBufferListsCompleteInternal @ 0x1C0058008 (ndisMSendNetBufferListsCompleteInternal.c)
 *     ?ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@@Z @ 0x1C0072364 (-ndisIncrementAsyncIdleCountersLocked@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@KW4_NDIS_SS_BUSY_REASON@@.c)
 *     ?ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXKPEAPEAU_NET_BUFFER_LIST@@PEAU_LIST_ENTRY@@PEAE@Z @ 0x1C007258C (-ndisPendWorkOnSetBusyAsyncLocked@@YAXPEAU_NDIS_SELECTIVE_SUSPEND@@W4_NDIS_SS_BUSY_REASON@@PEAXK.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C00726E8 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ndisCancelDequeuedDirectOidRequests @ 0x1C007463C (ndisCancelDequeuedDirectOidRequests.c)
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
  enum _NDIS_SS_BUSY_REASON Arg1; // r12d
  __int64 v11; // r9
  KIRQL v12; // r13
  unsigned int Value; // eax
  int LastResumeContext; // r9d
  _DWORD *v15; // rcx
  struct _MCGEN_TRACE_CONTEXT *v16; // rcx
  __int64 v17; // r8
  struct _NET_BUFFER_LIST *Alignment; // rax
  char v20; // [rsp+40h] [rbp-20h]
  unsigned __int8 v21; // [rsp+41h] [rbp-1Fh]
  struct _NET_BUFFER_LIST *v22; // [rsp+48h] [rbp-18h] BYREF
  struct _LIST_ENTRY v23; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v24; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v25; // [rsp+A8h] [rbp+48h]
  void *v26; // [rsp+B8h] [rbp+58h]

  v26 = a4;
  v25 = a2;
  SelectiveSuspend = a1->SelectiveSuspend;
  v23.Blink = &v23;
  v7 = 0LL;
  v8 = 1;
  v23.Flink = &v23;
  v21 = 1;
  v22 = 0LL;
  Arg1 = 0;
  v24 = 0;
  v12 = KeAcquireSpinLockRaiseToDpc(&SelectiveSuspend->Lock);
  Value = SelectiveSuspend->Flags.Value;
  if ( (Value & 0x14) == 0 || (Value & 0x200) != 0 )
  {
    v20 = 1;
    v21 = ndisIncrementAsyncIdleCountersLocked(SelectiveSuspend, v25, (enum _NDIS_SS_BUSY_REASON)a3, v11);
    ndisSelectiveSuspendSetResumeBusyReason(v15, 0, a3, 0);
  }
  else
  {
    v20 = 0;
    ndisPendWorkOnSetBusyAsyncLocked(
      SelectiveSuspend,
      (enum _NDIS_SS_BUSY_REASON)a3,
      (unsigned int *)v26,
      a5,
      &v22,
      &v23,
      &v24);
    if ( v24 && (SelectiveSuspend->Flags.Value & 0xC0) == 0 )
    {
      if ( a3 == 50 )
        LastResumeContext = SelectiveSuspend->LastResumeContext;
      else
        LastResumeContext = 0;
      ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, 1, a3, LastResumeContext);
      Arg1 = a3;
      if ( (unsigned __int8)byte_1C00A025E >= 4u )
        WPP_SF_qD(0x25u, &WPP_0cf0eaabdf4f3c4b779dfb88bb6a846b_Traceguids, (__int64)a1, a3);
      SelectiveSuspend->Flags.Value |= 0x40u;
      ndisScheduleWorkItemInternal((__int64)&SelectiveSuspend->IdleCancelWorkItem);
    }
    v7 = v22;
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
      if ( byte_1C009FE30 && (*((_DWORD *)&a1->PktMonComp + 13) & 2) != 0 )
        PktMonClientNblDropNdis((__int64)&a1->PktMonComp, (__int64)v7, v17, 2LL, 0xC023002F);
      Alignment = v7;
      do
      {
        Alignment->Status = -1071448052;
        Alignment = (struct _NET_BUFFER_LIST *)Alignment->Link.Alignment;
      }
      while ( Alignment );
      ndisMSendNetBufferListsCompleteInternal((__int64)a1, v7, 0, 0);
    }
    if ( v23.Flink != &v23 )
      ndisCancelDequeuedDirectOidRequests(a1, &v23);
    if ( Arg1 && (byte_1C00A2081 & 8) != 0 )
      McTemplateK0qq(v16, &SSResumeRequested, &a1->InterfaceGuid, (a1->NetLuid.Value >> 24) & 0xFFFFFF, Arg1);
    if ( !v20 || !v21 )
      return 0;
  }
  return v8;
}
