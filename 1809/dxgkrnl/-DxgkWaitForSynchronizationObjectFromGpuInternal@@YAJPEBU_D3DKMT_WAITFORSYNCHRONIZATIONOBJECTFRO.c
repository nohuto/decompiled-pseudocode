/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromGpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU@@_N1PEB_K1@Z @ 0x1C0117720
 * Callers:
 *     DxgkWaitForSynchronizationObjectFromGpu @ 0x1C01176F0 (DxgkWaitForSynchronizationObjectFromGpu.c)
 *     DxgkKernelModeWaitForSynchronizationObjectFromGpu @ 0x1C011D26C (DxgkKernelModeWaitForSynchronizationObjectFromGpu.c)
 *     ?VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01FA590 (-VmBusWaitForSyncObjectFromGpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C0117BC0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromGpuInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *a1,
        bool a2,
        const GUID *a3,
        const unsigned __int64 *a4,
        bool a5)
{
  bool v6; // r12
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *v8; // rbx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rcx
  struct DXGPROCESS *v12; // rsi
  unsigned int v13; // edi
  unsigned int *PoolWithTag; // rbx
  size_t v15; // r8
  const void *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  const GUID *v19; // r8
  __int64 v21; // rcx
  const GUID *v22; // r8
  int v23; // ebx
  __int64 v24; // rcx
  const GUID *v25; // r8
  struct DXGPROCESS **ThreadProperty; // rax
  struct DXGPROCESS **v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rcx
  const GUID *v30; // r8
  __int64 v31; // rcx
  const GUID *v32; // r8
  int v33; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-C0h]
  char v35; // [rsp+60h] [rbp-B8h]
  struct DXGPROCESS *v36; // [rsp+68h] [rbp-B0h]
  void *Src[2]; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v38[2]; // [rsp+80h] [rbp-98h]
  __int128 v39; // [rsp+90h] [rbp-88h]
  __int128 v40; // [rsp+A0h] [rbp-78h]
  __int128 v41; // [rsp+B0h] [rbp-68h]
  PVOID P; // [rsp+C0h] [rbp-58h]
  _BYTE v43[16]; // [rsp+C8h] [rbp-50h] BYREF
  unsigned int v44; // [rsp+D8h] [rbp-40h]

  v6 = (char)a3;
  v8 = a1;
  v33 = -1;
  v34 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v35 = 1;
    v33 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2043);
  }
  else
  {
    v35 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v33, 2043);
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v27 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v12 = *v27;
      }
    }
  }
  v36 = v12;
  if ( v12 )
  {
    P = 0LL;
    v44 = 0;
    if ( !a2 )
    {
      *(_OWORD *)Src = *(_OWORD *)&v8->hContext;
      *(_OWORD *)v38 = *(_OWORD *)&v8->MonitoredFenceValueArray;
      PoolWithTag = (unsigned int *)Src[1];
LABEL_36:
      if ( !a4 )
        a4 = (const unsigned __int64 *)v38[0];
      v23 = WaitForSynchronizationObjectFromGpu(
              HIDWORD(Src[0]),
              PoolWithTag,
              a4,
              v38[0],
              (unsigned int)Src[0],
              v12,
              a2,
              0,
              v6,
              a5);
      if ( v23 < 0 )
      {
        if ( P != v43 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v44 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
        if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v31, &EventProfilerExit, v32, v33);
        return (unsigned int)v23;
      }
      else
      {
        if ( P != v43 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v44 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
        if ( v35 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v24, &EventProfilerExit, v25, v33);
        }
        return 0LL;
      }
    }
    if ( (unsigned __int64)v8 >= MmUserProbeAddress )
      v8 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU *)MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)&v8->hContext;
    *(_OWORD *)v38 = *(_OWORD *)&v8->MonitoredFenceValueArray;
    v39 = *(_OWORD *)&v8->Reserved[2];
    v40 = *(_OWORD *)&v8->Reserved[4];
    v41 = *(_OWORD *)&v8->Reserved[6];
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 4));
    if ( v13 )
    {
      if ( v13 > 4 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v13 < 4 )
        {
          PoolWithTag = (unsigned int *)P;
LABEL_27:
          if ( PoolWithTag != (unsigned int *)v43 && PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          P = 0LL;
          v44 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
          if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v21, &EventProfilerExit, v22, v33);
          return 3221225495LL;
        }
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 4LL * v13, 0x4B677844u);
        P = PoolWithTag;
      }
      else
      {
        PoolWithTag = (unsigned int *)v43;
        P = v43;
      }
      v44 = v13;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 4LL * v13);
        PoolWithTag = (unsigned int *)P;
        if ( P )
        {
          v15 = 4LL * v44;
          v16 = Src[1];
          if ( (char *)Src[1] + v15 < Src[1] || (char *)Src[1] + v15 > (void *)MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(PoolWithTag, v16, v15);
          Src[1] = PoolWithTag;
          goto LABEL_36;
        }
      }
      goto LABEL_27;
    }
    v17 = WdLogNewEntry5_WdError(MmUserProbeAddress);
    *(_QWORD *)(v17 + 24) = LODWORD(Src[0]);
    *(_QWORD *)(v17 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v17);
    if ( P != v43 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v44 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v18, &EventProfilerExit, v19, v33);
    return 3221225485LL;
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v28 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v28 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v28);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v33);
    if ( v35 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v29, &EventProfilerExit, v30, v33);
    return 3221225485LL;
  }
}
