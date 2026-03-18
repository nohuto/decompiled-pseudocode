/*
 * XREFs of ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C0213A90
 * Callers:
 *     ?DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z @ 0x1C01DDF30 (-DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z.c)
 *     DxgkSubmitSignalSyncObjectsToHwQueue @ 0x1C021A1E0 (DxgkSubmitSignalSyncObjectsToHwQueue.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C01FB3C8 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0213058 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0214F1C (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 */

__int64 __fastcall DxgkSubmitSignalSyncObjectsToHwQueueInternal(
        struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE *a1,
        bool a2,
        const GUID *a3)
{
  void **v4; // rbx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  const GUID *v11; // r8
  __int64 v13; // rax
  __int64 v14; // rcx
  const GUID *v15; // r8
  PVOID v16; // rbx
  __int64 v17; // rcx
  const GUID *v18; // r8
  size_t v19; // r8
  const void *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  PVOID v25; // rbx
  __int64 v26; // rcx
  const GUID *v27; // r8
  size_t v28; // r8
  const void *v29; // rdx
  unsigned int v30; // ebx
  __int64 v31; // rcx
  const GUID *v32; // r8
  int v33; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-D0h]
  char v35; // [rsp+60h] [rbp-C8h]
  struct DXGPROCESS *v36; // [rsp+68h] [rbp-C0h]
  void *v37[2]; // [rsp+70h] [rbp-B8h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-A8h]
  void *v39; // [rsp+90h] [rbp-98h]
  void **v40; // [rsp+98h] [rbp-90h]
  PVOID v41; // [rsp+A0h] [rbp-88h] BYREF
  _BYTE v42[16]; // [rsp+A8h] [rbp-80h] BYREF
  unsigned int v43; // [rsp+B8h] [rbp-70h]
  PVOID P; // [rsp+C0h] [rbp-68h] BYREF
  _BYTE v45[64]; // [rsp+C8h] [rbp-60h] BYREF
  unsigned int v46; // [rsp+108h] [rbp-20h]

  v4 = (void **)a1;
  v33 = -1;
  v34 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 2161;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2161);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2161);
  Current = DXGPROCESS::GetCurrent();
  v36 = Current;
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = PsGetCurrentProcess(v9, v8);
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v7);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v10, &EventProfilerExit, v11, v33);
    }
    return 3221225485LL;
  }
  v41 = 0LL;
  v43 = 0;
  P = 0LL;
  v46 = 0;
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (void **)MmUserProbeAddress;
    *(_OWORD *)v37 = *(_OWORD *)v4;
    *(_OWORD *)Src = *((_OWORD *)v4 + 1);
    v39 = v4[4];
    if ( !LODWORD(Src[0]) )
    {
      v13 = WdLogNewEntry5_WdError(MmUserProbeAddress);
      *(_QWORD *)(v13 + 24) = 1751LL;
      WdLogEvent5_WdError(v13);
      if ( P != v45 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v46 = 0;
      if ( v41 != v42 && v41 )
        ExFreePoolWithTag(v41, 0);
      v41 = 0LL;
      v43 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v14, &EventProfilerExit, v15, v33);
      return 3221225485LL;
    }
    v16 = PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v41, (unsigned int)Src[0]);
    if ( !v16 )
    {
      if ( P != v45 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v46 = 0;
      if ( v41 != v42 && v41 )
        ExFreePoolWithTag(v41, 0);
      v41 = 0LL;
      v43 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v17, &EventProfilerExit, v18, v33);
      return 3221225495LL;
    }
    v19 = 4LL * v43;
    v20 = Src[1];
    if ( (char *)Src[1] + v19 < Src[1] || (char *)Src[1] + v19 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v16, v20, v19);
    Src[1] = v16;
    if ( !HIDWORD(v37[0]) )
    {
      v22 = WdLogNewEntry5_WdError(v21);
      *(_QWORD *)(v22 + 24) = 1768LL;
      WdLogEvent5_WdError(v22);
      if ( P != v45 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v46 = 0;
      if ( v41 != v42 && v41 )
        ExFreePoolWithTag(v41, 0);
      v41 = 0LL;
      v43 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v23, &EventProfilerExit, v24, v33);
      return 3221225485LL;
    }
    v25 = PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, HIDWORD(v37[0]));
    if ( !v25 )
    {
      if ( P != v45 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v46 = 0;
      if ( v41 != v42 && v41 )
        ExFreePoolWithTag(v41, 0);
      v41 = 0LL;
      v43 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
      if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v26, &EventProfilerExit, v27, v33);
      return 3221225495LL;
    }
    v28 = 4LL * v46;
    v29 = v37[1];
    if ( (char *)v37[1] + v28 < v37[1] || (char *)v37[1] + v28 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v25, v29, v28);
    v37[1] = v25;
    v4 = v37;
    v40 = v37;
  }
  v30 = SubmitSignalSyncObjectsToHwQueue(
          *((_DWORD *)v4 + 4),
          (const unsigned int *)v4[3],
          *(struct _D3DDDICB_SIGNALFLAGS *)v4,
          *((_DWORD *)v4 + 1),
          (const unsigned int *)v4[1],
          (const unsigned __int64 *)v4[4],
          Current,
          a2,
          0);
  if ( P != v45 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v46 = 0;
  if ( v41 != v42 && v41 )
    ExFreePoolWithTag(v41, 0);
  v41 = 0LL;
  v43 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
  if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v31, &EventProfilerExit, v32, v33);
  return v30;
}
