/*
 * XREFs of ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01EE8A0
 * Callers:
 *     ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C023E2A0 (-TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C001F170 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C001F248 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0p @ 0x1C0035594 (McTemplateK0p.c)
 *     McTemplateK0pt @ 0x1C0035BE4 (McTemplateK0pt.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0122320 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C01234C4 (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01243EC (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01EDE88 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01F3AF8 (-Reset@ADAPTER_DISPLAY@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ @ 0x1C01F53E4 (-FlushDeferredDestructions@ADAPTER_RENDER@@AEAAXXZ.c)
 *     ?Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01F5D90 (-Reset@ADAPTER_RENDER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C023D900 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::Reset(DXGADAPTER *this, struct _KTHREAD **a2)
{
  __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  const GUID *v12; // r8
  __int64 v13; // rax
  const GUID *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  const GUID *v17; // r8
  __int64 v18; // rax
  const GUID *v19; // r8
  ADAPTER_RENDER *v20; // rcx
  struct _TDR_RECOVERY_CONTEXT *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  ADAPTER_DISPLAY *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  const GUID *v28; // r8
  __int64 v30; // [rsp+20h] [rbp-48h]
  char v31; // [rsp+70h] [rbp+8h] BYREF
  char v32; // [rsp+71h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+78h] [rbp+10h] BYREF
  union _LARGE_INTEGER v34; // [rsp+80h] [rbp+18h] BYREF
  struct _KTHREAD *v35; // [rsp+88h] [rbp+20h]

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v4 + 24) = 7816LL;
    WdLogEvent5_WdAssertion(v4);
  }
  CurrentThread = KeGetCurrentThread();
  v35 = CurrentThread;
  if ( !DXGADAPTER::IsDxgmms2(this) )
    KeSetEvent((PRKEVENT)((char *)this + 2528), 0, 0);
  if ( !*((_QWORD *)this + 320) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v8 + 24) = 7832LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v32 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v31, v6);
  if ( !DXGADAPTER::IsDxgmms2(this) )
  {
    while ( 1 )
    {
      KeEnterCriticalRegion();
      if ( (unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 120, 0LL) )
        break;
      KeLeaveCriticalRegion();
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 320), 4, 0xFFFFFFFF, 0);
      Interval.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    *((_QWORD *)this + 16) = KeGetCurrentThread();
    if ( !KeResetEvent((PRKEVENT)this + 2) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v16, v15);
      *(_QWORD *)(v18 + 24) = 7953LL;
      WdLogEvent5_WdAssertion(v18);
    }
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v17, this, 1);
    }
    while ( !ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 18), 0) )
    {
      ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 320), 4, 0xFFFFFFFF, 0);
      v34.QuadPart = -100000LL;
      KeDelayExecutionThread(0, 0, &v34);
    }
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      LODWORD(v30) = 1;
      McTemplateK0pt(
        (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
        &EventPostAcquireAdapterLock,
        v19,
        this,
        v30);
    }
    *((_DWORD *)this + 38) = 2;
    goto LABEL_42;
  }
  *((_QWORD *)this + 321) = CurrentThread;
  if ( CurrentThread == a2[362] )
    goto LABEL_24;
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx((char *)this + 120, 0LL);
  *((_QWORD *)this + 16) = KeGetCurrentThread();
  if ( *((_DWORD *)this + 44) != 1 )
  {
    *((_QWORD *)this + 16) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_56;
  }
  if ( !KeResetEvent((PRKEVENT)this + 2) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v13 + 24) = 7867LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
  {
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v12, this, 1);
  }
  DXGADAPTER::AcquireCoreResourceExclusiveWithTracking((__int64)this, 2, -1);
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
  {
    LODWORD(v30) = 1;
    McTemplateK0pt(
      (struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context,
      &EventPostAcquireAdapterLock,
      v14,
      this,
      v30);
  }
  *((_DWORD *)this + 38) = 2;
  if ( !a2[362] )
  {
LABEL_24:
    KeSetEvent((PRKEVENT)((char *)this + 2528), 0, 0);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 320) + 520LL) + 8LL) + 592LL))(
      *(_QWORD *)(*((_QWORD *)this + 320) + 528LL),
      *((_QWORD *)this + 321));
    DXGADAPTER::PrepareToReset(this, (struct _TDR_RECOVERY_CONTEXT *)a2);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 320), 4, 0xFFFFFFFF, 0);
    ADAPTER_RENDER::FlushDeferredDestructions(*((ADAPTER_RENDER **)this + 320));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 320) + 544LL) + 8LL) + 1136LL))(*(_QWORD *)(*((_QWORD *)this + 320) + 552LL));
    ADAPTER_RENDER::SuspendVidMmWorkerThread(*((_QWORD *)this + 320), 0, 0);
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 320), 4, 0xFFFFFFFF, 0);
LABEL_42:
    ADAPTER_RENDER::FlushScheduler(*((_QWORD *)this + 320), 4, 0xFFFFFFFF, 0);
    TdrCollectDbgInfoStage2((struct _TDR_RECOVERY_CONTEXT *)a2);
    v20 = (ADAPTER_RENDER *)*((_QWORD *)this + 320);
    *((_BYTE *)this + 2502) = 0;
    if ( (int)ADAPTER_RENDER::Reset(v20, (ULONG_PTR)a2) < 0 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v23 + 24) = 7994LL;
      WdLogEvent5_WdAssertion(v23);
    }
    v24 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 319);
    if ( v24 && (int)ADAPTER_DISPLAY::Reset(v24, v21) < 0 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v26, v25);
      *(_QWORD *)(v27 + 24) = 8002LL;
      WdLogEvent5_WdAssertion(v27);
    }
    *((_QWORD *)this + 321) = 0LL;
    KeResetEvent((PRKEVENT)((char *)this + 2528));
  }
  if ( !DXGADAPTER::IsDxgmms2(this) || a2[362] != v35 )
  {
    *((_QWORD *)this + 16) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      McTemplateK0p((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v28, this);
    }
    ExReleaseResourceLite(*((PERESOURCE *)this + 18));
    KeSetEvent((PRKEVENT)this + 2, 0, 0);
  }
LABEL_56:
  if ( v32 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v31, v9);
  return 0LL;
}
