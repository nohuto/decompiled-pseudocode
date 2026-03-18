/*
 * XREFs of ?DxgkSubmitSignalSyncObjectsToHwQueueInternal@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@_N@Z @ 0x1C0247C4C
 * Callers:
 *     ?DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z @ 0x1C020D3F0 (-DxgkCddSubmitSignalSyncObjectsToHwQueue@@YAJPEBU_D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE@@@Z.c)
 *     DxgkSubmitSignalSyncObjectsToHwQueue @ 0x1C024E850 (DxgkSubmitSignalSyncObjectsToHwQueue.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C01449F0 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z @ 0x1C022BD08 (-AllocateElements@-$PagedPoolZeroedArray@I$0BA@@@QEAAPEAII@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0249948 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 */

__int64 __fastcall DxgkSubmitSignalSyncObjectsToHwQueueInternal(
        struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE *a1,
        bool a2,
        const GUID *a3)
{
  void **v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  const GUID *v16; // r8
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v23; // rdx
  PVOID v24; // rbx
  __int64 v25; // rcx
  const GUID *v26; // r8
  size_t v27; // r8
  const void *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  const GUID *v34; // r8
  __int64 v35; // rdx
  PVOID v36; // rbx
  __int64 v37; // rcx
  const GUID *v38; // r8
  size_t v39; // r8
  const void *v40; // rdx
  __int64 v41; // rdx
  unsigned int v42; // ebx
  __int64 v43; // rcx
  const GUID *v44; // r8
  int v45; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v46; // [rsp+58h] [rbp-D0h]
  char v47; // [rsp+60h] [rbp-C8h]
  void *v48[7]; // [rsp+68h] [rbp-C0h] BYREF
  PVOID v49; // [rsp+A0h] [rbp-88h] BYREF
  _BYTE v50[16]; // [rsp+A8h] [rbp-80h] BYREF
  unsigned int v51; // [rsp+B8h] [rbp-70h]
  PVOID P; // [rsp+C0h] [rbp-68h] BYREF
  _BYTE v53[64]; // [rsp+C8h] [rbp-60h] BYREF
  unsigned int v54; // [rsp+108h] [rbp-20h]

  v4 = (void **)a1;
  v45 = -1;
  v46 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v47 = 1;
    v45 = 2161;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2161);
  }
  else
  {
    v47 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v45, 2161LL);
  Current = DXGPROCESS::GetCurrent(v6, v5);
  v48[5] = Current;
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7, v10);
    *(_QWORD *)(v11 + 24) = PsGetCurrentProcess(v13, v12);
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v14);
    if ( v47 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v15, &EventProfilerExit, v16, v45);
    }
    return 3221225485LL;
  }
  v49 = 0LL;
  v51 = 0;
  P = 0LL;
  v54 = 0;
  memset(v48, 0, 0x28uLL);
  if ( a2 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (void **)MmUserProbeAddress;
    *(_OWORD *)v48 = *(_OWORD *)v4;
    *(_OWORD *)&v48[2] = *((_OWORD *)v4 + 1);
    v48[4] = v4[4];
    if ( !LODWORD(v48[2]) )
    {
      v19 = WdLogNewEntry5_WdError(MmUserProbeAddress, 0LL, v18);
      *(_QWORD *)(v19 + 24) = 1780LL;
      WdLogEvent5_WdError(v19);
      if ( P != v53 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v54 = 0;
      if ( v49 != v50 && v49 )
        ExFreePoolWithTag(v49, 0);
      v49 = 0LL;
      v51 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v20);
      if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v21, &EventProfilerExit, v22, v45);
      return 3221225485LL;
    }
    v24 = PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v49, (unsigned int)v48[2]);
    if ( !v24 )
    {
      if ( P != v53 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v54 = 0;
      if ( v49 != v50 && v49 )
        ExFreePoolWithTag(v49, 0);
      v49 = 0LL;
      v51 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v23);
      if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v25, &EventProfilerExit, v26, v45);
      return 3221225495LL;
    }
    v27 = 4LL * v51;
    v28 = v48[3];
    if ( (char *)v48[3] + v27 < v48[3] || (char *)v48[3] + v27 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v24, v28, v27);
    v48[3] = v24;
    if ( !HIDWORD(v48[0]) )
    {
      v31 = WdLogNewEntry5_WdError(v29, 0LL, v30);
      *(_QWORD *)(v31 + 24) = 1797LL;
      WdLogEvent5_WdError(v31);
      if ( P != v53 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v54 = 0;
      if ( v49 != v50 && v49 )
        ExFreePoolWithTag(v49, 0);
      v49 = 0LL;
      v51 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v32);
      if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v33, &EventProfilerExit, v34, v45);
      return 3221225485LL;
    }
    v36 = PagedPoolZeroedArray<unsigned int,16>::AllocateElements(&P, HIDWORD(v48[0]));
    if ( !v36 )
    {
      if ( P != v53 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v54 = 0;
      if ( v49 != v50 && v49 )
        ExFreePoolWithTag(v49, 0);
      v49 = 0LL;
      v51 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v35);
      if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v37, &EventProfilerExit, v38, v45);
      return 3221225495LL;
    }
    v39 = 4LL * v54;
    v40 = v48[1];
    if ( (char *)v48[1] + v39 < v48[1] || (char *)v48[1] + v39 > (void *)MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v36, v40, v39);
    v48[1] = v36;
    v4 = v48;
    v48[6] = v48;
  }
  v42 = SubmitSignalSyncObjectsToHwQueue(
          *((_DWORD *)v4 + 4),
          (const unsigned int *)v4[3],
          *(struct _D3DDDICB_SIGNALFLAGS *)v4,
          *((_DWORD *)v4 + 1),
          (const unsigned int *)v4[1],
          (const unsigned __int64 *)v4[4],
          Current,
          a2,
          0);
  if ( P != v53 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v54 = 0;
  if ( v49 != v50 && v49 )
    ExFreePoolWithTag(v49, 0);
  v49 = 0LL;
  v51 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v45, v41);
  if ( v47 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v43, &EventProfilerExit, v44, v45);
  return v42;
}
