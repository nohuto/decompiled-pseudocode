/*
 * XREFs of NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0298360
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EE8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C0049E98 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C0297024 (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z.c)
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAI@Z @ 0x1C0297720 (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_KPEAI@Z.c)
 */

__int64 __fastcall NtDxgkGetAvailableTrackedWorkloadIndex(struct DXGDEVICE *a1)
{
  _OWORD *v2; // rax
  unsigned int *v3; // rcx
  __int64 v4; // rdx
  struct _KTHREAD **Current; // rbx
  struct DXGDEVICE *v6; // r15
  struct DXGTRACKEDWORKLOAD *v7; // r14
  __int64 v8; // r9
  int AvailableIndex; // edi
  struct DXGDEVICE *v10; // rax
  unsigned __int64 *v11; // rax
  _DWORD *v12; // rdx
  struct DXGDEVICE *v14[2]; // [rsp+30h] [rbp-348h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-338h] BYREF
  PVOID P; // [rsp+48h] [rbp-330h] BYREF
  struct DXGDEVICE *v17; // [rsp+50h] [rbp-328h] BYREF
  struct DXGTRACKEDWORKLOAD *v18; // [rsp+58h] [rbp-320h] BYREF
  _BYTE v19[8]; // [rsp+60h] [rbp-318h] BYREF
  __int64 v20; // [rsp+68h] [rbp-310h]
  char v21; // [rsp+70h] [rbp-308h]
  _BYTE v22[24]; // [rsp+78h] [rbp-300h] BYREF
  unsigned int v23[2]; // [rsp+90h] [rbp-2E8h] BYREF
  unsigned __int64 v24; // [rsp+98h] [rbp-2E0h]
  char v25; // [rsp+A8h] [rbp-2D0h] BYREF
  _BYTE v26[160]; // [rsp+2B0h] [rbp-C8h] BYREF

  v14[1] = a1;
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (_OWORD *)MmUserProbeAddress;
  v3 = v23;
  v4 = 4LL;
  do
  {
    *(_OWORD *)v3 = *v2;
    *((_OWORD *)v3 + 1) = v2[1];
    *((_OWORD *)v3 + 2) = v2[2];
    *((_OWORD *)v3 + 3) = v2[3];
    *((_OWORD *)v3 + 4) = v2[4];
    *((_OWORD *)v3 + 5) = v2[5];
    *((_OWORD *)v3 + 6) = v2[6];
    v3 += 32;
    *((_OWORD *)v3 - 1) = v2[7];
    v2 += 8;
    --v4;
  }
  while ( v4 );
  *(_OWORD *)v3 = *v2;
  *((_QWORD *)v3 + 2) = *((_QWORD *)v2 + 2);
  v17 = 0LL;
  v18 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)v3, 0LL);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v14, v23[0], Current, &v17);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE((DXGTRACKEDWORKLOADBYHANDLE *)&P, v23[1], Current, &v18);
  v6 = v17;
  if ( v17 && (v7 = v18) != 0LL )
  {
    v15 = 0;
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22,
      v17);
    v20 = *(_QWORD *)(*((_QWORD *)v6 + 2) + 16LL);
    v21 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v26, (__int64)v6, 0, v8, 0);
    AvailableIndex = COREDEVICEACCESS::AcquireShared((__int64)v26, 0xFFFFFFFF, 0LL);
    if ( AvailableIndex < 0 )
      goto LABEL_8;
    v11 = (unsigned __int64 *)&v25;
    if ( *((_DWORD *)v7 + 17) )
      v11 = 0LL;
    AvailableIndex = DXGTRACKEDWORKLOAD::GetAvailableIndex(v7, v6, (struct COREDEVICEACCESS *)v26, v24, v11, &v15);
    if ( AvailableIndex < 0 )
    {
LABEL_8:
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
      if ( v21 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22);
    }
    else
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v26);
      if ( v21 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v19);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v22);
      v12 = (_DWORD *)((char *)a1 + 16);
      if ( (unsigned __int64)a1 + 16 >= MmUserProbeAddress )
        v12 = (_DWORD *)MmUserProbeAddress;
      *v12 = v15;
    }
    if ( P )
      DXGTRACKEDWORKLOAD::Release((volatile signed __int64 *)P);
    v10 = v14[0];
    if ( v14[0] )
    {
LABEL_26:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v10 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v14[0] + 2), v14[0]);
    }
  }
  else
  {
    AvailableIndex = -1073741811;
    if ( P )
      DXGTRACKEDWORKLOAD::Release((volatile signed __int64 *)P);
    v10 = v14[0];
    if ( v14[0] )
      goto LABEL_26;
  }
  return (unsigned int)AvailableIndex;
}
