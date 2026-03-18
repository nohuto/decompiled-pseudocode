/*
 * XREFs of ?DxgkpCddSyncGPUAccess@@YAJPEAVDXGPROCESS@@IH@Z @ 0x1C013A890
 * Callers:
 *     ?DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z @ 0x1C013A800 (-DxgkCddSyncGPUAccess@@YAJPEAX0IH@Z.c)
 *     ?VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021BAF0 (-VmBusCddSyncGpuAccess@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C0023AB8 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010C150 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0228000 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkpCddSyncGPUAccess(struct _KTHREAD **a1, __int64 a2, int a3)
{
  char *v3; // rdi
  __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rcx
  const GUID *v8; // r8
  int v9; // r9d
  __int64 v10; // rax
  struct _KTHREAD *v11; // r9
  int v12; // edx
  __int64 v13; // r8
  __int64 v14; // rdx
  struct _EX_RUNDOWN_REF **v15; // rax
  __int64 v16; // rax
  struct _EX_RUNDOWN_REF *v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v25; // rax
  int CurrentProcessSessionId; // esi
  __int64 *ThreadWin32Thread; // rax
  __int64 v28; // rax
  struct _KTHREAD *v29; // rbx
  __int64 v30; // rax
  int v31; // esi
  __int64 v32; // rax
  __int64 v33; // rbx
  _QWORD *v34; // rax
  __int64 v35; // rax
  unsigned int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r14
  struct _KEVENT *v40; // rbx
  const GUID *v41; // r8
  __int64 v42; // rcx
  char v43; // bl
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct _MDL *v48; // r9
  _QWORD *v49; // rax
  struct DXGADAPTER *v50; // rcx
  __int64 v51; // rcx
  const GUID *v52; // r8
  __int64 v53; // rcx
  _QWORD *v54; // rax
  struct DXGADAPTER *v55; // rcx
  struct DXGADAPTER *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  struct _KTHREAD *v59; // rdi
  __int64 v60; // rax
  int v61; // esi
  __int64 *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  struct _KTHREAD *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  int v70; // esi
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rax
  _QWORD *v74; // rax
  unsigned int v75; // r15d
  _QWORD *v76; // rax
  _QWORD *v77; // rax
  char v79; // [rsp+38h] [rbp-D0h]
  __int64 v80; // [rsp+40h] [rbp-C8h]
  __int64 v82; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v83; // [rsp+58h] [rbp-B0h] BYREF
  int v84; // [rsp+60h] [rbp-A8h]
  int v85; // [rsp+64h] [rbp-A4h]
  int v86; // [rsp+68h] [rbp-A0h]
  int v87; // [rsp+70h] [rbp-98h]
  bool v88; // [rsp+74h] [rbp-94h]
  _QWORD v89[2]; // [rsp+78h] [rbp-90h] BYREF
  int v90; // [rsp+88h] [rbp-80h]
  _BYTE v91[8]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v92; // [rsp+A8h] [rbp-60h]
  struct DXGADAPTER *v93; // [rsp+B0h] [rbp-58h]
  char v94; // [rsp+B8h] [rbp-50h]
  int v95; // [rsp+BCh] [rbp-4Ch]
  __int64 v96; // [rsp+C0h] [rbp-48h]
  _BYTE v97[8]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v98; // [rsp+E8h] [rbp-20h]
  struct DXGADAPTER *v99; // [rsp+F0h] [rbp-18h]
  char v100; // [rsp+F8h] [rbp-10h]
  int v101; // [rsp+FCh] [rbp-Ch]
  __int64 v102; // [rsp+100h] [rbp-8h]

  v3 = (char *)(a1 + 23);
  v5 = (unsigned int)a2;
  v89[1] = a1 + 23;
  if ( a1 != (struct _KTHREAD **)-184LL && a1[24] == KeGetCurrentThread() )
  {
    v6 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v6 + 24) = 1449LL;
    WdLogEvent5_WdAssertion(v6);
  }
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v3, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v9 = *((_DWORD *)v3 + 4);
      if ( v9 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v7, &EventBlockThread, v8, v9);
    }
    ExAcquirePushLockSharedEx(v3, 0LL);
  }
  v90 = 1;
  v10 = ((unsigned int)v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v10 >= *((_DWORD *)a1 + 56) )
    goto LABEL_16;
  v11 = a1[26];
  v12 = *((_DWORD *)v11 + 4 * v10 + 2);
  if ( (((unsigned int)v5 >> 25) & 0x60) != (*((_BYTE *)v11 + 16 * v10 + 8) & 0x60)
    || (v12 & 0x2000) != 0
    || (v12 & 0x1F) == 0 )
  {
    goto LABEL_16;
  }
  v13 = 2LL * (unsigned int)v10;
  v14 = v12 & 0x1F;
  v15 = (struct _EX_RUNDOWN_REF **)((char *)v11 + 16 * (unsigned int)v10);
  if ( (_BYTE)v14 != 5 )
  {
    v16 = WdLogNewEntry5_WdError(((unsigned int)v5 >> 25) & 0x60, v14, v13);
    *(_QWORD *)(v16 + 24) = 267LL;
    WdLogEvent5_WdError(v16);
LABEL_16:
    v17 = 0LL;
    goto LABEL_17;
  }
  v17 = *v15;
LABEL_17:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v82, v17);
  v18 = v82;
  v80 = v82;
  v82 = 0LL;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v20, v19) + 247) )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v25 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v25 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v25);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v22, v21);
    if ( CurrentProcessSessionId )
    {
      if ( (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
        {
          v28 = *ThreadWin32Thread;
          if ( v28 )
          {
            if ( *(_QWORD *)(v28 + 80) )
            {
              v29 = KeGetCurrentThread();
              if ( !v29 )
              {
                v30 = WdLogNewEntry5_WdAssertion(v22, v21);
                *(_QWORD *)(v30 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v30);
              }
              v31 = PsGetCurrentProcessSessionId(v22, v21);
              if ( v31
                && (unsigned int)PsGetThreadSessionId(v29) == v31
                && !IsThreadCrossSessionAttached()
                && (v32 = PsGetThreadWin32Thread(v29)) != 0
                && *(_QWORD *)v32 )
              {
                v33 = *(_QWORD *)(*(_QWORD *)v32 + 80LL);
              }
              else
              {
                v33 = 0LL;
              }
              if ( *(_DWORD *)(v33 + 136) )
              {
                v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v22, v21);
                v34[3] = 275LL;
                v34[4] = 38LL;
                v34[5] = *(int *)(v33 + 136);
                v34[6] = 0LL;
                v34[7] = 0LL;
                WdLogEvent5_WdCriticalError(v34);
              }
            }
          }
        }
      }
    }
    v18 = v80;
  }
  if ( !v18 )
  {
    v35 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    v36 = -1073741811;
    *(_QWORD *)(v35 + 24) = v5;
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v35);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v89);
    goto LABEL_86;
  }
  v39 = *(_QWORD *)(v18 + 8);
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  v40 = (struct _KEVENT *)(*(_QWORD *)(v39 + 16) + 96LL);
  v79 = 1;
  if ( !KeReadStateEvent(v40) )
    KeWaitForSingleObject(v40, Executive, 0, 0, 0LL);
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v39 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL) + 96LL));
    v42 = *(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL);
    if ( *(_DWORD *)(v42 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v42, 0xFFFFFFFFLL);
      v43 = 1;
    }
    else
    {
      v43 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v42, &EventBlockThread, v41, 40);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v39 + 104), 1u);
    if ( v43 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v39 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  v44 = *(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL);
  _InterlockedIncrement64((volatile signed __int64 *)(v44 + 24));
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v44 + 120, 0LL);
  v93 = (struct DXGADAPTER *)v44;
  v94 = 0;
  v95 = -1;
  v96 = 0LL;
  if ( v44 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v44 + 24));
    v92 = -1LL;
  }
  v99 = (struct DXGADAPTER *)v44;
  v100 = 0;
  v101 = -1;
  v102 = 0LL;
  if ( v44 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(v44 + 24));
    v98 = -1LL;
  }
  if ( v94 )
  {
    v49 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v46, v45);
    v49[5] = v91;
    v49[3] = 275LL;
    v49[4] = 4LL;
    v49[6] = 0LL;
    v49[7] = 0LL;
    WdLogEvent5_WdCriticalError(v49);
  }
  v50 = v93;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v93 + 20) )
  {
    if ( !KeReadStateEvent((PRKEVENT)v93 + 2) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v51, &EventBlockThread, v52, 72);
      KeWaitForSingleObject((char *)v93 + 48, Executive, 0, 0, 0LL);
    }
    DXGADAPTER::AcquireCoreResourceShared((__int64)v93, 0xFFFFFFFF, 0LL);
    v50 = v93;
  }
  v95 = -1;
  v96 = 0LL;
  v94 = 1;
  if ( *((_DWORD *)v50 + 44) == 1 )
  {
    if ( v93 == v99
      || (COREACCESS::AcquireShared((__int64)v97, 0xFFFFFFFF, 0LL),
          v50 = (struct DXGADAPTER *)*((unsigned int *)v99 + 44),
          (_DWORD)v50 == 1) )
    {
      if ( !*(_QWORD *)(v44 + 2560) )
      {
        v73 = WdLogNewEntry5_WdAssertion(v50, v45);
        *(_QWORD *)(v73 + 24) = 2039LL;
        WdLogEvent5_WdAssertion(v73);
      }
      if ( *(_BYTE *)(v44 + 185) )
      {
        v84 = *((_DWORD *)a1 + 92);
        v88 = a3 != 0;
        v83 = 0LL;
        v85 = 0;
        v86 = 47;
        v87 = *(_DWORD *)(v80 + 96);
        v36 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                (DXG_VMBUS_CHANNEL_BASE *)(v44 + 4144),
                (struct DXGKVMB_COMMAND_BASE *)&v83,
                0x20u,
                v48);
      }
      else if ( *(_QWORD *)(v80 + 24) )
      {
        v75 = 0;
        if ( a3 )
        {
          v75 = 1;
          *(_DWORD *)(*(_QWORD *)(v80 + 48) + 4LL) &= ~0x400u;
        }
        if ( v93 != v99 )
          COREACCESS::Release((COREACCESS *)v97);
        if ( !v94 )
        {
          v76 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v50, v45);
          v76[5] = v91;
          v76[3] = 275LL;
          v76[4] = 4LL;
          v76[6] = 0LL;
          v76[7] = 0LL;
          WdLogEvent5_WdCriticalError(v76);
        }
        v94 = 0;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v93 + 20) )
          DXGADAPTER::ReleaseCoreResource((__int64)v93, v95, v96);
        v96 = 0LL;
        v95 = -1;
        ExReleaseResourceLite(*(PERESOURCE *)(v39 + 104));
        KeLeaveCriticalRegion();
        v79 = 0;
        v36 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 + 2560)
                                                                                                 + 544LL)
                                                                                     + 8LL)
                                                                         + 608LL))(
                *(_QWORD *)(*(_QWORD *)(v44 + 2560) + 552LL),
                *(_QWORD *)(v80 + 24),
                v5 & 0x3F,
                v75);
      }
      else
      {
        v74 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, v45, v47);
        v74[4] = v80;
        v36 = -1073741811;
        v74[5] = -1073741811LL;
        v74[3] = v5;
        WdLogEvent5_WdWarning(v74);
      }
      goto LABEL_71;
    }
    COREACCESS::Release((COREACCESS *)v97);
  }
  COREACCESS::Release((COREACCESS *)v91);
  v54 = (_QWORD *)WdLogNewEntry5_WdEvent(v53);
  v36 = -1073741130;
  v54[3] = -1073741130LL;
  v54[4] = v44;
  v54[5] = a1;
  WdLogEvent5_WdEvent(v54);
LABEL_71:
  v55 = v99;
  if ( v99 )
  {
    if ( v100 )
    {
      COREACCESS::Release((COREACCESS *)v97);
      v55 = v99;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v55 + 2), v55);
  }
  v56 = v93;
  if ( v93 )
  {
    if ( v94 )
    {
      COREACCESS::Release((COREACCESS *)v91);
      v56 = v93;
    }
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v56 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v56 + 2), v56);
  }
  ExReleasePushLockSharedEx(v44 + 120, 0LL);
  KeLeaveCriticalRegion();
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v44 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v44 + 16), (struct DXGADAPTER *)v44);
  if ( v79 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v39 + 104));
    KeLeaveCriticalRegion();
  }
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)(v80 + 88));
LABEL_86:
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v38, v37) + 247) )
  {
    v59 = KeGetCurrentThread();
    if ( !v59 )
    {
      v60 = WdLogNewEntry5_WdAssertion(v58, v57);
      *(_QWORD *)(v60 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v60);
    }
    v61 = PsGetCurrentProcessSessionId(v58, v57);
    if ( v61 )
    {
      if ( (unsigned int)PsGetThreadSessionId(v59) == v61 && !IsThreadCrossSessionAttached() )
      {
        v62 = (__int64 *)PsGetThreadWin32Thread(v59);
        if ( v62 )
        {
          v65 = *v62;
          if ( v65 )
          {
            if ( *(_QWORD *)(v65 + 80) )
            {
              v66 = KeGetCurrentThread();
              if ( !v66 )
              {
                v67 = WdLogNewEntry5_WdAssertion(v64, v63);
                *(_QWORD *)(v67 + 24) = 94LL;
                WdLogEvent5_WdAssertion(v67);
              }
              v70 = PsGetCurrentProcessSessionId(v64, v63);
              if ( v70
                && (unsigned int)PsGetThreadSessionId(v66) == v70
                && !IsThreadCrossSessionAttached()
                && (v71 = PsGetThreadWin32Thread(v66)) != 0
                && *(_QWORD *)v71 )
              {
                v72 = *(_QWORD *)(*(_QWORD *)v71 + 80LL);
              }
              else
              {
                v72 = 0LL;
              }
              if ( *(_DWORD *)(v72 + 136) )
              {
                v77 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v69, v68);
                v77[3] = 275LL;
                v77[4] = 38LL;
                v77[5] = *(int *)(v72 + 136);
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
  return v36;
}
