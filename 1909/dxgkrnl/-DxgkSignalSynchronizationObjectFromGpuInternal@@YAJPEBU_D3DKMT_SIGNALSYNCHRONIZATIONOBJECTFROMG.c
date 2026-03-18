/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C0107280
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpu @ 0x1C0107260 (DxgkSignalSynchronizationObjectFromGpu.c)
 *     ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x1C0141C30 (-DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0107E60 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpuInternal(
        struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU *a1,
        int a2,
        const GUID *a3)
{
  void **v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct DXGPROCESS *v12; // rbx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  _BYTE *PoolWithTag; // rcx
  PVOID v18; // rcx
  size_t v19; // r8
  const void *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v28; // rdx
  int v29; // ebx
  __int64 v30; // rcx
  const GUID *v31; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  const GUID *v39; // r8
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  const GUID *v43; // r8
  __int64 v44; // rcx
  const GUID *v45; // r8
  int v46; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+68h] [rbp-C0h]
  char v48; // [rsp+70h] [rbp-B8h]
  unsigned int v49; // [rsp+78h] [rbp-B0h] BYREF
  struct DXGPROCESS *v50; // [rsp+80h] [rbp-A8h]
  void *Src[11]; // [rsp+90h] [rbp-98h] BYREF
  PVOID P; // [rsp+E8h] [rbp-40h]
  _BYTE v53[16]; // [rsp+F0h] [rbp-38h] BYREF
  unsigned int v54; // [rsp+100h] [rbp-28h]

  v4 = (void **)a1;
  v46 = -1;
  v47 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v48 = 1;
    v46 = 2190;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2190);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v46, 2190LL);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v33 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v33;
    }
  }
  v50 = v12;
  if ( !v12 )
  {
    v34 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v34 + 24) = PsGetCurrentProcess(v36, v35);
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v37);
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v38, &EventProfilerExit, v39, v46);
    return 3221225485LL;
  }
  P = 0LL;
  v54 = 0;
  memset(Src, 0, 0x50uLL);
  if ( !a2 )
  {
    if ( *((_DWORD *)v4 + 1) )
    {
LABEL_33:
      v49 = *(_DWORD *)v4;
      v29 = SignalSynchronizationObjectInternal(
              *((_DWORD *)v4 + 1),
              (const unsigned int *)v4[1],
              0,
              1u,
              &v49,
              (const unsigned __int64 *)v4[2],
              0LL,
              0LL,
              v12,
              a2 != 0,
              0);
      if ( v29 < 0 )
      {
        if ( P != v53 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v54 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v28);
        if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v44, &EventProfilerExit, v45, v46);
        return (unsigned int)v29;
      }
      else
      {
        if ( P != v53 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v54 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v28);
        if ( v48 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v30, &EventProfilerExit, v31, v46);
        }
        return 0LL;
      }
    }
    v40 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v40 + 24) = *(unsigned int *)v4;
    *(_QWORD *)(v40 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v40);
    if ( P != v53 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v54 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v41);
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
      McTemplateK0q(v42, &EventProfilerExit, v43, v46);
      return 3221225485LL;
    }
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v4;
  *(_OWORD *)&Src[2] = *((_OWORD *)v4 + 1);
  *(_OWORD *)&Src[4] = *((_OWORD *)v4 + 2);
  *(_OWORD *)&Src[6] = *((_OWORD *)v4 + 3);
  *(_OWORD *)&Src[8] = *((_OWORD *)v4 + 4);
  v16 = HIDWORD(Src[0]);
  if ( HIDWORD(Src[0]) )
  {
    if ( HIDWORD(Src[0]) > 4 )
    {
      v13 = 0xFFFFFFFFFFFFFFFFuLL % HIDWORD(Src[0]);
      if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 4 )
        goto LABEL_14;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * HIDWORD(Src[0]), 0x4B677844u);
      P = PoolWithTag;
    }
    else
    {
      PoolWithTag = v53;
      P = v53;
    }
    v54 = v16;
    if ( !PoolWithTag )
    {
LABEL_27:
      P = 0LL;
      v54 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v13);
      if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v26, &EventProfilerExit, v27, v46);
      return 3221225495LL;
    }
    memset(PoolWithTag, 0, 4 * v16);
LABEL_14:
    v18 = P;
    if ( P )
    {
      v19 = 4LL * v54;
      v20 = Src[1];
      if ( (char *)Src[1] + v19 < Src[1] || (char *)Src[1] + v19 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v18, v20, v19);
      Src[1] = P;
      v4 = Src;
      Src[10] = Src;
      goto LABEL_33;
    }
    goto LABEL_27;
  }
  v21 = WdLogNewEntry5_WdError(MmUserProbeAddress, v13, v15);
  *(_QWORD *)(v21 + 24) = LODWORD(Src[0]);
  *(_QWORD *)(v21 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v21);
  if ( P != v53 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v54 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v22);
  if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v46);
  return 3221225485LL;
}
