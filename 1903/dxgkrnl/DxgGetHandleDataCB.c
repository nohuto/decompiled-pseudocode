/*
 * XREFs of DxgGetHandleDataCB @ 0x1C0133870
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000C654 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C0013BEC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010F350 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0113C24 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 */

ULONG_PTR __fastcall DxgGetHandleDataCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  const GUID *v15; // r8
  int v16; // r9d
  unsigned int v17; // eax
  ULONG_PTR v18; // rbx
  ULONG_PTR Count; // rbp
  __int64 v20; // rax
  __int64 v21; // r9
  int v22; // ecx
  __int64 v23; // rcx
  struct _EX_RUNDOWN_REF **v24; // rdx
  __int64 v25; // rax
  struct _EX_RUNDOWN_REF *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  struct _EX_RUNDOWN_REF *v29; // rcx
  __int64 v30; // rdx
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v41; // rax
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  struct _KTHREAD *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // esi
  __int64 v52; // rax
  __int64 v53; // rdi
  _QWORD *v54; // rax
  unsigned int v55; // edi
  struct DXGPROCESS *Current; // rax
  unsigned int v57; // ecx
  __int64 v58; // r8
  __int64 v59; // rdx
  int v60; // ecx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  struct _EX_RUNDOWN_REF *v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  struct _EX_RUNDOWN_REF *v67; // rdx
  __int64 v68; // rcx
  _QWORD *v69; // rax
  struct _EX_RUNDOWN_REF *v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  struct _EX_RUNDOWN_REF *v80; // [rsp+20h] [rbp-68h] BYREF
  struct _EX_RUNDOWN_REF *v81; // [rsp+28h] [rbp-60h] BYREF
  char v82[8]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-50h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v82);
  CurrentProcess = PsGetCurrentProcess(v3, v2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v8 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v10 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v8 = *v10;
    }
  }
  v11 = v8 + 184;
  if ( v8 != -184 && *(struct _KTHREAD **)(v8 + 192) == KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v12 + 24) = 1448LL;
    WdLogEvent5_WdAssertion(v12);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v8 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v16 = *(_DWORD *)(v8 + 200);
      if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v14, &EventBlockThread, v15, v16);
    }
    ExAcquirePushLockSharedEx(v8 + 184, 0LL);
  }
  v17 = a1[1];
  v18 = 0LL;
  Count = 0LL;
  if ( v17 == 1 )
  {
    v20 = (*a1 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v20 < *(_DWORD *)(v8 + 224) )
    {
      v21 = *(_QWORD *)(v8 + 208);
      v22 = *(_DWORD *)(v21 + 16 * v20 + 8);
      if ( ((*a1 >> 25) & 0x60) == (*(_BYTE *)(v21 + 16 * v20 + 8) & 0x60) && (v22 & 0x2000) == 0 && (v22 & 0x1F) != 0 )
      {
        v23 = v22 & 0x1F;
        v24 = (struct _EX_RUNDOWN_REF **)(v21 + 16LL * (unsigned int)v20);
        if ( (_BYTE)v23 == 5 )
        {
          v26 = *v24;
          goto LABEL_22;
        }
        v25 = WdLogNewEntry5_WdError(v23, v24, 2LL * (unsigned int)v20);
        *(_QWORD *)(v25 + 24) = 267LL;
        WdLogEvent5_WdError(v25);
      }
    }
    v26 = 0LL;
LABEL_22:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v80, v26);
    v29 = v80;
    if ( v80 )
    {
      if ( KeGetCurrentIrql() >= 2u )
      {
        v30 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v80[1].Count + 16) + 16LL) + 192LL) + 64LL)
                        + 40LL);
        if ( *(_DWORD *)(v30 + 28) >= 0x2003u )
        {
          v31 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v80, v30);
          v31[3] = 275LL;
          v31[4] = 20LL;
          v31[5] = *(_QWORD *)(*(_QWORD *)(v80[1].Count + 16) + 16LL);
          v31[6] = 0LL;
          v31[7] = 0LL;
          WdLogEvent5_WdCriticalError(v31);
          v29 = v80;
        }
      }
      v32 = *(_QWORD *)(v29[1].Count + 16);
      v33 = *(_QWORD *)(v32 + 16);
      if ( *(int *)(v33 + 2184) >= 0x2000 || *(_BYTE *)(v33 + 2484) )
      {
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v29, v32) + 247) )
        {
          v35 = WdLogNewEntry5_WdAssertion(v34, v32);
          *(_QWORD *)(v35 + 24) = 87LL;
          WdLogEvent5_WdAssertion(v35);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v80, v36);
          goto LABEL_82;
        }
        v29 = v80;
      }
      if ( (a1[2] & 1) != 0 )
        Count = v29[4].Count;
      else
        Count = *(_QWORD *)(v29[6].Count + 16);
    }
    else
    {
      v37 = WdLogNewEntry5_WdWarning(0LL, v27, v28);
      *(_QWORD *)(v37 + 24) = *a1;
      WdLogEvent5_WdWarning(v37);
      v29 = v80;
    }
    if ( v29 )
      ExReleaseRundownProtection(v29 + 11);
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v29, v32) + 247) )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v41 = WdLogNewEntry5_WdAssertion(v39, v38);
        *(_QWORD *)(v41 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v41);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v39, v38);
      if ( CurrentProcessSessionId )
      {
        if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
          && !IsThreadCrossSessionAttached() )
        {
          ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
          if ( ThreadWin32Thread )
          {
            v46 = *ThreadWin32Thread;
            if ( v46 )
            {
              if ( *(_QWORD *)(v46 + 80) )
              {
                v47 = KeGetCurrentThread();
                if ( !v47 )
                {
                  v48 = WdLogNewEntry5_WdAssertion(v45, v44);
                  *(_QWORD *)(v48 + 24) = 94LL;
                  WdLogEvent5_WdAssertion(v48);
                }
                v51 = PsGetCurrentProcessSessionId(v45, v44);
                if ( v51
                  && (unsigned int)PsGetThreadSessionId(v47) == v51
                  && !IsThreadCrossSessionAttached()
                  && (v52 = PsGetThreadWin32Thread(v47)) != 0
                  && *(_QWORD *)v52 )
                {
                  v53 = *(_QWORD *)(*(_QWORD *)v52 + 80LL);
                }
                else
                {
                  v53 = 0LL;
                }
                if ( *(_DWORD *)(v53 + 136) )
                {
                  v54 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50, v49);
                  v54[3] = 275LL;
                  v54[4] = 38LL;
                  v54[5] = *(int *)(v53 + 136);
                  v54[6] = 0LL;
                  v54[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v54);
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_81;
  }
  if ( v17 != 2 )
  {
    v78 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v78 + 24) = (int)a1[1];
    WdLogEvent5_WdWarning(v78);
    goto LABEL_81;
  }
  v55 = *a1;
  Current = DXGPROCESS::GetCurrent(v14, v13);
  v57 = (v55 >> 6) & 0xFFFFFF;
  if ( v57 >= *((_DWORD *)Current + 56) )
    goto LABEL_65;
  v58 = *((_QWORD *)Current + 26);
  v59 = v57;
  v60 = *(_DWORD *)(v58 + 16LL * v57 + 8);
  if ( ((v55 >> 25) & 0x60) != (v60 & 0x60) || (v60 & 0x2000) != 0 || (v60 & 0x1F) == 0 )
    goto LABEL_65;
  v61 = 2 * v59;
  v62 = v60 & 0x1F;
  if ( (_BYTE)v62 != 4 )
  {
    v63 = WdLogNewEntry5_WdError(v62, v61, v58);
    *(_QWORD *)(v63 + 24) = 267LL;
    WdLogEvent5_WdError(v63);
LABEL_65:
    v64 = 0LL;
    goto LABEL_66;
  }
  v64 = *(struct _EX_RUNDOWN_REF **)(v58 + 8 * v61);
LABEL_66:
  DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v81, v64);
  v67 = v81;
  if ( v81 )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      v68 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v81[1].Count + 16) + 16LL) + 192LL) + 64LL)
                      + 40LL);
      if ( *(_DWORD *)(v68 + 28) >= 0x2003u )
      {
        v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v68, v81);
        v69[3] = 275LL;
        v69[4] = 20LL;
        v69[5] = *(_QWORD *)(*(_QWORD *)(v81[1].Count + 16) + 16LL);
        v69[6] = 0LL;
        v69[7] = 0LL;
        WdLogEvent5_WdCriticalError(v69);
        v67 = v81;
      }
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v67[1].Count + 16) + 16LL)) )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v71, (__int64)v70) + 247) )
      {
        v74 = WdLogNewEntry5_WdAssertion(v73, v72);
        *(_QWORD *)(v74 + 24) = 129LL;
        WdLogEvent5_WdAssertion(v74);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v81, v75);
        goto LABEL_82;
      }
      v70 = v81;
    }
    if ( (HIDWORD(v70->Ptr) & 1) != 0 )
      Count = *(_QWORD *)(v70[7].Count + 16);
    else
      Count = v70[7].Count;
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v81, (__int64)v70);
  }
  else
  {
    v76 = WdLogNewEntry5_WdWarning(v65, 0LL, v66);
    *(_QWORD *)(v76 + 24) = *a1;
    WdLogEvent5_WdWarning(v76);
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v81, v77);
  }
LABEL_81:
  v18 = Count;
LABEL_82:
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( v82[0] )
    KeUnstackDetachProcess(&ApcState);
  return v18;
}
