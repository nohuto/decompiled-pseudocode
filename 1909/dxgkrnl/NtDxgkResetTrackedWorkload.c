/*
 * XREFs of NtDxgkResetTrackedWorkload @ 0x1C0298A00
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
 */

__int64 __fastcall NtDxgkResetTrackedWorkload(struct DXGTRACKEDWORKLOAD *a1)
{
  struct _KTHREAD **Current; // rbx
  struct DXGDEVICE *v2; // rbx
  struct DXGTRACKEDWORKLOAD *v3; // rdi
  __int64 v4; // r9
  int v5; // esi
  __int64 v6; // rcx
  bool v7; // zf
  struct DXGDEVICE *v8; // rax
  struct DXGTRACKEDWORKLOAD *v10; // [rsp+30h] [rbp-F8h] BYREF
  struct DXGDEVICE *v11; // [rsp+38h] [rbp-F0h] BYREF
  PVOID P; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v13[2]; // [rsp+48h] [rbp-E0h]
  struct DXGDEVICE *v14; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-D0h] BYREF
  char v16; // [rsp+60h] [rbp-C8h]
  _BYTE v17[160]; // [rsp+70h] [rbp-B8h] BYREF

  v10 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (struct DXGTRACKEDWORKLOAD *)MmUserProbeAddress;
  *(_QWORD *)v13 = *(_QWORD *)a1;
  v14 = 0LL;
  v10 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)a1, MmUserProbeAddress);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v11, v13[0], Current, &v14);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE((DXGTRACKEDWORKLOADBYHANDLE *)&P, v13[1], Current, &v10);
  v2 = v14;
  if ( !v14 || (v3 = v10) == 0LL )
  {
    v5 = -1073741811;
    if ( P )
      DXGTRACKEDWORKLOAD::Release((volatile signed __int64 *)P);
    v8 = v11;
    if ( v11 )
      goto LABEL_19;
    return (unsigned int)v5;
  }
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v15, v14);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v17, (__int64)v2, 0, v4, 0);
  v5 = COREDEVICEACCESS::AcquireShared((__int64)v17, 0xFFFFFFFF, 0LL);
  if ( v5 >= 0 )
  {
    *((_QWORD *)v3 + 40) = 0LL;
    *((_DWORD *)v3 + 48) = 0;
    *((_DWORD *)v3 + 49) = 0;
    *((_DWORD *)v3 + 30) = 0;
    *((_DWORD *)v3 + 31) = 0;
    v5 = 0;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v17);
    v6 = v15;
    if ( !v15 )
      goto LABEL_10;
    v7 = v16 == 0;
  }
  else
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v17);
    v6 = v15;
    if ( !v15 )
      goto LABEL_10;
    v7 = v16 == 0;
  }
  if ( !v7 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 104));
    KeLeaveCriticalRegion();
  }
LABEL_10:
  if ( P )
    DXGTRACKEDWORKLOAD::Release((volatile signed __int64 *)P);
  v8 = v11;
  if ( v11 )
  {
LABEL_19:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v8 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v11 + 2), v11);
  }
  return (unsigned int)v5;
}
