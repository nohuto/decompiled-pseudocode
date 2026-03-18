/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C0127550
 * Callers:
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C0127510 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x1C0127530 (DxgkWaitForSynchronizationObjectFromCpu.c)
 *     ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01FA2D0 (-VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0246E9C (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C0127CC0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C01F7F9C (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpuInternal(
        struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        int a2,
        GUID *a3)
{
  void **v5; // rbx
  __int64 v6; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v8; // rcx
  struct DXGDEVICE *v9; // rsi
  __int64 v10; // rbx
  _BYTE *PoolWithTag; // rcx
  size_t v12; // r8
  const void *v13; // rdx
  _BYTE *v14; // r9
  __int64 v15; // rbx
  _BYTE *v16; // rcx
  size_t v17; // r8
  const void *v18; // rdx
  __int64 v19; // rcx
  const GUID *v20; // r8
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v24; // rcx
  const GUID *v25; // r8
  __int64 v26; // rcx
  const GUID *v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned int v30; // ebx
  __int64 v31; // rcx
  const GUID *v32; // r8
  struct DXGDEVICE **ThreadProperty; // rax
  struct DXGDEVICE **v34; // r15
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  const GUID *v39; // r8
  __int64 v40; // rax
  int v41; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+28h] [rbp-E0h]
  char v43; // [rsp+30h] [rbp-D8h]
  struct DXGDEVICE *v44; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v45[2]; // [rsp+40h] [rbp-C8h] BYREF
  void *Src[2]; // [rsp+50h] [rbp-B8h] BYREF
  void *v47[2]; // [rsp+60h] [rbp-A8h]
  void *v48; // [rsp+70h] [rbp-98h]
  void **v49; // [rsp+78h] [rbp-90h]
  PVOID v50; // [rsp+80h] [rbp-88h]
  _BYTE v51[16]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v52; // [rsp+98h] [rbp-70h]
  PVOID P; // [rsp+A0h] [rbp-68h]
  _BYTE v54[32]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v55; // [rsp+C8h] [rbp-40h]

  v5 = (void **)a1;
  v41 = -1;
  v42 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v43 = 1;
    v41 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2043);
  }
  else
  {
    v43 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v41, 2043);
  v6 = ((__int64 (*)(void))PsGetCurrentProcess)();
  ProcessDxgProcess = PsGetProcessDxgProcess(v6);
  v9 = (struct DXGDEVICE *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (struct DXGDEVICE **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v34 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v9 = *v34;
      }
    }
  }
  v45[1] = v9;
  if ( !v9 )
  {
    v35 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v35 + 24) = PsGetCurrentProcess(v37, v36);
    *(_QWORD *)(v35 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v35);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( !v43 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
      return 3221225485LL;
    goto LABEL_97;
  }
  v50 = 0LL;
  v52 = 0;
  P = 0LL;
  v55 = 0;
  if ( !a2 )
  {
    v49 = v5;
    if ( !*((_DWORD *)v5 + 1) || *((_DWORD *)v5 + 8) >= 2u )
    {
      P = 0LL;
      v55 = 0;
      v50 = 0LL;
      v52 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
      if ( !v43 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
        return 3221225485LL;
      goto LABEL_97;
    }
    goto LABEL_60;
  }
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v5;
  *(_OWORD *)v47 = *((_OWORD *)v5 + 1);
  v48 = v5[4];
  v10 = HIDWORD(Src[0]);
  if ( HIDWORD(Src[0]) )
  {
    if ( ((unsigned int)v48 & 0xFFFFFFFE) == 0 )
    {
      if ( HIDWORD(Src[0]) > 4 )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 4 )
          goto LABEL_15;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4LL * HIDWORD(Src[0]), 0x4B677844u);
        v50 = PoolWithTag;
      }
      else
      {
        PoolWithTag = v51;
        v50 = v51;
      }
      v52 = v10;
      if ( !PoolWithTag )
      {
LABEL_38:
        if ( P != v54 && P )
        {
          ExFreePoolWithTag(P, 0);
          PoolWithTag = v50;
        }
        P = 0LL;
        v55 = 0;
        if ( PoolWithTag != v51 && PoolWithTag )
          ExFreePoolWithTag(PoolWithTag, 0);
        v50 = 0LL;
        v52 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
        if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v24, &EventProfilerExit, v25, v41);
        return 3221225495LL;
      }
      memset(PoolWithTag, 0, 4 * v10);
LABEL_15:
      PoolWithTag = v50;
      if ( v50 )
      {
        v12 = 4LL * v52;
        v13 = Src[1];
        if ( (char *)Src[1] + v12 < Src[1] || (char *)Src[1] + v12 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(PoolWithTag, v13, v12);
        v14 = v50;
        Src[1] = v50;
        v15 = HIDWORD(Src[0]);
        if ( HIDWORD(Src[0]) > 4 )
        {
          if ( 0xFFFFFFFFFFFFFFFFuLL / HIDWORD(Src[0]) < 8 )
            goto LABEL_23;
          v16 = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * HIDWORD(Src[0]), 0x4B677844u);
          P = v16;
          v14 = v50;
        }
        else
        {
          v16 = v54;
          P = v54;
        }
        v55 = v15;
        if ( !v16 )
        {
LABEL_51:
          P = 0LL;
          v55 = 0;
          if ( v14 != v51 && v14 )
            ExFreePoolWithTag(v14, 0);
          v50 = 0LL;
          v52 = 0;
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
          if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v26, &EventProfilerExit, v27, v41);
          return 3221225495LL;
        }
        if ( !(_DWORD)v15 )
        {
LABEL_24:
          if ( v16 )
          {
            v17 = 8LL * v55;
            v18 = v47[0];
            if ( (char *)v47[0] + v17 < v47[0] || (char *)v47[0] + v17 > (void *)MmUserProbeAddress )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v16, v18, v17);
            v47[0] = P;
            v5 = Src;
            v49 = Src;
LABEL_60:
            DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v44, *(_DWORD *)v5, (struct _KTHREAD **)v9, v45);
            if ( v45[0] )
            {
              v29 = *(_QWORD *)(*((_QWORD *)v45[0] + 2) + 16LL);
              if ( *(_BYTE *)(v29 + 185) )
              {
                v30 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                        (DXG_GUEST_VIRTUALGPU_VMBUS *)(v29 + 4152),
                        v9,
                        *((_DWORD *)v45[0] + 84),
                        (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v5);
                if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
                if ( P != v54 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v55 = 0;
                if ( v50 != v51 && v50 )
                  ExFreePoolWithTag(v50, 0);
                v50 = 0LL;
                v52 = 0;
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
                if ( !v43 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                  return v30;
              }
              else
              {
                v30 = WaitForSynchronizationObjectFromCpu(
                        (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v5,
                        v9,
                        v45[0],
                        a3);
                if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
                if ( P != v54 && P )
                  ExFreePoolWithTag(P, 0);
                P = 0LL;
                v55 = 0;
                if ( v50 != v51 && v50 )
                  ExFreePoolWithTag(v50, 0);
                v50 = 0LL;
                v52 = 0;
                DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
                if ( !v43 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
                  return v30;
              }
              McTemplateK0q(v31, &EventProfilerExit, v32, v41);
              return v30;
            }
            v40 = WdLogNewEntry5_WdError(v28);
            *(_QWORD *)(v40 + 24) = *(unsigned int *)v5;
            *(_QWORD *)(v40 + 32) = -1073741811LL;
            WdLogEvent5_WdError(v40);
            if ( v44 && _InterlockedExchangeAdd64((volatile signed __int64 *)v44 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v44 + 2), v44);
            if ( P != v54 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v55 = 0;
            if ( v50 != v51 && v50 )
              ExFreePoolWithTag(v50, 0);
            v50 = 0LL;
            v52 = 0;
            DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
            if ( !v43 || (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) == 0 )
              return 3221225485LL;
LABEL_97:
            McTemplateK0q(v38, &EventProfilerExit, v39, v41);
            return 3221225485LL;
          }
          goto LABEL_51;
        }
        memset(v16, 0, 8 * v15);
        v14 = v50;
LABEL_23:
        v16 = P;
        goto LABEL_24;
      }
      goto LABEL_38;
    }
    P = 0LL;
    v55 = 0;
    v50 = 0LL;
    v52 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v22, &EventProfilerExit, v23, v41);
    return 3221225485LL;
  }
  else
  {
    P = 0LL;
    v55 = 0;
    v50 = 0LL;
    v52 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v41);
    if ( v43 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v19, &EventProfilerExit, v20, v41);
    return 3221225485LL;
  }
}
