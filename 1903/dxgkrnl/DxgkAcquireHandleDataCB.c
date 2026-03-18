/*
 * XREFs of DxgkAcquireHandleDataCB @ 0x1C0133F50
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013BEC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0023414 (-ReleaseShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     ?DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C00FAD74 (-DxgkReferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

ULONG_PTR __fastcall DxgkAcquireHandleDataCB(unsigned int *a1, struct _EX_RUNDOWN_REF **a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 *ThreadProperty; // rax
  __int64 *v13; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  int CurrentProcessSessionId; // edi
  __int64 ThreadWin32Thread; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  unsigned int v26; // eax
  ULONG_PTR Count; // rdi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r9
  struct _EX_RUNDOWN_REF *v31; // rbx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // ebx
  struct DXGPROCESS *Current; // rax
  __int64 v42; // rbx
  __int64 v43; // rcx
  _QWORD *v44; // rax
  __int64 v45; // rcx
  char v47[8]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v48; // [rsp+28h] [rbp-80h]
  int v49; // [rsp+30h] [rbp-78h]
  char v50[8]; // [rsp+38h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v50);
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 167LL;
    WdLogEvent5_WdAssertion(v6);
  }
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v13 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v11 = *v13;
    }
  }
  CurrentThread = KeGetCurrentThread();
  if ( !CurrentThread )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v15 + 24) = 94LL;
    WdLogEvent5_WdAssertion(v15);
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9);
  if ( CurrentProcessSessionId
    && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
    && !IsThreadCrossSessionAttached()
    && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
    && *(_QWORD *)ThreadWin32Thread )
  {
    v20 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
  }
  else
  {
    v20 = 0LL;
  }
  v48 = v11 + 184;
  if ( v11 != -184 && *(struct _KTHREAD **)(v11 + 192) == KeGetCurrentThread() )
  {
    v21 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v21 + 24) = 1448LL;
    WdLogEvent5_WdAssertion(v21);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v11 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v25 = *(_DWORD *)(v11 + 200);
      if ( v25 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v23, &EventBlockThread, (const GUID *)v24, v25);
    }
    ExAcquirePushLockSharedEx(v11 + 184, 0LL);
  }
  v26 = a1[1];
  Count = 0LL;
  v49 = 1;
  if ( v26 == 1 )
  {
    v28 = *a1;
    v29 = (*a1 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v29 >= *(_DWORD *)(v11 + 224) )
      goto LABEL_43;
    v30 = *(_QWORD *)(v11 + 208);
    v24 = (unsigned int)v29;
    v28 = ((unsigned int)v28 >> 25) & 0x60;
    v23 = *(unsigned int *)(v30 + 16 * v29 + 8);
    if ( (_BYTE)v28 != (*(_BYTE *)(v30 + 16 * v29 + 8) & 0x60) || (v23 & 0x2000) != 0 || (v23 & 0x1F) == 0 )
      goto LABEL_43;
    v24 = 2LL * (unsigned int)v29;
    v23 &= 0x1Fu;
    if ( (_BYTE)v23 == 5 )
    {
      v31 = *(struct _EX_RUNDOWN_REF **)(v30 + 16LL * (unsigned int)v29);
      if ( v31 )
      {
        if ( KeGetCurrentIrql() >= 2u )
        {
          v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31[1].Count + 16) + 16LL) + 192LL) + 64LL)
                          + 40LL);
          if ( *(_DWORD *)(v32 + 28) >= 0x2003u )
          {
            v33 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v32, v28);
            v33[3] = 275LL;
            v33[4] = 20LL;
            v33[5] = *(_QWORD *)(*(_QWORD *)(v31[1].Count + 16) + 16LL);
            v33[6] = 0LL;
            v33[7] = 0LL;
            WdLogEvent5_WdCriticalError(v33);
          }
        }
        if ( !ExAcquireRundownProtection(v31 + 11) )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v35, v34);
          v36[3] = 275LL;
          v36[4] = 38LL;
          v36[5] = v31;
          v36[6] = 0LL;
          v36[7] = 0LL;
          WdLogEvent5_WdCriticalError(v36);
        }
        if ( v20 )
          ++*(_DWORD *)(v20 + 136);
        *a2 = v31;
        if ( (a1[2] & 1) != 0 )
          Count = v31[4].Count;
        else
          Count = *(_QWORD *)(v31[6].Count + 16);
        goto LABEL_63;
      }
      goto LABEL_43;
    }
    goto LABEL_42;
  }
  if ( v26 != 2 )
  {
    v38 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    v39 = (int)a1[1];
    goto LABEL_62;
  }
  v40 = *a1;
  Current = DXGPROCESS::GetCurrent(v23, v22);
  v23 = (v40 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v23 >= *((_DWORD *)Current + 56)
    || (v24 = *((_QWORD *)Current + 26),
        v28 = (unsigned int)v23,
        v23 = *(unsigned int *)(v24 + 16LL * (unsigned int)v23 + 8),
        ((v40 >> 25) & 0x60) != (v23 & 0x60))
    || (v23 & 0x2000) != 0
    || (v23 & 0x1F) == 0 )
  {
LABEL_43:
    v38 = WdLogNewEntry5_WdWarning(v23, v28, v24);
    v39 = *a1;
LABEL_62:
    *(_QWORD *)(v38 + 24) = v39;
    WdLogEvent5_WdWarning(v38);
LABEL_63:
    ExReleasePushLockSharedEx(v48, 0LL);
    goto LABEL_64;
  }
  v28 *= 2LL;
  v23 &= 0x1Fu;
  if ( (_BYTE)v23 != 4 )
  {
LABEL_42:
    v37 = WdLogNewEntry5_WdError(v23, v28, v24);
    *(_QWORD *)(v37 + 24) = 267LL;
    WdLogEvent5_WdError(v37);
    goto LABEL_43;
  }
  v42 = *(_QWORD *)(v24 + 8 * v28);
  if ( !v42 )
    goto LABEL_43;
  if ( KeGetCurrentIrql() >= 2u )
  {
    v43 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) + 16LL) + 16LL) + 192LL)
                                + 64LL)
                    + 40LL);
    if ( *(_DWORD *)(v43 + 28) >= 0x2003u )
    {
      v44 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43, v28);
      v44[3] = 275LL;
      v44[4] = 20LL;
      v44[5] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v42 + 8) + 16LL) + 16LL);
      v44[6] = 0LL;
      v44[7] = 0LL;
      WdLogEvent5_WdCriticalError(v44);
    }
  }
  DxgkReferenceDxgResource((struct _EX_RUNDOWN_REF *)v42);
  if ( v20 )
    ++*(_DWORD *)(v20 + 136);
  DXGAUTOPUSHLOCK::ReleaseShared((DXGAUTOPUSHLOCK *)v47);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v42 + 80));
  *a2 = (struct _EX_RUNDOWN_REF *)v42;
  Count = *(_QWORD *)(v42 + 56);
  if ( (*(_DWORD *)(v42 + 4) & 1) != 0 )
    Count = *(_QWORD *)(Count + 16);
  if ( v49 == 1 )
    goto LABEL_63;
  if ( v49 != 2 )
    goto LABEL_65;
  v45 = v48;
  *(_QWORD *)(v48 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v45, 0LL);
LABEL_64:
  KeLeaveCriticalRegion();
LABEL_65:
  if ( v50[0] )
    KeUnstackDetachProcess(&ApcState);
  return Count;
}
