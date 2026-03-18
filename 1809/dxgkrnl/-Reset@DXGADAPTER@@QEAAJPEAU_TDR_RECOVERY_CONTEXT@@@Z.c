/*
 * XREFs of ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01BF32C
 * Callers:
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020B680 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C00102E0 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0010310 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C002FD94 (McTemplateK0p.c)
 *     McTemplateK0pt @ 0x1C00303E4 (McTemplateK0pt.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C00D341C (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01BE828 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01C4BF4 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01C66B4 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01C7174 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020AD00 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Reset(DXGADAPTER *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rdi
  struct _KEVENT *v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  const GUID *v10; // r8
  __int64 v11; // rax
  const GUID *v12; // r8
  __int64 v13; // rcx
  const GUID *v14; // r8
  __int64 v15; // rax
  const GUID *v16; // r8
  ADAPTER_RENDER *v17; // rcx
  struct _TDR_RECOVERY_CONTEXT *v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  ADAPTER_DISPLAY *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  const GUID *v24; // r8
  __int64 v26; // [rsp+20h] [rbp-58h]
  char v27; // [rsp+80h] [rbp+8h] BYREF
  char v28; // [rsp+81h] [rbp+9h]
  struct _KEVENT *v29; // [rsp+88h] [rbp+10h]
  union _LARGE_INTEGER Interval; // [rsp+90h] [rbp+18h] BYREF
  union _LARGE_INTEGER v31; // [rsp+98h] [rbp+20h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 7613LL;
    WdLogEvent5_WdAssertion(v4);
  }
  CurrentThread = KeGetCurrentThread();
  v6 = (struct _KEVENT *)((char *)this + 2496);
  v29 = (struct _KEVENT *)((char *)this + 2496);
  if ( DXGADAPTER::IsDxgmms2(this) )
    v29 = (struct _KEVENT *)((char *)this + 2496);
  else
    KeSetEvent((PRKEVENT)this + 104, 0, 0);
  if ( !*((_QWORD *)this + 316) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 7629LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v28 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v27);
  if ( !DXGADAPTER::IsDxgmms2(this) )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 120, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 316), 4, 0xFFFFFFFF, 0);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    *((_QWORD *)this + 16) = KeGetCurrentThread();
    if ( !KeResetEvent((PRKEVENT)this + 2) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v15 + 24) = 7750LL;
      WdLogEvent5_WdAssertion(v15);
    }
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v14, this, 1);
    }
    while ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 18), 0) )
    {
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 316), 4, 0xFFFFFFFF, 0);
      v31.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &v31);
    }
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      LODWORD(v26) = 1;
      McTemplateK0pt(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        &EventPostAcquireAdapterLock,
        v16,
        this,
        v26);
    }
    *((_DWORD *)this + 38) = 2;
    goto LABEL_44;
  }
  *((_QWORD *)this + 317) = CurrentThread;
  if ( CurrentThread == *((struct _KTHREAD **)a2 + 362) )
  {
LABEL_26:
    KeSetEvent((PRKEVENT)this + 104, 0, 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 316) + 520LL) + 8LL) + 592LL))(
      *(_QWORD *)(*((_QWORD *)this + 316) + 528LL),
      *((_QWORD *)this + 317));
    DXGADAPTER::PrepareToReset(this, a2);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 316), 4, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::FlushDeferredDestructions(*((ADAPTER_RENDER **)this + 316));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 316) + 544LL) + 8LL) + 1136LL))(*(_QWORD *)(*((_QWORD *)this + 316) + 552LL));
    ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 316), 0, 0);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 316), 4, 0xFFFFFFFF, 0);
LABEL_44:
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 316), 4, 0xFFFFFFFF, 0);
    TdrCollectDbgInfoStage2(a2);
    v17 = (ADAPTER_RENDER *)*((_QWORD *)this + 316);
    *((_BYTE *)this + 2470) = 0;
    if ( (int)ADAPTER_RENDER::Reset(v17, (ULONG_PTR)a2) < 0 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v19);
      *(_QWORD *)(v20 + 24) = 7791LL;
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 315);
    if ( v21 && (int)ADAPTER_DISPLAY::Reset(v21, v18) < 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v23 + 24) = 7799LL;
      WdLogEvent5_WdAssertion(v23);
    }
    *((_QWORD *)this + 317) = 0LL;
    KeResetEvent(v6);
    goto LABEL_50;
  }
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 120, 0LL);
  *((_QWORD *)this + 16) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 44) != 1 )
  {
    *((_QWORD *)this + 16) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_58;
  }
  if ( !KeResetEvent((PRKEVENT)this + 2) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v11 + 24) = 7664LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v10, this, 1);
  }
  ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 18), 1u);
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    LODWORD(v26) = 1;
    McTemplateK0pt(
      (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
      &EventPostAcquireAdapterLock,
      v12,
      this,
      v26);
  }
  *((_DWORD *)this + 38) = 2;
  if ( !*((_QWORD *)a2 + 362) )
  {
    v6 = v29;
    goto LABEL_26;
  }
LABEL_50:
  if ( !DXGADAPTER::IsDxgmms2(this) || *((struct _KTHREAD **)a2 + 362) != CurrentThread )
  {
    *((_QWORD *)this + 16) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      McTemplateK0p((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v24, this);
    }
    ExReleaseResourceLite(*((PERESOURCE *)this + 18));
    KeSetEvent((PRKEVENT)this + 2, 0, 0);
  }
LABEL_58:
  if ( v28 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v27);
  return 0LL;
}
