/*
 * XREFs of ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1C0273F2C
 * Callers:
 *     ?OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z @ 0x1C0273B4C (-OpenForDevice@DXGDXGIKEYEDMUTEX@@QEAAJPEAVDXGDEVICE@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000753C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C00140AC (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0025440 (memset.c)
 *     ??$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1C00F0010 (--$QueryResourceInfo@U_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYR.c)
 *     ??$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@IPEAVCOREDEVICEACCESS@@HPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C00F0628 (--$OpenResource@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_OPENRESOURCEFROM.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01059F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C010C560 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0116040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C01169E4 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C02256A8 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAPGPUVIRTUALADDRESS@@@Z @ 0x1C0225890 (-VmBusSendMapGpuVirtualAddress@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIPEBVDXGDEVICE@@IIPEAUD3DDDI_MAP.c)
 *     ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@@Z @ 0x1C022876C (-VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT.c)
 */

__int64 __fastcall DXGDXGIKEYEDMUTEX::OpenSharedSurfForDevice(DXGDXGIKEYEDMUTEX *this, struct DXGDEVICE *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  int Resident; // ebx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 hAsyncEvent_high; // rbx
  struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A Value; // r12d
  UINT v16; // r14d
  D3DKMT_HANDLE hAsyncEvent; // r13d
  UINT v18; // eax
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  _BYTE *PoolWithTag; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r15
  void *v30; // rax
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rax
  unsigned int Reserved1; // r14d
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rax
  struct _EX_RUNDOWN_REF *v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  struct _EX_RUNDOWN_REF *v45; // rax
  ULONG_PTR Count; // rcx
  char v47; // r15
  __int64 v48; // rdx
  _QWORD *v49; // rdi
  ULONG_PTR v50; // r13
  struct DXGPROCESS *Current; // rax
  char v52; // r14
  int *v53; // r12
  char v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rax
  __int64 v60; // rcx
  int v61; // eax
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  struct D3DDDI_MAKERESIDENT_FLAGS v70; // [rsp+20h] [rbp-E0h]
  unsigned __int64 PagingFenceValue; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v72; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v73; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v74; // [rsp+68h] [rbp-98h]
  struct _EX_RUNDOWN_REF *v75; // [rsp+70h] [rbp-90h] BYREF
  __int64 v76; // [rsp+78h] [rbp-88h] BYREF
  struct _EX_RUNDOWN_REF *v77; // [rsp+80h] [rbp-80h] BYREF
  void *v78; // [rsp+88h] [rbp-78h]
  struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU v79; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v80; // [rsp+B8h] [rbp-48h] BYREF
  struct D3DDDI_MAPGPUVIRTUALADDRESS v81; // [rsp+C0h] [rbp-40h] BYREF
  PVOID P; // [rsp+130h] [rbp+30h]
  _BYTE v83[320]; // [rsp+138h] [rbp+38h] BYREF
  int v84; // [rsp+278h] [rbp+178h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)a2 + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 235LL;
    WdLogEvent5_WdAssertion(v6);
  }
  memset(&v79, 0, sizeof(v79));
  Resident = DXGDEVICE::QueryResourceInfo<_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE>((__int64)a2, &v79, v7, *(_QWORD *)this);
  if ( Resident < 0 )
  {
    v12 = WdLogNewEntry5_WdEvent(v9);
    *(_QWORD *)(v12 + 24) = a2;
    WdLogEvent5_WdEvent(v12);
    return (unsigned int)Resident;
  }
  hAsyncEvent_high = HIDWORD(v79.hAsyncEvent);
  Value = (struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS::$F7AD40C7F43293C52D6341E48450DADD::$5E26B6FB14B4CB4C08E82C1CB39B605A)v79.Flags.Value;
  v16 = HIDWORD(v79.hAsyncEvent) + v79.Flags.Value;
  if ( HIDWORD(v79.hAsyncEvent) + v79.Flags.Value < HIDWORD(v79.hAsyncEvent) )
  {
    v69 = WdLogNewEntry5_WdError(v9, v8, v11);
    *(_QWORD *)(v69 + 24) = 251LL;
  }
  else
  {
    hAsyncEvent = (D3DKMT_HANDLE)v79.hAsyncEvent;
    v18 = v16 + LODWORD(v79.hAsyncEvent);
    if ( v16 + LODWORD(v79.hAsyncEvent) >= v16 )
    {
      v19 = v18;
      v78 = operator new[](v18, 0x674D444Fu, PagedPool);
      if ( !v78 )
      {
        v24 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
        *(_QWORD *)(v24 + 24) = this;
        *(_QWORD *)(v24 + 32) = v19;
        WdLogEvent5_WdLowResource(v24);
        return 3221225495LL;
      }
      memset(&v81, 0, sizeof(v81));
      P = 0LL;
      v84 = 0;
      v29 = *((unsigned int *)&v79.Flags + 1);
      if ( *((_DWORD *)&v79.Flags + 1) <= 4u )
      {
        PoolWithTag = v83;
        P = v83;
      }
      else
      {
        v25 = 0xFFFFFFFFFFFFFFFFuLL % *((unsigned int *)&v79.Flags + 1);
        if ( 0xFFFFFFFFFFFFFFFFuLL / *((unsigned int *)&v79.Flags + 1) < 0x50 )
          goto LABEL_61;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 80LL * *((unsigned int *)&v79.Flags + 1), 0x4B677844u);
        P = PoolWithTag;
      }
      v84 = v29;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 80 * v29);
        PoolWithTag = P;
        if ( P )
        {
          v81.hPagingQueue = *((_DWORD *)a2 + 83);
          v30 = *(void **)&v81.Reserved0;
          v81.MaximumAddress = (D3DGPU_VIRTUAL_ADDRESS)P;
          if ( (_DWORD)hAsyncEvent_high )
            v30 = v78;
          LODWORD(v81.MinimumAddress) = v29;
          *(_QWORD *)&v81.Reserved0 = v30;
          LODWORD(v81.DriverProtection) = hAsyncEvent_high;
          if ( Value )
            v81.Protection.Value = (UINT64)v78 + hAsyncEvent_high;
          LODWORD(v81.SizeInPages) = Value;
          if ( hAsyncEvent )
            v81.OffsetInPages = (D3DGPU_SIZE_T)v78 + v16;
          v31 = *(_QWORD *)this;
          v81.hAllocation = hAsyncEvent;
          Resident = DXGDEVICE::OpenResource<_D3DKMT_OPENRESOURCEFROMNTHANDLE>(
                       a2,
                       (__int64)&v81,
                       v27,
                       v31,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0LL);
          if ( Resident < 0 )
          {
            v67 = WdLogNewEntry5_WdEvent(v32);
            *(_QWORD *)(v67 + 24) = this;
            *(_QWORD *)(v67 + 32) = *(_QWORD *)this;
            WdLogEvent5_WdEvent(v67);
LABEL_60:
            operator delete[](v78);
            goto LABEL_62;
          }
          v33 = *((_QWORD *)this + 1);
          Reserved1 = v81.Reserved1;
          *((_DWORD *)this + 22) = v81.Reserved1;
          v35 = *(_QWORD *)(v33 + 40);
          DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v35 + 184));
          v36 = (Reserved1 >> 6) & 0xFFFFFF;
          if ( (unsigned int)v36 < *(_DWORD *)(v35 + 224) )
          {
            v37 = *(_QWORD *)(v35 + 208);
            v38 = *(_DWORD *)(v37 + 16 * v36 + 8);
            if ( ((Reserved1 >> 25) & 0x60) == (*(_BYTE *)(v37 + 16 * v36 + 8) & 0x60)
              && (v38 & 0x2000) == 0
              && (v38 & 0x1F) != 0 )
            {
              v39 = v38 & 0x1F;
              if ( (_BYTE)v39 == 4 )
              {
                v41 = *(struct _EX_RUNDOWN_REF **)(v37 + 16LL * (unsigned int)v36);
                goto LABEL_30;
              }
              v40 = WdLogNewEntry5_WdError(v39, 2LL * (unsigned int)v36, v37);
              *(_QWORD *)(v40 + 24) = 267LL;
              WdLogEvent5_WdError(v40);
            }
          }
          v41 = 0LL;
LABEL_30:
          DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v77, v41);
          ExReleasePushLockSharedEx(v35 + 184, 0LL);
          KeLeaveCriticalRegion();
          v45 = v77;
          if ( v77 )
          {
            Count = v77[3].Count;
            v47 = 0;
            v48 = *(unsigned int *)(Count + 16);
            *((_DWORD *)this + 23) = v48;
            v49 = (_QWORD *)*((_QWORD *)a2 + 2);
            PagingFenceValue = 0LL;
            v73 = 0LL;
            v76 = 0LL;
            v50 = v45[3].Count;
            Current = DXGPROCESS::GetCurrent(Count, v48);
            v52 = *((_BYTE *)a2 + 1749);
            v53 = (int *)Current;
            v74 = v49[2];
            v54 = v52 & 1;
            if ( !v54
              && (DXGDEVICE::UmdManagesResidency(a2)
               || (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 1916LL) & 0x40) != 0) )
            {
              (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(v49[68] + 8LL) + 976LL))(
                *((_QWORD *)a2 + 81),
                (*(_DWORD *)(v50 + 72) >> 12) & 0x3F,
                &v73,
                &v76);
            }
            if ( DXGDEVICE::UmdManagesResidency(a2) )
            {
              v72 = 0LL;
              if ( v54 )
              {
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE(
                  (DXGALLOCATIONREFERENCE *)&v75,
                  (struct _EX_RUNDOWN_REF *)v50);
                Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                             (DXG_GUEST_VIRTUALGPU_VMBUS *)(v74 + 4144),
                             (unsigned int)v53[92],
                             *((unsigned int *)a2 + 84),
                             0,
                             (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                             1u,
                             (const struct DXGALLOCATIONREFERENCE *)&v75,
                             &v72,
                             &v80);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v75, v56);
              }
              else
              {
                Resident = (*(__int64 (__fastcall **)(_QWORD, __int64, ULONG_PTR, __int64, int, unsigned __int64 *, unsigned __int64 *))(*(_QWORD *)(v49[68] + 8LL) + 768LL))(
                             v49[69],
                             v73,
                             v50 + 24,
                             1LL,
                             3,
                             &v72,
                             &v80);
              }
              if ( Resident >= 0 )
              {
                if ( Resident == 259 )
                {
                  v47 = 1;
                  PagingFenceValue = v72;
                  Resident = 0;
                }
              }
              else
              {
                v59 = WdLogNewEntry5_WdWarning(v57, v55, v58);
                *(_QWORD *)(v59 + 24) = Resident;
                WdLogEvent5_WdWarning(v59);
              }
            }
            if ( Resident >= 0 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 1916LL) & 0x40) != 0 )
              {
                memset(&v81, 0, sizeof(v81));
                v60 = v49[2];
                v81.Protection.Value = 1LL;
                v81.MinimumAddress = *(_QWORD *)(v60 + 2400);
                v81.MaximumAddress = *(_QWORD *)(v60 + 2408);
                if ( v54 )
                {
                  v61 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMapGpuVirtualAddress(
                          (DXG_GUEST_VIRTUALGPU_VMBUS *)(v74 + 4144),
                          v53[92],
                          a2,
                          0,
                          *(_DWORD *)(v50 + 16),
                          &v81);
                }
                else
                {
                  *(_BYTE *)&v70.0 = 1;
                  v61 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, struct D3DDDI_MAPGPUVIRTUALADDRESS *, struct D3DDDI_MAKERESIDENT_FLAGS, int))(*(_QWORD *)(v49[68] + 8LL) + 792LL))(
                          v49[69],
                          v73,
                          *(_QWORD *)(v50 + 24),
                          &v81,
                          v70,
                          -2);
                }
                Resident = v61;
                if ( v61 >= 0 )
                {
                  if ( v61 == 259 )
                  {
                    v47 = 1;
                    PagingFenceValue = v81.PagingFenceValue;
                    Resident = 0;
                  }
                }
                else
                {
                  v64 = WdLogNewEntry5_WdWarning(v62, v55, v63);
                  *(_QWORD *)(v64 + 24) = Resident;
                  WdLogEvent5_WdWarning(v64);
                }
              }
              if ( v47 )
              {
                if ( v54 )
                {
                  v65 = *((unsigned int *)a2 + 84);
                  v79.ObjectHandleArray = 0LL;
                  v79.hDevice = v65;
                  v79.ObjectCount = 1;
                  *(_OWORD *)&v79.hAsyncEvent = 0LL;
                  v79.FenceValueArray = &PagingFenceValue;
                  Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
                               (DXG_GUEST_VIRTUALGPU_VMBUS *)(v74 + 4144),
                               (struct DXGPROCESS *)v53,
                               v65,
                               &v79);
                }
                else
                {
                  (*(void (__fastcall **)(_QWORD, __int64 *, unsigned __int64 *, __int64))(*(_QWORD *)(v49[68] + 8LL)
                                                                                         + 984LL))(
                    v49[69],
                    &v76,
                    &PagingFenceValue,
                    1LL);
                }
              }
            }
          }
          else
          {
            v66 = WdLogNewEntry5_WdError(v43, v42, v44);
            *(_QWORD *)(v66 + 24) = this;
            *(_QWORD *)(v66 + 32) = *((unsigned int *)this + 22);
            WdLogEvent5_WdError(v66);
            Resident = -1073741811;
          }
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v77, v55);
          goto LABEL_60;
        }
      }
LABEL_61:
      v68 = WdLogNewEntry5_WdLowResource(PoolWithTag, v25, v27, v28);
      *(_QWORD *)(v68 + 24) = 278LL;
      WdLogEvent5_WdLowResource(v68);
      Resident = -1073741801;
LABEL_62:
      if ( P != v83 )
      {
        if ( P )
          ExFreePoolWithTag(P, 0);
      }
      return (unsigned int)Resident;
    }
    v69 = WdLogNewEntry5_WdError(v9, v8, v11);
    *(_QWORD *)(v69 + 24) = 257LL;
  }
  WdLogEvent5_WdError(v69);
  return 3221225621LL;
}
