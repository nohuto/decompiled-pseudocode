/*
 * XREFs of ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C0033630
 * Callers:
 *     DxgNotifyVSyncCB @ 0x1C003E290 (DxgNotifyVSyncCB.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x1C0035E48 (-NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z.c)
 *     ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C00439A4 (-RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyVSync(DXGADAPTER *this, __int64 a2, const GUID *a3)
{
  unsigned int v3; // r14d
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v6; // rax
  int CurrentProcessSessionId; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  ADAPTER_DISPLAY *v12; // rcx
  __int64 v13; // rdx
  unsigned int i; // edi
  __int64 v15; // rcx
  const GUID *v16; // r8
  int v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h]
  char v19; // [rsp+30h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+70h] [rbp+20h] BYREF
  unsigned __int64 v22; // [rsp+80h] [rbp+30h] BYREF

  v17 = -1;
  v3 = a2;
  v18 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v19 = 1;
    v17 = 8009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 8009);
  }
  else
  {
    v19 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v6 = WdLogNewEntry5_WdAssertion(this, a2);
      *(_QWORD *)(v6 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v6);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
      && !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
      && *(_QWORD *)ThreadWin32Thread )
    {
      v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
    }
    else
    {
      v9 = 0LL;
    }
    v18 = v9;
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 140);
      if ( !v10 )
        *(_DWORD *)(v9 + 144) = 8009;
      *(_DWORD *)(v9 + 140) = v10 + 1;
    }
  }
  v21 = 0LL;
  v22 = KeQueryInterruptTimePrecise(&v21) / 0xAuLL;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 484, &LockHandle);
  if ( !*((_DWORD *)this + 920) )
  {
    v11 = *((_QWORD *)this + 486);
    if ( v11 )
      _InterlockedExchange64((volatile __int64 *)this + 487, v21 - v11);
    *((_QWORD *)this + 486) = v21;
  }
  v12 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 319);
  if ( v12 )
    ADAPTER_DISPLAY::NotifyVSync(v12, v3, &v22);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  for ( i = 0; i < *((_DWORD *)this + 978); ++i )
    DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync((DXGPOWERSTATISTICSTRANSITIONENGINE *)(*((_QWORD *)this + 488)
                                                                                         + 136LL
                                                                                         + 248LL * i));
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17, v13);
  if ( v19 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, v17);
  }
}
