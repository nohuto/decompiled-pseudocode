/*
 * XREFs of NtDxgkDestroyTrackedWorkload @ 0x1C0260B80
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00109E8 (--0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ @ 0x1C0042A80 (-Release@DXGTRACKEDWORKLOAD@@QEAA_JXZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z @ 0x1C026003C (--0DXGTRACKEDWORKLOADBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGTRACKEDWORKLOAD@@@Z.c)
 */

__int64 __fastcall NtDxgkDestroyTrackedWorkload(__int64 a1, __int64 a2, const GUID *a3)
{
  __int64 *v3; // rbx
  unsigned int v4; // esi
  struct _KTHREAD **Current; // rbx
  struct DXGDEVICE *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  const GUID *v11; // r8
  struct DXGDEVICE *v13; // [rsp+30h] [rbp-B8h] BYREF
  DXGTRACKEDWORKLOAD *v14; // [rsp+38h] [rbp-B0h] BYREF
  int v15; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v16; // [rsp+48h] [rbp-A0h]
  char v17; // [rsp+50h] [rbp-98h]
  __int64 v18; // [rsp+58h] [rbp-90h] BYREF
  char v19; // [rsp+60h] [rbp-88h]
  _BYTE v20[120]; // [rsp+70h] [rbp-78h] BYREF
  struct DXGDEVICE *v21; // [rsp+F8h] [rbp+10h] BYREF
  struct DXGTRACKEDWORKLOAD *v22; // [rsp+100h] [rbp+18h] BYREF
  __int64 v23; // [rsp+108h] [rbp+20h]

  v3 = (__int64 *)a1;
  v4 = 0;
  v15 = -1;
  v16 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v17 = 1;
    v15 = 2207;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2207);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 2207);
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (__int64 *)MmUserProbeAddress;
  v23 = *v3;
  v13 = 0LL;
  v22 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v21, v23, Current, &v13);
  DXGTRACKEDWORKLOADBYHANDLE::DXGTRACKEDWORKLOADBYHANDLE(
    (DXGTRACKEDWORKLOADBYHANDLE *)&v14,
    HIDWORD(v23),
    Current,
    &v22);
  v6 = v13;
  if ( v13 && v22 )
  {
    DXGDEVICEACCESSLOCKSHARED::DXGDEVICEACCESSLOCKSHARED((DXGDEVICEACCESSLOCKSHARED *)&v18, v13);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v20, (__int64)v6, 0, v7, 0);
    COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v20);
    if ( DXGTRACKEDWORKLOAD::Release(v22) != 1 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v9 + 24) = 127LL;
      WdLogEvent5_WdAssertion(v9);
    }
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v20);
    if ( v18 && v19 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v18 + 104));
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v14 )
    DXGTRACKEDWORKLOAD::Release(v14);
  if ( v21 && _InterlockedExchangeAdd64((volatile signed __int64 *)v21 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v21 + 2), v21);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v10, &EventProfilerExit, v11, v15);
  return v4;
}
