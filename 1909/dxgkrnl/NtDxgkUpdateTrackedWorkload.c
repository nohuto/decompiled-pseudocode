/*
 * XREFs of NtDxgkUpdateTrackedWorkload @ 0x1C0298C20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EE8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007110 (-Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C0049E98 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     DxgkGetDeviceStateInternal @ 0x1C0132A60 (DxgkGetDeviceStateInternal.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C0297024 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z.c)
 *     ?ProcessActiveInstances@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x1C02978FC (-ProcessActiveInstances@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z.c)
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x1C0297E10 (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 */

__int64 __fastcall NtDxgkUpdateTrackedWorkload(struct DXGTRACKEDWORKLOAD *a1)
{
  _D3DKMT_UPDATETRACKEDWORKLOAD *v1; // rax
  __int64 v2; // rdx
  struct _KTHREAD **Current; // rbx
  D3DKMT_HANDLE hDevice; // r12d
  struct DXGDEVICE *v5; // r14
  struct DXGTRACKEDWORKLOAD *v6; // rsi
  __int64 v7; // r9
  __int64 v8; // rdi
  struct DXGDEVICE *v9; // rax
  unsigned __int64 *p_CPUCalibrationTimestamp; // rax
  __int64 v11; // r9
  __int64 v12; // r15
  const GUID *v13; // r8
  int DeviceStateInternal; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  struct DXGDEVICE *v19; // rdx
  struct DXGDEVICE *v21; // [rsp+30h] [rbp-448h] BYREF
  struct DXGTRACKEDWORKLOAD *v22; // [rsp+38h] [rbp-440h] BYREF
  PVOID P; // [rsp+40h] [rbp-438h] BYREF
  struct DXGDEVICE *v24; // [rsp+48h] [rbp-430h] BYREF
  int v25; // [rsp+50h] [rbp-428h]
  struct DXGDEVICE *v26; // [rsp+58h] [rbp-420h] BYREF
  _BYTE v27[8]; // [rsp+60h] [rbp-418h] BYREF
  __int64 v28; // [rsp+68h] [rbp-410h]
  char v29; // [rsp+70h] [rbp-408h]
  _BYTE v30[16]; // [rsp+78h] [rbp-400h] BYREF
  _DWORD v31[14]; // [rsp+88h] [rbp-3F0h] BYREF
  _D3DKMT_UPDATETRACKEDWORKLOAD v32; // [rsp+C0h] [rbp-3B8h] BYREF
  _BYTE v33[160]; // [rsp+300h] [rbp-178h] BYREF
  _BYTE v34[160]; // [rsp+3A0h] [rbp-D8h] BYREF

  v22 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (struct DXGTRACKEDWORKLOAD *)MmUserProbeAddress;
  v1 = &v32;
  v2 = 4LL;
  do
  {
    *(_OWORD *)&v1->hDevice = *(_OWORD *)a1;
    *(_OWORD *)&v1->FinishDeadline.VBlankOffsetHundredsNS = *((_OWORD *)a1 + 1);
    *(_OWORD *)&v1->FenceSubmissionValue = *((_OWORD *)a1 + 2);
    *(_OWORD *)&v1->GPUTimestampFrequency = *((_OWORD *)a1 + 3);
    *(_OWORD *)&v1->CPUCalibrationTimestamp = *((_OWORD *)a1 + 4);
    v1[1].FinishDeadline = (D3DKMT_TRACKEDWORKLOADDEADLINE)*((_OWORD *)a1 + 5);
    *(_OWORD *)&v1[1].BeginTrackedWorkloadIndex = *((_OWORD *)a1 + 6);
    v1 = (_D3DKMT_UPDATETRACKEDWORKLOAD *)((char *)v1 + 128);
    *(_OWORD *)&v1[-1].GPUCalibrationTimestamp = *((_OWORD *)a1 + 7);
    a1 = (struct DXGTRACKEDWORKLOAD *)((char *)a1 + 128);
    --v2;
  }
  while ( v2 );
  *(_OWORD *)&v1->hDevice = *(_OWORD *)a1;
  *(_OWORD *)&v1->FinishDeadline.VBlankOffsetHundredsNS = *((_OWORD *)a1 + 1);
  *(_OWORD *)&v1->FenceSubmissionValue = *((_OWORD *)a1 + 2);
  *(_OWORD *)&v1->GPUTimestampFrequency = *((_OWORD *)a1 + 3);
  v26 = 0LL;
  v22 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, 0LL);
  hDevice = v32.hDevice;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, v32.hDevice, Current, &v26);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)&P,
    v32.hTrackedWorkload,
    Current,
    &v22);
  v5 = v26;
  if ( !v26 || (v6 = v22) == 0LL )
  {
    LODWORD(v8) = -1073741811;
    if ( P )
      DXGTRACKEDWORKLOAD::Release((volatile signed __int64 *)P);
    v9 = v21;
    if ( v21 )
      goto LABEL_32;
    return (unsigned int)v8;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30,
    v26);
  v28 = *(_QWORD *)(*((_QWORD *)v5 + 2) + 16LL);
  v29 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v5, 0, v7, 0);
  LODWORD(v8) = COREDEVICEACCESS::AcquireShared((__int64)v33, 0xFFFFFFFF, 0LL);
  if ( (int)v8 < 0 )
    goto LABEL_8;
  p_CPUCalibrationTimestamp = &v32.CPUCalibrationTimestamp;
  if ( *((_DWORD *)v6 + 17) )
    p_CPUCalibrationTimestamp = 0LL;
  LODWORD(v8) = DXGTRACKEDWORKLOAD::ProcessActiveInstances(
                  v6,
                  (PERESOURCE *)v5,
                  (struct COREDEVICEACCESS *)v33,
                  v32.FenceSubmissionValue,
                  p_CPUCalibrationTimestamp);
  if ( (int)v8 < 0 )
  {
LABEL_8:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    if ( v29 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    if ( v29 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
    v12 = 0LL;
    if ( *((_DWORD *)v6 + 288) == 1 )
    {
      memset(v31, 0, sizeof(v31));
      v31[0] = hDevice;
      v31[1] = 4;
      DeviceStateInternal = DxgkGetDeviceStateInternal((ULONG64)v31, 0, v13);
      v8 = DeviceStateInternal;
      if ( DeviceStateInternal < 0 )
      {
        v18 = WdLogNewEntry5_WdWarning(v16, v15, v17);
        *(_QWORD *)(v18 + 24) = v8;
        *(_QWORD *)(v18 + 32) = 258LL;
        WdLogEvent5_WdWarning(v18);
        goto LABEL_11;
      }
      v12 = (unsigned int)(v31[8] + 1);
    }
    v24 = v5;
    v25 = 0;
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v34, (__int64)v5, 0, v11, 0);
    if ( *((_DWORD *)v6 + 288) != 1
      || (DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v24),
          LODWORD(v8) = COREDEVICEACCESS::AcquireShared((__int64)v34, 0xFFFFFFFF, 0LL),
          (int)v8 >= 0) )
    {
      LODWORD(v8) = DXGTRACKEDWORKLOAD::UpdateTrackedWorkload(v6, v19, &v32, v12);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v34);
    if ( v24 )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v24);
  }
LABEL_11:
  if ( P )
    DXGTRACKEDWORKLOAD::Release((volatile signed __int64 *)P);
  v9 = v21;
  if ( v21 )
  {
LABEL_32:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
  }
  return (unsigned int)v8;
}
