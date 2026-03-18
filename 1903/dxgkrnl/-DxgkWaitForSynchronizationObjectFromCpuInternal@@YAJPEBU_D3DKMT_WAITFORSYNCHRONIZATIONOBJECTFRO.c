/*
 * XREFs of ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX@Z @ 0x1C00F2030
 * Callers:
 *     ?DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C0143AA0 (-DxgkCddWaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@.c)
 *     DxgkWaitForSynchronizationObjectFromCpu @ 0x1C01478B0 (DxgkWaitForSynchronizationObjectFromCpu.c)
 *     ?VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C022A510 (-VmBusWaitForSyncObjectFromCpu@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027C720 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z @ 0x1C0019914 (-AllocateElements@-$NonPagedPoolZeroedArray@_K$03$0ELGHHIEE@@@QEAAPEA_KI@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memmove @ 0x1C0024FC0 (memmove.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x1C00F26D8 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z @ 0x1C0140FA0 (-AllocateElements@-$PagedPoolZeroedArray@I$03@@QEAAPEAII@Z.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C02280FC (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectFromCpuInternal(
        struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a1,
        int a2,
        GUID *a3)
{
  void **v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  const GUID *v18; // r8
  __int64 v20; // rdx
  _BYTE *v21; // r9
  size_t v22; // r8
  const void *v23; // rdx
  __int64 v24; // rdx
  PVOID v25; // rcx
  size_t v26; // r8
  const void *v27; // rdx
  __int64 v28; // rcx
  const GUID *v29; // r8
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int64 v32; // rcx
  const GUID *v33; // r8
  __int64 v34; // rcx
  const GUID *v35; // r8
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  const GUID *v40; // r8
  __int64 v41; // rax
  int v42; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+28h] [rbp-E0h]
  char v44; // [rsp+30h] [rbp-D8h]
  struct DXGDEVICE *v45; // [rsp+38h] [rbp-D0h] BYREF
  struct DXGDEVICE *v46; // [rsp+40h] [rbp-C8h] BYREF
  void *Src[6]; // [rsp+48h] [rbp-C0h] BYREF
  void **v48; // [rsp+78h] [rbp-90h]
  PVOID v49; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v50[16]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v51; // [rsp+98h] [rbp-70h]
  PVOID P; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v53[32]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned int v54; // [rsp+C8h] [rbp-40h]

  v5 = (void **)a1;
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
  Current = DXGPROCESS::GetCurrent();
  Src[5] = Current;
  if ( !Current )
  {
    v36 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v36 + 24) = PsGetCurrentProcess(v38, v37);
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v36);
    goto LABEL_64;
  }
  v49 = 0LL;
  v51 = 0;
  P = 0LL;
  v54 = 0;
  memset(Src, 0, 0x28uLL);
  if ( !a2 )
  {
    v48 = v5;
    if ( *((_DWORD *)v5 + 1) && *((_DWORD *)v5 + 8) < 2u )
    {
LABEL_7:
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45, *(_DWORD *)v5, (struct _KTHREAD **)Current, &v46);
      if ( v46 )
      {
        v13 = *(_QWORD *)(*((_QWORD *)v46 + 2) + 16LL);
        if ( *(_BYTE *)(v13 + 185) )
          v14 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                  (DXG_GUEST_VIRTUALGPU_VMBUS *)(v13 + 4144),
                  Current,
                  *((_DWORD *)v46 + 84),
                  (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v5);
        else
          v14 = WaitForSynchronizationObjectFromCpu(
                  (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *)v5,
                  Current,
                  v46,
                  a3);
        v16 = v14;
        if ( v45 )
        {
          v15 = _InterlockedDecrement64((volatile signed __int64 *)v45 + 8);
          if ( !v15 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
        }
        if ( P != v53 && P )
          ExFreePoolWithTag(P, 0);
        v54 = 0;
        P = 0LL;
        if ( v49 != v50 && v49 )
          ExFreePoolWithTag(v49, 0);
        v49 = 0LL;
        v51 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v15);
        if ( v44 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v17, &EventProfilerExit, v18, v42);
        }
        return v16;
      }
      v41 = WdLogNewEntry5_WdError(v12, v11, 0LL);
      *(_QWORD *)(v41 + 24) = *(unsigned int *)v5;
      *(_QWORD *)(v41 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v41);
      if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
      if ( P != v53 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v54 = 0;
      if ( v49 != v50 && v49 )
        ExFreePoolWithTag(v49, 0);
      v49 = 0LL;
      v51 = 0;
    }
LABEL_64:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v10);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v39, &EventProfilerExit, v40, v42);
    return 3221225485LL;
  }
  if ( (unsigned __int64)v5 >= MmUserProbeAddress )
    v5 = (void **)MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v5;
  *(_OWORD *)&Src[2] = *((_OWORD *)v5 + 1);
  Src[4] = v5[4];
  if ( HIDWORD(Src[0]) )
  {
    if ( ((__int64)Src[4] & 0xFFFFFFFE) != 0 )
    {
      P = 0LL;
      v54 = 0;
      v49 = 0LL;
      v51 = 0;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, HIDWORD(Src[0]));
      if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v30, &EventProfilerExit, v31, v42);
      return 3221225485LL;
    }
    else
    {
      PagedPoolZeroedArray<unsigned int,4>::AllocateElements(&v49);
      v21 = v49;
      if ( v49 )
      {
        v22 = 4LL * v51;
        v23 = Src[1];
        if ( (char *)Src[1] + v22 < Src[1] || (char *)Src[1] + v22 > (void *)MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(v21, v23, v22);
        Src[1] = v49;
        NonPagedPoolZeroedArray<unsigned __int64,4,1265072196>::AllocateElements(&P, HIDWORD(Src[0]));
        v25 = P;
        if ( P )
        {
          v26 = 8LL * v54;
          v27 = Src[2];
          if ( (char *)Src[2] + v26 < Src[2] || (char *)Src[2] + v26 > (void *)MmUserProbeAddress )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v25, v27, v26);
          Src[2] = P;
          v5 = Src;
          v48 = Src;
          goto LABEL_7;
        }
        P = 0LL;
        v54 = 0;
        if ( v49 != v50 && v49 )
          ExFreePoolWithTag(v49, 0);
        v49 = 0LL;
        v51 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v24);
        if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v34, &EventProfilerExit, v35, v42);
        return 3221225495LL;
      }
      else
      {
        if ( P != v53 && P )
        {
          ExFreePoolWithTag(P, 0);
          v21 = v49;
        }
        P = 0LL;
        v54 = 0;
        if ( v21 != v50 && v21 )
          ExFreePoolWithTag(v21, 0);
        v49 = 0LL;
        v51 = 0;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, v20);
        if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v32, &EventProfilerExit, v33, v42);
        return 3221225495LL;
      }
    }
  }
  else
  {
    P = 0LL;
    v54 = 0;
    v49 = 0LL;
    v51 = 0;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42, 0LL);
    if ( v44 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v28, &EventProfilerExit, v29, v42);
    return 3221225485LL;
  }
}
