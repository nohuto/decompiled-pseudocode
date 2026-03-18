/*
 * XREFs of DpiRequestDevicePowerState @ 0x1C004AA28
 * Callers:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001D8BC (DpiCheckForOutstandingD3Requests.c)
 *     ?PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z @ 0x1C0033EE8 (-PowerRuntimeDevicePowerRequiredCallback@DXGADAPTER@@QEAAXE@Z.c)
 *     DpiSuspendAdapterDpc @ 0x1C004B010 (DpiSuspendAdapterDpc.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C00356E4 (McTemplateK0pqq.c)
 *     DxgkReportDevicePoweredOn @ 0x1C00373CC (DxgkReportDevicePoweredOn.c)
 *     ?DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z @ 0x1C004A57C (-DpiScheduleDelayedDevicePowerRequired@@YAXPEAU_FDO_CONTEXT@@@Z.c)
 *     DpiCancelSuspendAdapterTimer @ 0x1C004A608 (DpiCancelSuspendAdapterTimer.c)
 *     DpiRequestDevicePowerIrp @ 0x1C004A86C (DpiRequestDevicePowerIrp.c)
 *     DpiSetDevicePowerTransitionState @ 0x1C004AEAC (DpiSetDevicePowerTransitionState.c)
 *     DpiCancelAsyncRequest @ 0x1C004B358 (DpiCancelAsyncRequest.c)
 *     DpiSendAsyncResumeAdapterRequest @ 0x1C004B418 (DpiSendAsyncResumeAdapterRequest.c)
 */

void __fastcall DpiRequestDevicePowerState(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // rcx
  const GUID *v8; // r8
  KSPIN_LOCK *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  _QWORD *v21; // rax
  int v22; // eax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  _QWORD *v26; // r8
  __int64 v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+28h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+48h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v4 = a3;
  v5 = a2;
  v6 = (_QWORD *)WdLogNewEntry5_WdPower();
  v6[3] = v5;
  v6[4] = v3;
  v6[5] = v4;
  WdLogEvent5_WdPower(v6);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    McTemplateK0pqq(v7, &Dxgk_DpiRequestDevicePowerState, v8, *(_QWORD *)(v3 + 3896), v5, v4);
  v9 = (KSPIN_LOCK *)(v3 + 4088);
  if ( (_DWORD)v5 == 1 )
  {
    KeAcquireInStackQueuedSpinLock(v9, &LockHandle);
    v10 = (_QWORD *)WdLogNewEntry5_WdPower();
    v10[3] = *(int *)(v3 + 4152);
    v10[4] = *(int *)(v3 + 4156);
    v10[5] = 0LL;
    WdLogEvent5_WdPower(v10);
    if ( *(_DWORD *)(v3 + 3992) == 1 && *(_DWORD *)(v3 + 236) != 6 && !*(_DWORD *)(v3 + 4152) )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12, v11);
      *(_QWORD *)(v14 + 24) = 4320LL;
      WdLogEvent5_WdAssertion(v14);
    }
    if ( (_DWORD)v4 )
    {
      *(_DWORD *)(v3 + 4156) = 0;
      DpiCancelSuspendAdapterTimer(v3);
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 64LL) + 4096LL), 1u);
    }
    if ( *(_DWORD *)(v3 + 4152) == 1 )
    {
      DpiCancelAsyncRequest(v3);
    }
    else
    {
      if ( *(_DWORD *)(v3 + 4152) != 2 )
      {
        if ( *(_DWORD *)(v3 + 4152) == 3 )
        {
          v17 = (_QWORD *)WdLogNewEntry5_WdPower();
          v17[3] = v3;
          v17[4] = 0LL;
          v17[5] = 0LL;
          WdLogEvent5_WdPower(v17);
          DpiSendAsyncResumeAdapterRequest(v3);
          v16 = 7LL;
        }
        else
        {
          if ( *(_DWORD *)(v3 + 4152) != 4 )
          {
            if ( *(_DWORD *)(v3 + 4152) != 5 )
              goto LABEL_26;
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
            {
              LODWORD(v28) = v4;
              LODWORD(v27) = 1;
              McTemplateK0pqq(
                (unsigned int)(*(_DWORD *)(v3 + 4152) - 4),
                &EventPowerRequestDuringD3,
                v13,
                *(_QWORD *)(v3 + 3896),
                v27,
                v28);
            }
          }
          v15 = (_QWORD *)WdLogNewEntry5_WdPower();
          v15[3] = v3;
          v15[4] = 0LL;
          v15[5] = 0LL;
          WdLogEvent5_WdPower(v15);
          DpiRequestDevicePowerIrp(v3, 1);
          v16 = 6LL;
        }
LABEL_25:
        DpiSetDevicePowerTransitionState(v3, v16);
LABEL_26:
        if ( (_DWORD)v4 != 2 )
        {
LABEL_29:
          p_LockHandle = &LockHandle;
          goto LABEL_46;
        }
LABEL_27:
        if ( *(_DWORD *)(v3 + 4152) != 6 )
        {
          v19 = (_QWORD *)WdLogNewEntry5_WdPower();
          v19[3] = v3;
          v19[4] = *(int *)(v3 + 4152);
          v19[5] = 2LL;
          WdLogEvent5_WdPower(v19);
          DxgkReportDevicePoweredOn(*(_QWORD *)(v3 + 3896));
        }
        goto LABEL_29;
      }
      if ( (_DWORD)v4 == 2 )
      {
        v18 = (_QWORD *)WdLogNewEntry5_WdPower();
        v18[3] = v3;
        v18[4] = 0LL;
        v18[5] = 0LL;
        WdLogEvent5_WdPower(v18);
        goto LABEL_27;
      }
    }
    v16 = 0LL;
    goto LABEL_25;
  }
  KeAcquireInStackQueuedSpinLock(v9, &v30);
  v21 = (_QWORD *)WdLogNewEntry5_WdPower();
  v21[3] = *(int *)(v3 + 4152);
  v21[4] = *(int *)(v3 + 4156);
  v21[5] = 0LL;
  WdLogEvent5_WdPower(v21);
  if ( (_DWORD)v4 == 2 )
    *(_DWORD *)(v3 + 4156) = 1;
  if ( !*(_DWORD *)(v3 + 4096) && ((_DWORD)v4 != 1 || *(_DWORD *)(v3 + 4156)) )
  {
    v22 = *(_DWORD *)(v3 + 4152);
    if ( v22 == 3 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdPower();
      v23[3] = v3;
      v23[4] = 0LL;
      v23[5] = 0LL;
      WdLogEvent5_WdPower(v23);
      DpiRequestDevicePowerIrp(v3, 4);
      DpiSetDevicePowerTransitionState(v3, 4LL);
      DpiCancelSuspendAdapterTimer(v3);
    }
    else if ( !v22 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdPower();
      v24[3] = v3;
      v24[4] = 0LL;
      v24[5] = 0LL;
      WdLogEvent5_WdPower(v24);
      DpiSetDevicePowerTransitionState(v3, 1LL);
      v25 = (_QWORD *)(v3 + 4000);
      if ( !*(_QWORD *)(v3 + 4000) )
      {
        *(_DWORD *)(v3 + 4024) = 1;
        v26 = *(_QWORD **)(v3 + 3984);
        if ( *v26 != v3 + 3976 )
          __fastfail(3u);
        *(_QWORD *)(v3 + 4008) = v26;
        *v25 = v3 + 3976;
        *v26 = v25;
        *(_QWORD *)(v3 + 3984) = v25;
        KeSetEvent((PRKEVENT)(v3 + 3944), 0, 0);
      }
    }
  }
  if ( (unsigned int)(*(_DWORD *)(v3 + 4152) - 4) > 1 && *(_DWORD *)(v3 + 236) != 6 )
    DpiScheduleDelayedDevicePowerRequired((struct _FDO_CONTEXT *)v3);
  p_LockHandle = &v30;
LABEL_46:
  KeReleaseInStackQueuedSpinLock(p_LockHandle);
}
