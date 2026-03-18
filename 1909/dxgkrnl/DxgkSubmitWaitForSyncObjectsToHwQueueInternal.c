/*
 * XREFs of DxgkSubmitWaitForSyncObjectsToHwQueueInternal @ 0x1C024E888
 * Callers:
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022AE20 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     DxgkSubmitWaitForSyncObjectsToHwQueue @ 0x1C024E870 (DxgkSubmitWaitForSyncObjectsToHwQueue.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01449F0 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z @ 0x1C024B070 (-SubmitWaitForSyncObjectsFromGpu@@YAJIPEBIPEB_KIPEAVDXGPROCESS@@_N3@Z.c)
 */

__int64 __fastcall DxgkSubmitWaitForSyncObjectsToHwQueueInternal(__int64 a1, bool a2, const GUID *a3)
{
  unsigned int *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  ULONG64 v8; // rcx
  __int64 v9; // r8
  struct DXGPROCESS *Current; // r15
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v23; // rdx
  PVOID v24; // rsi
  __int64 v25; // rcx
  const GUID *v26; // r8
  size_t v27; // r8
  char *v28; // rdx
  __int64 v29; // rdx
  unsigned int v30; // ebx
  __int64 v31; // rcx
  const GUID *v32; // r8
  int v33; // [rsp+40h] [rbp-88h] BYREF
  __int64 v34; // [rsp+48h] [rbp-80h]
  char v35; // [rsp+50h] [rbp-78h]
  unsigned int *v36; // [rsp+58h] [rbp-70h]
  struct DXGPROCESS *v37; // [rsp+60h] [rbp-68h]
  __int128 v38; // [rsp+68h] [rbp-60h] BYREF
  __int64 v39; // [rsp+78h] [rbp-50h]
  PVOID P; // [rsp+80h] [rbp-48h] BYREF
  _BYTE v41[16]; // [rsp+88h] [rbp-40h] BYREF
  unsigned int v42; // [rsp+98h] [rbp-30h]

  v4 = (unsigned int *)a1;
  v33 = -1;
  v34 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 2162;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2162);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v33, 2162LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v37 = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v11 + 24) = PsGetCurrentProcess(v13, v12);
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v14);
    if ( v35 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v15, &EventProfilerExit, v16, v33);
    }
    return 3221225485LL;
  }
  P = 0LL;
  v42 = 0;
  v38 = 0uLL;
  v39 = 0LL;
  if ( a2 )
  {
    v8 = MmUserProbeAddress;
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (unsigned int *)MmUserProbeAddress;
    v38 = *(_OWORD *)v4;
    v39 = *((_QWORD *)v4 + 2);
    v4 = (unsigned int *)&v38;
  }
  v36 = v4;
  v18 = v4[1];
  if ( !(_DWORD)v18 )
  {
    v19 = WdLogNewEntry5_WdError(v8, v18, v9);
    *(_QWORD *)(v19 + 24) = *v4;
    *(_QWORD *)(v19 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v19);
    if ( P != v41 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v42 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v20);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v33);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v24 = PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&P, v18);
    if ( !v24 )
    {
      if ( P != v41 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v42 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v23);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v25, &EventProfilerExit, v26, v33);
      return 3221225495LL;
    }
    v27 = 4LL * v42;
    v28 = (char *)*((_QWORD *)v4 + 1);
    if ( &v28[v27] < v28 || (unsigned __int64)&v28[v27] > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v24, v28, v27);
    *((_QWORD *)v4 + 1) = v24;
  }
  v30 = SubmitWaitForSyncObjectsFromGpu(
          v4[1],
          *((const unsigned int **)v4 + 1),
          *((unsigned __int64 **)v4 + 2),
          *v4,
          Current,
          a2,
          0);
  if ( P != v41 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v42 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33, v29);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v33);
  return v30;
}
