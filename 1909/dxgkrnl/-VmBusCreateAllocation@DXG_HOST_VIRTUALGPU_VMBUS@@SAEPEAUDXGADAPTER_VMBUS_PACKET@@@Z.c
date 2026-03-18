/*
 * XREFs of ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C021C370
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006EE8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0007470 (-AcquireShared@COREDEVICEACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007664 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CBD0 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C00140AC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY@@@@YAPEAUDXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003CA8C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY@@@@YAPEAUDXGKVMB_COMMAND_UPDATEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003D4CC (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0104D30 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C0114BB0 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // si
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // edi
  __int64 v18; // rdx
  unsigned int v19; // ebx
  unsigned int v20; // r11d
  SIZE_T v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  D3DDDI_ALLOCATIONINFO *v25; // r12
  SIZE_T v26; // rax
  _DWORD *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rax
  const GUID *v37; // r8
  UINT v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rdx
  UINT v41; // eax
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rbx
  char Flags; // al
  __int64 v49; // rax
  unsigned int v50; // r13d
  char *v51; // r12
  unsigned int v52; // ebx
  __int64 v53; // rcx
  const GUID *v54; // r8
  int v55; // r9d
  __int64 v56; // rax
  __int64 v57; // r8
  int v58; // ecx
  __int64 v59; // rcx
  __int64 v60; // rax
  struct _EX_RUNDOWN_REF *v61; // rdx
  __int64 v62; // rdi
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // r9
  __int64 v64; // rdx
  void *v65; // rcx
  char *v66; // rbx
  const GUID *v67; // r8
  __int64 v68; // rdx
  struct DXGDEVICE *Count; // rbx
  __int64 v70; // r9
  __int64 v71; // rdi
  int v72; // eax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rbx
  __int64 v77; // rax
  struct _EX_RUNDOWN_REF *v79; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v80; // [rsp+50h] [rbp-B8h] BYREF
  void *v81; // [rsp+58h] [rbp-B0h]
  unsigned int v82[2]; // [rsp+60h] [rbp-A8h]
  void *v83; // [rsp+68h] [rbp-A0h]
  struct DXGPROCESS *v84; // [rsp+70h] [rbp-98h]
  __int64 v85; // [rsp+78h] [rbp-90h] BYREF
  __int64 v86; // [rsp+80h] [rbp-88h] BYREF
  struct _D3DKMT_CREATEALLOCATION v87; // [rsp+88h] [rbp-80h] BYREF
  __int64 v88; // [rsp+D8h] [rbp-30h]
  D3DDDI_ALLOCATIONINFO *v89; // [rsp+E0h] [rbp-28h]
  struct DXGADAPTER_VMBUS_PACKET *v90; // [rsp+E8h] [rbp-20h]
  char v91[8]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v92[16]; // [rsp+F8h] [rbp-10h] BYREF
  char v93[8]; // [rsp+108h] [rbp+0h] BYREF
  char v94[64]; // [rsp+110h] [rbp+8h] BYREF
  char v95[88]; // [rsp+150h] [rbp+48h] BYREF

  v90 = a1;
  v2 = 0;
  v5 = CastToVmBusCommand<DXGKVMB_COMMAND_UPDATEALLOCATIONPROPERTY>((__int64)a1);
  if ( !v5 )
    return 0;
  Current = DXGPROCESS::GetCurrent(v4, v3);
  v9 = *(unsigned int *)(v5 + 40);
  v84 = Current;
  v88 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  if ( !(_DWORD)v9 )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v10 + 24) = 916LL;
    goto LABEL_67;
  }
  if ( (*(_DWORD *)(v5 + 44) & 0x1800) != 0 )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v10 + 24) = 922LL;
    goto LABEL_67;
  }
  v11 = 12 * v9;
  if ( 12 * v9 > 0xFFFFFFFF )
  {
    v10 = WdLogNewEntry5_WdError(v8, v11, v9);
    *(_QWORD *)(v10 + 24) = 929LL;
LABEL_67:
    WdLogEvent5_WdError(v10);
    return 0;
  }
  v12 = *((unsigned int *)a1 + 22);
  if ( v12 - 64 < (unsigned __int64)(unsigned int)v11 )
  {
    v10 = WdLogNewEntry5_WdError(v12 - 64, v11, v9);
    *(_QWORD *)(v10 + 24) = 935LL;
    goto LABEL_67;
  }
  v13 = *(unsigned int *)(v5 + 32);
  v14 = v11 + 64;
  if ( (int)v12 - ((int)v11 + 64) < (unsigned int)v13 )
  {
    v10 = WdLogNewEntry5_WdError(v13, v11, v9);
    *(_QWORD *)(v10 + 24) = 941LL;
    goto LABEL_67;
  }
  v15 = (unsigned int)v13 + v14;
  v16 = *(unsigned int *)(v5 + 36);
  LODWORD(v81) = v15;
  if ( (int)v12 - (int)v15 < (unsigned int)v16 )
  {
    v10 = WdLogNewEntry5_WdError(v16, v15, v9);
    *(_QWORD *)(v10 + 24) = 947LL;
    goto LABEL_67;
  }
  v17 = v16 + v15;
  v18 = 0LL;
  v19 = v17;
  do
  {
    v20 = *(_DWORD *)(v5 + 12LL * (unsigned int)v18 + 68);
    if ( (unsigned int)v12 - v19 < v20 )
    {
      v10 = WdLogNewEntry5_WdError(3LL * (unsigned int)v18, v18, v9);
      *(_QWORD *)(v10 + 24) = 958LL;
      goto LABEL_67;
    }
    v19 += v20;
    v18 = (unsigned int)(v18 + 1);
  }
  while ( (unsigned int)v18 < (unsigned int)v9 );
  v21 = 96 * v9;
  if ( !is_mul_ok(v9, 0x60uLL) )
    v21 = -1LL;
  v89 = (D3DDDI_ALLOCATIONINFO *)operator new(v21, 0x4B677844u, 1, PagedPool);
  v25 = v89;
  if ( !v89 )
  {
    v10 = WdLogNewEntry5_WdError(v23, v22, v24);
    *(_QWORD *)(v10 + 24) = 969LL;
    goto LABEL_67;
  }
  v26 = 8LL * *(unsigned int *)(v5 + 40);
  v27 = 0LL;
  if ( !is_mul_ok(*(unsigned int *)(v5 + 40), 8uLL) )
    v26 = -1LL;
  v83 = operator new(v26, 0x4B677844u, 1, PagedPool);
  if ( !v83 )
  {
    v32 = WdLogNewEntry5_WdLowResource(v29, v28, v30, v31);
    *(_QWORD *)(v32 + 24) = 977LL;
    WdLogEvent5_WdLowResource(v32);
    goto LABEL_65;
  }
  LODWORD(v79) = 72 * *(_DWORD *)(v5 + 40) + 16;
  v82[0] = v19 + (_DWORD)v79 - v17;
  v27 = operator new(v82[0], 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v27 )
  {
    v36 = WdLogNewEntry5_WdError(v34, v33, v35);
    *(_QWORD *)(v36 + 24) = 987LL;
    goto LABEL_64;
  }
  v37 = 0LL;
  v38 = *(_DWORD *)(v5 + 40);
  v87.hDevice = *(_DWORD *)(v5 + 24);
  v87.hResource = *(_DWORD *)(v5 + 28);
  *(_QWORD *)&v87.hGlobalShare = 0LL;
  v87.pPrivateRuntimeData = (const void *)(v5 + v14);
  v87.PrivateRuntimeDataSize = *(_DWORD *)(v5 + 32);
  *(&v87.PrivateRuntimeDataSize + 1) = 0;
  v87.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)(v5 + (unsigned int)v81);
  v87.PrivateDriverDataSize = *(_DWORD *)(v5 + 36);
  v87.Flags = *(D3DKMT_CREATEALLOCATIONFLAGS *)(v5 + 44);
  v87.hPrivateRuntimeResourceHandle = *(HANDLE *)(v5 + 48);
  *((_DWORD *)&v87.Flags + 1) = 0;
  v87.NumAllocations = v38;
  v87.pAllocationInfo = v89;
  if ( v38 )
  {
    do
    {
      v39 = (unsigned int)v37;
      if ( (*(_DWORD *)(v5 + 44) & 0x20) != 0 )
        *((_QWORD *)&v25->pSystemMem + 12 * (unsigned int)v37) = 1LL;
      v40 = 3LL * (unsigned int)v37;
      v37 = (const GUID *)(unsigned int)((_DWORD)v37 + 1);
      v41 = *(_DWORD *)(v5 + 12 * v39 + 64);
      v42 = 96 * v39;
      *(UINT *)((char *)&v25->Flags.Value + v42) = v41;
      *(UINT *)((char *)&v25->PrivateDriverDataSize + v42) = *(_DWORD *)(v5 + 4 * v40 + 68);
      *(void **)((char *)&v25->pPrivateDriverData + v42) = (void *)(v5 + v17);
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v25->VidPnSourceId + v42) = *(_DWORD *)(v5 + 4 * v40 + 72);
      v17 += *(_DWORD *)(v5 + 4 * v40 + 68);
    }
    while ( (unsigned int)v37 < *(_DWORD *)(v5 + 40) );
  }
  v43 = DxgkCreateAllocationInternal(&v87, (unsigned __int64 *)v83, v37);
  v47 = v43;
  if ( v43 < 0 )
  {
    v36 = WdLogNewEntry5_WdError(v45, v44, v46);
    *(_QWORD *)(v36 + 24) = v47;
    *(_QWORD *)(v36 + 32) = 1103LL;
LABEL_64:
    WdLogEvent5_WdError(v36);
  }
  else
  {
    Flags = (char)v87.Flags;
    *v27 = v87.Flags;
    if ( (Flags & 0x40) != 0 )
    {
      if ( v87.hGlobalShare )
      {
        v49 = WdLogNewEntry5_WdAssertion(v45, v44);
        *(_QWORD *)(v49 + 24) = 1024LL;
        WdLogEvent5_WdAssertion(v49);
      }
    }
    else
    {
      v27[2] = v87.hGlobalShare;
    }
    v50 = 0;
    v27[1] = v87.hResource;
    v81 = (char *)v27 + (unsigned int)v79;
    if ( *(_DWORD *)(v5 + 40) )
    {
      v51 = (char *)v84 + 184;
      while ( 1 )
      {
        v80 = 96LL * v50;
        v52 = *(D3DKMT_HANDLE *)((char *)&v87.pAllocationInfo->hAllocation + v80);
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v51, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v55 = *((_DWORD *)v51 + 4);
            if ( v55 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v53, &EventBlockThread, v54, v55);
          }
          ExAcquirePushLockSharedEx(v51, 0LL);
        }
        v56 = (v52 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v56 < *((_DWORD *)v84 + 56) )
        {
          v57 = *((_QWORD *)v84 + 26);
          v58 = *(_DWORD *)(v57 + 16 * v56 + 8);
          if ( ((v52 >> 25) & 0x60) == (*(_BYTE *)(v57 + 16 * v56 + 8) & 0x60)
            && (v58 & 0x2000) == 0
            && (v58 & 0x1F) != 0 )
          {
            v59 = v58 & 0x1F;
            if ( (_BYTE)v59 == 5 )
            {
              v61 = *(struct _EX_RUNDOWN_REF **)(v57 + 16LL * (unsigned int)v56);
              goto LABEL_51;
            }
            v60 = WdLogNewEntry5_WdError(v59, 2LL * (unsigned int)v56, v57);
            *(_QWORD *)(v60 + 24) = 267LL;
            WdLogEvent5_WdError(v60);
          }
        }
        v61 = 0LL;
LABEL_51:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79, v61);
        ExReleasePushLockSharedEx(v51, 0LL);
        KeLeaveCriticalRegion();
        v62 = 9LL * v50;
        pAllocationInfo = v87.pAllocationInfo;
        v64 = v80;
        v27[2 * v62 + 6] = *(_DWORD *)(v79[6].Count + 4);
        v27[2 * v62 + 4] = *(D3DKMT_HANDLE *)((char *)&pAllocationInfo->hAllocation + v64);
        v27[2 * v62 + 5] = *(_DWORD *)(v5 + 12LL * v50 + 68);
        v65 = v81;
        *(_QWORD *)&v27[2 * v62 + 8] = *((_QWORD *)v83 + v50);
        memmove(
          v65,
          *(const void **)((char *)&pAllocationInfo->pPrivateDriverData + v64),
          *(unsigned int *)(v5 + 12LL * v50 + 68));
        v66 = (char *)&v27[18 * v50];
        v81 = (char *)v81 + *(unsigned int *)(v5 + 12LL * v50 + 68);
        *((_QWORD *)v66 + 5) = *(_QWORD *)(v79[6].Count + 16);
        ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(v88 + 2560),
          (struct _DXGKARG_DESCRIBEALLOCATION *)(v66 + 40),
          v67);
        *((_QWORD *)v66 + 5) = 0LL;
        if ( *(_BYTE *)(v5 + 56) )
        {
          Count = (struct DXGDEVICE *)v79[1].Count;
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
            (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v92,
            Count);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v93, (__int64)Count, 0, v70, 0);
          if ( (int)COREDEVICEACCESS::AcquireShared((__int64)v93, 0xFFFFFFFF, 0LL) >= 0
            && DXGDEVICE::UmdManagesResidency(Count) )
          {
            v71 = *((_QWORD *)Count + 2);
            v85 = 0LL;
            v80 = 0LL;
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v71 + 544) + 8LL)
                                                                         + 976LL))(
              *((_QWORD *)Count + 81),
              0LL,
              &v85,
              &v80);
            v86 = 0LL;
            v72 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, char *))(*(_QWORD *)(*(_QWORD *)(v71 + 544) + 8LL) + 768LL))(
                    *(_QWORD *)(v71 + 552),
                    v85,
                    v79 + 3,
                    1LL,
                    3,
                    &v86,
                    v91);
            v76 = v72;
            if ( v72 >= 0 )
            {
              if ( v72 == 259 )
                (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v71 + 544) + 8LL)
                                                                              + 984LL))(
                  *(_QWORD *)(v71 + 552),
                  &v80,
                  &v86,
                  1LL);
            }
            else
            {
              v77 = WdLogNewEntry5_WdError(v74, v73, v75);
              *(_QWORD *)(v77 + 24) = v76;
              WdLogEvent5_WdError(v77);
            }
          }
          COREACCESS::~COREACCESS((COREACCESS *)v95);
          COREACCESS::~COREACCESS((COREACCESS *)v94);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v92);
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v79, v68);
        if ( ++v50 >= *(_DWORD *)(v5 + 40) )
        {
          v25 = v89;
          break;
        }
      }
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v90 + 9), v27, v82[0]);
    v2 = 1;
  }
LABEL_65:
  operator delete[](v25);
  operator delete[](v83);
  operator delete[](v27);
  return v2;
}
