/*
 * XREFs of NtDxgkGetTrackedWorkloadStatistics @ 0x1C02986E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006CDC (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C0049E98 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C0297024 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z.c)
 *     ?GetTrackedWorkloadStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORKLOADSTATISTICS@@@Z @ 0x1C02977F4 (-GetTrackedWorkloadStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORK.c)
 */

__int64 __fastcall NtDxgkGetTrackedWorkloadStatistics(struct DXGDEVICE *a1)
{
  _D3DKMT_GETTRACKEDWORKLOADSTATISTICS *v2; // rax
  struct _KTHREAD **Current; // rbx
  struct DXGDEVICE *v4; // rbx
  __int64 v5; // r9
  struct DXGDEVICE *v6; // rdx
  int TrackedWorkloadStatistics; // edi
  struct DXGDEVICE *v8; // rax
  D3DKMT_TRACKEDWORKLOAD_STATISTICS *v9; // rdx
  _QWORD *v10; // rdx
  struct DXGDEVICE *v12; // [rsp+30h] [rbp-128h] BYREF
  struct DXGDEVICE *v13; // [rsp+38h] [rbp-120h] BYREF
  PVOID P; // [rsp+40h] [rbp-118h] BYREF
  __int64 v15; // [rsp+48h] [rbp-110h] BYREF
  char v16; // [rsp+50h] [rbp-108h]
  struct DXGTRACKEDWORKLOAD *v17; // [rsp+58h] [rbp-100h] BYREF
  _D3DKMT_GETTRACKEDWORKLOADSTATISTICS v18; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v19[160]; // [rsp+A0h] [rbp-B8h] BYREF

  v13 = a1;
  v2 = (_D3DKMT_GETTRACKEDWORKLOADSTATISTICS *)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (_D3DKMT_GETTRACKEDWORKLOADSTATISTICS *)MmUserProbeAddress;
  v18 = *v2;
  v13 = 0LL;
  v17 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, MmUserProbeAddress);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v12, v18.hDevice, Current, &v13);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)&P,
    v18.hTrackedWorkload,
    Current,
    &v17);
  v4 = v13;
  if ( v13 && v17 )
  {
    DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v15, v13);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v19, (__int64)v4, 0, v5, 0);
    TrackedWorkloadStatistics = COREDEVICEACCESS::AcquireShared((__int64)v19, 0xFFFFFFFF, 0LL);
    if ( TrackedWorkloadStatistics >= 0 )
    {
      TrackedWorkloadStatistics = DXGTRACKEDWORKLOAD::GetTrackedWorkloadStatistics(v17, v6, &v18);
      if ( TrackedWorkloadStatistics >= 0 )
      {
        v9 = (D3DKMT_TRACKEDWORKLOAD_STATISTICS *)((char *)a1 + 8);
        if ( (unsigned __int64)a1 + 8 >= MmUserProbeAddress )
          v9 = (D3DKMT_TRACKEDWORKLOAD_STATISTICS *)MmUserProbeAddress;
        *v9 = v18.DeadlineOffsetHundredsNS;
        v10 = (_QWORD *)((char *)a1 + 40);
        if ( (unsigned __int64)a1 + 40 >= MmUserProbeAddress )
          v10 = (_QWORD *)MmUserProbeAddress;
        *v10 = v18.MissedDeadlines;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v19);
    if ( v15 && v16 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v15 + 104));
      KeLeaveCriticalRegion();
    }
    if ( P )
      DXGTRACKEDWORKLOAD::Release((volatile signed __int64 *)P);
    v8 = v12;
    if ( v12 )
    {
LABEL_22:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v12 + 2), v12);
    }
  }
  else
  {
    TrackedWorkloadStatistics = -1073741811;
    if ( P )
      DXGTRACKEDWORKLOAD::Release((volatile signed __int64 *)P);
    v8 = v12;
    if ( v12 )
      goto LABEL_22;
  }
  return (unsigned int)TrackedWorkloadStatistics;
}
