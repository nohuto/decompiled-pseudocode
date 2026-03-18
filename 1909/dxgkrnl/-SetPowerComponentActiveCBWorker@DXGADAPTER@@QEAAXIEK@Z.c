/*
 * XREFs of ?SetPowerComponentActiveCBWorker@DXGADAPTER@@QEAAXIEK@Z @ 0x1C0034944
 * Callers:
 *     ?SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z @ 0x1C00347D8 (-SetPowerComponentActiveCB@DXGADAPTER@@QEAAXI@Z.c)
 *     ?SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z @ 0x1C00348B8 (-SetPowerComponentActiveCBInternal@DXGADAPTER@@QEAAXIEK@Z.c)
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C00339AC (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     ?PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z @ 0x1C0033CE4 (-PowerRuntimeComponentIdleStateCallback@DXGADAPTER@@QEAAXKKE@Z.c)
 *     McTemplateK0xq @ 0x1C00357CC (McTemplateK0xq.c)
 *     McTemplateK0pqq @ 0x1C0035844 (McTemplateK0pqq.c)
 *     DxgkNotifySharedPowerGraphicsFStateTransition @ 0x1C00429B0 (DxgkNotifySharedPowerGraphicsFStateTransition.c)
 *     ?RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0043918 (-RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::SetPowerComponentActiveCBWorker(
        DXGADAPTER *this,
        unsigned int a2,
        __int64 a3,
        unsigned int a4)
{
  char v4; // r13
  __int64 v5; // rbp
  unsigned int v6; // ebx
  char v7; // r12
  __int64 v9; // rsi
  __int64 v10; // rcx
  char v11; // r14
  char v12; // r15
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  struct _KLOCK_QUEUE_HANDLE v24; // [rsp+30h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE v26; // [rsp+60h] [rbp-48h] BYREF

  v4 = 0;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  if ( *((_QWORD *)this + 325) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
      McTemplateK0xq(this, &Dxgk_SetPowerComponentActiveCB, a3, this, a2);
    v9 = *((_QWORD *)this + 324) + 520 * v5;
    v10 = *(_QWORD *)(v9 + 512);
    if ( v10 )
    {
      DXGPOWERSTATISTICSTRANSITIONENGINE::RecordActivity((DXGPOWERSTATISTICSTRANSITIONENGINE *)(v10 + 136));
      if ( *((_DWORD *)this + 920) )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 513, &LockHandle);
        *(_BYTE *)(*(_QWORD *)(v9 + 512) + 240LL) = 1;
        if ( !*((_BYTE *)this + 4112) )
        {
          *((_BYTE *)this + 4112) = 1;
          _InterlockedIncrement64((volatile signed __int64 *)this + 3);
          *((_QWORD *)this + 496) = -1LL;
          KeSetTimer((PKTIMER)((char *)this + 3976), (LARGE_INTEGER)-120000LL, (PKDPC)((char *)this + 4040));
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
    }
    v11 = v7;
    v12 = 0;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 504), &v26);
    if ( (int)++*(_DWORD *)(v9 + 352) <= 1 )
    {
      v13 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(v9 + 480);
      if ( *(_BYTE *)(v9 + 360) )
      {
        v11 = 0;
        v4 = 1;
      }
      else
      {
        KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)this + 391, &v24);
        v14 = (_QWORD *)(v9 + 440);
        v15 = *(_QWORD *)(v9 + 440);
        if ( v15 )
        {
          if ( *(_QWORD **)(v15 + 8) != v14 || (v16 = *(_QWORD **)(v9 + 448), (_QWORD *)*v16 != v14) )
            __fastfail(3u);
          *v16 = v15;
          *(_QWORD *)(v15 + 8) = v16;
          *v14 = 0LL;
          if ( *((DXGADAPTER **)this + 385) == (DXGADAPTER *)((char *)this + 3080) )
          {
            if ( !KeCancelTimer((PKTIMER)((char *)this + 3144)) )
              KeFlushQueuedDpcs();
            *((_BYTE *)this + 3029) = 0;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v24);
          if ( v13 > *(_QWORD *)(v9 + 496) )
            *(_QWORD *)(v9 + 472) = 0LL;
          v12 = 1;
        }
        else
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v24);
          v17 = *(_QWORD *)(v9 + 496);
          if ( v13 < v17 )
            *(_QWORD *)(v9 + 472) = v17;
          v11 = 1;
        }
      }
      v6 = a4;
    }
    else
    {
      v12 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&v26);
    if ( *(_DWORD *)(v9 + 208) == 7 )
      DxgkNotifySharedPowerGraphicsFStateTransition(this, *(_DWORD *)(v9 + 4), 0, 1);
    if ( v11 )
    {
      if ( v7 )
      {
        if ( KeGetCurrentIrql() >= 2u )
        {
          v21 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v18);
          v21[3] = 275LL;
          v21[4] = 20LL;
          v21[5] = this;
          v21[6] = 0LL;
          v21[7] = 0LL;
          WdLogEvent5_WdCriticalError(v21);
        }
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          McTemplateK0pqq(v19, (unsigned int)&Dxgk_ReportPowerComponentState, v20, (_DWORD)this, v5, 1);
        v22 = 1LL;
      }
      else
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          McTemplateK0pqq(v19, (unsigned int)&Dxgk_ReportPowerComponentState, v20, (_DWORD)this, v5, 1);
        v22 = v6;
      }
      PoFxActivateComponent(*((_QWORD *)this + 325), (unsigned int)v5, v22);
      if ( v12 )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          McTemplateK0pqq(v19, (unsigned int)&Dxgk_ReportPowerComponentState, v20, (_DWORD)this, v5, 0);
        v19 = *((_QWORD *)this + 325);
        if ( v19 )
          PoFxIdleComponent(v19, (unsigned int)v5, v6);
      }
    }
    if ( v4 )
    {
      DXGADAPTER::PowerRuntimeComponentIdleStateCallback(this, v5, 0, 1u);
      DXGADAPTER::PowerRuntimeComponentActiveCallback(this, v5, 1, v23);
    }
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        McTemplateK0xq(v19, &Dxgk_SetPowerComponentActiveCBEnd, v20, this, v5);
    }
  }
}
