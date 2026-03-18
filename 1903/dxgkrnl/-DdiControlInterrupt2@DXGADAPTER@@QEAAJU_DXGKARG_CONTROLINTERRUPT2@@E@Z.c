/*
 * XREFs of ?DdiControlInterrupt2@DXGADAPTER@@QEAAJU_DXGKARG_CONTROLINTERRUPT2@@E@Z @ 0x1C00150C0
 * Callers:
 *     DXGADAPTER_DdiControlInterrupt2 @ 0x1C003E250 (DXGADAPTER_DdiControlInterrupt2.c)
 *     ?ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ @ 0x1C00FCE44 (-ProcessVSyncPhaseTimer@DXGADAPTER@@QEAAXXZ.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C0138624 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00F7D10 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGADAPTER::DdiControlInterrupt2(DXGADAPTER *this, struct _DXGKARG_CONTROLINTERRUPT2 a2, char a3)
{
  __int64 v3; // r14
  char v7; // r13
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rax
  int v10; // ebp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 ThreadWin32Thread; // rax
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v21; // rbp
  struct _KTHREAD *v22; // rsi
  __int64 v23; // rax
  int CurrentProcessSessionId; // ebp
  __int64 v25; // rax
  int v26; // r15d
  __int64 v27; // rax
  unsigned int *v28; // rsi
  int v29; // eax
  struct DXGPROCESS *Current; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  struct _KPROCESS *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // rcx
  _QWORD *v40; // rax
  unsigned __int8 v41; // cl
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 InterruptType; // rcx
  signed __int64 v52; // rax
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  int v56; // eax
  DXGK_INTERRUPT_STATE InterruptState; // [rsp+3Ch] [rbp-9Ch]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-98h] BYREF
  char v60; // [rsp+58h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-78h] BYREF

  v3 = 0LL;
  InterruptState = a2.InterruptState;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v7 = 1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(this, &EventProfilerEnter);
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
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && !a3 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)this + 3848, 0LL) )
    {
      if ( bTracingEnabled && *((_DWORD *)this + 966) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v15, &EventBlockThread);
      ExAcquirePushLockExclusiveEx((char *)this + 3848, 0LL);
    }
    *((_QWORD *)this + 482) = KeGetCurrentThread();
  }
  v16 = *((_QWORD *)this + 320);
  if ( !v16
    || !*(_QWORD *)(v16 + 528)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v16 + 520) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)this + 321) != KeGetCurrentThread() )
  {
    if ( !KeReadStateEvent((PRKEVENT)this + 9) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v19, &EventBlockThread);
      KeWaitForSingleObject((char *)this + 216, Executive, 0, 0, 0LL);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite(*((PERESOURCE *)this + 30), 1u);
  }
  _InterlockedIncrement((volatile signed __int32 *)this + 1062);
  CurrentIrql = KeGetCurrentIrql();
  v21 = 0LL;
  if ( CurrentIrql < 2u )
  {
    v22 = KeGetCurrentThread();
    if ( !v22 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v23 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v23);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v18, v17);
    if ( CurrentProcessSessionId
      && (unsigned int)PsGetThreadSessionId(v22) == CurrentProcessSessionId
      && !(unsigned int)IsThreadCrossSessionAttached(v18, v17)
      && (v25 = PsGetThreadWin32Thread(v22)) != 0
      && *(_QWORD *)v25 )
    {
      v21 = *(_QWORD *)(*(_QWORD *)v25 + 80LL);
      if ( v21 )
      {
        v26 = *(_DWORD *)(v21 + 136);
        goto LABEL_50;
      }
    }
    else
    {
      v21 = 0LL;
    }
  }
  v26 = 0;
LABEL_50:
  v60 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    if ( !DXGGLOBAL::m_pGlobal )
    {
      v27 = WdLogNewEntry5_WdAssertion(v18, v17);
      *(_QWORD *)(v27 + 24) = 2200LL;
      WdLogEvent5_WdAssertion(v27);
    }
    v28 = (unsigned int *)DXGGLOBAL::m_pGlobal;
    if ( *((_DWORD *)DXGGLOBAL::m_pGlobal + 321) )
    {
      v29 = *((_DWORD *)this + 77);
      if ( (v29 & 0x20) == 0 && (v29 & 4) == 0 )
      {
        Current = DXGPROCESS::GetCurrent();
        if ( Current )
        {
          if ( !*((_BYTE *)Current + 296) && !*((_BYTE *)Current + 297) )
          {
            v32 = v28[321];
            if ( (_DWORD)v32 == 2 || (_DWORD)v32 == 1 && *((_BYTE *)Current + 413) )
            {
              Global = DXGGLOBAL::GetGlobal(v32, v31);
              SessionData = DXGGLOBAL::GetSessionData(Global);
              if ( SessionData )
              {
                v35 = (struct _KPROCESS *)*((_QWORD *)SessionData + 2336);
                if ( v35 )
                {
                  KeStackAttachProcess(v35, &ApcState);
                  v60 = 1;
                }
              }
            }
          }
        }
      }
    }
  }
  v37 = (*((int (__fastcall **)(_QWORD, struct _DXGKARG_CONTROLINTERRUPT2))this + 95))(*((_QWORD *)this + 31), a2);
  if ( v60 )
    KeUnstackDetachProcess(&ApcState);
  v39 = KeGetCurrentIrql();
  if ( CurrentIrql != (_BYTE)v39 )
  {
    v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v36);
    v40[3] = 275LL;
    v40[4] = 16LL;
    v40[5] = this;
    v40[6] = CurrentIrql;
    v41 = KeGetCurrentIrql();
    v40[7] = v41;
    WdLogEvent5_WdCriticalError(v40);
  }
  if ( v21 && *(_DWORD *)(v21 + 136) != v26 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v39, v36);
    v42[3] = 275LL;
    v42[4] = 38LL;
    v42[5] = *(int *)(v21 + 136);
    v42[6] = v26;
    v42[7] = 0LL;
    WdLogEvent5_WdCriticalError(v42);
  }
  _InterlockedDecrement((volatile signed __int32 *)this + 1062);
  if ( (_DWORD)v37 && (unsigned int)(v37 + 0x3FFFFFFF) > 1 )
  {
    v43 = WdLogNewEntry5_WdError(v39, v36, v38);
    *(_QWORD *)(v43 + 24) = v37;
    WdLogEvent5_WdError(v43);
  }
  v44 = *((_QWORD *)this + 320);
  if ( !v44
    || !*(_QWORD *)(v44 + 528)
    || !(*(unsigned __int8 (**)(void))(*(_QWORD *)(*(_QWORD *)(v44 + 520) + 8LL) + 72LL))()
    && *((struct _KTHREAD **)this + 321) != KeGetCurrentThread() )
  {
    ExReleaseResourceLite(*((PERESOURCE *)this + 30));
    KeLeaveCriticalRegion();
  }
  if ( a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC )
  {
    if ( (int)v37 >= 0 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)this + 484, &LockHandle);
      *((_DWORD *)this + 920) = InterruptState;
      if ( InterruptState == DXGK_INTERRUPT_DISABLE )
        *((_QWORD *)this + 486) = 0LL;
      v47 = *((_QWORD *)this + 319);
      if ( v47 && InterruptState == DXGK_INTERRUPT_ENABLE && *(_QWORD *)(v47 + 888) )
        *(_BYTE *)(v47 + 832) = 1;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( InterruptState != 2 )
      {
        LOBYTE(v48) = InterruptState == DXGK_INTERRUPT_ENABLE;
        PoNotifyVSyncChange(v48);
      }
    }
    *((_QWORD *)this + 482) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 3848, 0LL);
    KeLeaveCriticalRegion();
  }
  v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v46, v45);
  InterruptType = a2.InterruptType;
  v49[3] = v37;
  v49[4] = a2.InterruptType;
  v49[5] = InterruptState;
  if ( (int)v37 >= 0 && a2.InterruptType == DXGK_INTERRUPT_CRTC_VSYNC && InterruptState == DXGK_INTERRUPT_DISABLE )
  {
    v52 = _InterlockedCompareExchange64(
            (volatile signed __int64 *)this + 487,
            *((_QWORD *)this + 487),
            *((_QWORD *)this + 487));
    if ( v52 )
      v53 = -6 * v52;
    else
      v53 = -1000002LL;
    _InterlockedIncrement64((volatile signed __int64 *)this + 3);
    KeSetTimer((PKTIMER)((char *)this + 3688), (LARGE_INTEGER)v53, (PKDPC)((char *)this + 3752));
  }
  if ( v3 )
  {
    v54 = *(_DWORD *)(v3 + 140);
    if ( !v54 )
    {
      v55 = WdLogNewEntry5_WdAssertion(InterruptType, v50);
      *(_QWORD *)(v55 + 24) = 250LL;
      WdLogEvent5_WdAssertion(v55);
      v54 = *(_DWORD *)(v3 + 140);
    }
    v56 = v54 - 1;
    *(_DWORD *)(v3 + 140) = v56;
    if ( !v56 )
      *(_DWORD *)(v3 + 144) = -1;
  }
  if ( v7 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(InterruptType, &EventProfilerExit);
  return (unsigned int)v37;
}
