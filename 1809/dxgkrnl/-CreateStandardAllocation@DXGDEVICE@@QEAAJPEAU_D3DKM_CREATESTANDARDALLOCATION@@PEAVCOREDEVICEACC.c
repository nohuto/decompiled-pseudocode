/*
 * XREFs of ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F8394
 * Callers:
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F0408 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C00F3E74 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_GDISURFACETYPE@@P6APEAXPEBXI@ZPEAX5IPEAI6PEAPEAX6@Z @ 0x1C00F8010 (-DxgkCddCreateAllocation@@YAJIW4_D3DDDIFORMAT@@U_DXGKCDD_CREATE_ALLOCATION_FLAGS@@IIW4_D3DKMDT_G.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0120BCC (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C01E6AF0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PEAI2@Z @ 0x1C01FDAA0 (-CreateStagingSurface2@DXGDEVICE@@QEAAJPEAU_D3DKMDT_STAGINGSURFACEDATA@@PEAVCOREDEVICEACCESS@@PE.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C0206D20 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02467F4 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmIsAllocationCPUVisible@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C001166C (-VidMmIsAllocationCPUVisible@VIDMM_EXPORT@@QEAAEPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012834 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C00354B4 (-VidMmGetAllocationSection@VIDMM_EXPORT@@QEAAPEAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00F7E34 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 *     ?DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA@@@Z @ 0x1C00F88FC (-DdiGetStandardAllocationDriverData@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_GETSTANDARDALLOCATIONDRIVE.c)
 *     ?ReplicateGdiContent@DXGADAPTER@@QEBAEXZ @ 0x1C00F8C28 (-ReplicateGdiContent@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C010A130 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     GetPixelSizeInBytes @ 0x1C01D8CDC (GetPixelSizeInBytes.c)
 */

__int64 __fastcall DXGDEVICE::CreateStandardAllocation(
        DXGDEVICE *this,
        struct _D3DKM_CREATESTANDARDALLOCATION *a2,
        PERESOURCE **a3)
{
  void *v3; // r15
  __int64 v6; // rcx
  UINT v7; // r12d
  struct DXGALLOCATION *v8; // rbx
  __int64 v9; // rdi
  D3DDDI_ALLOCATIONINFO *PoolWithTag; // r13
  ADAPTER_RENDER *v11; // rdi
  int StandardAllocationDriverData; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  UINT AllocationPrivateDriverDataSize; // edx
  UINT ResourcePrivateDriverDataSize; // ecx
  UINT v17; // eax
  UINT *p_PrivateDriverDataSize; // rdi
  PVOID v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  ADAPTER_RENDER *v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // r15
  unsigned int v27; // ecx
  int v28; // edx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  UINT v33; // edi
  D3DDDI_ALLOCATIONINFO *v34; // rbx
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v36; // rax
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // rcx
  struct DXGALLOCATION *v40; // rdx
  __int64 v41; // rcx
  int v42; // edx
  __int64 v43; // rcx
  __int64 AllocationSection; // rax
  void **p_pPrivateDriverData; // r13
  __int64 v46; // rbx
  UINT v48; // ecx
  int v49; // ecx
  _QWORD *v50; // rax
  D3DKMT_CREATESTANDARDALLOCATION *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  _QWORD *v55; // rax
  unsigned int *v56; // r12
  int PixelSizeInBytes; // eax
  unsigned int v58; // edx
  _QWORD *v59; // rax
  __int64 v60; // rax
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v71; // rax
  unsigned int v72; // r12d
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int v75; // edx
  int v76; // eax
  __int64 v77; // rax
  struct DXGRESOURCE *v78; // rbx
  __int64 v79; // rax
  char v80; // [rsp+80h] [rbp-80h]
  char v81; // [rsp+81h] [rbp-7Fh]
  UINT v82; // [rsp+84h] [rbp-7Ch]
  UINT v83; // [rsp+84h] [rbp-7Ch]
  int v84; // [rsp+88h] [rbp-78h]
  D3DDDI_ALLOCATIONINFO *v85; // [rsp+88h] [rbp-78h]
  unsigned int v86; // [rsp+90h] [rbp-70h]
  D3DKMT_CREATESTANDARDALLOCATION *v87; // [rsp+98h] [rbp-68h]
  struct COREDEVICEACCESS *v88; // [rsp+A0h] [rbp-60h] BYREF
  D3DKMT_HANDLE *v89; // [rsp+A8h] [rbp-58h]
  struct DXGALLOCATION *v90; // [rsp+B0h] [rbp-50h] BYREF
  struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA v91; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v92; // [rsp+E8h] [rbp-18h]
  __int64 v93; // [rsp+F0h] [rbp-10h]
  struct _D3DKMT_CREATEALLOCATION v94; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v95[32]; // [rsp+150h] [rbp+50h] BYREF
  PVOID P; // [rsp+170h] [rbp+70h]
  _BYTE v97[384]; // [rsp+178h] [rbp+78h] BYREF
  UINT v98; // [rsp+2F8h] [rbp+1F8h]

  v3 = 0LL;
  v88 = (struct COREDEVICEACCESS *)a3;
  if ( a3 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(a3[3]);
  memset(&v91, 0, sizeof(v91));
  memset(&v94, 0, sizeof(v94));
  v6 = *((_QWORD *)this + 2);
  v7 = 1;
  v8 = 0LL;
  v87 = 0LL;
  v80 = 0;
  v90 = 0LL;
  v9 = *(_QWORD *)(v6 + 16);
  v84 = 1;
  v86 = 0;
  if ( *((_DWORD *)a2 + 4) != 1 )
  {
LABEL_4:
    if ( !DXGADAPTER::ReplicateGdiContent(*(DXGADAPTER **)(v6 + 16)) )
      goto LABEL_5;
    if ( *((_DWORD *)a2 + 4) != 4 )
      goto LABEL_5;
    v49 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL);
    if ( ((v49 - 1) & 0xFFFFFFFC) != 0 || v49 == 2 )
      goto LABEL_5;
    goto LABEL_63;
  }
  if ( !*(_BYTE *)(v9 + 2435) && !DXGADAPTER::ReplicateGdiContent((DXGADAPTER *)v9) )
  {
    v6 = *((_QWORD *)this + 2);
    goto LABEL_4;
  }
LABEL_63:
  if ( *(int *)(v9 + 2160) >= 0x2000 )
    v7 = *(_DWORD *)(v9 + 256);
  v84 = v7;
LABEL_5:
  if ( *((_DWORD *)a2 + 4) == 1 && !*(_QWORD *)(v9 + 2520) )
    *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL) = 0;
  P = 0LL;
  PoolWithTag = 0LL;
  v98 = 0;
  if ( v7 > 4 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x60 )
      goto LABEL_10;
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)ExAllocatePoolWithTag(PagedPool, 96LL * v7, 0x4B677844u);
    P = PoolWithTag;
  }
  else
  {
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)v97;
    P = v97;
  }
  v98 = v7;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, 96LL * v7);
    PoolWithTag = (D3DDDI_ALLOCATIONINFO *)P;
  }
LABEL_10:
  v11 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v81 = *(_BYTE *)(*((_QWORD *)v11 + 2) + 185LL);
  memset(&v91, 0, sizeof(v91));
  v91.StandardAllocationType = *((_DWORD *)a2 + 4);
  v91.pCreateSharedPrimarySurfaceData = (D3DKMDT_SHAREDPRIMARYSURFACEDATA *)*((_QWORD *)a2 + 3);
  StandardAllocationDriverData = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v11, &v91);
  v14 = StandardAllocationDriverData;
  if ( StandardAllocationDriverData < 0 )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v13);
LABEL_76:
    v50[4] = v14;
    v50[3] = this;
    WdLogEvent5_WdError(v50);
    goto LABEL_53;
  }
  AllocationPrivateDriverDataSize = v91.AllocationPrivateDriverDataSize;
  ResourcePrivateDriverDataSize = v91.ResourcePrivateDriverDataSize;
  if ( !v91.AllocationPrivateDriverDataSize && !v91.ResourcePrivateDriverDataSize )
  {
    v50 = (_QWORD *)WdLogNewEntry5_WdError(v91.ResourcePrivateDriverDataSize);
LABEL_75:
    v14 = -1073741811LL;
    goto LABEL_76;
  }
  if ( (*(_DWORD *)a2 & 0x40) != 0 )
  {
    if ( *((_DWORD *)a2 + 90) != v91.ResourcePrivateDriverDataSize )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdError(v91.ResourcePrivateDriverDataSize);
      v50[5] = 1LL;
      goto LABEL_75;
    }
    if ( *((_DWORD *)a2 + 94) != v91.AllocationPrivateDriverDataSize )
    {
      v50 = (_QWORD *)WdLogNewEntry5_WdError(v91.ResourcePrivateDriverDataSize);
      v50[5] = 2LL;
      goto LABEL_75;
    }
  }
  if ( !v91.ResourcePrivateDriverDataSize )
    goto LABEL_14;
  v51 = (D3DKMT_CREATESTANDARDALLOCATION *)operator new(v91.ResourcePrivateDriverDataSize, 0x4B677844u, PagedPool);
  v87 = v51;
  if ( v51 )
  {
    memset(v51, 0, v91.ResourcePrivateDriverDataSize);
    ResourcePrivateDriverDataSize = v91.ResourcePrivateDriverDataSize;
    AllocationPrivateDriverDataSize = v91.AllocationPrivateDriverDataSize;
LABEL_14:
    v17 = 0;
    v82 = 0;
    if ( !v7 )
      goto LABEL_29;
    p_PrivateDriverDataSize = &PoolWithTag->PrivateDriverDataSize;
    while ( 1 )
    {
      if ( AllocationPrivateDriverDataSize )
      {
        v19 = operator new(AllocationPrivateDriverDataSize, 0x4B677844u, PagedPool);
        v3 = v19;
        if ( !v19 )
        {
          v61 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
          LODWORD(v26) = -1073741801;
          v61[3] = this;
          v61[4] = v91.AllocationPrivateDriverDataSize;
          v61[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v61);
          goto LABEL_49;
        }
        memset(v19, 0, v91.AllocationPrivateDriverDataSize);
        ++v86;
        v17 = v82;
      }
      *((_QWORD *)p_PrivateDriverDataSize - 1) = v3;
      *p_PrivateDriverDataSize = v91.AllocationPrivateDriverDataSize;
      v91.pResourcePrivateDriverData = v87;
      v91.pAllocationPrivateDriverData = v3;
      if ( v7 <= 1 )
        v17 = *((_DWORD *)a2 + 95);
      v23 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
      v91.PhysicalAdapterIndex = v17;
      v24 = ADAPTER_RENDER::DdiGetStandardAllocationDriverData(v23, &v91);
      v26 = v24;
      if ( v24 < 0 )
      {
        v62 = (_QWORD *)WdLogNewEntry5_WdAssertion(v25);
        v62[5] = 0LL;
        v62[3] = this;
        v62[4] = v26;
        WdLogEvent5_WdAssertion(v62);
        goto LABEL_48;
      }
      v3 = 0LL;
      if ( (*(_DWORD *)a2 & 0x60) != 0 )
      {
        v56 = (unsigned int *)*((_QWORD *)a2 + 3);
        v25 = v56[2];
        if ( (_DWORD)v25 )
        {
          PixelSizeInBytes = GetPixelSizeInBytes();
          v25 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 308LL);
          if ( (v25 & 8) == 0 )
          {
            if ( PixelSizeInBytes )
            {
              v58 = v56[5];
              if ( v58 )
              {
                v25 = (PixelSizeInBytes * *v56 + 127) & 0xFFFFFF80;
                if ( v58 != (_DWORD)v25 )
                {
                  LODWORD(v26) = -1073741811;
                  v59 = (_QWORD *)WdLogNewEntry5_WdError(v25);
                  v59[3] = this;
                  v59[4] = v56[5];
                  v59[5] = *v56;
                  v59[6] = -1073741811LL;
                  WdLogEvent5_WdError(v59);
                  goto LABEL_49;
                }
              }
            }
          }
        }
        v7 = v84;
      }
      if ( (*(_BYTE *)a2 & 0xC0) == 0xC0 )
      {
        v60 = WdLogNewEntry5_WdAssertion(v25);
        *(_QWORD *)(v60 + 24) = 7238LL;
        WdLogEvent5_WdAssertion(v60);
      }
      if ( *((_DWORD *)a2 + 4) == 1 )
      {
        v48 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 20LL);
        p_PrivateDriverDataSize[2] |= 1u;
        p_PrivateDriverDataSize[1] = v48;
      }
      p_PrivateDriverDataSize += 24;
      v17 = v82 + 1;
      v82 = v17;
      if ( v17 >= v7 )
        break;
      AllocationPrivateDriverDataSize = v91.AllocationPrivateDriverDataSize;
    }
    ResourcePrivateDriverDataSize = v91.ResourcePrivateDriverDataSize;
LABEL_29:
    v94.hDevice = *((_DWORD *)a2 + 1);
    v94.pStandardAllocation = v87;
    v94.pPrivateRuntimeData = (const void *)*((_QWORD *)a2 + 39);
    v94.PrivateRuntimeDataSize = *((_DWORD *)a2 + 80);
    v94.PrivateDriverDataSize = ResourcePrivateDriverDataSize;
    v27 = *(_DWORD *)a2;
    v28 = *(_DWORD *)a2 & 0x60;
    *(_QWORD *)&v94.hResource = 0LL;
    v94.NumAllocations = v7;
    v94.pAllocationInfo = PoolWithTag;
    v94.Flags = (D3DKMT_CREATEALLOCATIONFLAGS)(*(_DWORD *)&v94.Flags & 0xFFFFA094 | (v27 >> 4) & 0x440 | (*((_BYTE *)a2 + 408) == 0) | (2 * (v27 & 1 | (2 * (v27 & 2 | (2 * (v27 & 4 | v27 & 0x800 | (4 * (v27 & 0x18 | (2 * v28))))))))));
    v29 = DXGDEVICE::CreateAllocation(this, &v94, 0, 0, 0LL, a2, v88, 0, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
    v26 = v29;
    if ( v29 < 0 )
    {
      v67 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, v30, v32);
      v67[3] = this;
      v67[4] = v26;
      v67[5] = 1LL;
      WdLogEvent5_WdWarning(v67);
      goto LABEL_48;
    }
    v33 = 0;
    v80 = 1;
    v83 = 0;
    if ( v7 )
    {
      v34 = PoolWithTag;
      v85 = PoolWithTag;
      v89 = (D3DKMT_HANDLE *)((char *)a2 + 52);
      while ( 1 )
      {
        hAllocation = v34->hAllocation;
        v92 = *((_QWORD *)this + 5);
        v93 = v92 + 208;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v92 + 208));
        v36 = (hAllocation >> 6) & 0xFFFFFF;
        if ( (unsigned int)v36 < *(_DWORD *)(v92 + 248) )
        {
          v37 = *(_QWORD *)(v92 + 232);
          v38 = *(_DWORD *)(v37 + 16 * v36 + 8);
          if ( ((hAllocation >> 25) & 0x60) == (*(_BYTE *)(v37 + 16 * v36 + 8) & 0x60)
            && (v38 & 0x2000) == 0
            && (v38 & 0x1F) != 0 )
          {
            v39 = v38 & 0x1F;
            if ( (_BYTE)v39 == 5 )
            {
              v40 = *(struct DXGALLOCATION **)(v37 + 16LL * (unsigned int)v36);
              goto LABEL_38;
            }
            v63 = WdLogNewEntry5_WdError(v39);
            *(_QWORD *)(v63 + 24) = 316LL;
            WdLogEvent5_WdError(v63);
          }
        }
        v40 = 0LL;
LABEL_38:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v88, v40);
        ExReleasePushLockSharedEx(v93, 0LL);
        KeLeaveCriticalRegion();
        DXGALLOCATIONREFERENCE::MoveAssign(&v90, &v88);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v88);
        v8 = v90;
        if ( !v90 )
        {
          LODWORD(v26) = -1073741811;
          v66 = (_QWORD *)WdLogNewEntry5_WdAssertion(v41);
          v66[3] = this;
          v66[4] = *(&PoolWithTag->hAllocation + 24 * v83);
          v66[5] = -1073741811LL;
          WdLogEvent5_WdAssertion(v66);
          goto LABEL_101;
        }
        *v89 = v85->hAllocation;
        if ( !v81
          && !VIDMM_EXPORT::VidMmIsAllocationCPUVisible(
                *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
                *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
                *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*((_QWORD *)v8 + 6) + 8LL)) )
        {
          v42 = *((_DWORD *)a2 + 4);
          if ( (v42 != 4 || *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) == 2) && v42 != 5 )
          {
            v64 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
            if ( (*(_DWORD *)(v64 + 1892) & 0x200) == 0 || v42 != 1 )
            {
              LODWORD(v26) = -1073741811;
              v65 = (_QWORD *)WdLogNewEntry5_WdError(v64);
              v65[3] = this;
              v65[4] = *((int *)a2 + 4);
              v65[5] = -1073741811LL;
              WdLogEvent5_WdError(v65);
              goto LABEL_101;
            }
          }
        }
        ++v89;
        ++v33;
        v85 = (D3DDDI_ALLOCATIONINFO *)((char *)v85 + 96);
        v83 = v33;
        if ( v33 >= v7 )
          break;
        v34 = v85;
      }
    }
    *((_DWORD *)a2 + 2) = v94.hResource;
    *((_DWORD *)a2 + 3) = v94.hGlobalShare;
    v43 = (unsigned int)(*(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL) - 6);
    if ( (v43 & 0xFFFFFFFD) != 0 )
      AllocationSection = 0LL;
    else
      AllocationSection = VIDMM_EXPORT::VidMmGetAllocationSection(
                            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
                            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
                            *((struct _VIDMM_MULTI_ALLOC **)v8 + 3));
    *((_QWORD *)a2 + 41) = AllocationSection;
    if ( (*(_DWORD *)a2 & 0x40) != 0 )
    {
      memmove(*((void **)a2 + 46), PoolWithTag->pPrivateDriverData, *((unsigned int *)a2 + 94));
      memmove(*((void **)a2 + 44), v91.pResourcePrivateDriverData, *((unsigned int *)a2 + 90));
    }
LABEL_48:
    if ( (int)v26 >= 0 || !v80 )
      goto LABEL_49;
LABEL_101:
    if ( !v94.hResource )
    {
      v68 = WdLogNewEntry5_WdAssertion(v43);
      *(_QWORD *)(v68 + 24) = 7364LL;
      WdLogEvent5_WdAssertion(v68);
    }
    Current = DXGPROCESS::GetCurrent();
    if ( !Current )
    {
      v71 = WdLogNewEntry5_WdAssertion(v69);
      *(_QWORD *)(v71 + 24) = 7372LL;
      WdLogEvent5_WdAssertion(v71);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v95,
      (struct _KTHREAD **)Current);
    v72 = *((_DWORD *)Current + 62);
    v73 = (v94.hResource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v73 < v72 )
    {
      v74 = *((_QWORD *)Current + 29);
      v75 = *(_DWORD *)(v74 + 16LL * (unsigned int)v73 + 8);
      v76 = (v75 >> 5) & 3;
      if ( v94.hResource >> 30 == v76 && (v75 & 0x2000) == 0 && (v75 & 0x1F) != 0 )
      {
        if ( (v75 & 0x1F) == 4 )
        {
          v78 = *(struct DXGRESOURCE **)(v74 + 16LL * (unsigned int)v73);
          if ( v78 )
          {
            if ( (unsigned int)v73 < v72 && v94.hResource >> 30 == v76 && (v75 & 0x2000) == 0 && (v75 & 0x1F) != 0 )
              *(_DWORD *)(v74 + 16LL * ((v94.hResource >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
            goto LABEL_113;
          }
LABEL_112:
          v79 = WdLogNewEntry5_WdAssertion(v73);
          *(_QWORD *)(v79 + 24) = 7378LL;
          WdLogEvent5_WdAssertion(v79);
LABEL_113:
          DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v95);
          if ( v78 )
            DXGDEVICE::DestroyAllocationInternal(this, 0, 0LL, v78, 0LL, DXGDEVICE::DestroyFlagsDefault);
LABEL_49:
          if ( v86 )
          {
            p_pPrivateDriverData = &PoolWithTag->pPrivateDriverData;
            v46 = v86;
            do
            {
              operator delete[](*p_pPrivateDriverData);
              p_pPrivateDriverData += 12;
              --v46;
            }
            while ( v46 );
          }
          goto LABEL_52;
        }
        v77 = WdLogNewEntry5_WdError(v73);
        *(_QWORD *)(v77 + 24) = 316LL;
        WdLogEvent5_WdError(v77);
      }
    }
    v78 = 0LL;
    goto LABEL_112;
  }
  v55 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52, v54);
  LODWORD(v26) = -1073741801;
  v55[3] = this;
  v55[4] = v91.ResourcePrivateDriverDataSize;
  v55[5] = -1073741801LL;
  WdLogEvent5_WdWarning(v55);
LABEL_52:
  operator delete[](v87);
  LODWORD(v14) = v26;
LABEL_53:
  if ( P != v97 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v98 = 0;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v90);
  return (unsigned int)v14;
}
