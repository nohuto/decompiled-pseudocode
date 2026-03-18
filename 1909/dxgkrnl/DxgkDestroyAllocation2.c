/*
 * XREFs of DxgkDestroyAllocation2 @ 0x1C00F6520
 * Callers:
 *     ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021E8B0 (-VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F6790 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 */

__int64 __fastcall DxgkDestroyAllocation2(ULONG64 a1)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  char v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  const GUID *v21; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  const GUID *v27; // r8
  int v28; // [rsp+40h] [rbp-98h] BYREF
  __int64 v29; // [rsp+48h] [rbp-90h]
  char v30; // [rsp+50h] [rbp-88h]
  unsigned int *v31[2]; // [rsp+58h] [rbp-80h]
  unsigned int v32[2]; // [rsp+68h] [rbp-70h]
  _QWORD v33[10]; // [rsp+70h] [rbp-68h] BYREF

  memset(v33, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v33[1]);
  v33[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v33[3]) = 52;
  LOBYTE(v33[6]) = -1;
  v28 = -1;
  v29 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v30 = 1;
    v28 = 2105;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v2, &EventProfilerEnter, v3, 2105);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 2105LL);
  v4 = (unsigned __int8)PsGetCurrentThreadPreviousMode() == 1;
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v23 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v23;
    }
  }
  if ( v12 )
  {
    if ( v4 )
    {
      if ( a1 >= MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      *(_OWORD *)v31 = *(_OWORD *)a1;
      *(_QWORD *)v32 = *(_QWORD *)(a1 + 16);
      if ( (v32[1] & 0x7FFFFFFC) != 0 )
      {
        v13 = WdLogNewEntry5_WdWarning(MmUserProbeAddress, v9, v11);
        *(_QWORD *)(v13 + 24) = 9995LL;
        WdLogEvent5_WdWarning(v13);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v14);
        if ( v30 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v15, &EventProfilerExit, v16, v28);
        }
        return 3221225485LL;
      }
    }
    else
    {
      *(_OWORD *)v31 = *(_OWORD *)a1;
      *(_QWORD *)v32 = *(_QWORD *)(a1 + 16);
    }
    v18 = DxgkDestroyAllocationHelper(
            v12,
            (unsigned int)v31[0],
            HIDWORD(v31[0]),
            v31[1],
            v32[0],
            (struct _D3DDDICB_DESTROYALLOCATION2FLAGS)v32[1],
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v33,
            v4);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v19);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v20, &EventProfilerExit, v21, v28);
    return v18;
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v24 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v24);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28, v25);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v26, &EventProfilerExit, v27, v28);
    return 3221225485LL;
  }
}
