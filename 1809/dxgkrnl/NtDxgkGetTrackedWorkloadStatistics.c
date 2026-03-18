/*
 * XREFs of NtDxgkGetTrackedWorkloadStatistics @ 0x1C0261130
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00109E8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C0042A80 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C026003C (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z.c)
 *     ?GetTrackedWorkloadStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORKLOADSTATISTICS@@@Z @ 0x1C0260578 (-GetTrackedWorkloadStatistics@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAU_D3DKMT_GETTRACKEDWORK.c)
 */

__int64 __fastcall NtDxgkGetTrackedWorkloadStatistics(ULONG64 a1)
{
  _D3DKMT_GETTRACKEDWORKLOADSTATISTICS *v2; // rax
  struct _KTHREAD **Current; // rbx
  struct DXGDEVICE *v4; // rbx
  __int64 v5; // r9
  struct DXGDEVICE *v6; // rdx
  int TrackedWorkloadStatistics; // ebx
  D3DKMT_TRACKEDWORKLOAD_STATISTICS *v8; // rdx
  _QWORD *v9; // rdx
  __int64 v11; // [rsp+30h] [rbp-C8h] BYREF
  char v12; // [rsp+38h] [rbp-C0h]
  struct DXGDEVICE *v13; // [rsp+40h] [rbp-B8h] BYREF
  _D3DKMT_GETTRACKEDWORKLOADSTATISTICS v14; // [rsp+48h] [rbp-B0h] BYREF
  _BYTE v15[120]; // [rsp+80h] [rbp-78h] BYREF
  struct DXGDEVICE *v16; // [rsp+108h] [rbp+10h] BYREF
  DXGTRACKEDWORKLOAD *v17; // [rsp+110h] [rbp+18h] BYREF
  struct DXGTRACKEDWORKLOAD *v18; // [rsp+118h] [rbp+20h] BYREF

  v2 = (_D3DKMT_GETTRACKEDWORKLOADSTATISTICS *)a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = (_D3DKMT_GETTRACKEDWORKLOADSTATISTICS *)MmUserProbeAddress;
  v14 = *v2;
  v13 = 0LL;
  v18 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v16, v14.hDevice, Current, &v13);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)&v17,
    v14.hTrackedWorkload,
    Current,
    &v18);
  v4 = v13;
  if ( v13 && v18 )
  {
    DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v11, v13);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v15, (__int64)v4, 0, v5, 0);
    TrackedWorkloadStatistics = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v15);
    if ( TrackedWorkloadStatistics >= 0 )
    {
      TrackedWorkloadStatistics = DXGTRACKEDWORKLOAD::GetTrackedWorkloadStatistics(v18, v6, &v14);
      if ( TrackedWorkloadStatistics >= 0 )
      {
        v8 = (D3DKMT_TRACKEDWORKLOAD_STATISTICS *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v8 = (D3DKMT_TRACKEDWORKLOAD_STATISTICS *)MmUserProbeAddress;
        *v8 = v14.DeadlineOffsetHundredsNS;
        v9 = (_QWORD *)(a1 + 40);
        if ( a1 + 40 >= MmUserProbeAddress )
          v9 = (_QWORD *)MmUserProbeAddress;
        *v9 = v14.MissedDeadlines;
      }
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v15);
    if ( v11 && v12 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 104));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    TrackedWorkloadStatistics = -1073741811;
  }
  if ( v17 )
    DXGTRACKEDWORKLOAD::Release(v17);
  if ( v16 && _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v16 + 2), v16);
  return (unsigned int)TrackedWorkloadStatistics;
}
