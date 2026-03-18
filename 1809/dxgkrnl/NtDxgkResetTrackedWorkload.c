/*
 * XREFs of NtDxgkResetTrackedWorkload @ 0x1C0261400
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
 */

__int64 __fastcall NtDxgkResetTrackedWorkload(__int64 *a1)
{
  struct _KTHREAD **Current; // rbx
  struct DXGDEVICE *v2; // rdi
  struct DXGTRACKEDWORKLOAD *v3; // rbx
  __int64 v4; // r9
  int v5; // edi
  __int64 v6; // rcx
  bool v7; // zf
  struct DXGDEVICE *v9; // [rsp+30h] [rbp-98h] BYREF
  struct DXGTRACKEDWORKLOAD *v10; // [rsp+38h] [rbp-90h] BYREF
  __int64 v11; // [rsp+40h] [rbp-88h] BYREF
  char v12; // [rsp+48h] [rbp-80h]
  _BYTE v13[120]; // [rsp+50h] [rbp-78h] BYREF
  struct DXGDEVICE *v14; // [rsp+D8h] [rbp+10h] BYREF
  DXGTRACKEDWORKLOAD *v15; // [rsp+E0h] [rbp+18h] BYREF
  __int64 v16; // [rsp+E8h] [rbp+20h]

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v16 = *a1;
  v9 = 0LL;
  v10 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v14, v16, Current, &v9);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)&v15,
    HIDWORD(v16),
    Current,
    &v10);
  v2 = v9;
  if ( v9 && (v3 = v10) != 0LL )
  {
    DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v11, v9);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v13, (__int64)v2, 0, v4, 0);
    v5 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v13);
    if ( v5 >= 0 )
    {
      *((_QWORD *)v3 + 37) = 0LL;
      *((_DWORD *)v3 + 42) = 0;
      *((_DWORD *)v3 + 43) = 0;
      *((_DWORD *)v3 + 24) = 0;
      *((_DWORD *)v3 + 25) = 0;
      v5 = 0;
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v13);
      v6 = v11;
      if ( !v11 )
        goto LABEL_13;
      v7 = v12 == 0;
    }
    else
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v13);
      v6 = v11;
      if ( !v11 )
        goto LABEL_13;
      v7 = v12 == 0;
    }
    if ( !v7 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v6 + 104));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v5 = -1073741811;
  }
LABEL_13:
  if ( v15 )
    DXGTRACKEDWORKLOAD::Release(v15);
  if ( v14 && _InterlockedExchangeAdd64((volatile signed __int64 *)v14 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v14 + 2), v14);
  return (unsigned int)v5;
}
