/*
 * XREFs of ?OfferAllocations@DXGDEVICE@@QEAAJPEAU_D3DKMT_OFFERALLOCATIONS@@@Z @ 0x1C0109860
 * Callers:
 *     DxgkOfferAllocations @ 0x1C010BA10 (DxgkOfferAllocations.c)
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

__int64 __fastcall DXGDEVICE::OfferAllocations(DXGDEVICE *this, struct _D3DKMT_OFFERALLOCATIONS *a2)
{
  struct _EX_RUNDOWN_REF *v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  UINT i; // r12d
  D3DKMT_HANDLE *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r14
  _QWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  UINT j; // r14d
  const D3DKMT_HANDLE *v28; // rdx
  __int64 v29; // rdx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct _KTHREAD *v35; // rdi
  __int64 v36; // rax
  int v37; // ebx
  __int64 v38; // rbx
  __int64 *v39; // rax
  __int64 v40; // rax
  struct _KTHREAD *v41; // rdi
  __int64 v42; // rax
  int v43; // ebx
  __int64 v44; // rbx
  __int64 *v45; // rax
  __int64 v46; // rbx
  _QWORD *v47; // rax
  _QWORD *v48; // rax
  _QWORD *v49; // rax
  ULONG_PTR Count; // rdx
  __int64 v51; // rax
  int v52; // eax
  __int64 v53; // r8
  __int64 v54; // rdi
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v60; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v66; // rax
  struct _KTHREAD *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // ebx
  __int64 v72; // rbx
  __int64 *v73; // rax
  __int64 v74; // rbx
  _QWORD *v75; // rax
  __int64 v76; // [rsp+30h] [rbp-58h] BYREF
  struct _EX_RUNDOWN_REF *v77; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v78[72]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v79; // [rsp+A0h] [rbp+18h]
  struct _EX_RUNDOWN_REF *v80; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0LL;
  v80 = 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  if ( !*(_BYTE *)(v5 + 2469) )
  {
    v6 = WdLogNewEntry5_WdEvent(this);
    *(_QWORD *)(v6 + 24) = this;
    *(_QWORD *)(v6 + 32) = 0LL;
    WdLogEvent5_WdEvent(v6);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v80, v7);
    return 0LL;
  }
  if ( a2->NumAllocations )
  {
    if ( a2->pResources )
    {
      if ( !a2->HandleList )
      {
        for ( i = 0; i < a2->NumAllocations; ++i )
        {
          v10 = &a2->pResources[i];
          if ( (unsigned __int64)v10 >= MmUserProbeAddress )
            v10 = (D3DKMT_HANDLE *)MmUserProbeAddress;
          v11 = *v10;
          DXGPROCESS::GetResourceSafe(*((_QWORD *)this + 5), (DXGRESOURCEREFERENCE *)&v76, v11);
          if ( !v76 )
          {
            v14 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, 0LL, v13);
            v14[3] = this;
            v14[4] = v11;
            v14[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v14);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v76);
            goto LABEL_93;
          }
          if ( *(DXGDEVICE **)(v76 + 8) != this )
          {
            v16 = (_QWORD *)WdLogNewEntry5_WdError(v12, v76, v13);
            v16[3] = this;
            v16[4] = v76;
            v16[5] = -1073741811LL;
            WdLogEvent5_WdError(v16);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v76);
            goto LABEL_93;
          }
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v78, (struct DXGFASTMUTEX *const)(v76 + 80), 0);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v78);
          v19 = *(_QWORD *)(v76 + 24);
          if ( v19 )
          {
            while ( 1 )
            {
              v20 = *(_QWORD *)(v19 + 24);
              if ( !v20 )
                break;
              v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL)
                                                                                           + 8LL)
                                                                               + 664LL))(
                      *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
                      v20,
                      (unsigned int)a2->Priority,
                      a2->Flags.Value);
              v23 = v21;
              if ( v21 < 0 )
              {
                v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v22, v18);
                v24[3] = this;
                v24[4] = v19;
                v24[5] = v23;
                WdLogEvent5_WdWarning(v24);
                DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v78);
                DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v76);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v80, v25);
                return (unsigned int)v23;
              }
              v19 = *(_QWORD *)(v19 + 64);
              if ( !v19 )
                goto LABEL_18;
            }
            v26 = WdLogNewEntry5_WdError(v17, 0LL, v18);
            *(_QWORD *)(v26 + 24) = v19;
            WdLogEvent5_WdError(v26);
            DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v78);
            DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v76);
            goto LABEL_93;
          }
LABEL_18:
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v78);
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v76);
        }
LABEL_64:
        if ( v4 )
          ExReleaseRundownProtection(v4 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 247) )
        {
          CurrentThread = KeGetCurrentThread();
          if ( !CurrentThread )
          {
            v60 = WdLogNewEntry5_WdAssertion(v58, v57);
            *(_QWORD *)(v60 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v60);
          }
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v58, v57);
          if ( CurrentProcessSessionId && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId )
          {
            v62 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
              if ( ThreadWin32Thread )
                v62 = *ThreadWin32Thread;
            }
            if ( v62 )
              v66 = *(_QWORD *)(v62 + 80);
            else
              v66 = 0LL;
            if ( v66 )
            {
              v67 = KeGetCurrentThread();
              if ( !v67 )
              {
                v68 = WdLogNewEntry5_WdAssertion(v64, v63);
                *(_QWORD *)(v68 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v68);
              }
              v71 = PsGetCurrentProcessSessionId(v64, v63);
              if ( !v71 || (unsigned int)PsGetThreadSessionId(v67) != v71 )
                goto LABEL_87;
              v72 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v73 = (__int64 *)PsGetThreadWin32Thread(v67);
                if ( v73 )
                  v72 = *v73;
              }
              if ( v72 )
                v74 = *(_QWORD *)(v72 + 80);
              else
LABEL_87:
                v74 = 0LL;
              if ( *(_DWORD *)(v74 + 136) )
              {
                v75 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v70, v69);
                v75[3] = 275LL;
                v75[4] = 38LL;
                v75[5] = *(int *)(v74 + 136);
                v75[6] = 0LL;
                v75[7] = 0LL;
                WdLogEvent5_WdCriticalError(v75);
              }
            }
          }
        }
        return 0LL;
      }
    }
    else if ( a2->HandleList )
    {
      for ( j = 0; j < a2->NumAllocations; ++j )
      {
        v28 = &a2->HandleList[j];
        if ( (unsigned __int64)v28 >= MmUserProbeAddress )
          v28 = (const D3DKMT_HANDLE *)MmUserProbeAddress;
        v79 = *v28;
        AllocationSafe = DXGPROCESS::GetAllocationSafe(*((_QWORD *)this + 5), (DXGALLOCATIONREFERENCE *)&v77, *v28);
        if ( v4 )
          ExReleaseRundownProtection(v4 + 11);
        v4 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
        v80 = *(struct _EX_RUNDOWN_REF **)AllocationSafe;
        *(_QWORD *)AllocationSafe = 0LL;
        v31 = (__int64)v77;
        if ( v77 )
          ExReleaseRundownProtection(v77 + 11);
        if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v31, v29) + 247) )
        {
          v35 = KeGetCurrentThread();
          if ( !v35 )
          {
            v36 = WdLogNewEntry5_WdAssertion(v33, v32);
            *(_QWORD *)(v36 + 24) = 94LL;
            WdLogEvent5_WdAssertion(v36);
          }
          v37 = PsGetCurrentProcessSessionId(v33, v32);
          if ( v37 && (unsigned int)PsGetThreadSessionId(v35) == v37 )
          {
            v38 = 0LL;
            if ( !IsThreadCrossSessionAttached() )
            {
              v39 = (__int64 *)PsGetThreadWin32Thread(v35);
              if ( v39 )
                v38 = *v39;
            }
            if ( v38 )
              v40 = *(_QWORD *)(v38 + 80);
            else
              v40 = 0LL;
            if ( v40 )
            {
              v41 = KeGetCurrentThread();
              if ( !v41 )
              {
                v42 = WdLogNewEntry5_WdAssertion(v33, v32);
                *(_QWORD *)(v42 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v42);
              }
              v43 = PsGetCurrentProcessSessionId(v33, v32);
              if ( !v43 || (unsigned int)PsGetThreadSessionId(v41) != v43 )
                goto LABEL_51;
              v44 = 0LL;
              if ( !IsThreadCrossSessionAttached() )
              {
                v45 = (__int64 *)PsGetThreadWin32Thread(v41);
                if ( v45 )
                  v44 = *v45;
              }
              if ( v44 )
                v46 = *(_QWORD *)(v44 + 80);
              else
LABEL_51:
                v46 = 0LL;
              if ( *(_DWORD *)(v46 + 136) )
              {
                v47 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33, v32);
                v47[3] = 275LL;
                v47[4] = 38LL;
                v47[5] = *(int *)(v46 + 136);
                v47[6] = 0LL;
                v47[7] = 0LL;
                WdLogEvent5_WdCriticalError(v47);
              }
            }
          }
          v4 = v80;
        }
        if ( !v4 )
        {
          v48 = (_QWORD *)WdLogNewEntry5_WdWarning(v33, v32, v34);
          v48[3] = this;
          v48[4] = v79;
          v48[5] = -1073741811LL;
          goto LABEL_92;
        }
        if ( (DXGDEVICE *)v4[1].Count != this )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32, v34);
          v49[3] = this;
          v49[4] = v4;
          v49[5] = -1073741811LL;
          WdLogEvent5_WdError(v49);
          goto LABEL_93;
        }
        Count = v4[3].Count;
        if ( !Count )
        {
          v51 = WdLogNewEntry5_WdError(v33, 0LL, v34);
          *(_QWORD *)(v51 + 24) = v4;
          WdLogEvent5_WdError(v51);
          goto LABEL_93;
        }
        v52 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL)
                                                                                       + 8LL)
                                                                           + 664LL))(
                *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
                Count,
                (unsigned int)a2->Priority,
                a2->Flags.Value);
        v54 = v52;
        if ( v52 < 0 )
        {
          v55 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, v53);
          v55[3] = this;
          v55[4] = v4;
          v55[5] = v54;
          WdLogEvent5_WdWarning(v55);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v80, v56);
          return (unsigned int)v54;
        }
      }
      goto LABEL_64;
    }
  }
  v48 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, v5);
  v48[3] = this;
  v48[4] = -1073741811LL;
LABEL_92:
  WdLogEvent5_WdWarning(v48);
LABEL_93:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v80, v15);
  return 3221225485LL;
}
