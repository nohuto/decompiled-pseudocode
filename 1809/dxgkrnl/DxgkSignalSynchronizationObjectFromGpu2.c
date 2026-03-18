/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C0101800
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0103B30 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // r14
  ULONG64 v8; // rcx
  unsigned int v9; // r15d
  _BYTE *PoolWithTag; // rdi
  size_t v11; // r8
  const void *v12; // rdx
  __int64 Value; // rsi
  _BYTE *v14; // rbx
  size_t v15; // r8
  const void *v16; // rdx
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rax
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v23; // rcx
  const GUID *v24; // r8
  int v25; // ebx
  __int64 v26; // rcx
  const GUID *v27; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rcx
  const GUID *v32; // r8
  __int64 v33; // rcx
  const GUID *v34; // r8
  int v35; // [rsp+60h] [rbp-118h] BYREF
  __int64 v36; // [rsp+68h] [rbp-110h]
  char v37; // [rsp+70h] [rbp-108h]
  struct DXGPROCESS *v38; // [rsp+78h] [rbp-100h]
  void *Src[2]; // [rsp+80h] [rbp-F8h]
  struct _D3DDDICB_SIGNALFLAGS v40[4]; // [rsp+90h] [rbp-E8h]
  void *v41[2]; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v42; // [rsp+B0h] [rbp-C8h]
  __int128 v43; // [rsp+C0h] [rbp-B8h]
  __int128 v44; // [rsp+D0h] [rbp-A8h]
  PVOID v45; // [rsp+E0h] [rbp-98h]
  _BYTE v46[16]; // [rsp+E8h] [rbp-90h] BYREF
  unsigned int v47; // [rsp+F8h] [rbp-80h]
  PVOID P; // [rsp+100h] [rbp-78h]
  _BYTE v49[64]; // [rsp+108h] [rbp-70h] BYREF
  unsigned int v50; // [rsp+148h] [rbp-30h]

  v3 = (_OWORD *)a1;
  v35 = -1;
  v36 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v37 = 1;
    v35 = 2191;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2191);
  }
  else
  {
    v37 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v35, 2191);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v29 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v7 = *v29;
      }
    }
  }
  v38 = v7;
  if ( !v7 )
  {
    v30 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v30 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v30);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v31, &EventProfilerExit, v32, v35);
    return 3221225485LL;
  }
  v45 = 0LL;
  v47 = 0;
  P = 0LL;
  v50 = 0;
  v8 = MmUserProbeAddress;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Src = *v3;
  *(_OWORD *)&v40[0].0 = v3[1];
  *(_OWORD *)v41 = v3[2];
  v42 = v3[3];
  v43 = v3[4];
  v44 = v3[5];
  v9 = _mm_cvtsi128_si32(*(__m128i *)Src);
  if ( v9 )
  {
    if ( v9 > 4 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v9 < 4 )
      {
        PoolWithTag = v45;
        goto LABEL_28;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v9, 0x4B677844u);
      v45 = PoolWithTag;
    }
    else
    {
      PoolWithTag = v46;
      v45 = v46;
    }
    v47 = v9;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4LL * v9);
      PoolWithTag = v45;
      if ( v45 )
      {
        v11 = 4LL * v47;
        v12 = Src[1];
        if ( (char *)Src[1] + v11 < Src[1] || (char *)Src[1] + v11 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(PoolWithTag, v12, v11);
        Src[1] = PoolWithTag;
        goto LABEL_16;
      }
    }
LABEL_28:
    if ( P != v49 && P )
    {
      ExFreePoolWithTag(P, 0);
      PoolWithTag = v45;
    }
    P = 0LL;
    v50 = 0;
    if ( PoolWithTag != v46 && PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    v45 = 0LL;
    v47 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
    if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v17, &EventProfilerExit, v18, v35);
    return 3221225495LL;
  }
  PoolWithTag = Src[1];
LABEL_16:
  Value = v40[1].Value;
  if ( v40[1].Value )
  {
    if ( v40[1].Value > 0x10 )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v40[1].Value < 4 )
      {
        v14 = P;
LABEL_52:
        if ( v14 != v49 && v14 )
          ExFreePoolWithTag(v14, 0);
        P = 0LL;
        v50 = 0;
        if ( v45 != v46 && v45 )
          ExFreePoolWithTag(v45, 0);
        v45 = 0LL;
        v47 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
        if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v23, &EventProfilerExit, v24, v35);
        return 3221225495LL;
      }
      v14 = ExAllocatePoolWithTag(PagedPool, 4LL * v40[1].Value, 0x4B677844u);
      P = v14;
    }
    else
    {
      v14 = v49;
      P = v49;
    }
    v50 = Value;
    if ( v14 )
    {
      memset(v14, 0, 4 * Value);
      v14 = P;
      if ( P )
      {
        v15 = 4LL * v50;
        v16 = *(const void **)&v40[2].0;
        if ( v15 + *(_QWORD *)&v40[2].0 < *(_QWORD *)&v40[2].0 || v15 + *(_QWORD *)&v40[2].0 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v14, v16, v15);
        *(_QWORD *)&v40[2].0 = v14;
        v25 = SignalSynchronizationObjectInternal(
                v9,
                (const unsigned int *)PoolWithTag,
                v40[0],
                Value,
                (const unsigned int *)v14,
                (const unsigned __int64 *)v41[0],
                (unsigned __int64)v41[0],
                v41,
                v7,
                1,
                0);
        if ( v25 < 0 )
        {
          if ( P != v49 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v50 = 0;
          if ( v45 != v46 && v45 )
            ExFreePoolWithTag(v45, 0);
          v45 = 0LL;
          v47 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
          if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v33, &EventProfilerExit, v34, v35);
          return (unsigned int)v25;
        }
        else
        {
          if ( P != v49 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v50 = 0;
          if ( v45 != v46 && v45 )
            ExFreePoolWithTag(v45, 0);
          v45 = 0LL;
          v47 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
          if ( v37 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v26, &EventProfilerExit, v27, v35);
          }
          return 0LL;
        }
      }
    }
    goto LABEL_52;
  }
  v20 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v20 + 24) = 921LL;
  WdLogEvent5_WdError(v20);
  if ( P != v49 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v50 = 0;
  if ( v45 != v46 && v45 )
    ExFreePoolWithTag(v45, 0);
  v45 = 0LL;
  v47 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v35);
  return 3221225485LL;
}
