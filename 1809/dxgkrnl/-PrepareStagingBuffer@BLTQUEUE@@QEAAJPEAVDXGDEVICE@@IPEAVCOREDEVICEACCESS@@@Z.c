/*
 * XREFs of ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02467F4
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0246E9C (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0005E8C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0011E50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00AD028 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F8394 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0102F10 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C01F4B14 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C01F5024 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C0245DE4 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall BLTQUEUE::PrepareStagingBuffer(
        BLTQUEUE *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        PERESOURCE **a4)
{
  __int64 v4; // rax
  PERESOURCE **v6; // r13
  __int64 v7; // r15
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // edx
  __int64 v16; // rax
  struct _EX_RUNDOWN_REF *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rbx
  int v25; // eax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  int v28; // eax
  ADAPTER_RENDER *v29; // r8
  int SynchronizationObjectInternal; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // r15
  int v34; // r12d
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rbx
  __int64 v38; // rax
  int v39; // ecx
  struct DXGPROCESS *Current; // rax
  unsigned int v41; // esi
  struct DXGPROCESS *v42; // r15
  char *v43; // r12
  unsigned int v44; // ecx
  __int64 v45; // r8
  __int64 v46; // rdx
  int v47; // ecx
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  struct _EX_RUNDOWN_REF *v51; // rdx
  __int64 v52; // rcx
  PERESOURCE **v53; // rax
  __int64 v54; // rax
  int Resident; // eax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rax
  UINT Width; // ecx
  UINT Height; // eax
  struct _OBJECT_HANDLE_INFORMATION *v65; // [rsp+20h] [rbp-E0h]
  unsigned int v66[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v67; // [rsp+58h] [rbp-A8h] BYREF
  struct _D3DKMT_LOCK2 v68; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v69; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v70[12]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v71[54]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v72[2]; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v73; // [rsp+2C8h] [rbp+1C8h]

  v4 = *((_QWORD *)a2 + 2);
  v6 = a4;
  *(_QWORD *)v66 = a4;
  v7 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 3733LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( v6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(v6[3]);
  v11 = *((_QWORD *)a2 + 5);
  LODWORD(v12) = 0;
  DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 208));
  v13 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 >= *(_DWORD *)(v11 + 248) )
    goto LABEL_11;
  v14 = *(_QWORD *)(v11 + 232);
  v15 = *(_DWORD *)(v14 + 16 * v13 + 8);
  if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v14 + 16 * v13 + 8) & 0x60)
    || (v15 & 0x2000) != 0
    || (v15 & 0x1F) == 0 )
  {
    goto LABEL_11;
  }
  if ( (v15 & 0x1F) != 5 )
  {
    v16 = WdLogNewEntry5_WdError(((unsigned int)v7 >> 25) & 0x60);
    *(_QWORD *)(v16 + 24) = 316LL;
    WdLogEvent5_WdError(v16);
LABEL_11:
    v17 = 0LL;
    goto LABEL_12;
  }
  v17 = *(struct _EX_RUNDOWN_REF **)(v14 + 16LL * (unsigned int)v13);
LABEL_12:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v67, v17);
  ExReleasePushLockSharedEx(v11 + 208, 0LL);
  KeLeaveCriticalRegion();
  memset(&v69, 0, sizeof(v69));
  if ( !v67 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    v27[3] = -1073741811LL;
    v27[4] = this;
    v27[5] = v7;
    WdLogEvent5_WdWarning(v27);
    goto LABEL_20;
  }
  v21 = *((_QWORD *)a2 + 2);
  v22 = *(_QWORD *)(v21 + 16);
  if ( *(_QWORD *)(*(_QWORD *)(v67[1].Count + 16) + 16LL) == v22 )
  {
    v69.hAllocation = *(HANDLE *)(v67[6].Count + 16);
    v25 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(v21 + 16) + 2528LL),
            &v69,
            (const GUID *)v21);
    v24 = v25;
    if ( v25 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v26);
      v23[3] = v24;
      goto LABEL_18;
    }
LABEL_20:
    if ( !*((_DWORD *)this + 666) )
    {
      *((_QWORD *)this + 335) = 0LL;
      memset(v70, 0, sizeof(v70));
      v28 = *((_DWORD *)a2 + 83);
      v29 = (ADAPTER_RENDER *)*((_QWORD *)a2 + 2);
      HIDWORD(v70[1]) |= 0x80u;
      LODWORD(v70[0]) = v28;
      LODWORD(v65) = 12;
      LODWORD(v70[1]) = 5;
      SynchronizationObjectInternal = CreateSynchronizationObjectInternal(
                                        (__int64)a2,
                                        0,
                                        v29,
                                        (__int64)v70,
                                        v65,
                                        v72,
                                        (__int64 *)this + 334,
                                        0LL);
      v12 = SynchronizationObjectInternal;
      if ( SynchronizationObjectInternal < 0 )
      {
        v32 = WdLogNewEntry5_WdError(v31);
        *(_QWORD *)(v32 + 24) = v12;
        *(_QWORD *)(v32 + 32) = 3791LL;
        WdLogEvent5_WdError(v32);
LABEL_55:
        LODWORD(v24) = v12;
        goto LABEL_56;
      }
      v33 = *((_QWORD *)a2 + 5);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v33 + 208));
      v34 = v70[11];
      v35 = (LODWORD(v70[11]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v35 < *(_DWORD *)(v33 + 248) )
      {
        v36 = *(_QWORD *)(v33 + 232);
        if ( ((LODWORD(v70[11]) >> 25) & 0x60) == (*(_BYTE *)(v36 + 16 * v35 + 8) & 0x60)
          && (*(_DWORD *)(v36 + 16 * v35 + 8) & 0x1F) != 0 )
        {
          v37 = 2 * ((v70[11] >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v36 + 16 * ((v70[11] >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
          {
            v38 = WdLogNewEntry5_WdAssertion((LODWORD(v70[11]) >> 25) & 0x60);
            *(_QWORD *)(v38 + 24) = 222LL;
            WdLogEvent5_WdAssertion(v38);
            v36 = *(_QWORD *)(v33 + 232);
          }
          *(_DWORD *)(v36 + 8 * v37 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v33 + 216) = 0LL;
      ExReleasePushLockExclusiveEx(v33 + 208, 0LL);
      KeLeaveCriticalRegion();
      v6 = *(PERESOURCE ***)v66;
      *((_DWORD *)this + 666) = v34;
    }
    v39 = *((_DWORD *)this + 660);
    if ( v39 )
    {
      if ( v69.Width != *((_DWORD *)this + 662) || v69.Height != *((_DWORD *)this + 663) )
      {
        BLTQUEUE::DestroyStagingBuffer(this);
        v39 = *((_DWORD *)this + 660);
      }
      if ( v39 )
        goto LABEL_55;
    }
    memset(v71, 0, 0x1A8uLL);
    v72[0] = v69.Width;
    v72[1] = v69.Height;
    HIDWORD(v71[0]) = 0;
    v73 = 0;
    LODWORD(v71[2]) = 3;
    v71[3] = v72;
    LODWORD(v12) = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v71, v6);
    if ( (int)v12 < 0 )
      goto LABEL_55;
    *((_DWORD *)this + 658) = HIDWORD(v71[6]);
    *((_DWORD *)this + 660) = v71[1];
    Current = DXGPROCESS::GetCurrent();
    v41 = HIDWORD(v71[6]);
    v42 = Current;
    v43 = (char *)Current + 208;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
    v44 = (v41 >> 6) & 0xFFFFFF;
    if ( v44 < *((_DWORD *)v42 + 62) )
    {
      v45 = *((_QWORD *)v42 + 29);
      v46 = v44;
      v47 = *(_DWORD *)(v45 + 16LL * v44 + 8);
      if ( ((v41 >> 25) & 0x60) == (v47 & 0x60) && (v47 & 0x2000) == 0 && (v47 & 0x1F) != 0 )
      {
        v48 = 2 * v46;
        v49 = v47 & 0x1F;
        if ( (_BYTE)v49 == 5 )
        {
          v51 = *(struct _EX_RUNDOWN_REF **)(v45 + 8 * v48);
          goto LABEL_43;
        }
        v50 = WdLogNewEntry5_WdError(v49);
        *(_QWORD *)(v50 + 24) = 316LL;
        WdLogEvent5_WdError(v50);
      }
    }
    v51 = 0LL;
LABEL_43:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v66, v51);
    ExReleasePushLockSharedEx(v43, 0LL);
    KeLeaveCriticalRegion();
    v53 = *(PERESOURCE ***)v66;
    if ( !*(_QWORD *)v66 )
    {
      v54 = WdLogNewEntry5_WdAssertion(v52);
      *(_QWORD *)(v54 + 24) = 3836LL;
      WdLogEvent5_WdAssertion(v54);
      v53 = *(PERESOURCE ***)v66;
    }
    *((_DWORD *)this + 659) = *((_DWORD *)v53 + 24);
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4152LL),
                 *((_DWORD *)v42 + 98),
                 *((_DWORD *)a2 + 84),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)v66,
                 0LL,
                 0LL);
    v12 = Resident;
    if ( Resident >= 0 )
    {
      memset(&v68, 0, sizeof(v68));
      v68.hAllocation = *((_DWORD *)this + 658);
      LODWORD(v12) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4152LL),
                       v42,
                       a2,
                       &v68,
                       0);
      if ( (int)v12 < 0 )
      {
        v59 = WdLogNewEntry5_WdError(v58);
        *(_QWORD *)(v59 + 24) = 3862LL;
        WdLogEvent5_WdError(v59);
      }
      *((_QWORD *)this + 332) = v68.pData;
      if ( (int)v12 >= 0 )
      {
        v60 = v73;
        if ( !v73 )
        {
          v61 = WdLogNewEntry5_WdAssertion(v58);
          *(_QWORD *)(v61 + 24) = 3868LL;
          WdLogEvent5_WdAssertion(v61);
          v60 = v73;
        }
        Width = v69.Width;
        *((_DWORD *)this + 661) = v60;
        Height = v69.Height;
        *((_DWORD *)this + 663) = v69.Height;
        *((_DWORD *)this + 675) = Height;
        *((_DWORD *)this + 662) = Width;
        *((_QWORD *)this + 336) = 0LL;
        *((_DWORD *)this + 674) = Width;
      }
    }
    else
    {
      v57 = WdLogNewEntry5_WdError(v56);
      *(_QWORD *)(v57 + 24) = v12;
      WdLogEvent5_WdError(v57);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v66);
    goto LABEL_55;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdError(v22);
  LODWORD(v24) = -1073741811;
  v23[3] = a2;
  v23[4] = v67;
  v23[5] = -1073741811LL;
LABEL_18:
  WdLogEvent5_WdError(v23);
LABEL_56:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v67);
  return (unsigned int)v24;
}
