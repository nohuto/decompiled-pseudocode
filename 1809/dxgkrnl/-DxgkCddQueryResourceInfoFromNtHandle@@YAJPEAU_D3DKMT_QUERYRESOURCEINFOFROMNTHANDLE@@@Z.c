/*
 * XREFs of ?DxgkCddQueryResourceInfoFromNtHandle@@YAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@Z @ 0x1C01DD9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C001157C (--0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ @ 0x1C00186E8 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00F152C (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkCddQueryResourceInfoFromNtHandle(
        struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *a1,
        __int64 a2,
        const GUID *a3)
{
  struct _KTHREAD **Current; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  int Resource; // ebx
  D3DKMT_HANDLE hDevice; // edx
  __int64 v9; // rcx
  struct DXGDEVICE *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  PVOID v17; // r14
  __int64 v18; // r15
  _QWORD *v19; // rax
  HANDLE hNtHandle; // rcx
  __int64 v21; // rcx
  const GUID *v22; // r8
  int v24; // [rsp+30h] [rbp-69h] BYREF
  __int64 v25; // [rsp+38h] [rbp-61h]
  char v26; // [rsp+40h] [rbp-59h]
  _BYTE v27[24]; // [rsp+48h] [rbp-51h] BYREF
  _BYTE v28[8]; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v29[32]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v30[104]; // [rsp+88h] [rbp-11h] BYREF
  struct DXGDEVICE *v31; // [rsp+108h] [rbp+6Fh] BYREF
  struct DXGDEVICE *v32; // [rsp+110h] [rbp+77h] BYREF
  PVOID Object; // [rsp+118h] [rbp+7Fh] BYREF

  v25 = 0LL;
  v24 = -1;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v26 = 1;
    v24 = 3056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3056);
  }
  else
  {
    v26 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v24, 3056);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v5);
    Resource = -1073741811;
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
    goto LABEL_25;
  }
  hDevice = a1->hDevice;
  v32 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v31, hDevice, Current, &v32);
  v10 = v32;
  if ( !v32 )
  {
    v11 = WdLogNewEntry5_WdError(v9);
    Resource = -1073741811;
    *(_QWORD *)(v11 + 24) = a1->hDevice;
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    if ( !v31 )
      goto LABEL_25;
    goto LABEL_9;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::DXGDEVICEACCESSLOCKEXCLUSIVECDD((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27, v32);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, (__int64)v10, 0, v12, 0);
  Resource = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28);
  if ( Resource < 0 )
  {
    COREACCESS::~COREACCESS((COREACCESS *)v30);
    COREACCESS::~COREACCESS((COREACCESS *)v29);
    DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27);
    if ( !v31 )
      goto LABEL_25;
LABEL_9:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
    goto LABEL_25;
  }
  v13 = ObReferenceObjectByHandle(a1->hNtHandle, 0x20000u, g_pDxgkSharedAllocationObjectType, 1, &Object, 0LL);
  v17 = Object;
  v18 = v13;
  Resource = v13;
  if ( v13 == -1073741788 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v19[3] = v10;
    hNtHandle = a1->hNtHandle;
    v19[5] = -1073741788LL;
  }
  else
  {
    if ( v13 >= 0 )
    {
      Resource = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>(
                   (__int64)v10,
                   a1,
                   v16,
                   (__int64)Object);
      COREACCESS::~COREACCESS((COREACCESS *)v30);
      COREACCESS::~COREACCESS((COREACCESS *)v29);
      DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27);
      if ( v31 )
        goto LABEL_21;
      goto LABEL_23;
    }
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16);
    v19[3] = v10;
    hNtHandle = a1->hNtHandle;
    v19[5] = v18;
  }
  v19[4] = hNtHandle;
  WdLogEvent5_WdWarning(v19);
  COREACCESS::~COREACCESS((COREACCESS *)v30);
  COREACCESS::~COREACCESS((COREACCESS *)v29);
  DXGDEVICEACCESSLOCKEXCLUSIVECDD::Release((DXGDEVICEACCESSLOCKEXCLUSIVECDD *)v27);
  if ( v31 )
  {
LABEL_21:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v31 + 2), v31);
  }
LABEL_23:
  if ( v17 )
    ObfDereferenceObject(v17);
LABEL_25:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v24);
  if ( v26 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v24);
  return (unsigned int)Resource;
}
