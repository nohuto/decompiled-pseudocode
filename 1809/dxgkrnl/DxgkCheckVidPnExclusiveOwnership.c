/*
 * XREFs of DxgkCheckVidPnExclusiveOwnership @ 0x1C0128FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C00124D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckVidPnExclusiveOwnership(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // r14
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGADAPTER *v19; // rbx
  char *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  struct DXGADAPTER *v26; // r13
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // r14
  __int64 v33; // rbx
  __int64 v34; // rcx
  int v35; // ecx
  unsigned int v36; // ebx
  __int64 v37; // rcx
  const GUID *v38; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  const GUID *v44; // r8
  __int64 v45; // rax
  DXGADAPTER *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rcx
  const GUID *v49; // r8
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rax
  __int64 v54; // rax
  DXGADAPTER *v55; // [rsp+30h] [rbp-78h] BYREF
  int v56; // [rsp+40h] [rbp-68h] BYREF
  __int64 v57; // [rsp+48h] [rbp-60h]
  char v58; // [rsp+50h] [rbp-58h]
  _QWORD v59[2]; // [rsp+58h] [rbp-50h] BYREF
  char v60; // [rsp+68h] [rbp-40h]
  struct DXGADAPTER *v61; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v62; // [rsp+C0h] [rbp+18h]

  v3 = (__int64 *)a1;
  v56 = -1;
  v57 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v58 = 1;
    v56 = 2058;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2058);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 2058);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v41 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v41;
      }
    }
  }
  if ( !v9 )
  {
    v42 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( !v58 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_60;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v62 = *v3;
  v10 = v62;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v55, v62, (struct _KTHREAD **)v9, &v61, 1);
  v14 = v61;
  if ( !v61 )
  {
    v45 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v45 + 24) = v10;
    *(_QWORD *)(v45 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v45);
    v46 = v55;
    if ( !v55 )
    {
LABEL_43:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
      if ( !v58 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
      goto LABEL_60;
    }
LABEL_42:
    DXGADAPTER::ReleaseReference(v46);
    goto LABEL_43;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v9 + 104) + 208LL))() )
  {
    v36 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = -1071775738LL;
    if ( v55 )
      DXGADAPTER::ReleaseReference(v55);
    goto LABEL_31;
  }
  if ( !*((_QWORD *)v14 + 315) )
  {
    v47 = WdLogNewEntry5_WdWarning(v16, v15, v17);
    *(_QWORD *)(v47 + 24) = v14;
    *(_QWORD *)(v47 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v47);
    v46 = v55;
    if ( !v55 )
      goto LABEL_43;
    goto LABEL_42;
  }
  v59[1] = v14;
  _InterlockedIncrement64((volatile signed __int64 *)v14 + 3);
  v59[0] = -1LL;
  KeEnterCriticalRegion();
  v19 = v61;
  v20 = (char *)v61 + 120;
  ExAcquirePushLockSharedEx((char *)v61 + 120, 0LL);
  v60 = 1;
  if ( *((_DWORD *)v19 + 44) == 1 )
  {
    v25 = HIDWORD(v62);
    if ( HIDWORD(v62) < *(_DWORD *)(*((_QWORD *)v14 + 315) + 80LL) )
    {
      v26 = v61;
      v27 = *(unsigned int *)(*((_QWORD *)v61 + 2) + 528LL);
      if ( (int)v27 <= 0 )
      {
        v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v21, v23, v24);
        v36 = -1071775738;
        v51[3] = -1071775738LL;
        v51[4] = v61;
        v51[5] = HIDWORD(v62);
      }
      else
      {
        v28 = *((_QWORD *)v14 + 315);
        v29 = *(_QWORD *)(v28 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v29 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v29 + 144));
        v30 = HIDWORD(v62);
        if ( HIDWORD(v62) >= *(_DWORD *)(v28 + 80) )
        {
          v52 = WdLogNewEntry5_WdAssertion(v29);
          *(_QWORD *)(v52 + 24) = 5266LL;
          WdLogEvent5_WdAssertion(v52);
        }
        v31 = v30;
        v32 = 3760 * v30;
        if ( *(_BYTE *)(*(_QWORD *)(v28 + 112) + v32 + 722) )
        {
          v33 = *((_QWORD *)v14 + 315);
          v34 = *(_QWORD *)(v33 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v34 + 160) )
            ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v34 + 144));
          if ( HIDWORD(v62) >= *(_DWORD *)(v33 + 80) )
          {
            v54 = WdLogNewEntry5_WdAssertion(v34);
            *(_QWORD *)(v54 + 24) = 5606LL;
            WdLogEvent5_WdAssertion(v54);
          }
          v35 = *(_DWORD *)(*(_QWORD *)(v33 + 112) + v32 + 696);
          if ( (unsigned int)(v35 - 2) <= 1 )
          {
            v36 = -1071775738;
          }
          else if ( v35 )
          {
            v36 = 0;
          }
          else
          {
            v36 = -1071775732;
          }
        }
        else
        {
          v53 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v21, v23, v24);
          v53[3] = -1071775739LL;
          v53[4] = v61;
          v53[5] = v31;
          v36 = -1071775739;
        }
      }
      ExReleasePushLockSharedEx(v20, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v26 + 2), v61);
      if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v55 + 2), v55);
LABEL_31:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
      if ( v58 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v37, &EventProfilerExit, v38, v56);
      }
      return v36;
    }
    v50 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v50 + 24) = v25;
    *(_QWORD *)(v50 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v50);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
    if ( v55 )
      DXGADAPTER::ReleaseReference(v55);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( !v58 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_60:
    McTemplateK0q(v43, &EventProfilerExit, v44, v56);
    return 3221225485LL;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
  if ( v55 )
    DXGADAPTER::ReleaseReference(v55);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
  if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v48, &EventProfilerExit, v49, v56);
  return 3221226166LL;
}
