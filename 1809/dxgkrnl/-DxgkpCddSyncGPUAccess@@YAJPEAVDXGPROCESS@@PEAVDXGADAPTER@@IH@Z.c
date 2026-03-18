/*
 * XREFs of ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@PEAVDXGADAPTER@@IH@Z @ 0x1C00EBFB0
 * Callers:
 *     ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C00EBF10 (-DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z.c)
 *     ?VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EBAE0 (-VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C0011778 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0020F7C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01BD354 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkpCddSyncGPUAccess(struct _KTHREAD **a1, struct DXGADAPTER *a2, unsigned int a3, int a4)
{
  __int64 v4; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ebx
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rax
  char *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  const GUID *v18; // r8
  int v19; // r9d
  __int64 v20; // rax
  struct _KTHREAD *v21; // r9
  int v22; // edx
  struct DXGALLOCATION **v23; // rax
  __int64 v24; // rax
  struct DXGALLOCATION *v25; // rdx
  struct DXGALLOCATION *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  struct _KTHREAD *CurrentThread; // r14
  __int64 v31; // rax
  int CurrentProcessSessionId; // r15d
  __int64 *ThreadWin32Thread; // rax
  __int64 v34; // rax
  struct _KTHREAD *v35; // r14
  __int64 v36; // rax
  int v37; // r15d
  __int64 v38; // rax
  __int64 v39; // r14
  _QWORD *v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  ULONG_PTR Count; // r15
  struct _KEVENT *v44; // rbx
  __int64 v45; // rcx
  unsigned __int8 v46; // bl
  const GUID *v47; // r8
  __int64 v48; // r13
  volatile signed __int64 *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // r8
  struct _MDL *v52; // r9
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  _QWORD *v56; // rax
  struct DXGADAPTER *v57; // rcx
  DXGADAPTER *v58; // rcx
  __int64 v59; // rcx
  struct _KTHREAD *v60; // rsi
  __int64 v61; // rax
  int v62; // r14d
  __int64 *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rax
  struct _KTHREAD *v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rcx
  int v69; // r14d
  __int64 v70; // rax
  __int64 v71; // rsi
  __int64 v72; // rax
  struct _EX_RUNDOWN_REF *v73; // rbx
  _QWORD *v74; // rax
  unsigned int v75; // r12d
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  struct DXGADAPTER *v81; // [rsp+30h] [rbp-D0h]
  struct _EX_RUNDOWN_REF *v82; // [rsp+38h] [rbp-C8h] BYREF
  struct _KTHREAD **v83[2]; // [rsp+58h] [rbp-A8h] BYREF
  DXGADAPTER *v84; // [rsp+68h] [rbp-98h]
  char v85; // [rsp+70h] [rbp-90h]
  struct _KTHREAD **v86[2]; // [rsp+78h] [rbp-88h] BYREF
  struct DXGADAPTER *v87; // [rsp+88h] [rbp-78h]
  char v88; // [rsp+90h] [rbp-70h]
  struct _EX_RUNDOWN_REF *v89; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v90[8]; // [rsp+A8h] [rbp-58h] BYREF
  char v91; // [rsp+B0h] [rbp-50h]
  __int64 v92; // [rsp+B8h] [rbp-48h] BYREF
  int v93; // [rsp+C0h] [rbp-40h]
  int v94; // [rsp+C4h] [rbp-3Ch]
  int v95; // [rsp+C8h] [rbp-38h]
  int v96; // [rsp+D0h] [rbp-30h]
  bool v97; // [rsp+D4h] [rbp-2Ch]
  _BYTE v98[8]; // [rsp+D8h] [rbp-28h] BYREF
  char *v99; // [rsp+E0h] [rbp-20h]
  int v100; // [rsp+E8h] [rbp-18h]
  char v102; // [rsp+148h] [rbp+48h]
  char v103; // [rsp+150h] [rbp+50h]
  unsigned int v104; // [rsp+150h] [rbp+50h]

  v103 = a3;
  v4 = a3;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v7 + 24) = 7156LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *((_QWORD *)a2 + 315);
  if ( v8 && !*(_DWORD *)(v8 + 80) )
  {
    v9 = WdLogNewEntry5_WdError(a1);
    v10 = -1073741811;
    *(_QWORD *)(v9 + 24) = 0LL;
    *(_QWORD *)(v9 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_127:
    v79 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v79 + 32) = (int)v10;
    *(_QWORD *)(v79 + 24) = a2;
    WdLogEvent5_WdError(v79);
    return v10;
  }
  if ( *((_QWORD *)a2 + 316) )
  {
    _InterlockedIncrement64((volatile signed __int64 *)a2 + 3);
    v81 = a2;
    v12 = a2;
  }
  else
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v90);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v90);
    v12 = (struct DXGADAPTER *)*((_QWORD *)DXGGLOBAL::GetGlobal(v13) + 80);
    if ( !v12 )
    {
      v78 = WdLogNewEntry5_WdError(a1);
      *(_QWORD *)(v78 + 24) = a2;
      *(_QWORD *)(v78 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v78);
      if ( v91 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v90);
      v10 = -1073741637;
      goto LABEL_127;
    }
    _InterlockedIncrement64((volatile signed __int64 *)v12 + 3);
    v81 = v12;
    if ( v91 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v90);
  }
  if ( !v12 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v14 + 24) = 2019LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = (char *)(a1 + 26);
  v82 = 0LL;
  v99 = (char *)(a1 + 26);
  if ( a1 != (struct _KTHREAD **)-208LL && a1[27] == KeGetCurrentThread() )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v16 + 24) = 1309LL;
    WdLogEvent5_WdAssertion(v16);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(a1 + 26, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v19 = *((_DWORD *)a1 + 56);
      if ( v19 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v17, &EventBlockThread, v18, v19);
    }
    ExAcquirePushLockSharedEx(a1 + 26, 0LL);
  }
  v100 = 1;
  v20 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v20 >= *((_DWORD *)a1 + 62) )
    goto LABEL_28;
  v21 = a1[29];
  v22 = *((_DWORD *)v21 + 4 * v20 + 2);
  if ( (((unsigned int)v4 >> 25) & 0x60) != (*((_BYTE *)v21 + 16 * v20 + 8) & 0x60)
    || (v22 & 0x2000) != 0
    || (v22 & 0x1F) == 0 )
  {
    goto LABEL_28;
  }
  v23 = (struct DXGALLOCATION **)((char *)v21 + 16 * (unsigned int)v20);
  if ( (v22 & 0x1F) != 5 )
  {
    v24 = WdLogNewEntry5_WdError(((unsigned int)v4 >> 25) & 0x60);
    *(_QWORD *)(v24 + 24) = 316LL;
    WdLogEvent5_WdError(v24);
LABEL_28:
    v25 = 0LL;
    goto LABEL_29;
  }
  v25 = *v23;
LABEL_29:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v89, v25);
  DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v82, (struct DXGALLOCATION **)&v89);
  v26 = (struct DXGALLOCATION *)v89;
  if ( v89 )
    ExReleaseRundownProtection(v89 + 11);
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal((__int64)v26) + 255) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v31 = WdLogNewEntry5_WdAssertion(v28);
      *(_QWORD *)(v31 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v31);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v28);
    if ( CurrentProcessSessionId )
    {
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v34 = *ThreadWin32Thread;
          if ( v34 )
          {
            if ( *(_QWORD *)(v34 + 80) )
            {
              v35 = KeGetCurrentThread();
              if ( !v35 )
              {
                v36 = WdLogNewEntry5_WdAssertion(v28);
                *(_QWORD *)(v36 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v36);
              }
              v37 = PsGetCurrentProcessSessionId(v28);
              if ( v37
                && (unsigned int)PsGetThreadSessionId(v35) == v37
                && !IsThreadCrossSessionAttached()
                && (v38 = PsGetThreadWin32Thread(v35)) != 0
                && *(_QWORD *)v38 )
              {
                v39 = *(_QWORD *)(*(_QWORD *)v38 + 80LL);
              }
              else
              {
                v39 = 0LL;
              }
              if ( *(_DWORD *)(v39 + 136) )
              {
                v40 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v28);
                v40[3] = 275LL;
                v40[4] = 38LL;
                v40[5] = *(int *)(v39 + 136);
                v40[6] = 0LL;
                v40[7] = 0LL;
                WdLogEvent5_WdCriticalError(v40);
              }
            }
          }
        }
      }
    }
  }
  if ( v82 )
  {
    Count = v82[1].Count;
    ExReleasePushLockSharedEx(v15, 0LL);
    KeLeaveCriticalRegion();
    v44 = (struct _KEVENT *)(*(_QWORD *)(Count + 16) + 96LL);
    v102 = 1;
    if ( !KeReadStateEvent(v44) )
      KeWaitForSingleObject(v44, Executive, 0, 0, 0LL);
    KeEnterCriticalRegion();
    if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Count + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) + 96LL));
      v46 = DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(Count + 16) + 16LL));
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v45, &EventBlockThread, v47, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Count + 104), 1u);
      if ( v46 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(Count + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v48 = *(_QWORD *)(*(_QWORD *)(Count + 16) + 16LL);
    _InterlockedIncrement64((volatile signed __int64 *)(v48 + 24));
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v48 + 120, 0LL);
    v49 = (volatile signed __int64 *)v81;
    v84 = v81;
    v85 = 0;
    if ( v81 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)v81 + 3);
      v49 = (volatile signed __int64 *)v81;
      v83[1] = (struct _KTHREAD **)-1LL;
    }
    v87 = (struct DXGADAPTER *)v49;
    v88 = 0;
    if ( v49 )
    {
      _InterlockedIncrement64(v49 + 3);
      v49 = (volatile signed __int64 *)v81;
      v86[1] = (struct _KTHREAD **)-1LL;
    }
    if ( _InterlockedExchangeAdd64(v49 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v81 + 2), v81);
    COREACCESS::AcquireShared((DXGADAPTER **)v83);
    v53 = *((unsigned int *)v84 + 44);
    if ( (_DWORD)v53 == 1 )
    {
      if ( v84 == v87
        || (COREACCESS::AcquireShared((DXGADAPTER **)v86), v53 = *((unsigned int *)v87 + 44), (_DWORD)v53 == 1) )
      {
        if ( !*((_QWORD *)v81 + 316) )
        {
          v72 = WdLogNewEntry5_WdAssertion(v53);
          *(_QWORD *)(v72 + 24) = 2067LL;
          WdLogEvent5_WdAssertion(v72);
        }
        if ( *((_BYTE *)v81 + 185) )
        {
          v92 = 0LL;
          v94 = 0;
          v97 = a4 != 0;
          v93 = *((_DWORD *)a1 + 98);
          v95 = 47;
          v96 = v82[12].Count;
          v10 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                  (struct DXGADAPTER *)((char *)v81 + 4152),
                  (struct DXGKVMB_COMMAND_BASE *)&v92,
                  0x20u,
                  v52);
        }
        else
        {
          v73 = v82;
          if ( v82[3].Count )
          {
            v75 = 0;
            if ( a4 )
            {
              v75 = 1;
              *(_DWORD *)(v82[6].Count + 4) &= ~0x400u;
            }
            if ( v84 != v87 )
              COREACCESS::Release(v86);
            if ( !v85 )
            {
              v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v53);
              v76[5] = v83;
              v76[3] = 275LL;
              v76[4] = 4LL;
              v76[6] = 0LL;
              v76[7] = 0LL;
              WdLogEvent5_WdCriticalError(v76);
            }
            v104 = v103 & 0x3F;
            v85 = 0;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v84 + 20) )
              DXGADAPTER::ReleaseCoreResource(v84);
            ExReleaseResourceLite(*(PERESOURCE *)(Count + 104));
            KeLeaveCriticalRegion();
            v102 = 0;
            v10 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v81 + 316) + 544LL)
                                                                                           + 8LL)
                                                                               + 608LL))(
                    *(_QWORD *)(*((_QWORD *)v81 + 316) + 552LL),
                    v73[3].Count,
                    v104,
                    v75);
          }
          else
          {
            v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v50, v51);
            v74[4] = v73;
            v10 = -1073741811;
            v74[5] = -1073741811LL;
            v74[3] = v4;
            WdLogEvent5_WdWarning(v74);
          }
        }
        goto LABEL_74;
      }
      COREACCESS::Release(v86);
    }
    COREACCESS::Release(v83);
    v56 = (_QWORD *)WdLogNewEntry5_WdEvent(v55, v54);
    v10 = -1073741130;
    v56[5] = a1;
    v56[3] = -1073741130LL;
    v56[4] = a2;
    WdLogEvent5_WdEvent(v56);
LABEL_74:
    v57 = v87;
    if ( v87 )
    {
      if ( v88 )
      {
        COREACCESS::Release(v86);
        v57 = v87;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v57 + 2), v57);
    }
    v58 = v84;
    if ( v84 )
    {
      if ( v85 )
      {
        COREACCESS::Release(v83);
        v58 = v84;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v58 + 2), v58);
    }
    ExReleasePushLockSharedEx(v48 + 120, 0LL);
    KeLeaveCriticalRegion();
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v48 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v48 + 16), (struct DXGADAPTER *)v48);
    if ( v102 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(Count + 104));
      KeLeaveCriticalRegion();
    }
    ExReleaseRundownProtection(v82 + 11);
    goto LABEL_89;
  }
  v41 = WdLogNewEntry5_WdWarning(v28, v27, v29);
  v10 = -1073741811;
  *(_QWORD *)(v41 + 24) = v4;
  *(_QWORD *)(v41 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v41);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v98);
LABEL_89:
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v42) + 255) )
  {
    v60 = KeGetCurrentThread();
    if ( !v60 )
    {
      v61 = WdLogNewEntry5_WdAssertion(v59);
      *(_QWORD *)(v61 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v61);
    }
    v62 = PsGetCurrentProcessSessionId(v59);
    if ( v62 )
    {
      if ( (unsigned int)PsGetThreadSessionId(v60) == v62 && !IsThreadCrossSessionAttached() )
      {
        v63 = (__int64 *)PsGetThreadWin32Thread(v60);
        if ( v63 )
        {
          v65 = *v63;
          if ( v65 )
          {
            if ( *(_QWORD *)(v65 + 80) )
            {
              v66 = KeGetCurrentThread();
              if ( !v66 )
              {
                v67 = WdLogNewEntry5_WdAssertion(v64);
                *(_QWORD *)(v67 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v67);
              }
              v69 = PsGetCurrentProcessSessionId(v64);
              if ( v69
                && (unsigned int)PsGetThreadSessionId(v66) == v69
                && !IsThreadCrossSessionAttached()
                && (v70 = PsGetThreadWin32Thread(v66)) != 0
                && *(_QWORD *)v70 )
              {
                v71 = *(_QWORD *)(*(_QWORD *)v70 + 80LL);
              }
              else
              {
                v71 = 0LL;
              }
              if ( *(_DWORD *)(v71 + 136) )
              {
                v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v68);
                v77[3] = 275LL;
                v77[4] = 38LL;
                v77[5] = *(int *)(v71 + 136);
                v77[6] = 0LL;
                v77[7] = 0LL;
                WdLogEvent5_WdCriticalError(v77);
              }
            }
          }
        }
      }
    }
  }
  return v10;
}
