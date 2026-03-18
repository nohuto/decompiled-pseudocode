/*
 * XREFs of ?DxgkPinDirectFlipResourcesInternal@@YAJPEBU_D3DKMT_PINDIRECTFLIPRESOURCES@@@Z @ 0x1C01537A0
 * Callers:
 *     DxgkPinDirectFlipResources @ 0x1C0153770 (DxgkPinDirectFlipResources.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006B80 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00070E8 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007718 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C001DC08 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0023D5C (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0116040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C013D838 (-MoveAssign@DXGRESOURCEREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C0153BA8 (--1-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C0154218 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ??0?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C0154720 (--0-$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ.c)
 */

__int64 __fastcall DxgkPinDirectFlipResourcesInternal(
        const struct _D3DKMT_PINDIRECTFLIPRESOURCES *a1,
        __int64 a2,
        const GUID *a3)
{
  const struct _D3DKMT_PINDIRECTFLIPRESOURCES *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  struct DXGDEVICE *v13; // r14
  __int64 v14; // r12
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGRESOURCEREFERENCE *v20; // r13
  unsigned int i; // ebx
  unsigned int *v22; // rdx
  __int64 v23; // r15
  struct _EX_RUNDOWN_REF **v24; // r12
  struct _EX_RUNDOWN_REF **ResourceSafe; // rax
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 j; // rcx
  struct _EX_RUNDOWN_REF *v29; // r8
  __int64 v30; // rcx
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  const GUID *v38; // r8
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  bool v44; // cf
  SIZE_T v45; // rax
  char *v46; // rax
  struct DXGRESOURCEREFERENCE *v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  const GUID *v51; // r8
  _QWORD *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  const GUID *v56; // r8
  __int64 v57; // rax
  struct DXGDEVICE *v58; // [rsp+30h] [rbp-168h] BYREF
  bool v59; // [rsp+38h] [rbp-160h]
  int v60; // [rsp+40h] [rbp-158h] BYREF
  __int64 v61; // [rsp+48h] [rbp-150h]
  char v62; // [rsp+50h] [rbp-148h]
  __int64 v63; // [rsp+58h] [rbp-140h]
  _QWORD v64[2]; // [rsp+60h] [rbp-138h] BYREF
  unsigned int v65; // [rsp+70h] [rbp-128h]
  struct DXGDEVICE *v66; // [rsp+78h] [rbp-120h] BYREF
  struct DXGPROCESS *v67; // [rsp+80h] [rbp-118h]
  struct _EX_RUNDOWN_REF *v68; // [rsp+88h] [rbp-110h] BYREF
  unsigned int v69[4]; // [rsp+90h] [rbp-108h]
  struct DXGRESOURCEREFERENCE *v70; // [rsp+A0h] [rbp-F8h] BYREF
  char v71; // [rsp+A8h] [rbp-F0h] BYREF
  int v72; // [rsp+C8h] [rbp-D0h]
  _BYTE v73[160]; // [rsp+D0h] [rbp-C8h] BYREF

  v3 = a1;
  v60 = -1;
  v61 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v62 = 1;
    v60 = 2079;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 2079);
  }
  else
  {
    v62 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v60, 2079LL);
  Current = DXGPROCESS::GetCurrent(v5, v4);
  v67 = Current;
  if ( !Current )
  {
    v40 = WdLogNewEntry5_WdError(v7, 0LL, v8);
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v40);
    goto LABEL_32;
  }
  v59 = *((_BYTE *)Current + 298) == 0;
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (const struct _D3DKMT_PINDIRECTFLIPRESOURCES *)MmUserProbeAddress;
  *(struct _D3DKMT_PINDIRECTFLIPRESOURCES *)v69 = *v3;
  v9 = v69[0];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v58, v69[0], (struct _KTHREAD **)Current, &v66);
  v13 = v66;
  if ( !v66 )
  {
    v41 = WdLogNewEntry5_WdError(v11, v10, v12);
    *(_QWORD *)(v41 + 24) = v9;
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v41 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v41);
LABEL_44:
    if ( !v58 || _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
      goto LABEL_32;
    goto LABEL_31;
  }
  v14 = *(_QWORD *)&v69[2];
  v63 = *(_QWORD *)&v69[2];
  if ( !*(_QWORD *)&v69[2] || (v15 = v69[1]) == 0 )
  {
    v42 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v42 + 24) = v9;
    LODWORD(v9) = -1073741811;
    *(_QWORD *)(v42 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v42);
    goto LABEL_44;
  }
  PagedPoolArray<DXGRESOURCEREFERENCE,4>::PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v70);
  if ( (unsigned int)v15 <= 4 )
  {
    v70 = (struct DXGRESOURCEREFERENCE *)&v71;
LABEL_11:
    v72 = v15;
    goto LABEL_12;
  }
  v16 = 0xFFFFFFFFFFFFFFFFuLL % v15;
  if ( 0xFFFFFFFFFFFFFFFFuLL / v15 >= 8 )
  {
    v43 = 8 * v15;
    if ( !is_mul_ok(v15, 8uLL) )
      v43 = -1LL;
    v44 = __CFADD__(v43, 8LL);
    v45 = v43 + 8;
    if ( v44 )
      v45 = -1LL;
    v46 = (char *)operator new[](v45, 0x4B677844u, PagedPool);
    if ( v46 )
    {
      *(_QWORD *)v46 = v15;
      v47 = (struct DXGRESOURCEREFERENCE *)(v46 + 8);
      `vector constructor iterator'(
        v46 + 8,
        8LL,
        v15,
        (void (__fastcall *)(char *))DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE);
      v70 = v47;
    }
    else
    {
      v70 = 0LL;
    }
    goto LABEL_11;
  }
LABEL_12:
  v20 = v70;
  if ( v70 )
  {
    for ( i = 0; i < (unsigned int)v15; ++i )
    {
      v22 = (unsigned int *)(v14 + 4LL * i);
      if ( v22 + 1 < v22 || (unsigned __int64)(v22 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      v65 = *v22;
      v23 = v65;
      v24 = (struct _EX_RUNDOWN_REF **)((char *)v20 + 8 * i);
      ResourceSafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetResourceSafe(
                                                  (__int64)v67,
                                                  (DXGRESOURCEREFERENCE *)&v68,
                                                  v65);
      DXGRESOURCEREFERENCE::MoveAssign(v24, ResourceSafe);
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v68, v26);
      v29 = *v24;
      if ( !*v24 || (HIDWORD(v29->Ptr) & 1) == 0 || !v29[7].Count )
      {
LABEL_63:
        v53 = WdLogNewEntry5_WdWarning(j, v27, v29);
        LODWORD(v9) = -1073741811;
        *(_QWORD *)(v53 + 24) = v23;
        *(_QWORD *)(v53 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v53);
        goto LABEL_64;
      }
      v27 = *(_QWORD *)(v29[1].Count + 16);
      v30 = *(_QWORD *)(*((_QWORD *)v13 + 2) + 16LL);
      if ( *(_QWORD *)(v27 + 16) != v30 )
      {
        v52 = (_QWORD *)WdLogNewEntry5_WdError(v30, v27, v29);
        v52[3] = v13;
        v52[4] = *v24;
        LODWORD(v9) = -1073741811;
        v52[5] = -1073741811LL;
        WdLogEvent5_WdError(v52);
LABEL_64:
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v70);
        if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
        goto LABEL_32;
      }
      for ( j = 0LL; (unsigned int)j < i; j = (unsigned int)(j + 1) )
      {
        if ( *((struct _EX_RUNDOWN_REF **)v20 + j) == v29 )
          goto LABEL_63;
      }
      v14 = v63;
    }
    if ( (*((_BYTE *)v13 + 1749) & 1) == 0 )
    {
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64, v13);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v73, (__int64)v13, 2, v31, 0);
      v32 = COREDEVICEACCESS::AcquireShared((__int64)v73, 0xFFFFFFFF, 0LL);
      v9 = v32;
      if ( v32 < 0 )
      {
        v57 = WdLogNewEntry5_WdWarning(v34, v33, v35);
        *(_QWORD *)(v57 + 24) = v13;
        *(_QWORD *)(v57 + 32) = v9;
        WdLogEvent5_WdWarning(v57);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
        if ( v64[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v70);
        if ( !v58 )
          goto LABEL_32;
      }
      else
      {
        LODWORD(v9) = DXGDEVICE::PinDirectFlipResources(v13, v15, v20, v59);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v73);
        if ( v64[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v64);
        PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v70);
        if ( !v58 )
          goto LABEL_32;
      }
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) != 1 )
        goto LABEL_32;
LABEL_31:
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
LABEL_32:
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v36);
      if ( v62 )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q(v37, &EventProfilerExit, v38, v60);
      }
      return (unsigned int)v9;
    }
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v70);
    if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v54);
    if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v55, &EventProfilerExit, v56, v60);
    return 0LL;
  }
  else
  {
    v48 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    *(_QWORD *)(v48 + 24) = v15;
    *(_QWORD *)(v48 + 32) = -1073741801LL;
    WdLogEvent5_WdLowResource(v48);
    PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(&v70);
    if ( v58 && _InterlockedExchangeAdd64((volatile signed __int64 *)v58 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v58 + 2), v58);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v60, v49);
    if ( v62 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v50, &EventProfilerExit, v51, v60);
    return 3221225495LL;
  }
}
