/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C011B100
 * Callers:
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C00FB350 (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     DxgkWaitForSynchronizationObjectFromGpu @ 0x1C011A4D0 (DxgkWaitForSynchronizationObjectFromGpu.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022AE20 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C011EBA0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromGpuInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1,
        bool a2,
        const GUID *a3,
        const unsigned __int64 *a4,
        bool a5)
{
  bool v6; // r12
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct DXGPROCESS *v16; // rbx
  unsigned int v17; // r14d
  unsigned int *PoolWithTag; // rsi
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
  __int64 v40; // rcx
  const GUID *v41; // r8
  int v42; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+58h] [rbp-C0h]
  char v44; // [rsp+60h] [rbp-B8h]
  struct DXGPROCESS *v45; // [rsp+68h] [rbp-B0h]
  void *Src[2]; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v47[2]; // [rsp+80h] [rbp-98h]
  __int128 v48; // [rsp+90h] [rbp-88h]
  __int128 v49; // [rsp+A0h] [rbp-78h]
  __int128 v50; // [rsp+B0h] [rbp-68h]
  PVOID P; // [rsp+C0h] [rbp-58h]
  _BYTE v52[16]; // [rsp+C8h] [rbp-50h] BYREF
  unsigned int v53; // [rsp+D8h] [rbp-40h]

  v6 = (char)a3;
  v8 = a1;
  v42 = -1;
  v43 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v44 = 1;
    v42 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2043);
  }
  else
  {
    v44 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 2043LL);
  CurrentProcess = PsGetCurrentProcess(v10, v9);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v16 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v33 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v16 = *v33;
    }
  }
  v45 = v16;
  if ( v16 )
  {
    P = 0LL;
    v53 = 0;
    if ( !a2 )
    {
      *(_OWORD *)Src = *(_OWORD *)&v8->hContext;
      *(_OWORD *)v47 = *(_OWORD *)&v8->MonitoredFenceValueArray;
      PoolWithTag = (unsigned int *)Src[1];
LABEL_36:
      if ( !a4 )
        a4 = (const unsigned __int64 *)v47[0];
      v29 = WaitForSynchronizationObjectFromGpu(
              HIDWORD(Src[0]),
              PoolWithTag,
              a4,
              v47[0],
              (unsigned int)Src[0],
              v16,
              a2,
              0,
              v6,
              a5);
      if ( v29 < 0 )
      {
        if ( P != v52 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v53 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v28);
        if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v40, &EventProfilerExit, v41, v42);
        return (unsigned int)v29;
      }
      else
      {
        if ( P != v52 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v53 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v28);
        if ( v44 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v30, &EventProfilerExit, v31, v42);
        }
        return 0LL;
      }
    }
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *)MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)&v8->hContext;
    *(_OWORD *)v47 = *(_OWORD *)&v8->MonitoredFenceValueArray;
    v48 = *(_OWORD *)&v8->Reserved[2];
    v49 = *(_OWORD *)&v8->Reserved[4];
    v50 = *(_OWORD *)&v8->Reserved[6];
    v17 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 4));
    if ( v17 )
    {
      if ( v17 > 4 )
      {
        v13 = 0xFFFFFFFFFFFFFFFFuLL % v17;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v17 < 4 )
        {
          PoolWithTag = (unsigned int *)P;
LABEL_27:
          if ( PoolWithTag != (unsigned int *)v52 && PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          P = 0LL;
          v53 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v13);
          if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v26, &EventProfilerExit, v27, v42);
          return 3221225495LL;
        }
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * v17, 0x4B677844u);
        P = PoolWithTag;
      }
      else
      {
        PoolWithTag = (unsigned int *)v52;
        P = v52;
      }
      v53 = v17;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 4LL * v17);
        PoolWithTag = (unsigned int *)P;
        if ( P )
        {
          v19 = 4LL * v53;
          v20 = Src[1];
          if ( (char *)Src[1] + v19 < Src[1] || (char *)Src[1] + v19 > (void *)MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(PoolWithTag, v20, v19);
          Src[1] = PoolWithTag;
          goto LABEL_36;
        }
      }
      goto LABEL_27;
    }
    v21 = WdLogNewEntry5_WdError(MmUserProbeAddress, v13, v15);
    *(_QWORD *)(v21 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    if ( P != v52 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v53 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v22);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v42);
    return 3221225485LL;
  }
  else
  {
    v34 = WdLogNewEntry5_WdError(v14, v13, v15);
    *(_QWORD *)(v34 + 24) = PsGetCurrentProcess(v36, v35);
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v37);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v38, &EventProfilerExit, v39, v42);
    return 3221225485LL;
  }
}
