/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F30A8
 * Callers:
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C8E10 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F09B8 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00F1D10 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F2868 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C02165A0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C022E3B4 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0238D4C (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C027C730 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002778 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00071B0 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C650 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F1840 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00F364C (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F3A30 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0112200 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     GetPixelSizeInBytes @ 0x1C02077A0 (GetPixelSizeInBytes.c)
 */

__int64 __fastcall DXGDEVICE::CreateStandardAllocation(
        DXGDEVICE *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        PERESOURCE **a3)
{
  void *v3; // r15
  __int64 v6; // rcx
  UINT v7; // r12d
  struct _EX_RUNDOWN_REF *v8; // rbx
  __int64 v9; // rdi
  D3DDDI_ALLOCATIONINFO *PoolWithTag; // r13
  ADAPTER_RENDER *v11; // rcx
  int StandardAllocationDriverData; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  UINT v19; // eax
  UINT *p_PrivateDriverDataSize; // rdi
  PVOID v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  ADAPTER_RENDER *v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r15
  unsigned int v30; // ecx
  int v31; // edx
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  struct COREDEVICEACCESS *v36; // rdi
  unsigned int v37; // edi
  const GUID *v38; // r8
  __int64 v39; // rax
  ULONG_PTR v40; // r8
  int v41; // ecx
  __int64 v42; // rcx
  struct DXGALLOCATION *v43; // rdx
  __int64 v44; // rcx
  struct COREDEVICEACCESS *v45; // rdi
  _DWORD *v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rcx
  __int64 v49; // rax
  void **p_pPrivateDriverData; // r13
  __int64 v51; // rbx
  UINT v53; // ecx
  int v54; // ecx
  _QWORD *v55; // rax
  PVOID v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  _QWORD *v60; // rax
  unsigned int *v61; // r12
  int PixelSizeInBytes; // eax
  __int64 v63; // r8
  _QWORD *v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  int Count; // r9d
  __int64 v69; // rax
  __int64 v70; // rcx
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v78; // rax
  __int64 v79; // rdx
  unsigned int v80; // r12d
  __int64 v81; // rcx
  __int64 v82; // r8
  int v83; // eax
  __int64 v84; // rax
  struct DXGRESOURCE *v85; // rbx
  __int64 v86; // rax
  char v87; // [rsp+80h] [rbp-80h]
  char v88; // [rsp+81h] [rbp-7Fh]
  UINT v89; // [rsp+84h] [rbp-7Ch]
  UINT v90; // [rsp+84h] [rbp-7Ch]
  int v91; // [rsp+88h] [rbp-78h]
  _DWORD *v92; // [rsp+88h] [rbp-78h]
  struct _EX_RUNDOWN_REF *v93; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v94; // [rsp+98h] [rbp-68h]
  void *v95; // [rsp+A0h] [rbp-60h]
  struct COREDEVICEACCESS *v96; // [rsp+A8h] [rbp-58h]
  struct _EX_RUNDOWN_REF *v97; // [rsp+B0h] [rbp-50h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v98; // [rsp+B8h] [rbp-48h] BYREF
  struct _D3DKMT_CREATEALLOCATION v99; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v100[32]; // [rsp+140h] [rbp+40h] BYREF
  PVOID P; // [rsp+160h] [rbp+60h]
  _BYTE v102[384]; // [rsp+168h] [rbp+68h] BYREF
  UINT v103; // [rsp+2E8h] [rbp+1E8h]

  v3 = 0LL;
  v96 = (struct COREDEVICEACCESS *)a3;
  if ( a3 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]);
  memset(&v98, 0, sizeof(v98));
  memset(&v99, 0, sizeof(v99));
  v6 = *((_QWORD *)this + 2);
  v7 = 1;
  v8 = 0LL;
  v95 = 0LL;
  v87 = 0;
  v93 = 0LL;
  v9 = *(_QWORD *)(v6 + 16);
  v91 = 1;
  v94 = 0;
  if ( *((_DWORD *)a2 + 4) != 1 )
  {
LABEL_4:
    if ( !DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(v6 + 16)) )
      goto LABEL_5;
    if ( *((_DWORD *)a2 + 4) != 4 )
      goto LABEL_5;
    v54 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL);
    if ( ((v54 - 1) & 0xFFFFFFFC) != 0 || v54 == 2 )
      goto LABEL_5;
    goto LABEL_68;
  }
  if ( !*(_BYTE *)(v9 + 2471) && !DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)v9) )
  {
    v6 = *((_QWORD *)this + 2);
    goto LABEL_4;
  }
LABEL_68:
  if ( *(int *)(v9 + 2184) >= 0x2000 )
    v7 = *(_DWORD *)(v9 + 256);
  v91 = v7;
LABEL_5:
  if ( *((_DWORD *)a2 + 4) == 1 && !*(_QWORD *)(v9 + 2552) )
    *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL) = 0;
  P = 0LL;
  PoolWithTag = 0LL;
  v103 = 0;
  if ( v7 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x60 )
      goto LABEL_10;
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)ExAllocatePoolWithTag(PagedPool, 96LL * v7, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)v102;
    P = v102;
  }
  v103 = v7;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 96LL * v7);
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)P;
  }
LABEL_10:
  v11 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v88 = *(_BYTE *)(*((_QWORD *)v11 + 2) + 185LL);
  v98.StandardAllocationType = *((_DWORD *)a2 + 4);
  v98.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v11, &v98);
  v16 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13, v15);
LABEL_81:
    v55[4] = v16;
    v55[3] = this;
    WdLogEvent5_WdError(v55);
    goto LABEL_57;
  }
  AllocationPrivateDriverDataSize = v98.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v98.ResourcePrivateDriverDataSize;
  if ( !v98.AllocationPrivateDriverDataSize && !v98.ResourcePrivateDriverDataSize )
  {
    v55 = (_QWORD *)WdLogNewEntry5_WdError(v98.ResourcePrivateDriverDataSize, v98.AllocationPrivateDriverDataSize, v15);
LABEL_80:
    v16 = -1073741811LL;
    goto LABEL_81;
  }
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)a2 + 90) != v98.ResourcePrivateDriverDataSize )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdError(
                        v98.ResourcePrivateDriverDataSize,
                        v98.AllocationPrivateDriverDataSize,
                        v15);
      v55[5] = 1LL;
      goto LABEL_80;
    }
    if ( *((_DWORD *)a2 + 94) != v98.AllocationPrivateDriverDataSize )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdError(
                        v98.ResourcePrivateDriverDataSize,
                        v98.AllocationPrivateDriverDataSize,
                        v15);
      v55[5] = 2LL;
      goto LABEL_80;
    }
  }
  if ( !v98.ResourcePrivateDriverDataSize )
    goto LABEL_14;
  v56 = operator new[](v98.ResourcePrivateDriverDataSize, 0x4B677844u, PagedPool);
  v95 = v56;
  if ( v56 )
  {
    memset(v56, 0, v98.ResourcePrivateDriverDataSize);
    ResourcePrivateDriverDataSize = v98.ResourcePrivateDriverDataSize;
    AllocationPrivateDriverDataSize = v98.AllocationPrivateDriverDataSize;
LABEL_14:
    v19 = 0;
    v89 = 0;
    if ( !v7 )
      goto LABEL_29;
    p_PrivateDriverDataSize = &PoolWithTag->PrivateDriverDataSize;
    while ( 1 )
    {
      if ( AllocationPrivateDriverDataSize )
      {
        v21 = operator new[](AllocationPrivateDriverDataSize, 0x4B677844u, PagedPool);
        v3 = v21;
        if ( !v21 )
        {
          v66 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24);
          LODWORD(v29) = -1073741801;
          v66[3] = this;
          v66[4] = v98.AllocationPrivateDriverDataSize;
          v66[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v66);
          goto LABEL_53;
        }
        memset(v21, 0, v98.AllocationPrivateDriverDataSize);
        ++v94;
        v19 = v89;
      }
      *((_QWORD *)p_PrivateDriverDataSize - 1) = v3;
      *p_PrivateDriverDataSize = v98.AllocationPrivateDriverDataSize;
      v98.pResourcePrivateDriverData = v95;
      v98.pAllocationPrivateDriverData = v3;
      if ( v7 <= 1 )
        v19 = *((_DWORD *)a2 + 95);
      v25 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      v98.PhysicalAdapterIndex = v19;
      v26 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v25, &v98);
      v29 = v26;
      if ( v26 < 0 )
      {
        v67 = (_QWORD *)WdLogNewEntry5_WdAssertion(v28, v27);
        v67[5] = 0LL;
        v67[3] = this;
        v67[4] = v29;
        WdLogEvent5_WdAssertion(v67);
        goto LABEL_52;
      }
      v3 = 0LL;
      if ( (*(_DWORD *)a2 & 0x60) != 0 )
      {
        v61 = (unsigned int *)*((_QWORD *)a2 + 3);
        v28 = v61[2];
        if ( (_DWORD)v28 )
        {
          PixelSizeInBytes = GetPixelSizeInBytes();
          v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          v28 = *(unsigned int *)(v27 + 308);
          if ( (v28 & 8) == 0 )
          {
            if ( PixelSizeInBytes )
            {
              v28 = v61[5];
              if ( (_DWORD)v28 )
              {
                if ( (_DWORD)v28 != ((*v61 * PixelSizeInBytes + 127) & 0xFFFFFF80) )
                {
                  LODWORD(v29) = -1073741811;
                  v64 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v63);
                  v64[3] = this;
                  v64[4] = v61[5];
                  v64[5] = *v61;
                  v64[6] = -1073741811LL;
                  WdLogEvent5_WdError(v64);
                  goto LABEL_53;
                }
              }
            }
          }
        }
        v7 = v91;
      }
      if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
      {
        v65 = WdLogNewEntry5_WdAssertion(v28, v27);
        *(_QWORD *)(v65 + 24) = 7207LL;
        WdLogEvent5_WdAssertion(v65);
      }
      if ( *((_DWORD *)a2 + 4) == 1 )
      {
        v53 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL);
        p_PrivateDriverDataSize[2] |= 1u;
        p_PrivateDriverDataSize[1] = v53;
      }
      p_PrivateDriverDataSize += 24;
      v19 = v89 + 1;
      v89 = v19;
      if ( v19 >= v7 )
        break;
      AllocationPrivateDriverDataSize = v98.AllocationPrivateDriverDataSize;
    }
    ResourcePrivateDriverDataSize = v98.ResourcePrivateDriverDataSize;
LABEL_29:
    v99.hDevice = *((_DWORD *)a2 + 1);
    v99.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)v95;
    v99.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
    v99.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
    v99.PrivateDriverDataSize = ResourcePrivateDriverDataSize;
    v30 = *(_DWORD *)a2;
    v31 = *(_DWORD *)a2 & 0x60;
    *(_QWORD *)&v99.hResource = 0LL;
    v99.NumAllocations = v7;
    v99.pAllocationInfo = PoolWithTag;
    v99.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v99.Flags & 0xFFFFA094 | (v30 >> 4) & 0x440 | (*((_BYTE *)a2 + 408) == 0) | (2 * (v30 & 1 | (2 * (v30 & 2 | (2 * (v30 & 4 | v30 & 0x800 | (4 * (v30 & 0x18 | (2 * v31))))))))));
    v32 = DXGDEVICE::CreateAllocation(this, &v99, 0, 0, 0LL, a2, v96, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    v29 = v32;
    if ( v32 < 0 )
    {
      v73 = (_QWORD *)WdLogNewEntry5_WdWarning(v34, v33, v35);
      v73[3] = this;
      v73[4] = v29;
      v73[5] = 1LL;
      WdLogEvent5_WdWarning(v73);
      goto LABEL_52;
    }
    v87 = 1;
    v90 = 0;
    if ( v7 )
    {
      v96 = (struct COREDEVICEACCESS *)PoolWithTag;
      v92 = (_DWORD *)((char *)a2 + 52);
      v36 = (struct COREDEVICEACCESS *)PoolWithTag;
      do
      {
        v37 = *(_DWORD *)v36;
        v93 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)this + 5);
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(&v93[23], 0LL) )
        {
          if ( bTracingEnabled )
          {
            Count = v93[25].Count;
            if ( Count != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q((__int64)v93, &EventBlockThread, v38, Count);
          }
          ExAcquirePushLockSharedEx(&v93[23], 0LL);
        }
        v39 = (v37 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v39 < LODWORD(v93[28].Count) )
        {
          v40 = v93[26].Count;
          v41 = *(_DWORD *)(v40 + 16 * v39 + 8);
          if ( ((v37 >> 25) & 0x60) == (*(_BYTE *)(v40 + 16 * v39 + 8) & 0x60)
            && (v41 & 0x2000) == 0
            && (v41 & 0x1F) != 0 )
          {
            v42 = v41 & 0x1F;
            if ( (_BYTE)v42 == 5 )
            {
              v43 = *(struct DXGALLOCATION **)(v40 + 16LL * (unsigned int)v39);
              goto LABEL_39;
            }
            v69 = WdLogNewEntry5_WdError(v42, 2LL * (unsigned int)v39, v40);
            *(_QWORD *)(v69 + 24) = 267LL;
            WdLogEvent5_WdError(v69);
          }
        }
        v43 = 0LL;
LABEL_39:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v97, v43);
        ExReleasePushLockSharedEx(&v93[23], 0LL);
        KeLeaveCriticalRegion();
        if ( v8 )
          ExReleaseRundownProtection(v8 + 11);
        v8 = v97;
        v97 = 0LL;
        v93 = v8;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v97);
        if ( !v8 )
        {
          LODWORD(v29) = -1073741811;
          v72 = (_QWORD *)WdLogNewEntry5_WdAssertion(v44, v33);
          v72[3] = this;
          v72[4] = *(&PoolWithTag->hAllocation + 24 * v90);
          v72[5] = -1073741811LL;
          WdLogEvent5_WdAssertion(v72);
          goto LABEL_109;
        }
        v45 = v96;
        v46 = v92;
        *v92 = *(_DWORD *)v96;
        if ( !v88 )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL)
                                                                              + 8LL)
                                                                  + 184LL))(
                  *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
                  *(_QWORD *)(v8[6].Count + 8)) )
          {
            v33 = *((unsigned int *)a2 + 4);
            if ( ((_DWORD)v33 != 4 || *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) == 2) && (_DWORD)v33 != 5 )
            {
              v70 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
              if ( (*(_DWORD *)(v70 + 1916) & 0x200) == 0 || (_DWORD)v33 != 1 )
              {
                LODWORD(v29) = -1073741811;
                v71 = (_QWORD *)WdLogNewEntry5_WdError(v70, v33, v47);
                v71[3] = this;
                v71[4] = *((int *)a2 + 4);
                v71[5] = -1073741811LL;
                WdLogEvent5_WdError(v71);
                goto LABEL_109;
              }
            }
          }
          v46 = v92;
        }
        v92 = v46 + 1;
        v36 = (struct COREDEVICEACCESS *)((char *)v45 + 96);
        ++v90;
        v96 = v36;
      }
      while ( v90 < v7 );
    }
    *((_DWORD *)a2 + 2) = v99.hResource;
    *((_DWORD *)a2 + 3) = v99.hGlobalShare;
    v48 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) - 6);
    if ( (v48 & 0xFFFFFFFD) != 0 )
      v49 = 0LL;
    else
      v49 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 544LL) + 8LL)
                                                         + 680LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 552LL),
              v8[3].Count);
    *((_QWORD *)a2 + 41) = v49;
    if ( (*(_DWORD *)a2 & 0x40) != 0 )
    {
      memmove(*((void **)a2 + 46), PoolWithTag->pPrivateDriverData, *((unsigned int *)a2 + 94));
      memmove(*((void **)a2 + 44), v98.pResourcePrivateDriverData, *((unsigned int *)a2 + 90));
    }
LABEL_52:
    if ( (int)v29 >= 0 || !v87 )
      goto LABEL_53;
LABEL_109:
    if ( !v99.hResource )
    {
      v74 = WdLogNewEntry5_WdAssertion(v48, v33);
      *(_QWORD *)(v74 + 24) = 7333LL;
      WdLogEvent5_WdAssertion(v74);
    }
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      v78 = WdLogNewEntry5_WdAssertion(v76, v75);
      *(_QWORD *)(v78 + 24) = 7341LL;
      WdLogEvent5_WdAssertion(v78);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v100,
      (struct _KTHREAD **)Current);
    v80 = *((_DWORD *)Current + 56);
    v81 = (v99.hResource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v81 < v80 )
    {
      v82 = *((_QWORD *)Current + 26);
      v79 = *(unsigned int *)(v82 + 16LL * (unsigned int)v81 + 8);
      v83 = (*(_DWORD *)(v82 + 16LL * (unsigned int)v81 + 8) >> 5) & 3;
      if ( v99.hResource >> 30 == v83 && (v79 & 0x2000) == 0 && (v79 & 0x1F) != 0 )
      {
        v79 &= 0x1Fu;
        if ( (_BYTE)v79 == 4 )
        {
          v85 = *(struct DXGRESOURCE **)(v82 + 16LL * (unsigned int)v81);
          if ( v85 )
          {
            if ( (unsigned int)v81 < v80
              && v99.hResource >> 30 == v83
              && (*(_DWORD *)(v82 + 16LL * (unsigned int)v81 + 8) & 0x2000) == 0
              && (*(_DWORD *)(v82 + 16LL * (unsigned int)v81 + 8) & 0x1F) != 0 )
            {
              *(_DWORD *)(v82 + 16LL * ((v99.hResource >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            }
            goto LABEL_121;
          }
LABEL_120:
          v86 = WdLogNewEntry5_WdAssertion(v81, v79);
          *(_QWORD *)(v86 + 24) = 7347LL;
          WdLogEvent5_WdAssertion(v86);
LABEL_121:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v100);
          if ( v85 )
            DXGDEVICE::DestroyAllocationInternal(this, 0, 0LL, v85, 0LL, DXGDEVICE::DestroyFlagsDefault);
LABEL_53:
          if ( v94 )
          {
            p_pPrivateDriverData = &PoolWithTag->pPrivateDriverData;
            v51 = v94;
            do
            {
              operator delete[](*p_pPrivateDriverData);
              p_pPrivateDriverData += 12;
              --v51;
            }
            while ( v51 );
          }
          goto LABEL_56;
        }
        v84 = WdLogNewEntry5_WdError(v81, v79, v82);
        *(_QWORD *)(v84 + 24) = 267LL;
        WdLogEvent5_WdError(v84);
      }
    }
    v85 = 0LL;
    goto LABEL_120;
  }
  v60 = (_QWORD *)WdLogNewEntry5_WdWarning(v58, v57, v59);
  LODWORD(v29) = -1073741801;
  v60[3] = this;
  v60[4] = v98.ResourcePrivateDriverDataSize;
  v60[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v60);
LABEL_56:
  operator delete[](v95);
  LODWORD(v16) = v29;
LABEL_57:
  if ( P != v102 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v103 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v93);
  return (unsigned int)v16;
}
