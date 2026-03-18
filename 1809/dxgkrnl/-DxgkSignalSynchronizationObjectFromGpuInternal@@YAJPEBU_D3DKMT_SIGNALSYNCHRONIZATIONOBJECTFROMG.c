/*
 * XREFs of ?DxgkSignalSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@H@Z @ 0x1C01292D0
 * Callers:
 *     DxgkSignalSynchronizationObjectFromGpu @ 0x1C00B1850 (DxgkSignalSynchronizationObjectFromGpu.c)
 *     ?DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@Z @ 0x1C01292B0 (-DxgkCddSignalSynchronizationObjectFromGpu@@YAJPEBU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU@@@.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0103B30 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
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
  __int64 v9; // rcx
  struct DXGPROCESS *v10; // rbx
  __int64 v11; // rdi
  _BYTE *PoolWithTag; // rcx
  PVOID v13; // rcx
  size_t v14; // r8
  const void *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rcx
  const GUID *v21; // r8
  int v22; // ebx
  __int64 v23; // rcx
  const GUID *v24; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v26; // r14
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int64 v32; // rax
  __int64 v33; // rcx
  const GUID *v34; // r8
  int v35; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-C0h]
  char v37; // [rsp+70h] [rbp-B8h]
  unsigned int v38; // [rsp+78h] [rbp-B0h] BYREF
  struct DXGPROCESS *v39; // [rsp+80h] [rbp-A8h]
  void **v40; // [rsp+88h] [rbp-A0h]
  void *Src[2]; // [rsp+90h] [rbp-98h] BYREF
  __int128 v42; // [rsp+A0h] [rbp-88h]
  __int128 v43; // [rsp+B0h] [rbp-78h]
  __int128 v44; // [rsp+C0h] [rbp-68h]
  __int128 v45; // [rsp+D0h] [rbp-58h]
  PVOID P; // [rsp+E0h] [rbp-48h]
  _BYTE v47[16]; // [rsp+E8h] [rbp-40h] BYREF
  unsigned int v48; // [rsp+F8h] [rbp-30h]

  v4 = (void **)a1;
  v35 = -1;
  v36 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v37 = 1;
    v35 = 2190;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2190);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 2190);
  CurrentProcess = PsGetCurrentProcess(v6, v5);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v10 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v26 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v10 = *v26;
      }
    }
  }
  v39 = v10;
  if ( !v10 )
  {
    v27 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v27 + 24) = PsGetCurrentProcess(v29, v28);
    *(_QWORD *)(v27 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v27);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( !v37 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_53;
  }
  P = 0LL;
  v48 = 0;
  if ( !a2 )
  {
    if ( *((_DWORD *)v4 + 1) )
    {
LABEL_33:
      v38 = *(_DWORD *)v4;
      v22 = SignalSynchronizationObjectInternal(
              *((unsigned int *)v4 + 1),
              (unsigned int *)v4[1],
              0,
              1u,
              &v38,
              (unsigned __int64 *)v4[2],
              0LL,
              0LL,
              v10,
              a2 != 0,
              0);
      if ( v22 < 0 )
      {
        if ( P != v47 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v48 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
        if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v33, &EventProfilerExit, v34, v35);
        return (unsigned int)v22;
      }
      else
      {
        if ( P != v47 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v48 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
        if ( v37 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v23, &EventProfilerExit, v24, v35);
        }
        return 0LL;
      }
    }
    v32 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v32 + 24) = *(unsigned int *)v4;
    *(_QWORD *)(v32 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v32);
    if ( P != v47 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v48 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( !v37 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
LABEL_53:
    McTemplateK0q(v30, &EventProfilerExit, v31, v35);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v4;
  v42 = *((_OWORD *)v4 + 1);
  v43 = *((_OWORD *)v4 + 2);
  v44 = *((_OWORD *)v4 + 3);
  v45 = *((_OWORD *)v4 + 4);
  v11 = HIDWORD(Src[0]);
  if ( HIDWORD(Src[0]) )
  {
    if ( HIDWORD(Src[0]) > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 4 )
        goto LABEL_14;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * HIDWORD(Src[0]), 0x4B677844u);
      P = PoolWithTag;
    }
    else
    {
      PoolWithTag = v47;
      P = v47;
    }
    v48 = v11;
    if ( !PoolWithTag )
    {
LABEL_27:
      P = 0LL;
      v48 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v35);
      return 3221225495LL;
    }
    memset(PoolWithTag, 0, 4 * v11);
LABEL_14:
    v13 = P;
    if ( P )
    {
      v14 = 4LL * v48;
      v15 = Src[1];
      if ( (char *)Src[1] + v14 < Src[1] || (char *)Src[1] + v14 > (void *)MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v13, v15, v14);
      Src[1] = P;
      v4 = Src;
      v40 = Src;
      goto LABEL_33;
    }
    goto LABEL_27;
  }
  v16 = WdLogNewEntry5_WdError(MmUserProbeAddress);
  *(_QWORD *)(v16 + 24) = LODWORD(Src[0]);
  *(_QWORD *)(v16 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v16);
  if ( P != v47 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v48 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v35);
  return 3221225485LL;
}
