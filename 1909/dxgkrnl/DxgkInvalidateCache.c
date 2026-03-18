/*
 * XREFs of DxgkInvalidateCache @ 0x1C020B200
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EE8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C3B0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall DxgkInvalidateCache(__int64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _KTHREAD **Current; // rsi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  const GUID *v13; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct DXGDEVICE *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r9
  int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rcx
  const GUID *v24; // r8
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rdx
  struct _EX_RUNDOWN_REF *v31; // rax
  ULONG_PTR Count; // rdx
  unsigned int v33; // edi
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  const GUID *v37; // r8
  struct DXGDEVICE *v38; // [rsp+30h] [rbp-118h] BYREF
  int v39; // [rsp+38h] [rbp-110h] BYREF
  __int64 v40; // [rsp+40h] [rbp-108h]
  char v41; // [rsp+48h] [rbp-100h]
  struct _EX_RUNDOWN_REF *v42; // [rsp+50h] [rbp-F8h] BYREF
  struct DXGDEVICE *v43; // [rsp+58h] [rbp-F0h] BYREF
  _BYTE v44[16]; // [rsp+60h] [rbp-E8h] BYREF
  unsigned int v45[4]; // [rsp+70h] [rbp-D8h]
  __int64 v46; // [rsp+80h] [rbp-C8h]
  _BYTE v47[160]; // [rsp+90h] [rbp-B8h] BYREF

  v3 = a1;
  v39 = -1;
  v40 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v41 = 1;
    v39 = 2122;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2122);
  }
  else
  {
    v41 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v39, 2122LL);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5, v4);
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v9);
    *(_QWORD *)(v10 + 24) = 34LL;
    WdLogEvent5_WdError(v10);
LABEL_7:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v11);
    if ( v41 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v12, &EventProfilerExit, v13, v39);
    }
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_OWORD *)v45 = *(_OWORD *)v3;
  v46 = *(_QWORD *)(v3 + 16);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v38, v45[0], Current, &v43);
  v18 = v43;
  if ( !v43 )
  {
    v19 = WdLogNewEntry5_WdError(v16, v15, v17);
    *(_QWORD *)(v19 + 24) = v45[0];
    WdLogEvent5_WdError(v19);
LABEL_15:
    if ( v38 && _InterlockedExchangeAdd64((volatile signed __int64 *)v38 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
    goto LABEL_7;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v44,
    v43);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v47, (__int64)v18, 0, v20, 0);
  v21 = COREDEVICEACCESS::AcquireShared((__int64)v47, 0xFFFFFFFF, 0LL);
  if ( v21 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v44);
    if ( v38 )
    {
      v22 = _InterlockedDecrement64((volatile signed __int64 *)v38 + 8);
      if ( !v22 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
    }
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v22);
    if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v23, &EventProfilerExit, v24, v39);
    return (unsigned int)v21;
  }
  v25 = v45[1];
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v42, v45[1]);
  if ( !v42 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v29[3] = v18;
    v29[4] = v25;
LABEL_28:
    WdLogEvent5_WdWarning(v29);
LABEL_29:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v42, v30);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v44);
    goto LABEL_15;
  }
  if ( (struct DXGDEVICE *)v42[1].Count != v18 )
  {
    v31 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v27, v26, v28);
    v31[3].Count = v42[1].Count;
    v31[4].Count = (ULONG_PTR)v18;
    WdLogEvent5_WdError(v31);
    goto LABEL_29;
  }
  Count = v42[3].Count;
  if ( !Count )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, 0LL, v28);
    v29[3] = v18;
    v29[4] = v25;
    v29[5] = v42;
    goto LABEL_28;
  }
  v33 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v18 + 2)
                                                                                              + 544LL)
                                                                                  + 8LL)
                                                                      + 1056LL))(
          *(_QWORD *)(*((_QWORD *)v18 + 2) + 552LL),
          Count,
          *(_QWORD *)&v45[2],
          v46);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v42, v34);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v47);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v44);
  if ( v38 )
  {
    v35 = _InterlockedDecrement64((volatile signed __int64 *)v38 + 8);
    if ( !v35 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v38 + 2), v38);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v39, v35);
  if ( v41 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v36, &EventProfilerExit, v37, v39);
  return v33;
}
