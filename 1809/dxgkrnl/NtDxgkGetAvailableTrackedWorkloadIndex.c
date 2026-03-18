/*
 * XREFs of NtDxgkGetAvailableTrackedWorkloadIndex @ 0x1C0260E80
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
 *     ?GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEAI@Z @ 0x1C02604B4 (-GetAvailableIndex@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEAI@Z.c)
 */

__int64 __fastcall NtDxgkGetAvailableTrackedWorkloadIndex(ULONG64 a1)
{
  ULONG64 v2; // rax
  struct _KTHREAD **Current; // rbx
  __int64 v4; // r9
  int AvailableIndex; // ebx
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  DXGTRACKEDWORKLOAD *v9; // [rsp+30h] [rbp-B8h] BYREF
  struct DXGTRACKEDWORKLOAD *v10; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+40h] [rbp-A8h] BYREF
  char v12; // [rsp+48h] [rbp-A0h]
  unsigned int v13[4]; // [rsp+50h] [rbp-98h]
  __int64 v14; // [rsp+60h] [rbp-88h]
  _BYTE v15[120]; // [rsp+70h] [rbp-78h] BYREF
  unsigned int v16; // [rsp+F8h] [rbp+10h] BYREF
  struct DXGDEVICE *v17; // [rsp+100h] [rbp+18h] BYREF
  struct DXGDEVICE *v18; // [rsp+108h] [rbp+20h] BYREF

  v2 = a1;
  if ( a1 >= MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  *(_OWORD *)v13 = *(_OWORD *)v2;
  v14 = *(_QWORD *)(v2 + 16);
  v18 = 0LL;
  v10 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v17, v13[0], Current, &v18);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE((DXGTRACKEDWORKLOADBYHANDLE *)&v9, v13[1], Current, &v10);
  if ( !v18 || !v10 )
  {
    AvailableIndex = -1073741811;
    goto LABEL_18;
  }
  v16 = 0;
  DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v11, v18);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v15, (__int64)v18, 0, v4, 0);
  AvailableIndex = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v15);
  if ( AvailableIndex < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v15);
    v6 = v11;
LABEL_7:
    if ( v6 && v12 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 104));
      KeLeaveCriticalRegion();
    }
    goto LABEL_18;
  }
  AvailableIndex = DXGTRACKEDWORKLOAD::GetAvailableIndex(
                     v10,
                     v18,
                     (struct COREDEVICEACCESS *)v15,
                     *(__int64 *)&v13[2],
                     &v16);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v15);
  v6 = v11;
  if ( AvailableIndex < 0 )
    goto LABEL_7;
  if ( v11 && v12 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v11 + 104));
    KeLeaveCriticalRegion();
  }
  v7 = (_DWORD *)(a1 + 16);
  if ( a1 + 16 >= MmUserProbeAddress )
    v7 = (_DWORD *)MmUserProbeAddress;
  *v7 = v16;
LABEL_18:
  if ( v9 )
    DXGTRACKEDWORKLOAD::Release(v9);
  if ( v17 && _InterlockedExchangeAdd64((volatile signed __int64 *)v17 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v17 + 2), v17);
  return (unsigned int)AvailableIndex;
}
