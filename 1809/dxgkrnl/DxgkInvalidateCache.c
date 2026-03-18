/*
 * XREFs of DxgkInvalidateCache @ 0x1C01DC670
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0010A14 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014E00 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkInvalidateCache(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  struct DXGDEVICE *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // r14d
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _QWORD *v19; // rax
  struct _EX_RUNDOWN_REF *v20; // rax
  ULONG_PTR Count; // rdx
  __int64 v22; // rcx
  const GUID *v23; // r8
  unsigned int v24; // edi
  __int64 v25; // rcx
  const GUID *v26; // r8
  int v27; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+38h] [rbp-B0h]
  char v29; // [rsp+40h] [rbp-A8h]
  _BYTE v30[16]; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v31[4]; // [rsp+58h] [rbp-90h]
  __int64 v32; // [rsp+68h] [rbp-80h]
  _BYTE v33[120]; // [rsp+70h] [rbp-78h] BYREF
  struct DXGDEVICE *v34; // [rsp+F8h] [rbp+10h] BYREF
  struct _EX_RUNDOWN_REF *v35; // [rsp+100h] [rbp+18h] BYREF
  struct DXGDEVICE *v36; // [rsp+108h] [rbp+20h] BYREF

  v3 = a1;
  v27 = -1;
  v28 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v29 = 1;
    v27 = 2122;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2122);
  }
  else
  {
    v29 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v27, 2122);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = 34LL;
    WdLogEvent5_WdError(v6);
LABEL_30:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v22, &EventProfilerExit, v23, v27);
    }
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v31 = *(_OWORD *)v3;
  v32 = *(_QWORD *)(v3 + 16);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v34, v31[0], Current, &v36);
  v8 = v36;
  if ( !v36 )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = v31[0];
    WdLogEvent5_WdError(v9);
LABEL_27:
    if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
    goto LABEL_30;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30,
    v36);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v33, (__int64)v8, 0, v10, 0);
  v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v33);
  if ( v11 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
    if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
    if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v12, &EventProfilerExit, v13, v27);
    return (unsigned int)v11;
  }
  v15 = v31[1];
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v35, v31[1]);
  if ( !v35 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v16, v18);
    v19[3] = v8;
    v19[4] = v15;
LABEL_25:
    WdLogEvent5_WdWarning(v19);
    goto LABEL_26;
  }
  if ( (struct DXGDEVICE *)v35[1].Count != v8 )
  {
    v20 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v17);
    v20[3].Count = v35[1].Count;
    v20[4].Count = (ULONG_PTR)v8;
    WdLogEvent5_WdError(v20);
LABEL_26:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v35);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
    goto LABEL_27;
  }
  Count = v35[3].Count;
  if ( !Count )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, 0LL, v18);
    v19[3] = v8;
    v19[4] = v15;
    v19[5] = v35;
    goto LABEL_25;
  }
  v24 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 2)
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 1056LL))(
          *(_QWORD *)(*((_QWORD *)v8 + 2) + 552LL),
          Count,
          *(_QWORD *)&v31[2],
          v32);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v35);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v33);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v30);
  if ( v34 && _InterlockedExchangeAdd64((volatile signed __int64 *)v34 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v34 + 2), v34);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v27);
  if ( v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v27);
  return v24;
}
