/*
 * XREFs of DxgkDestroyAllocation2 @ 0x1C00FE650
 * Callers:
 *     ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EE840 (-VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00FE8E0 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation2(ULONG64 a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  char v4; // si
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  const GUID *v13; // r8
  unsigned int v15; // ebx
  __int64 v16; // rcx
  const GUID *v17; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v19; // r14
  __int64 v20; // rax
  __int64 v21; // rcx
  const GUID *v22; // r8
  int v23; // [rsp+40h] [rbp-98h] BYREF
  __int64 v24; // [rsp+48h] [rbp-90h]
  char v25; // [rsp+50h] [rbp-88h]
  unsigned int *v26[2]; // [rsp+58h] [rbp-80h]
  unsigned int v27[2]; // [rsp+68h] [rbp-70h]
  __int64 v28; // [rsp+70h] [rbp-68h] BYREF
  GUID v29; // [rsp+78h] [rbp-60h] BYREF
  __int64 v30; // [rsp+88h] [rbp-50h]
  __int64 v31; // [rsp+90h] [rbp-48h]
  __int64 v32; // [rsp+98h] [rbp-40h]
  __int64 v33; // [rsp+A0h] [rbp-38h]
  __int64 v34; // [rsp+A8h] [rbp-30h]
  __int64 v35; // [rsp+B0h] [rbp-28h]

  v28 = 0LL;
  *(_QWORD *)&v29.Data1 = 0LL;
  *(_QWORD *)v29.Data4 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  EtwActivityIdControl(3u, &v29);
  v35 = MEMORY[0xFFFFF78000000014];
  LODWORD(v30) = 52;
  LOBYTE(v33) = -1;
  v23 = -1;
  v24 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v25 = 1;
    v23 = 2105;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2105);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 2105);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v19 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v10 = *v19;
      }
    }
  }
  if ( v10 )
  {
    if ( v4 )
    {
      if ( a1 >= MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      *(_OWORD *)v26 = *(_OWORD *)a1;
      *(_QWORD *)v27 = *(_QWORD *)(a1 + 16);
      if ( (v27[1] & 0x7FFFFFFC) != 0 )
      {
        v11 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v7, v9);
        *(_QWORD *)(v11 + 24) = 10022LL;
        WdLogEvent5_WdWarning(v11);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
        if ( v25 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v12, &EventProfilerExit, v13, v23);
        }
        return 3221225485LL;
      }
    }
    else
    {
      *(_OWORD *)v26 = *(_OWORD *)a1;
      *(_QWORD *)v27 = *(_QWORD *)(a1 + 16);
    }
    v15 = DxgkDestroyAllocationHelper(
            v10,
            (unsigned int)v26[0],
            HIDWORD(v26[0]),
            v26[1],
            v27[0],
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v27[1],
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)&v28,
            v4);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v16, &EventProfilerExit, v17, v23);
    return v15;
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23);
    if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v23);
    return 3221225485LL;
  }
}
