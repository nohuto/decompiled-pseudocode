/*
 * XREFs of ?ReclaimAllocations@DXGDEVICE@@QEAAJPEAVDXGPAGINGQUEUE@@PEAU_D3DKMT_RECLAIMALLOCATIONS2@@@Z @ 0x1C0107460
 * Callers:
 *     DxgkReclaimAllocations @ 0x1C0131850 (DxgkReclaimAllocations.c)
 *     DxgkReclaimAllocations2 @ 0x1C01359B0 (DxgkReclaimAllocations2.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0007DD0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C1C0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023A68 (IsThreadCrossSessionAttached.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0023D0C (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010F350 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DXGDEVICE::ReclaimAllocations(
        DXGDEVICE *this,
        struct DXGPAGINGQUEUE *a2,
        struct _D3DKMT_RECLAIMALLOCATIONS2 *a3)
{
  struct DXGPAGINGQUEUE *v4; // rsi
  struct _EX_RUNDOWN_REF *v6; // rbx
  ULONG64 v7; // rcx
  UINT v8; // r8d
  BOOL *v9; // rdx
  __int64 v10; // rax
  unsigned int v12; // r12d
  UINT i; // r14d
  unsigned int *v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdi
  int v23; // esi
  __int64 v24; // r8
  int *v25; // rdx
  __int64 v26; // r10
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r14
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  BOOL *pDiscarded; // rax
  BOOL *v35; // rdx
  UINT j; // r14d
  unsigned int *v37; // rdx
  __int64 v38; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rdi
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  struct _KTHREAD *v44; // rdi
  __int64 v45; // rax
  int v46; // ebx
  __int64 v47; // rbx
  __int64 *v48; // rax
  struct _KTHREAD *v50; // rdi
  __int64 v51; // rax
  int v52; // ebx
  __int64 v53; // rbx
  __int64 *v54; // rax
  __int64 v55; // rbx
  _QWORD *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  ULONG_PTR Count; // r8
  __int64 v60; // rax
  int *v61; // rdx
  __int64 v62; // r10
  int v63; // eax
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdi
  _QWORD *v67; // rax
  __int64 v68; // rdx
  BOOL *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v73; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v79; // rax
  struct _KTHREAD *v80; // rdi
  __int64 v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rcx
  int v84; // ebx
  __int64 v85; // rbx
  __int64 *v86; // rax
  __int64 v87; // rbx
  _QWORD *v88; // rax
  struct _EX_RUNDOWN_REF *v89; // [rsp+30h] [rbp-88h] BYREF
  _QWORD *v90; // [rsp+38h] [rbp-80h] BYREF
  int v91; // [rsp+40h] [rbp-78h] BYREF
  unsigned int v92; // [rsp+44h] [rbp-74h]
  int v93; // [rsp+48h] [rbp-70h] BYREF
  UINT v94; // [rsp+4Ch] [rbp-6Ch]
  _BYTE v95[16]; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v96; // [rsp+60h] [rbp-58h]
  unsigned __int64 v97; // [rsp+68h] [rbp-50h]
  struct _EX_RUNDOWN_REF *v98; // [rsp+70h] [rbp-48h] BYREF
  struct DXGPAGINGQUEUE *v99; // [rsp+C8h] [rbp+10h]
  UINT v100; // [rsp+D8h] [rbp+20h]
  unsigned __int64 v101; // [rsp+D8h] [rbp+20h]

  v99 = a2;
  v4 = a2;
  v6 = 0LL;
  v89 = 0LL;
  if ( (*((_BYTE *)this + 1749) & 1) != 0 )
  {
LABEL_10:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v89, (__int64)a2);
    return 0LL;
  }
  v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v7 + 2469) )
  {
    if ( a3->pDiscarded )
    {
      v8 = 0;
      v94 = 0;
      while ( v8 < a3->NumAllocations )
      {
        v7 = v8;
        v9 = &a3->pDiscarded[v8];
        if ( (unsigned __int64)v9 >= MmUserProbeAddress )
          v9 = (BOOL *)MmUserProbeAddress;
        *v9 = 0;
        v94 = ++v8;
      }
    }
    v10 = WdLogNewEntry5_WdEvent(v7);
    *(_QWORD *)(v10 + 24) = this;
    *(_QWORD *)(v10 + 32) = 0LL;
    WdLogEvent5_WdEvent(v10);
    goto LABEL_10;
  }
  if ( a3->NumAllocations )
  {
    v12 = 0;
    if ( a3->pResources )
    {
      if ( !a3->HandleList )
      {
        for ( i = 0; ; ++i )
        {
          v100 = i;
          if ( i >= a3->NumAllocations )
            break;
          v97 = 4LL * i;
          v14 = &a3->pResources[v97 / 4];
          if ( (unsigned __int64)v14 >= MmUserProbeAddress )
            v14 = (unsigned int *)MmUserProbeAddress;
          v96 = *v14;
          v15 = v96;
          DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v90, v96);
          if ( !v90 )
          {
            v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v16, 0LL, v17);
            v18[3] = this;
            v18[4] = v15;
            v18[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v18);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v90);
            goto LABEL_129;
          }
          if ( (DXGDEVICE *)v90[1] != this )
          {
            v20 = WdLogNewEntry5_WdError(v16, v90, v17);
            *(_QWORD *)(v20 + 24) = this;
            *(_QWORD *)(v20 + 32) = v90[1];
            WdLogEvent5_WdError(v20);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v90);
            goto LABEL_129;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v95, (struct DXGFASTMUTEX *const)(v90 + 10), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v95);
          v22 = v90[3];
          v23 = 0;
          if ( v22 )
          {
            while ( 1 )
            {
              v24 = *(_QWORD *)(v22 + 24);
              if ( !v24 )
              {
                v33 = WdLogNewEntry5_WdError(0LL, v21, 0LL);
                *(_QWORD *)(v33 + 24) = v22;
                WdLogEvent5_WdError(v33);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v95);
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v90);
                goto LABEL_129;
              }
              v91 = 0;
              v25 = &v91;
              if ( !a3->pDiscarded )
                v25 = 0LL;
              if ( v99 )
                v26 = *((_QWORD *)v99 + 4);
              else
                v26 = 0LL;
              v27 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, UINT64 *, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL)
                                                                                         + 672LL))(
                      *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
                      v26,
                      v24,
                      &a3->PagingFenceValue,
                      v25);
              v30 = v27;
              if ( v27 < 0 )
              {
                v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v28, v21, v29);
                v31[3] = this;
                v31[4] = v22;
                v31[5] = v30;
                WdLogEvent5_WdWarning(v31);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v95);
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v90);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v89, v32);
                return (unsigned int)v30;
              }
              if ( v27 == 259 )
                v12 = 259;
              if ( v91 == 2 )
                break;
              if ( v91 == 1 )
                v23 = 1;
              v22 = *(_QWORD *)(v22 + 64);
              if ( !v22 )
                goto LABEL_40;
            }
            v23 = 2;
LABEL_40:
            i = v100;
          }
          pDiscarded = a3->pDiscarded;
          if ( pDiscarded )
          {
            v35 = &pDiscarded[v97 / 4];
            if ( (unsigned __int64)&pDiscarded[v97 / 4] >= MmUserProbeAddress )
              v35 = (BOOL *)MmUserProbeAddress;
            *v35 = v23;
          }
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v95);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v90);
        }
LABEL_100:
        if ( v6 )
          ExReleaseRundownProtection(v6 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v7, (__int64)a2) + 247) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v73 = WdLogNewEntry5_WdAssertion(v71, v70);
            *(_QWORD *)(v73 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v73);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v71, v70);
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v75 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v75 = *ThreadWin32Thread;
            }
            if ( v75 )
              v79 = *(_QWORD *)(v75 + 80);
            else
              v79 = 0LL;
            if ( v79 )
            {
              v80 = KeGetCurrentThread();
              if ( !v80 )
              {
                v81 = WdLogNewEntry5_WdAssertion(v77, v76);
                *(_QWORD *)(v81 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v81);
              }
              v84 = PsGetCurrentProcessSessionId(v77, v76);
              if ( !v84 || (unsigned int)PsGetThreadSessionId(v80) != v84 )
                goto LABEL_123;
              v85 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v86 = (__int64 *)PsGetThreadWin32Thread(v80);
                if ( v86 )
                  v85 = *v86;
              }
              if ( v85 )
                v87 = *(_QWORD *)(v85 + 80);
              else
LABEL_123:
                v87 = 0LL;
              if ( *(_DWORD *)(v87 + 136) )
              {
                v88 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v83, v82);
                v88[3] = 275LL;
                v88[4] = 38LL;
                v88[5] = *(int *)(v87 + 136);
                v88[6] = 0LL;
                v88[7] = 0LL;
                WdLogEvent5_WdCriticalError(v88);
              }
            }
          }
        }
        return v12;
      }
    }
    else if ( a3->HandleList )
    {
      for ( j = 0; j < a3->NumAllocations; ++j )
      {
        v101 = j;
        v37 = (unsigned int *)&a3->HandleList[v101];
        if ( (unsigned __int64)v37 >= MmUserProbeAddress )
          v37 = (unsigned int *)MmUserProbeAddress;
        v92 = *v37;
        AllocationSafe = DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v98, v92);
        if ( v6 )
          ExReleaseRundownProtection(v6 + 11);
        v6 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
        v89 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
        *(_QWORD *)AllocationSafe = 0LL;
        v40 = (__int64)v98;
        if ( v98 )
          ExReleaseRundownProtection(v98 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v40, v38) + 247) )
        {
          v44 = KeGetCurrentThread();
          if ( !v44 )
          {
            v45 = WdLogNewEntry5_WdAssertion(v42, v41);
            *(_QWORD *)(v45 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v45);
          }
          v46 = PsGetCurrentProcessSessionId(v42, v41);
          if ( !v46 || (unsigned int)PsGetThreadSessionId(v44) != v46 )
            goto LABEL_79;
          v47 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v48 = (__int64 *)PsGetThreadWin32Thread(v44);
            if ( v48 )
              v47 = *v48;
          }
          if ( !(v47 ? *(_QWORD *)(v47 + 80) : 0LL) )
            goto LABEL_79;
          v50 = KeGetCurrentThread();
          if ( !v50 )
          {
            v51 = WdLogNewEntry5_WdAssertion(v42, v41);
            *(_QWORD *)(v51 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v51);
          }
          v52 = PsGetCurrentProcessSessionId(v42, v41);
          if ( !v52 || (unsigned int)PsGetThreadSessionId(v50) != v52 )
            goto LABEL_76;
          v53 = 0LL;
          if ( !IsThreadCrossSessionAttached() )
          {
            v54 = (__int64 *)PsGetThreadWin32Thread(v50);
            if ( v54 )
              v53 = *v54;
          }
          if ( v53 )
            v55 = *(_QWORD *)(v53 + 80);
          else
LABEL_76:
            v55 = 0LL;
          if ( *(_DWORD *)(v55 + 136) )
          {
            v56 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v42, v41);
            v56[3] = 275LL;
            v56[4] = 38LL;
            v56[5] = *(int *)(v55 + 136);
            v56[6] = 0LL;
            v56[7] = 0LL;
            WdLogEvent5_WdCriticalError(v56);
            v6 = v89;
          }
          else
          {
LABEL_79:
            v6 = v89;
          }
        }
        if ( !v6 )
        {
          v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v41, v43);
          v57[3] = this;
          v57[4] = v92;
          v57[5] = -1073741811LL;
          goto LABEL_128;
        }
        if ( (DXGDEVICE *)v6[1].Count != this )
        {
          v58 = WdLogNewEntry5_WdError(v42, v41, v43);
          *(_QWORD *)(v58 + 24) = this;
          *(struct _EX_RUNDOWN_REF *)(v58 + 32) = v6[1];
          WdLogEvent5_WdError(v58);
          goto LABEL_129;
        }
        Count = v6[3].Count;
        if ( !Count )
        {
          v60 = WdLogNewEntry5_WdError(v42, v41, 0LL);
          *(_QWORD *)(v60 + 24) = v6;
          WdLogEvent5_WdError(v60);
          goto LABEL_129;
        }
        v93 = 0;
        v61 = &v93;
        if ( !a3->pDiscarded )
          v61 = 0LL;
        if ( v4 )
          v62 = *((_QWORD *)v4 + 4);
        else
          v62 = 0LL;
        v63 = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, UINT64 *, int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL)
                                                                                                 + 8LL)
                                                                                     + 672LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
                v62,
                Count,
                &a3->PagingFenceValue,
                v61);
        v66 = v63;
        if ( v63 < 0 )
        {
          v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v64, a2, v65);
          v67[3] = this;
          v67[4] = v6;
          v67[5] = v66;
          WdLogEvent5_WdWarning(v67);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v89, v68);
          return (unsigned int)v66;
        }
        v7 = 259LL;
        if ( v63 == 259 )
          v12 = 259;
        v69 = a3->pDiscarded;
        if ( v69 )
        {
          a2 = (struct DXGPAGINGQUEUE *)&v69[v101];
          v7 = MmUserProbeAddress;
          if ( (unsigned __int64)&v69[v101] >= MmUserProbeAddress )
            a2 = (struct DXGPAGINGQUEUE *)MmUserProbeAddress;
          *(_DWORD *)a2 = v93;
        }
      }
      goto LABEL_100;
    }
  }
  v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, a2, a3);
  v57[3] = this;
  v57[4] = -1073741811LL;
LABEL_128:
  WdLogEvent5_WdWarning(v57);
LABEL_129:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v89, v19);
  return 3221225485LL;
}
