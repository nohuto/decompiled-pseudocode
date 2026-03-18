/*
 * XREFs of ?DxgkCddQueryResourceInfo@@YAJPEAU_D3DKMT_QUERYRESOURCEINFO@@@Z @ 0x1C020C5B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006A5C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AD4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007150 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A1C0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A2D0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C001A7F8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00F1224 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFO@.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C012293C (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfo(struct _D3DKMT_QUERYRESOURCEINFO *a1, __int64 a2, const GUID *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 hDevice; // rcx
  __int64 v18; // r9
  int Resource; // eax
  __int64 v20; // rcx
  const GUID *v21; // r8
  struct DXGDEVICE *v23; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v24; // [rsp+38h] [rbp-C8h] BYREF
  int v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  char v27; // [rsp+50h] [rbp-B0h]
  _BYTE v28[24]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v29[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v30[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v31[88]; // [rsp+B8h] [rbp-48h] BYREF

  v25 = -1;
  v26 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v27 = 1;
    v25 = 3035;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3035);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v25, 3035LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( Current )
  {
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v24, a1->hDevice, Current, &v23);
    if ( v23 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v28, v23);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, (__int64)v23, 0, v18, 0);
      Resource = COREDEVICEACCESS::AcquireShared((__int64)v29, 0xFFFFFFFF, 0LL);
      if ( Resource >= 0 )
        Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFO>((__int64)v23, a1, a1->hGlobalShare);
      v11 = Resource;
      COREACCESS::~COREACCESS((COREACCESS *)v31);
      COREACCESS::~COREACCESS((COREACCESS *)v30);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v28);
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v14, v13, v15);
      hDevice = a1->hDevice;
      v11 = -1073741811;
      *(_QWORD *)(v16 + 24) = hDevice;
      *(_QWORD *)(v16 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v16);
    }
    if ( v24 && _InterlockedExchangeAdd64((volatile signed __int64 *)v24 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v24 + 2), v24);
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(v8, v7, v9);
    v11 = -1073741811;
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v10);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v12);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, v25);
  return v11;
}
