/*
 * XREFs of DxgkCheckMonitorPowerState @ 0x1C0128C70
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
 *     ?DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z @ 0x1C014361C (-DmmIsWaitingForPowerOn@@YAJPEAXIAEAE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCheckMonitorPowerState(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGADAPTER *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  struct DXGADAPTER *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r15
  __int64 v31; // rbx
  char v32; // al
  unsigned int v33; // ebx
  __int64 v34; // rcx
  const GUID *v35; // r8
  __int64 *ThreadProperty; // rax
  __int64 *v38; // r14
  __int64 v39; // rax
  __int64 v40; // rcx
  const GUID *v41; // r8
  __int64 v42; // rax
  __int64 v43; // rcx
  const GUID *v44; // r8
  __int64 v45; // rax
  __int64 v46; // rcx
  const GUID *v47; // r8
  __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  char *v54; // [rsp+30h] [rbp-88h]
  DXGADAPTER *v55; // [rsp+38h] [rbp-80h] BYREF
  int v56; // [rsp+48h] [rbp-70h] BYREF
  __int64 v57; // [rsp+50h] [rbp-68h]
  char v58; // [rsp+58h] [rbp-60h]
  _QWORD v59[2]; // [rsp+60h] [rbp-58h] BYREF
  char v60; // [rsp+70h] [rbp-48h]
  unsigned __int8 v61; // [rsp+C8h] [rbp+10h] BYREF
  struct DXGADAPTER *v62; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v63; // [rsp+D8h] [rbp+20h]

  v3 = (__int64 *)a1;
  v56 = -1;
  v57 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v58 = 1;
    v56 = 2046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2046);
  }
  else
  {
    v58 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v56, 2046);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v9 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v38 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v38;
      }
    }
  }
  if ( !v9 )
  {
    v39 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v39 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v39);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( !v58 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_68;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v63 = *v3;
  v10 = v63;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v55, v63, (struct _KTHREAD **)v9, &v62, 1);
  v14 = v62;
  if ( !v62 )
  {
    v42 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v42 + 24) = v10;
    *(_QWORD *)(v42 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v42);
    if ( v55 )
      DXGADAPTER::ReleaseReference(v55);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( !v58 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_68;
  }
  if ( !(*(unsigned int (**)(void))(*(_QWORD *)(v9 + 104) + 208LL))() )
  {
    v33 = -1071775738;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15, v17, v18) + 24) = -1071775738LL;
    if ( v55 )
      DXGADAPTER::ReleaseReference(v55);
    goto LABEL_33;
  }
  v59[1] = v14;
  _InterlockedIncrement64((volatile signed __int64 *)v14 + 3);
  v59[0] = -1LL;
  KeEnterCriticalRegion();
  v19 = v62;
  v54 = (char *)v62 + 120;
  ExAcquirePushLockSharedEx((char *)v62 + 120, 0LL);
  v60 = 1;
  if ( *((_DWORD *)v19 + 44) == 1 )
  {
    v24 = v62;
    v25 = *((_QWORD *)v62 + 315);
    if ( v25 )
    {
      v26 = HIDWORD(v63);
      if ( HIDWORD(v63) < *(_DWORD *)(v25 + 80) )
      {
        v27 = *(unsigned int *)(*((_QWORD *)v62 + 2) + 528LL);
        if ( (int)v27 <= 0 )
        {
          v49 = (_QWORD *)WdLogNewEntry5_WdTrace(v27, v20, v22, v23);
          v33 = -1071775738;
          v49[3] = -1071775738LL;
          v49[4] = v62;
          v49[5] = HIDWORD(v63);
        }
        else
        {
          v28 = *((_QWORD *)v62 + 315);
          v29 = *(_QWORD *)(v28 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v29 + 160) )
            ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v29 + 144));
          v30 = HIDWORD(v63);
          if ( HIDWORD(v63) >= *(_DWORD *)(v28 + 80) )
          {
            v50 = WdLogNewEntry5_WdAssertion(v29);
            *(_QWORD *)(v50 + 24) = 5266LL;
            WdLogEvent5_WdAssertion(v50);
          }
          if ( *(_BYTE *)(*(_QWORD *)(v28 + 112) + 3760 * v30 + 722) )
          {
            v31 = *((_QWORD *)v24 + 315);
            if ( !v31 )
            {
              v52 = WdLogNewEntry5_WdAssertion(v29);
              *(_QWORD *)(v52 + 24) = 8834LL;
              WdLogEvent5_WdAssertion(v52);
              v31 = *((_QWORD *)v24 + 315);
            }
            if ( v31 )
            {
              v32 = 1;
            }
            else
            {
              v32 = 0;
              v31 = 0LL;
            }
            if ( v32 )
            {
              if ( (unsigned int)v30 >= *(_DWORD *)(v31 + 80) )
              {
                v53 = WdLogNewEntry5_WdAssertion(v29);
                *(_QWORD *)(v53 + 24) = 5587LL;
                WdLogEvent5_WdAssertion(v53);
              }
              if ( *(_BYTE *)(*(_QWORD *)(v31 + 112) + 3760 * v30 + 720) )
                goto LABEL_27;
            }
            if ( DmmIsWaitingForPowerOn(v62, v30, &v61) >= 0 && v61 )
LABEL_27:
              v33 = 0;
            else
              v33 = -1071775738;
          }
          else
          {
            v51 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v20, v22, v23);
            v51[3] = -1071775739LL;
            v51[4] = v62;
            v51[5] = v30;
            v33 = -1071775739;
          }
        }
        ExReleasePushLockSharedEx(v54, 0LL);
        KeLeaveCriticalRegion();
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v24 + 2), v62);
        if ( v55 && _InterlockedExchangeAdd64((volatile signed __int64 *)v55 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v55 + 2), v55);
LABEL_33:
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
        if ( v58 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v34, &EventProfilerExit, v35, v56);
        }
        return v33;
      }
      v48 = WdLogNewEntry5_WdWarning(v21, v20, v22);
      *(_QWORD *)(v48 + 24) = v26;
      *(_QWORD *)(v48 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v48);
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
      if ( v55 )
        DXGADAPTER::ReleaseReference(v55);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
      if ( !v58 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
LABEL_68:
      McTemplateK0q(v40, &EventProfilerExit, v41, v56);
      return 3221225485LL;
    }
    v45 = WdLogNewEntry5_WdWarning(v21, v20, v22);
    *(_QWORD *)(v45 + 24) = v24;
    *(_QWORD *)(v45 + 32) = -1073741637LL;
    WdLogEvent5_WdWarning(v45);
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
    if ( v55 )
      DXGADAPTER::ReleaseReference(v55);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v46, &EventProfilerExit, v47, v56);
    return 3221225659LL;
  }
  else
  {
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v59);
    if ( v55 )
      DXGADAPTER::ReleaseReference(v55);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
    if ( v58 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v43, &EventProfilerExit, v44, v56);
    return 3221226166LL;
  }
}
