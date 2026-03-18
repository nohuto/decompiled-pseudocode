/*
 * XREFs of DxgkSignalSynchronizationObjectFromGpu2 @ 0x1C0107750
 * Callers:
 *     <none>
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C0107E60 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 */

__int64 __fastcall DxgkSignalSynchronizationObjectFromGpu2(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGPROCESS *v11; // r14
  ULONG64 v12; // rcx
  unsigned int v13; // r15d
  _BYTE *PoolWithTag; // rdi
  size_t v15; // r8
  const void *v16; // rdx
  __int64 Value; // rsi
  _BYTE *v18; // rbx
  size_t v19; // r8
  const void *v20; // rdx
  __int64 v21; // rcx
  const GUID *v22; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v28; // rcx
  const GUID *v29; // r8
  __int64 v30; // rdx
  int v31; // ebx
  __int64 v32; // rcx
  const GUID *v33; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v35; // rdi
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  const GUID *v41; // r8
  __int64 v42; // rcx
  const GUID *v43; // r8
  int v44; // [rsp+60h] [rbp-118h] BYREF
  __int64 v45; // [rsp+68h] [rbp-110h]
  char v46; // [rsp+70h] [rbp-108h]
  struct DXGPROCESS *v47; // [rsp+78h] [rbp-100h]
  void *Src[2]; // [rsp+80h] [rbp-F8h]
  struct _D3DDDICB_SIGNALFLAGS v49[4]; // [rsp+90h] [rbp-E8h]
  void *v50[2]; // [rsp+A0h] [rbp-D8h] BYREF
  __int128 v51; // [rsp+B0h] [rbp-C8h]
  __int128 v52; // [rsp+C0h] [rbp-B8h]
  __int128 v53; // [rsp+D0h] [rbp-A8h]
  PVOID v54; // [rsp+E0h] [rbp-98h]
  _BYTE v55[16]; // [rsp+E8h] [rbp-90h] BYREF
  unsigned int v56; // [rsp+F8h] [rbp-80h]
  PVOID P; // [rsp+100h] [rbp-78h]
  _BYTE v58[64]; // [rsp+108h] [rbp-70h] BYREF
  unsigned int v59; // [rsp+148h] [rbp-30h]

  v3 = (_OWORD *)a1;
  v44 = -1;
  v45 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v46 = 1;
    v44 = 2191;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2191);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v44, 2191LL);
  CurrentProcess = PsGetCurrentProcess(v5, v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v11 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v35 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v11 = *v35;
    }
  }
  v47 = v11;
  if ( !v11 )
  {
    v36 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v36 + 24) = PsGetCurrentProcess(v38, v37);
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v39);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v40, &EventProfilerExit, v41, v44);
    return 3221225485LL;
  }
  v54 = 0LL;
  v56 = 0;
  P = 0LL;
  v59 = 0;
  v12 = MmUserProbeAddress;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Src = *v3;
  *(_OWORD *)&v49[0].0 = v3[1];
  *(_OWORD *)v50 = v3[2];
  v51 = v3[3];
  v52 = v3[4];
  v53 = v3[5];
  v13 = _mm_cvtsi128_si32(*(__m128i *)Src);
  if ( v13 )
  {
    if ( v13 > 4 )
    {
      v8 = 0xFFFFFFFFFFFFFFFFuLL % v13;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 4 )
      {
        PoolWithTag = v54;
        goto LABEL_27;
      }
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * v13, 0x4B677844u);
      v54 = PoolWithTag;
    }
    else
    {
      PoolWithTag = v55;
      v54 = v55;
    }
    v56 = v13;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 4LL * v13);
      PoolWithTag = v54;
      if ( v54 )
      {
        v15 = 4LL * v56;
        v16 = Src[1];
        if ( (char *)Src[1] + v15 < Src[1] || (char *)Src[1] + v15 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(PoolWithTag, v16, v15);
        Src[1] = PoolWithTag;
        goto LABEL_16;
      }
    }
LABEL_27:
    if ( P != v58 && P )
    {
      ExFreePoolWithTag(P, 0);
      PoolWithTag = v54;
    }
    P = 0LL;
    v59 = 0;
    if ( PoolWithTag != v55 && PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    v54 = 0LL;
    v56 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v8);
    if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v21, &EventProfilerExit, v22, v44);
    return 3221225495LL;
  }
  PoolWithTag = Src[1];
LABEL_16:
  Value = v49[1].Value;
  if ( v49[1].Value )
  {
    if ( v49[1].Value > 0x10 )
    {
      v8 = 0xFFFFFFFFFFFFFFFFuLL % v49[1].Value;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v49[1].Value < 4 )
      {
        v18 = P;
LABEL_52:
        if ( v18 != v58 && v18 )
          ExFreePoolWithTag(v18, 0);
        P = 0LL;
        v59 = 0;
        if ( v54 != v55 && v54 )
          ExFreePoolWithTag(v54, 0);
        v54 = 0LL;
        v56 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v8);
        if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v28, &EventProfilerExit, v29, v44);
        return 3221225495LL;
      }
      v18 = ExAllocatePoolWithTag(PagedPool, 4LL * v49[1].Value, 0x4B677844u);
      P = v18;
    }
    else
    {
      v18 = v58;
      P = v58;
    }
    v59 = Value;
    if ( v18 )
    {
      memset(v18, 0, 4 * Value);
      v18 = P;
      if ( P )
      {
        v19 = 4LL * v59;
        v20 = *(const void **)&v49[2].0;
        if ( v19 + *(_QWORD *)&v49[2].0 < *(_QWORD *)&v49[2].0 || v19 + *(_QWORD *)&v49[2].0 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v18, v20, v19);
        *(_QWORD *)&v49[2].0 = v18;
        v31 = SignalSynchronizationObjectInternal(
                v13,
                (const unsigned int *)PoolWithTag,
                v49[0],
                Value,
                (const unsigned int *)v18,
                (const unsigned __int64 *)v50[0],
                (unsigned __int64)v50[0],
                v50,
                v11,
                1,
                0);
        if ( v31 < 0 )
        {
          if ( P != v58 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v59 = 0;
          if ( v54 != v55 && v54 )
            ExFreePoolWithTag(v54, 0);
          v54 = 0LL;
          v56 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v30);
          if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v42, &EventProfilerExit, v43, v44);
          return (unsigned int)v31;
        }
        else
        {
          if ( P != v58 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v59 = 0;
          if ( v54 != v55 && v54 )
            ExFreePoolWithTag(v54, 0);
          v54 = 0LL;
          v56 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v30);
          if ( v46 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q(v32, &EventProfilerExit, v33, v44);
          }
          return 0LL;
        }
      }
    }
    goto LABEL_52;
  }
  v24 = WdLogNewEntry5_WdError(v12, v8, v10);
  *(_QWORD *)(v24 + 24) = 899LL;
  WdLogEvent5_WdError(v24);
  if ( P != v58 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v59 = 0;
  if ( v54 != v55 && v54 )
    ExFreePoolWithTag(v54, 0);
  v54 = 0LL;
  v56 = 0;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44, v25);
  if ( v46 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v26, &EventProfilerExit, v27, v44);
  return 3221225485LL;
}
