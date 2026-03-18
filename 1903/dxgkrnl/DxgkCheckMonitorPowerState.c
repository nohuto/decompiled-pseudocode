/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x1C01347A0
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
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C0154CD0 (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0241BC8 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckMonitorPowerState(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct DXGADAPTER *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DXGADAPTER *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct DXGADAPTER *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // r15
  __int64 v33; // rbx
  char v34; // al
  unsigned int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  const GUID *v38; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  const GUID *v45; // r8
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  const GUID *v49; // r8
  __int64 v50; // rax
  DXGADAPTER *v51; // rcx
  __int64 v52; // rdx
  __int64 v53; // rcx
  const GUID *v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  const GUID *v57; // r8
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  const GUID *v61; // r8
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  char *v68; // [rsp+30h] [rbp-88h]
  DXGADAPTER *v69; // [rsp+38h] [rbp-80h] BYREF
  int v70; // [rsp+48h] [rbp-70h] BYREF
  __int64 v71; // [rsp+50h] [rbp-68h]
  char v72; // [rsp+58h] [rbp-60h]
  _QWORD v73[2]; // [rsp+60h] [rbp-58h] BYREF
  char v74; // [rsp+70h] [rbp-48h]
  unsigned __int8 v75; // [rsp+C8h] [rbp+10h] BYREF
  struct DXGADAPTER *v76; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v77; // [rsp+D8h] [rbp+20h]

  v3 = (__int64 *)a1;
  v70 = -1;
  v71 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v72 = 1;
    v70 = 2046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2046);
  }
  else
  {
    v72 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v70, 2046LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v41 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v11 = *v41;
    }
  }
  if ( !v11 )
  {
    v42 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v42 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v42);
    goto LABEL_44;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v11 + 96) + 400LL))() )
  {
    v46 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    v35 = -1071775738;
    *(_QWORD *)(v46 + 24) = -1071775738LL;
    WdLogEvent5_WdWarning(v46);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70, v47);
    if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v48, &EventProfilerExit, v49, v70);
    return v35;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v77 = *v3;
  v15 = v77;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE(
    (DXGADAPTERBYHANDLE *)&v69,
    (unsigned int)v77,
    (struct _KTHREAD **)v11,
    &v76,
    1);
  v19 = v76;
  if ( !v76 )
  {
    v50 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v50 + 24) = v15;
    *(_QWORD *)(v50 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v50);
    v51 = v69;
    if ( !v69 )
      goto LABEL_44;
    goto LABEL_52;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v11 + 96) + 208LL))() )
  {
    v35 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20) + 24) = -1071775738LL;
    if ( v69 )
      DXGADAPTER::ReleaseReferenceNoTracking(v69);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70, v52);
    if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
      McTemplateK0q(v53, &EventProfilerExit, v54, v70);
      return 3223191558LL;
    }
    return v35;
  }
  v73[1] = v19;
  _InterlockedIncrement64((volatile signed __int64 *)v19 + 3);
  v73[0] = -1LL;
  KeEnterCriticalRegion();
  v22 = v76;
  v68 = (char *)v76 + 120;
  ExAcquirePushLockSharedEx((char *)v76 + 120, 0LL);
  v74 = 1;
  if ( *((_DWORD *)v22 + 44) == 1 )
  {
    v26 = v76;
    v27 = *((_QWORD *)v76 + 319);
    if ( v27 )
    {
      v28 = HIDWORD(v77);
      if ( HIDWORD(v77) < *(_DWORD *)(v27 + 80) )
      {
        v29 = *(unsigned int *)(*((_QWORD *)v76 + 2) + 528LL);
        if ( (int)v29 <= 0 )
        {
          v63 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v23);
          v35 = -1071775738;
          v63[3] = -1071775738LL;
          v63[4] = v76;
          v63[5] = HIDWORD(v77);
        }
        else
        {
          v30 = *((_QWORD *)v76 + 319);
          v31 = *(_QWORD *)(v30 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v31 + 160) )
            ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v31 + 144));
          v32 = HIDWORD(v77);
          if ( HIDWORD(v77) >= *(_DWORD *)(v30 + 80) )
          {
            v64 = WdLogNewEntry5_WdAssertion(v31, v23);
            *(_QWORD *)(v64 + 24) = 5502LL;
            WdLogEvent5_WdAssertion(v64);
          }
          if ( *(_BYTE *)(*(_QWORD *)(v30 + 112) + 3968 * v32 + 722) )
          {
            v33 = *((_QWORD *)v26 + 319);
            if ( !v33 )
            {
              v66 = WdLogNewEntry5_WdAssertion(v31, v23);
              *(_QWORD *)(v66 + 24) = 9139LL;
              WdLogEvent5_WdAssertion(v66);
              v33 = *((_QWORD *)v26 + 319);
            }
            if ( v33 )
            {
              v34 = 1;
            }
            else
            {
              v34 = 0;
              v33 = 0LL;
            }
            if ( v34 )
            {
              if ( (unsigned int)v32 >= *(_DWORD *)(v33 + 80) )
              {
                v67 = WdLogNewEntry5_WdAssertion(v31, v23);
                *(_QWORD *)(v67 + 24) = 5823LL;
                WdLogEvent5_WdAssertion(v67);
              }
              if ( *(_BYTE *)(*(_QWORD *)(v33 + 112) + 3968 * v32 + 720) )
                goto LABEL_28;
            }
            if ( DmmIsWaitingForPowerOn(v76, v32, &v75) >= 0 && v75 )
LABEL_28:
              v35 = 0;
            else
              v35 = -1071775738;
          }
          else
          {
            v65 = (_QWORD *)WdLogNewEntry5_WdTrace(v31, v23);
            v65[3] = -1071775739LL;
            v65[4] = v76;
            v65[5] = v32;
            v35 = -1071775739;
          }
        }
        ExReleasePushLockSharedEx(v68, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v26 + 2), v76);
        if ( v69 && _InterlockedExchangeAdd64((volatile signed __int64 *)v69 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v69 + 2), v69);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70, v36);
        if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        {
          McTemplateK0q(v37, &EventProfilerExit, v38, v70);
          return v35;
        }
        return v35;
      }
      v62 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v62 + 24) = v28;
      *(_QWORD *)(v62 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v62);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
      v51 = v69;
      if ( !v69 )
        goto LABEL_44;
LABEL_52:
      DXGADAPTER::ReleaseReferenceNoTracking(v51);
LABEL_44:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70, v43);
      if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v44, &EventProfilerExit, v45, v70);
      return 3221225485LL;
    }
    v58 = WdLogNewEntry5_WdWarning(v24, v23, v25);
    *(_QWORD *)(v58 + 24) = v26;
    *(_QWORD *)(v58 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v58);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
    if ( v69 )
      DXGADAPTER::ReleaseReferenceNoTracking(v69);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70, v59);
    if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v60, &EventProfilerExit, v61, v70);
    return 3221225659LL;
  }
  else
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v73);
    if ( v69 )
      DXGADAPTER::ReleaseReferenceNoTracking(v69);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v70, v55);
    if ( v72 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v56, &EventProfilerExit, v57, v70);
    return 3221226166LL;
  }
}
