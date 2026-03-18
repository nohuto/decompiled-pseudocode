/*
 * XREFs of DxgkUpdateAllocationProperty @ 0x1C02216D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0010A14 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014E00 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z @ 0x1C001D6A4 (--0DXGPAGINGQUEUEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGPAGINGQUEUE@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x1C0021074 (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPERTY@@@Z @ 0x1C01D1BA0 (-DdiValidateUpdateAllocationProperty@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_VALIDATEUPDATEALLOCPROPER.c)
 */

__int64 __fastcall DxgkUpdateAllocationProperty(ULONG64 a1, __int64 a2, const GUID *a3)
{
  ULONG64 v4; // rcx
  struct _KTHREAD **Current; // rbx
  __int64 v6; // rax
  __m256i *v7; // rax
  UINT v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // rax
  ADAPTER_RENDER **v11; // r14
  __int64 v12; // r9
  int v13; // edi
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v17; // rcx
  struct _EX_RUNDOWN_REF *v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rcx
  __int64 v20; // rcx
  const GUID *v21; // r8
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rcx
  const GUID *v27; // r8
  bool v28; // zf
  __int32 v29; // ebx
  __int32 v30; // edi
  int updated; // eax
  __int64 v32; // rcx
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rcx
  const GUID *v36; // r8
  _QWORD *v37; // r8
  int v38; // [rsp+30h] [rbp-138h] BYREF
  __int64 v39; // [rsp+38h] [rbp-130h]
  char v40; // [rsp+40h] [rbp-128h]
  struct _EX_RUNDOWN_REF *v41; // [rsp+48h] [rbp-120h] BYREF
  _BYTE v42[8]; // [rsp+50h] [rbp-118h] BYREF
  _BYTE v43[16]; // [rsp+58h] [rbp-110h] BYREF
  struct DXGPAGINGQUEUE *v44; // [rsp+68h] [rbp-100h] BYREF
  _DXGKARG_VALIDATEUPDATEALLOCPROPERTY v45; // [rsp+70h] [rbp-F8h] BYREF
  __m256i v46; // [rsp+88h] [rbp-E0h]
  __int64 v47; // [rsp+A8h] [rbp-C0h]
  ULONG_PTR Count; // [rsp+B0h] [rbp-B8h]
  _QWORD v49[3]; // [rsp+B8h] [rbp-B0h] BYREF
  _BYTE v50[96]; // [rsp+D0h] [rbp-98h] BYREF
  _DWORD v51[4]; // [rsp+130h] [rbp-38h] BYREF

  v38 = -1;
  v39 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v40 = 1;
    v38 = 2132;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2132);
  }
  else
  {
    v40 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v38, 2132);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( !Current )
    goto LABEL_6;
  v4 = MmUserProbeAddress;
  v7 = (__m256i *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (__m256i *)MmUserProbeAddress;
  v46 = *v7;
  v47 = v7[1].m256i_i64[0];
  v8 = v47;
  if ( (v47 & 0xFFFFFFF8) != 0 || !(_DWORD)v47 )
  {
LABEL_6:
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
LABEL_27:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v20, &EventProfilerExit, v21, v38);
    }
    return 3221225485LL;
  }
  v44 = 0LL;
  DXGPAGINGQUEUEBYHANDLE::DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42, v46.m256i_u32[0], Current, &v44, 1);
  if ( !v44 )
  {
    v10 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v10 + 24) = v46.m256i_u32[0];
    *(_QWORD *)(v10 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v10);
LABEL_26:
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
    goto LABEL_27;
  }
  v11 = (ADAPTER_RENDER **)*((_QWORD *)v44 + 2);
  v49[1] = v11;
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43,
    (struct DXGDEVICE *)v11);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v50, (__int64)v11, 0, v12, 0);
  v13 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v50);
  if ( v13 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v14, &EventProfilerExit, v15, v38);
    return (unsigned int)v13;
  }
  DXGPROCESS::GetAllocationSafe((__int64)Current, (DXGALLOCATIONREFERENCE *)&v41, v46.m256i_u32[1]);
  if ( !v41 )
  {
    v18 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v17);
    v19 = (struct _EX_RUNDOWN_REF *)v46.m256i_u32[1];
LABEL_24:
    v18[3].Count = (ULONG_PTR)v19;
    goto LABEL_25;
  }
  if ( (ADAPTER_RENDER **)v41[1].Count != v11 )
  {
    v18 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(v17);
    v18[3].Count = (ULONG_PTR)v11;
    v18[4].Count = v41[1].Count;
LABEL_25:
    WdLogEvent5_WdError(v18);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    goto LABEL_26;
  }
  Count = v41[3].Count;
  if ( !Count )
  {
    v18 = (struct _EX_RUNDOWN_REF *)WdLogNewEntry5_WdError(0LL);
    v19 = v41;
    goto LABEL_24;
  }
  v22 = *((_QWORD *)v11[2] + 2);
  v23 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 192) + 64LL) + 40LL);
  if ( *(_DWORD *)(v23 + 28) < 0x6002u )
  {
    v24 = WdLogNewEntry5_WdError(v23);
    v25 = -1073741637LL;
    *(_QWORD *)(v24 + 32) = 1103LL;
LABEL_33:
    *(_QWORD *)(v24 + 24) = v25;
    WdLogEvent5_WdError(v24);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    v28 = v40 == 0;
LABEL_34:
    if ( !v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v26, &EventProfilerExit, v27, v38);
    return (unsigned int)v25;
  }
  if ( !*(_QWORD *)(v22 + 976) )
  {
    v24 = WdLogNewEntry5_WdError(v23);
    v25 = -1073741822LL;
    *(_QWORD *)(v24 + 32) = 1109LL;
    goto LABEL_33;
  }
  memset(&v45, 0, sizeof(v45));
  v45.hAllocation = v41[4].Ptr;
  v29 = v46.m256i_i32[4];
  v30 = v46.m256i_i32[3];
  *(_QWORD *)&v45.PreferredSegment.0 = *(__int64 *)((char *)&v46.m256i_i64[1] + 4);
  v45.SupportedSegmentSet = v46.m256i_u32[2];
  v45.PropertyMaskValue = v8;
  updated = ADAPTER_RENDER::DdiValidateUpdateAllocationProperty(v11[2], &v45, (const GUID *)v22);
  v33 = updated;
  if ( updated >= 0 )
  {
    v51[2] = v29;
    v51[1] = v30;
    v51[0] = v46.m256i_i32[2];
    v51[3] = v8;
    LODWORD(v25) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, _DWORD *, _QWORD *))(*(_QWORD *)(*((_QWORD *)v11[2] + 68) + 8LL)
                                                                                            + 208LL))(
                     *((_QWORD *)v11[2] + 69),
                     *((_QWORD *)v44 + 4),
                     Count,
                     v51,
                     v49);
    if ( (int)v25 >= 0 )
    {
      v37 = (_QWORD *)(a1 + 24);
      if ( a1 + 24 >= MmUserProbeAddress )
        v37 = (_QWORD *)MmUserProbeAddress;
      *v37 = v49[0];
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
    DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
    v28 = v40 == 0;
    goto LABEL_34;
  }
  v34 = WdLogNewEntry5_WdError(v32);
  *(_QWORD *)(v34 + 24) = v33;
  WdLogEvent5_WdError(v34);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v41);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v50);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
  DXGPAGINGQUEUEBYHANDLE::~DXGPAGINGQUEUEBYHANDLE((DXGPAGINGQUEUEBYHANDLE *)v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( v40 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v35, &EventProfilerExit, v36, v38);
  return (unsigned int)v33;
}
