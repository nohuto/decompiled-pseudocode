/*
 * XREFs of DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C021A218
 * Callers:
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01FA590 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueue @ 0x1C021A200 (DxgkSubmitWaitForSyncObjectsToHwQueue.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0213058 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C0216634 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 */

__int64 __fastcall DxgkSubmitWaitForSyncObjectsToHwQueueInternal(__int64 a1, bool a2, const GUID *a3)
{
  unsigned int *v4; // rbx
  ULONG64 v5; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  const GUID *v11; // r8
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rcx
  const GUID *v16; // r8
  PVOID v17; // rsi
  __int64 v18; // rcx
  const GUID *v19; // r8
  size_t v20; // r8
  char *v21; // rdx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  const GUID *v24; // r8
  int v25; // [rsp+40h] [rbp-88h] BYREF
  __int64 v26; // [rsp+48h] [rbp-80h]
  char v27; // [rsp+50h] [rbp-78h]
  unsigned int *v28; // [rsp+58h] [rbp-70h]
  struct DXGPROCESS *v29; // [rsp+60h] [rbp-68h]
  __int128 v30; // [rsp+68h] [rbp-60h] BYREF
  __int64 v31; // [rsp+78h] [rbp-50h]
  PVOID P; // [rsp+80h] [rbp-48h] BYREF
  _BYTE v33[16]; // [rsp+88h] [rbp-40h] BYREF
  unsigned int v34; // [rsp+98h] [rbp-30h]

  v4 = (unsigned int *)a1;
  v25 = -1;
  v26 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 2162;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2162);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 2162);
  Current = DXGPROCESS::GetCurrent();
  v29 = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = PsGetCurrentProcess(v9, v8);
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v10, &EventProfilerExit, v11, v25);
    }
    return 3221225485LL;
  }
  P = 0LL;
  v34 = 0;
  if ( a2 )
  {
    v5 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v30 = *(_OWORD *)v4;
    v31 = *((_QWORD *)v4 + 2);
    v4 = (unsigned int *)&v30;
  }
  v28 = v4;
  v13 = v4[1];
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v14 + 24) = *v4;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v14);
    if ( P != v33 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v34 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
    if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v15, &EventProfilerExit, v16, v25);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v17 = PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P, v13);
    if ( !v17 )
    {
      if ( P != v33 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v34 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
      if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v18, &EventProfilerExit, v19, v25);
      return 3221225495LL;
    }
    v20 = 4LL * v34;
    v21 = (char *)*((_QWORD *)v4 + 1);
    if ( &v21[v20] < v21 || (unsigned __int64)&v21[v20] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v17, v21, v20);
    *((_QWORD *)v4 + 1) = v17;
  }
  v22 = SubmitWaitForSyncObjectsFromGpu(
          v4[1],
          *((const unsigned int **)v4 + 1),
          *((const unsigned __int64 **)v4 + 2),
          *v4,
          Current,
          a2,
          0);
  if ( P != v33 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v34 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v25);
  return v22;
}
