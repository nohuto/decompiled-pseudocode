/*
 * XREFs of ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C01EC370
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000D500 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000E5B4 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0010A14 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00119E0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C0011B74 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C0020D84 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEALLOCATION@@@@YAPEAUDXGKVMB_COMMAND_CREATEALLOCATION@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0036544 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEALLOCATION@@@@YAPEAUDXGKVMB_COMMAND_CREATEALLOCATIO.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0036F9C (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z @ 0x1C010D030 (-DxgkCreateAllocationInternal@@YAJPEAU_D3DKMT_CREATEALLOCATION@@PEA_K@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusCreateAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  char v2; // si
  __int64 v3; // r14
  struct DXGPROCESS *Current; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned int v12; // r13d
  int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // edi
  unsigned int v16; // edx
  unsigned int v17; // ebx
  unsigned int v18; // r11d
  SIZE_T v19; // rax
  __int64 v20; // rcx
  D3DDDI_ALLOCATIONINFO *v21; // r12
  SIZE_T v22; // rax
  _DWORD *v23; // r15
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  const GUID *v28; // r8
  UINT v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rdx
  UINT v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  __int64 v36; // rbx
  char Flags; // al
  __int64 v38; // rax
  unsigned int v39; // r12d
  DXGPUSHLOCK *v40; // r13
  unsigned int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // r8
  int v44; // ecx
  __int64 v45; // rcx
  __int64 v46; // rax
  struct _EX_RUNDOWN_REF *v47; // rdx
  __int64 v48; // rdi
  D3DDDI_ALLOCATIONINFO *pAllocationInfo; // r9
  __int64 v50; // rcx
  char *v51; // rbx
  const GUID *v52; // r8
  struct DXGDEVICE *Count; // rbx
  __int64 v54; // r9
  __int64 v55; // rdi
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // rax
  int v61; // eax
  unsigned int v62; // ebx
  unsigned int v63; // ebx
  struct DXGPROCESS *v64; // [rsp+40h] [rbp-C0h]
  unsigned __int64 *v65; // [rsp+48h] [rbp-B8h]
  __int64 v66; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v67; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v69; // [rsp+68h] [rbp-98h]
  struct _D3DKMT_CREATEALLOCATION v70; // [rsp+70h] [rbp-90h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-40h]
  D3DDDI_ALLOCATIONINFO *v72; // [rsp+C8h] [rbp-38h]
  char v73[8]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v74[24]; // [rsp+D8h] [rbp-28h] BYREF
  char v75[8]; // [rsp+F0h] [rbp-10h] BYREF
  char v76[32]; // [rsp+F8h] [rbp-8h] BYREF
  char v77[120]; // [rsp+118h] [rbp+18h] BYREF
  struct _EX_RUNDOWN_REF *v79; // [rsp+1A8h] [rbp+A8h] BYREF
  void *v80; // [rsp+1B0h] [rbp+B0h]
  unsigned int v81; // [rsp+1B8h] [rbp+B8h]

  v2 = 0;
  v3 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEALLOCATION>((__int64)a1);
  if ( !v3 )
    return 0;
  Current = DXGPROCESS::GetCurrent();
  v7 = *(unsigned int *)(v3 + 40);
  v64 = Current;
  v71 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL);
  if ( !(_DWORD)v7 )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 915LL;
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(v3 + 44) & 0x1800) != 0 )
  {
    v8 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v8 + 24) = 921LL;
    goto LABEL_5;
  }
  v9 = 12 * v7;
  if ( 12 * v7 > 0xFFFFFFFF )
  {
    v8 = WdLogNewEntry5_WdError(0xFFFFFFFFLL);
    *(_QWORD *)(v8 + 24) = 928LL;
    goto LABEL_5;
  }
  v10 = *((unsigned int *)a1 + 22);
  if ( v10 - 64 < (unsigned __int64)v9 )
  {
    v8 = WdLogNewEntry5_WdError(v10 - 64);
    *(_QWORD *)(v8 + 24) = 934LL;
    goto LABEL_5;
  }
  v11 = *(unsigned int *)(v3 + 32);
  v12 = v9 + 64;
  if ( (unsigned int)v10 - (v9 + 64) < (unsigned int)v11 )
  {
    v8 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v8 + 24) = 940LL;
    goto LABEL_5;
  }
  v13 = v11 + v12;
  v14 = *(unsigned int *)(v3 + 36);
  LODWORD(v79) = v13;
  if ( (int)v10 - v13 < (unsigned int)v14 )
  {
    v8 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v8 + 24) = 946LL;
    goto LABEL_5;
  }
  v15 = v14 + v13;
  v16 = 0;
  v17 = v15;
  do
  {
    v18 = *(_DWORD *)(v3 + 12LL * v16 + 68);
    if ( (unsigned int)v10 - v17 < v18 )
    {
      v8 = WdLogNewEntry5_WdError(3LL * v16);
      *(_QWORD *)(v8 + 24) = 957LL;
LABEL_5:
      WdLogEvent5_WdError(v8);
      return 0;
    }
    v17 += v18;
    ++v16;
  }
  while ( v16 < (unsigned int)v7 );
  v19 = 96 * v7;
  if ( !is_mul_ok(v7, 0x60uLL) )
    v19 = -1LL;
  v72 = (D3DDDI_ALLOCATIONINFO *)operator new(v19, 0x4B677844u, 1, PagedPool);
  v21 = v72;
  if ( !v72 )
  {
    v8 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v8 + 24) = 968LL;
    goto LABEL_5;
  }
  v22 = 8LL * *(unsigned int *)(v3 + 40);
  v23 = 0LL;
  if ( !is_mul_ok(*(unsigned int *)(v3 + 40), 8uLL) )
    v22 = -1LL;
  v65 = (unsigned __int64 *)operator new(v22, 0x4B677844u, 1, PagedPool);
  if ( !v65 )
  {
    v25 = WdLogNewEntry5_WdLowResource(v24);
    *(_QWORD *)(v25 + 24) = 976LL;
    WdLogEvent5_WdLowResource(v25);
    goto LABEL_66;
  }
  LODWORD(v80) = 72 * *(_DWORD *)(v3 + 40) + 16;
  v81 = v17 + (_DWORD)v80 - v15;
  v23 = operator new(v81, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( !v23 )
  {
    v27 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v27 + 24) = 986LL;
    goto LABEL_65;
  }
  memset(&v70, 0, sizeof(v70));
  v28 = 0LL;
  v29 = *(_DWORD *)(v3 + 40);
  v70.hDevice = *(_DWORD *)(v3 + 24);
  v70.hResource = *(_DWORD *)(v3 + 28);
  v70.NumAllocations = v29;
  v70.pPrivateRuntimeData = (const void *)(v3 + v12);
  v70.PrivateRuntimeDataSize = *(_DWORD *)(v3 + 32);
  v70.pAllocationInfo = v72;
  v70.pStandardAllocation = (D3DKMT_CREATESTANDARDALLOCATION *)(v3 + (unsigned int)v79);
  v70.PrivateDriverDataSize = *(_DWORD *)(v3 + 36);
  v70.Flags = *(D3DKMT_CREATEALLOCATIONFLAGS *)(v3 + 44);
  v70.hPrivateRuntimeResourceHandle = *(HANDLE *)(v3 + 48);
  if ( v29 )
  {
    do
    {
      v30 = (unsigned int)v28;
      if ( (*(_DWORD *)(v3 + 44) & 0x20) != 0 )
        *((_QWORD *)&v21->pSystemMem + 12 * (unsigned int)v28) = 1LL;
      v31 = 3LL * (unsigned int)v28;
      v28 = (const GUID *)(unsigned int)((_DWORD)v28 + 1);
      v32 = *(_DWORD *)(v3 + 12 * v30 + 64);
      v33 = 96 * v30;
      *(UINT *)((char *)&v21->Flags.Value + v33) = v32;
      *(UINT *)((char *)&v21->PrivateDriverDataSize + v33) = *(_DWORD *)(v3 + 4 * v31 + 68);
      *(void **)((char *)&v21->pPrivateDriverData + v33) = (void *)(v3 + v15);
      *(D3DDDI_VIDEO_PRESENT_SOURCE_ID *)((char *)&v21->VidPnSourceId + v33) = *(_DWORD *)(v3 + 4 * v31 + 72);
      v15 += *(_DWORD *)(v3 + 4 * v31 + 68);
    }
    while ( (unsigned int)v28 < *(_DWORD *)(v3 + 40) );
  }
  v34 = DxgkCreateAllocationInternal(&v70, v65, v28);
  v36 = v34;
  if ( v34 < 0 )
  {
    v27 = WdLogNewEntry5_WdError(v35);
    *(_QWORD *)(v27 + 24) = v36;
    *(_QWORD *)(v27 + 32) = 1108LL;
LABEL_65:
    WdLogEvent5_WdError(v27);
  }
  else
  {
    Flags = (char)v70.Flags;
    *v23 = v70.Flags;
    if ( (Flags & 0x40) != 0 )
    {
      if ( v70.hGlobalShare )
      {
        v38 = WdLogNewEntry5_WdAssertion(v35);
        *(_QWORD *)(v38 + 24) = 1023LL;
        WdLogEvent5_WdAssertion(v38);
      }
    }
    else
    {
      v23[2] = v70.hGlobalShare;
    }
    v23[1] = v70.hResource;
    v80 = (char *)v23 + (unsigned int)v80;
    if ( *(_DWORD *)(v3 + 40) )
    {
      v39 = 0;
      v40 = (struct DXGPROCESS *)((char *)v64 + 208);
      while ( 1 )
      {
        v69 = 96LL * v39;
        v41 = *(D3DKMT_HANDLE *)((char *)&v70.pAllocationInfo->hAllocation + v69);
        DXGPUSHLOCK::AcquireShared(v40);
        v42 = (v41 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v42 < *((_DWORD *)v64 + 62) )
        {
          v43 = *((_QWORD *)v64 + 29);
          v44 = *(_DWORD *)(v43 + 16 * v42 + 8);
          if ( ((v41 >> 25) & 0x60) == (*(_BYTE *)(v43 + 16 * v42 + 8) & 0x60)
            && (v44 & 0x2000) == 0
            && (v44 & 0x1F) != 0 )
          {
            v45 = v44 & 0x1F;
            if ( (_BYTE)v45 == 5 )
            {
              v47 = *(struct _EX_RUNDOWN_REF **)(v43 + 16LL * (unsigned int)v42);
              goto LABEL_48;
            }
            v46 = WdLogNewEntry5_WdError(v45);
            *(_QWORD *)(v46 + 24) = 316LL;
            WdLogEvent5_WdError(v46);
          }
        }
        v47 = 0LL;
LABEL_48:
        DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v79, v47);
        ExReleasePushLockSharedEx(v40, 0LL);
        KeLeaveCriticalRegion();
        v48 = 9LL * v39;
        pAllocationInfo = v70.pAllocationInfo;
        v50 = v69;
        v23[2 * v48 + 6] = *(_DWORD *)(v79[6].Count + 4);
        v23[2 * v48 + 4] = *(D3DKMT_HANDLE *)((char *)&pAllocationInfo->hAllocation + v50);
        v23[2 * v48 + 5] = *(_DWORD *)(v3 + 12LL * v39 + 68);
        *(_QWORD *)&v23[2 * v48 + 8] = v65[v39];
        memmove(
          v80,
          *(const void **)((char *)&pAllocationInfo->pPrivateDriverData + v50),
          *(unsigned int *)(v3 + 12LL * v39 + 68));
        v51 = (char *)&v23[18 * v39];
        v80 = (char *)v80 + *(unsigned int *)(v3 + 12LL * v39 + 68);
        *((_QWORD *)v51 + 5) = *(_QWORD *)(v79[6].Count + 16);
        ADAPTER_RENDER::DdiDescribeAllocation(
          *(ADAPTER_RENDER **)(v71 + 2528),
          (struct _DXGKARG_DESCRIBEALLOCATION *)(v51 + 40),
          v52);
        *((_QWORD *)v51 + 5) = 0LL;
        if ( *(_BYTE *)(v3 + 56) )
        {
          Count = (struct DXGDEVICE *)v79[1].Count;
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
            (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v74,
            Count);
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v75, (__int64)Count, 0, v54, 0);
          if ( (int)COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v75) >= 0
            && DXGDEVICE::UmdManagesResidency(Count) )
          {
            v55 = *((_QWORD *)Count + 2);
            v56 = *((_QWORD *)Count + 81);
            v66 = 0LL;
            v68 = 0LL;
            (*(void (__fastcall **)(__int64, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v55 + 544) + 8LL)
                                                                          + 976LL))(
              v56,
              0LL,
              &v66,
              &v68);
            v67 = 0LL;
            v57 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, char *))(*(_QWORD *)(*(_QWORD *)(v55 + 544) + 8LL) + 768LL))(
                    *(_QWORD *)(v55 + 552),
                    v66,
                    v79 + 3,
                    1LL,
                    3,
                    &v67,
                    v73);
            v59 = v57;
            if ( v57 >= 0 )
            {
              if ( v57 == 259 )
                (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v55 + 544) + 8LL)
                                                                              + 984LL))(
                  *(_QWORD *)(v55 + 552),
                  &v68,
                  &v67,
                  1LL);
            }
            else
            {
              v60 = WdLogNewEntry5_WdError(v58);
              *(_QWORD *)(v60 + 24) = v59;
              WdLogEvent5_WdError(v60);
            }
          }
          COREACCESS::~COREACCESS((COREACCESS *)v77);
          COREACCESS::~COREACCESS((COREACCESS *)v76);
          DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v74);
        }
        LOBYTE(v61) = EvaluateCurrentState((int **)&g_Feature_3064685881_59110451_FeatureDescriptorDetails);
        if ( v61 )
        {
          v62 = *(D3DKMT_HANDLE *)((char *)&v70.pAllocationInfo->hAllocation + v69);
          DXGPUSHLOCK::AcquireExclusive(v40);
          v63 = (v62 >> 6) & 0xFFFFFF;
          if ( v63 < *((_DWORD *)v64 + 62) )
            *(_DWORD *)(*((_QWORD *)v64 + 29) + 16LL * v63 + 8) &= ~0x4000u;
          *((_QWORD *)v64 + 27) = 0LL;
          ExReleasePushLockExclusiveEx(v40, 0LL);
          KeLeaveCriticalRegion();
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v79);
        if ( ++v39 >= *(_DWORD *)(v3 + 40) )
        {
          v21 = v72;
          break;
        }
      }
    }
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v23, v81);
    v2 = 1;
  }
LABEL_66:
  operator delete[](v21);
  operator delete[](v65);
  operator delete[](v23);
  return v2;
}
