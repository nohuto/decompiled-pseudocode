/*
 * XREFs of ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C0015930
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt2 @ 0x1C003E3B0 (DXGADAPTER_DdiControlInterrupt2.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C0101B14 (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C013C374 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00FC9E0 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(DXGADAPTER *this, struct _DXGKARG_CONTROLINTERRUPT2 a2, __int64 a3)
{
  __int64 v3; // r14
  char v4; // r15
  char v7; // r13
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 ThreadWin32Thread; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int8 CurrentIrql; // r12
  __int64 v24; // rbp
  struct _KTHREAD *v25; // rsi
  __int64 v26; // rax
  int CurrentProcessSessionId; // ebp
  __int64 v28; // rax
  int v29; // r15d
  __int64 v30; // rax
  unsigned int *v31; // rsi
  int v32; // eax
  struct DXGPROCESS *Current; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 v42; // rcx
  _QWORD *v43; // rax
  unsigned __int8 v44; // cl
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 InterruptType; // rcx
  signed __int64 v54; // rax
  __int64 v55; // rdx
  int v56; // eax
  __int64 v57; // rax
  int v58; // eax
  unsigned int v60; // [rsp+30h] [rbp-A8h]
  DXGK_INTERRUPT_STATE InterruptState; // [rsp+3Ch] [rbp-9Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-98h] BYREF
  char v63; // [rsp+58h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-78h] BYREF

  v3 = 0LL;
  InterruptState = a2.InterruptState;
  v4 = a3;
  v60 = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v7 = 1;
    v60 = 5054;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(this, &EventProfilerEnter, a3, 5054LL);
  }
  else
  {
    v7 = 0;
  }
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(this, a2);
      *(_QWORD *)(v9 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v9);
    }
    v10 = ((__int64 (__fastcall *)(_QWORD, _QWORD))PsGetCurrentProcessSessionId)(this, a2);
    if ( v10 && (unsigned int)PsGetThreadSessionId(CurrentThread) == v10 )
    {
      if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11)
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v3 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
      }
      else
      {
        v3 = 0LL;
      }
    }
    if ( v3 )
    {
      v14 = *(_DWORD *)(v3 + 140);
      if ( !v14 )
        *(_DWORD *)(v3 + 144) = 5054;
      *(_DWORD *)(v3 + 140) = v14 + 1;
    }
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && !v4 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 3848, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v17 = *((unsigned int *)this + 966);
        if ( (_DWORD)v17 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v15, &EventBlockThread, v16, v17);
      }
      ExAcquirePushLockExclusiveEx((char *)this + 3848, 0LL);
    }
    *((_QWORD *)this + 482) = KeGetCurrentThread();
  }
  v18 = *((_QWORD *)this + 320);
  if ( !v18
    || !*(_QWORD *)(v18 + 528)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v18 + 520) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)this + 321) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)this + 9) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v21, &EventBlockThread, v22, 73LL);
      KeWaitForSingleObject((char *)this + 216, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 30), 1u);
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 1062);
  CurrentIrql = KeGetCurrentIrql();
  v24 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v25 = KeGetCurrentThread();
    if ( !v25 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v26 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v26);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v20, v19);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(v25) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached(v20, v19)
      && (v28 = PsGetThreadWin32Thread(v25)) != 0
      && *(_QWORD *)v28 )
    {
      v24 = *(_QWORD *)(*(_QWORD *)v28 + 80LL);
      if ( v24 )
      {
        v29 = *(_DWORD *)(v24 + 136);
        goto LABEL_50;
      }
    }
    else
    {
      v24 = 0LL;
    }
  }
  v29 = 0;
LABEL_50:
  v63 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v30 = WdLogNewEntry5_WdAssertion(v20, v19);
      *(_QWORD *)(v30 + 24) = 2201LL;
      WdLogEvent5_WdAssertion(v30);
    }
    v31 = (unsigned int *)DXGGLOBAL::m_pGlobal;
    if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 321) )
    {
      v32 = *((_DWORD *)this + 77);
      if ( (v32 & 0x20) == 0 && (v32 & 4) == 0 )
      {
        Current = DXGPROCESS::GetCurrent();
        if ( Current )
        {
          if ( !*((_BYTE *)Current + 296) && !*((_BYTE *)Current + 297) )
          {
            v35 = v31[321];
            if ( (_DWORD)v35 == 2 || (_DWORD)v35 == 1 && *((_BYTE *)Current + 413) )
            {
              Global = DXGGLOBAL::GetGlobal(v35, v34);
              SessionData = DXGGLOBAL::GetSessionData(Global);
              if ( SessionData )
              {
                v38 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2336);
                if ( v38 )
                {
                  KeStackAttachProcess(v38, &ApcState);
                  v63 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  v40 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 95))(*((_QWORD *)this + 31), a2);
  if ( v63 )
    KeUnstackDetachProcess(&ApcState);
  v42 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v42 )
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v39);
    v43[3] = 275LL;
    v43[4] = 16LL;
    v43[5] = this;
    v43[6] = CurrentIrql;
    v44 = KeGetCurrentIrql();
    v43[7] = v44;
    WdLogEvent5_WdCriticalError(v43);
  }
  if ( v24 && *(_DWORD *)(v24 + 136) != v29 )
  {
    v45 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v39);
    v45[3] = 275LL;
    v45[4] = 38LL;
    v45[5] = *(int *)(v24 + 136);
    v45[6] = v29;
    v45[7] = 0LL;
    WdLogEvent5_WdCriticalError(v45);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1062);
  if ( (_DWORD)v40 && (unsigned int)(v40 + 0x3FFFFFFF) > 1 )
  {
    v46 = WdLogNewEntry5_WdError(v42, v39, v41);
    *(_QWORD *)(v46 + 24) = v40;
    WdLogEvent5_WdError(v46);
  }
  v47 = *((_QWORD *)this + 320);
  if ( !v47
    || !*(_QWORD *)(v47 + 528)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v47 + 520) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)this + 321) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 30));
    KeLeaveCriticalRegion();
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v40 >= 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 484, &LockHandle);
      *((_DWORD *)this + 920) = InterruptState;
      if ( InterruptState == DXGK_INTERRUPT_DISABLE )
        *((_QWORD *)this + 486) = 0LL;
      v48 = *((_QWORD *)this + 319);
      if ( v48 && InterruptState == DXGK_INTERRUPT_ENABLE && *(_QWORD *)(v48 + 888) )
        *(_BYTE *)(v48 + 832) = 1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( InterruptState != 2 )
      {
        LOBYTE(v49) = InterruptState == DXGK_INTERRUPT_ENABLE;
        PoNotifyVSyncChange(v49);
      }
    }
    *((_QWORD *)this + 482) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 3848, 0LL);
    KeLeaveCriticalRegion();
  }
  v50 = (_QWORD *)WdLogNewEntry5_WdTrace();
  InterruptType = a2.InterruptType;
  v50[3] = v40;
  v50[4] = a2.InterruptType;
  v50[5] = InterruptState;
  if ( (int)v40 >= 0 && a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && InterruptState == DXGK_INTERRUPT_DISABLE )
  {
    v54 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)this + 487,
            *((_QWORD *)this + 487),
            *((_QWORD *)this + 487));
    if ( v54 )
      v55 = -6 * v54;
    else
      v55 = -1000002LL;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    KeSetTimer((PKTIMER)((char *)this + 3688), (LARGE_INTEGER)v55, (PKDPC)((char *)this + 3752));
  }
  if ( v3 )
  {
    v56 = *(_DWORD *)(v3 + 140);
    if ( !v56 )
    {
      v57 = WdLogNewEntry5_WdAssertion(InterruptType, v51);
      *(_QWORD *)(v57 + 24) = 251LL;
      WdLogEvent5_WdAssertion(v57);
      v56 = *(_DWORD *)(v3 + 140);
    }
    v58 = v56 - 1;
    *(_DWORD *)(v3 + 140) = v58;
    if ( !v58 )
      *(_DWORD *)(v3 + 144) = -1;
  }
  if ( v7 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(InterruptType, &EventProfilerExit, v52, v60);
  return (unsigned int)v40;
}
