/*
 * XREFs of DxgkCheckVidPnExclusiveOwnership @ 0x1C0134AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C000B9D0 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckVidPnExclusiveOwnership(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGADAPTER *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct DXGADAPTER *v20; // rbx
  char *v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
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
  __int64 v37; // rdx
  __int64 v38; // rcx
  const GUID *v39; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  const GUID *v46; // r8
  __int64 v47; // rax
  DXGADAPTER *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  const GUID *v51; // r8
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  const GUID *v55; // r8
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rax
  _QWORD *v59; // rax
  __int64 v60; // rax
  DXGADAPTER *v61; // [rsp+30h] [rbp-78h] BYREF
  int v62; // [rsp+40h] [rbp-68h] BYREF
  __int64 v63; // [rsp+48h] [rbp-60h]
  char v64; // [rsp+50h] [rbp-58h]
  _QWORD v65[2]; // [rsp+58h] [rbp-50h] BYREF
  char v66; // [rsp+68h] [rbp-40h]
  struct DXGADAPTER *v67; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v68; // [rsp+C0h] [rbp+18h]

  v3 = (__int64 *)a1;
  v62 = -1;
  v63 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v64 = 1;
    v62 = 2058;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2058);
  }
  else
  {
    v64 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v62, 2058LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v42 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v11 = *v42;
    }
  }
  if ( !v11 )
  {
    v43 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v43);
    goto LABEL_39;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v68 = *v3;
  v12 = v68;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v61,
    (unsigned int)v68,
    (struct _KTHREAD **)v11,
    &v67,
    1);
  v16 = v67;
  if ( !v67 )
  {
    v47 = WdLogNewEntry5_WdWarning(v14, v13, v15);
    *(_QWORD *)(v47 + 24) = v12;
    *(_QWORD *)(v47 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v47);
    v48 = v61;
    if ( !v61 )
      goto LABEL_39;
    goto LABEL_44;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v11 + 96) + 208LL))() )
  {
    v36 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v18, v17) + 24) = -1071775738LL;
    if ( v61 )
      DXGADAPTER::ReleaseReferenceNoTracking(v61);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62, v49);
    if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v50, &EventProfilerExit, v51, v62);
    return v36;
  }
  if ( !*((_QWORD *)v16 + 319) )
  {
    v52 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v52 + 24) = v16;
    *(_QWORD *)(v52 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v52);
    v48 = v61;
    if ( !v61 )
    {
LABEL_39:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62, v44);
      if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v45, &EventProfilerExit, v46, v62);
      return 3221225485LL;
    }
LABEL_44:
    DXGADAPTER::ReleaseReferenceNoTracking(v48);
    goto LABEL_39;
  }
  v65[1] = v16;
  _InterlockedIncrement64((volatile signed __int64 *)v16 + 3);
  v65[0] = -1LL;
  KeEnterCriticalRegion();
  v20 = v67;
  v21 = (char *)v67 + 120;
  ExAcquirePushLockSharedEx((char *)v67 + 120, 0LL);
  v66 = 1;
  if ( *((_DWORD *)v20 + 44) == 1 )
  {
    v25 = HIDWORD(v68);
    if ( HIDWORD(v68) < *(_DWORD *)(*((_QWORD *)v16 + 319) + 80LL) )
    {
      v26 = v67;
      v27 = *(unsigned int *)(*((_QWORD *)v67 + 2) + 528LL);
      if ( (int)v27 <= 0 )
      {
        v57 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v22);
        v36 = -1071775738;
        v57[3] = -1071775738LL;
        v57[4] = v67;
        v57[5] = HIDWORD(v68);
      }
      else
      {
        v28 = *((_QWORD *)v16 + 319);
        v29 = *(_QWORD *)(v28 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v29 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v29 + 144));
        v30 = HIDWORD(v68);
        if ( HIDWORD(v68) >= *(_DWORD *)(v28 + 80) )
        {
          v58 = WdLogNewEntry5_WdAssertion(v29, v22);
          *(_QWORD *)(v58 + 24) = 5502LL;
          WdLogEvent5_WdAssertion(v58);
        }
        v31 = v30;
        v32 = 3968 * v30;
        if ( *(_BYTE *)(*(_QWORD *)(v28 + 112) + v32 + 722) )
        {
          v33 = *((_QWORD *)v16 + 319);
          v34 = *(_QWORD *)(v33 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v34 + 160) )
            ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v34 + 144));
          if ( HIDWORD(v68) >= *(_DWORD *)(v33 + 80) )
          {
            v60 = WdLogNewEntry5_WdAssertion(v34, v22);
            *(_QWORD *)(v60 + 24) = 5842LL;
            WdLogEvent5_WdAssertion(v60);
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
          v59 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v22);
          v59[3] = -1071775739LL;
          v59[4] = v67;
          v59[5] = v31;
          v36 = -1071775739;
        }
      }
      ExReleasePushLockSharedEx(v21, 0LL);
      KeLeaveCriticalRegion();
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v26 + 2), v67);
      if ( v61 && _InterlockedExchangeAdd64((volatile signed __int64 *)v61 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v61 + 2), v61);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62, v37);
      if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      {
        McTemplateK0q(v38, &EventProfilerExit, v39, v62);
        return v36;
      }
      return v36;
    }
    v56 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v56 + 24) = v25;
    *(_QWORD *)(v56 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v56);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
    v48 = v61;
    if ( !v61 )
      goto LABEL_39;
    goto LABEL_44;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v65);
  if ( v61 )
    DXGADAPTER::ReleaseReferenceNoTracking(v61);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v62, v53);
  if ( v64 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v54, &EventProfilerExit, v55, v62);
  return 3221226166LL;
}
