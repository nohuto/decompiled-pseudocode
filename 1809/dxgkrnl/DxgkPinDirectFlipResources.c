/*
 * XREFs of DxgkPinDirectFlipResources @ 0x1C013F0D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000F428 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00100A8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0010F58 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0011C44 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0011C84 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0012010 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00212B0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC094 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C013F4CC (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C013FB08 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ??0?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C013FFE0 (--0-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkPinDirectFlipResources(__int64 a1, __int64 a2, const GUID *a3)
{
  _OWORD *v3; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGDEVICE *v10; // r14
  __int64 v11; // r13
  unsigned __int64 v12; // rsi
  __int64 v13; // rcx
  struct DXGRESOURCEREFERENCE *v14; // r12
  unsigned int i; // r15d
  unsigned int *v16; // rdx
  __int64 v17; // r13
  struct DXGRESOURCE **ResourceSafe; // rax
  __int64 v19; // rdx
  __int64 j; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rbx
  __int64 v29; // rcx
  const GUID *v30; // r8
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  bool v35; // cf
  SIZE_T v36; // rax
  char *v37; // rax
  struct DXGRESOURCEREFERENCE *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rcx
  const GUID *v41; // r8
  _QWORD *v42; // rax
  __int64 v43; // rax
  __int64 v44; // rcx
  const GUID *v45; // r8
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  const GUID *v49; // r8
  struct DXGDEVICE *v50; // [rsp+30h] [rbp-138h] BYREF
  bool v51; // [rsp+38h] [rbp-130h]
  int v52; // [rsp+40h] [rbp-128h] BYREF
  __int64 v53; // [rsp+48h] [rbp-120h]
  char v54; // [rsp+50h] [rbp-118h]
  __int64 v55; // [rsp+58h] [rbp-110h]
  _QWORD v56[2]; // [rsp+60h] [rbp-108h] BYREF
  unsigned int v57; // [rsp+70h] [rbp-F8h]
  struct DXGDEVICE *v58; // [rsp+78h] [rbp-F0h] BYREF
  struct DXGPROCESS *v59; // [rsp+80h] [rbp-E8h]
  struct _EX_RUNDOWN_REF *v60; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v61; // [rsp+90h] [rbp-D8h]
  unsigned int v62[4]; // [rsp+98h] [rbp-D0h]
  _BYTE v63[96]; // [rsp+B0h] [rbp-B8h] BYREF
  struct DXGRESOURCEREFERENCE *v64; // [rsp+110h] [rbp-58h] BYREF
  char v65; // [rsp+118h] [rbp-50h] BYREF
  int v66; // [rsp+138h] [rbp-30h]

  v3 = (_OWORD *)a1;
  v52 = -1;
  v53 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v54 = 1;
    v52 = 2079;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter, a3, 2079);
  }
  else
  {
    v54 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v52, 2079);
  Current = DXGPROCESS::GetCurrent();
  v59 = Current;
  if ( !Current )
  {
    v32 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v32 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v32);
LABEL_78:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( v54 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v48, &EventProfilerExit, v49, v52);
    }
    return 3221225485LL;
  }
  v51 = *((_BYTE *)Current + 322) == 0;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v62 = *v3;
  v6 = v62[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v50, v62[0], (struct _KTHREAD **)Current, &v58);
  v10 = v58;
  if ( !v58 )
  {
    v33 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v33 + 24) = v6;
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v33);
LABEL_75:
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    goto LABEL_78;
  }
  v11 = *(_QWORD *)&v62[2];
  v55 = *(_QWORD *)&v62[2];
  if ( !*(_QWORD *)&v62[2] || (v12 = v62[1]) == 0 )
  {
    v47 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v47 + 24) = v6;
    *(_QWORD *)(v47 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v47);
    goto LABEL_75;
  }
  PagedPoolArray<DXGRESOURCEREFERENCE,4>::PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v64);
  if ( (unsigned int)v12 <= 4 )
  {
    v64 = (struct DXGRESOURCEREFERENCE *)&v65;
LABEL_11:
    v66 = v12;
    goto LABEL_12;
  }
  v13 = -1LL;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v12 >= 8 )
  {
    v34 = 8 * v12;
    if ( !is_mul_ok(v12, 8uLL) )
      v34 = -1LL;
    v35 = __CFADD__(v34, 8LL);
    v36 = v34 + 8;
    if ( v35 )
      v36 = -1LL;
    v37 = (char *)operator new[](v36, 0x4B677844u, PagedPool);
    if ( v37 )
    {
      *(_QWORD *)v37 = v12;
      v38 = (struct DXGRESOURCEREFERENCE *)(v37 + 8);
      `vector constructor iterator'(
        v37 + 8,
        8LL,
        v12,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
      v64 = v38;
    }
    else
    {
      v64 = 0LL;
    }
    goto LABEL_11;
  }
LABEL_12:
  v14 = v64;
  if ( v64 )
  {
    for ( i = 0; i < (unsigned int)v12; ++i )
    {
      v61 = i;
      v16 = (unsigned int *)(v11 + 4LL * i);
      if ( v16 + 1 < v16 || (unsigned __int64)(v16 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v57 = *v16;
      v17 = v57;
      ResourceSafe = (struct DXGRESOURCE **)DXGPROCESS::GetResourceSafe((__int64)v59, (DXGRESOURCEREFERENCE *)&v60, v57);
      DXGRESOURCEREFERENCE::MoveAssign((struct DXGRESOURCE **)v14 + i, ResourceSafe);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v60);
      v21 = *((_QWORD *)v14 + i);
      if ( !v21 || (*(_DWORD *)(v21 + 4) & 1) == 0 || !*(_QWORD *)(v21 + 56) )
      {
LABEL_56:
        v43 = WdLogNewEntry5_WdWarning(j, v19, v21);
        *(_QWORD *)(v43 + 24) = v17;
        *(_QWORD *)(v43 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v43);
        goto LABEL_57;
      }
      v19 = *(_QWORD *)(*(_QWORD *)(v21 + 8) + 16LL);
      v22 = *(_QWORD *)(*((_QWORD *)v10 + 2) + 16LL);
      if ( *(_QWORD *)(v19 + 16) != v22 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdError(v22);
        v42[3] = v10;
        v42[4] = *((_QWORD *)v14 + v61);
        v42[5] = -1073741811LL;
        WdLogEvent5_WdError(v42);
LABEL_57:
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v64);
        if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
        goto LABEL_78;
      }
      for ( j = 0LL; (unsigned int)j < i; j = (unsigned int)(j + 1) )
      {
        if ( *((_QWORD *)v14 + (unsigned int)j) == v21 )
          goto LABEL_56;
      }
      v11 = v55;
    }
    if ( (*((_BYTE *)v10 + 1749) & 1) == 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56, v10);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v63, (__int64)v10, 2, v23, 0);
      v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v63);
      v28 = v24;
      if ( v24 < 0 )
      {
        v46 = WdLogNewEntry5_WdWarning(v26, v25, v27);
        *(_QWORD *)(v46 + 24) = v10;
        *(_QWORD *)(v46 + 32) = v28;
        WdLogEvent5_WdWarning(v46);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
        if ( v56[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v64);
        if ( !v50 )
          goto LABEL_34;
      }
      else
      {
        LODWORD(v28) = DXGDEVICE::PinDirectFlipResources(v10, v12, v14, v51);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v63);
        if ( v56[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v56);
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v64);
        if ( !v50 )
          goto LABEL_34;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
LABEL_34:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
      if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v29, &EventProfilerExit, v30, v52);
      return (unsigned int)v28;
    }
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v64);
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v44, &EventProfilerExit, v45, v52);
    return 0LL;
  }
  else
  {
    v39 = WdLogNewEntry5_WdLowResource(v13);
    *(_QWORD *)(v39 + 24) = v12;
    *(_QWORD *)(v39 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v39);
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v64);
    if ( v50 && _InterlockedExchangeAdd64((volatile signed __int64 *)v50 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v50 + 2), v50);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v52);
    if ( v54 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v40, &EventProfilerExit, v41, v52);
    return 3221225495LL;
  }
}
