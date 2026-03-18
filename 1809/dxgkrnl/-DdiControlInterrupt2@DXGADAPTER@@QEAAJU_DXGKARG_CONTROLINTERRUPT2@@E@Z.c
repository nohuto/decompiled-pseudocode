/*
 * XREFs of ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C000EFF0
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt2 @ 0x1C0037DF0 (DXGADAPTER_DdiControlInterrupt2.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C00E260C (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C00EF360 (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0011F90 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0012650 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00126D0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(DXGADAPTER *this, struct _DXGKARG_CONTROLINTERRUPT2 a2, __int64 a3)
{
  char v4; // r14
  DXGK_INTERRUPT_TYPE InterruptType; // esi
  __int64 v7; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v9; // rsi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // rax
  int CurrentProcessSessionId; // r14d
  __int64 v13; // rcx
  __int64 ThreadWin32Thread; // rax
  int v15; // r15d
  __int64 v16; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rax
  unsigned __int8 v19; // cl
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 InterruptState; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // r8
  __int64 v28; // rcx
  signed __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  int v32; // eax
  __int64 v33; // rax
  int v34; // eax
  unsigned int v36; // [rsp+20h] [rbp-49h] BYREF
  __int64 v37; // [rsp+28h] [rbp-41h]
  char v38; // [rsp+30h] [rbp-39h]
  struct _DXGKARG_CONTROLINTERRUPT2 v39; // [rsp+38h] [rbp-31h]
  signed __int64 v40; // [rsp+40h] [rbp-29h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v42[8]; // [rsp+60h] [rbp-9h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+68h] [rbp-1h] BYREF

  v36 = -1;
  v37 = 0LL;
  v4 = a3;
  v39 = a2;
  InterruptType = a2.InterruptType;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v38 = 1;
    v36 = 5054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(this, &EventProfilerEnter, a3, 5054LL);
  }
  else
  {
    v38 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry(&v36, 5054LL);
  if ( InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && !v4 )
    DXGPUSHLOCK::AcquireExclusive((DXGADAPTER *)((char *)this + 3816));
  DXGADAPTER::AcquireDdiSync(this, 1LL);
  _InterlockedIncrement((volatile signed __int32 *)this + 1064);
  CurrentIrql = KeGetCurrentIrql();
  v9 = 0LL;
  if ( CurrentIrql >= 2u )
    goto LABEL_18;
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v11 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v11);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v7);
  if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
  {
    if ( (unsigned int)IsThreadCrossSessionAttached(v13)
      || (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) == 0
      || !*(_QWORD *)ThreadWin32Thread )
    {
      v9 = 0LL;
LABEL_18:
      v15 = 0;
      goto LABEL_19;
    }
    v9 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v9 = 0LL;
  }
  if ( !v9 )
    goto LABEL_18;
  v15 = *(_DWORD *)(v9 + 136);
LABEL_19:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v42, this);
  v16 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 97))(*((_QWORD *)this + 31), a2);
  if ( v42[0] )
    KeUnstackDetachProcess(&ApcState);
  v17 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v17 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
    v18[3] = 275LL;
    v18[4] = 16LL;
    v18[5] = this;
    v18[6] = CurrentIrql;
    v19 = KeGetCurrentIrql();
    v18[7] = v19;
    WdLogEvent5_WdCriticalError(v18);
  }
  if ( v9 && *(_DWORD *)(v9 + 136) != v15 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17);
    v20[3] = 275LL;
    v20[4] = 38LL;
    v21 = *(int *)(v9 + 136);
    v20[7] = 0LL;
    v20[5] = v21;
    v20[6] = v15;
    WdLogEvent5_WdCriticalError(v20);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1064);
  if ( (unsigned int)(v16 + 0x3FFFFFFF) > 1 && (_DWORD)v16 )
  {
    v22 = WdLogNewEntry5_WdError(v17);
    *(_QWORD *)(v22 + 24) = v16;
    WdLogEvent5_WdError(v22);
  }
  DXGADAPTER::ReleaseDdiSync(this);
  InterruptState = v39.InterruptState;
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v16 >= 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 480, &LockHandle);
      *((_DWORD *)this + 912) = InterruptState;
      if ( (_DWORD)InterruptState == 1 )
        *((_QWORD *)this + 482) = 0LL;
      v24 = *((_QWORD *)this + 315);
      if ( v24 && !(_DWORD)InterruptState && *(_QWORD *)(v24 + 784) )
        *(_BYTE *)(v24 + 728) = 1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( (_DWORD)InterruptState != 2 )
      {
        LOBYTE(v25) = (_DWORD)InterruptState == 0;
        PoNotifyVSyncChange(v25);
      }
    }
    *((_QWORD *)this + 478) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 3816, 0LL);
    KeLeaveCriticalRegion();
  }
  v26 = (_QWORD *)WdLogNewEntry5_WdTrace();
  v28 = a2.InterruptType;
  v26[3] = v16;
  v26[4] = a2.InterruptType;
  v26[5] = InterruptState;
  if ( (int)v16 >= 0 && a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && (_DWORD)InterruptState == 1 )
  {
    v29 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)this + 483,
            *((_QWORD *)this + 483),
            *((_QWORD *)this + 483));
    v40 = v29;
    if ( v29 )
      v30 = -6 * v29;
    else
      v30 = -1000002LL;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    KeSetTimer((PKTIMER)((char *)this + 3656), (LARGE_INTEGER)v30, (PKDPC)((char *)this + 3720));
  }
  v31 = v37;
  if ( v37 )
  {
    v32 = *(_DWORD *)(v37 + 140);
    if ( !v32 )
    {
      v33 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v33 + 24) = 232LL;
      WdLogEvent5_WdAssertion(v33);
      v32 = *(_DWORD *)(v31 + 140);
    }
    v34 = v32 - 1;
    *(_DWORD *)(v31 + 140) = v34;
    if ( !v34 )
      *(_DWORD *)(v31 + 144) = -1;
  }
  if ( v38 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v28, &EventProfilerExit, v27, v36);
  return (unsigned int)v16;
}
