/*
 * XREFs of ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C027BFD0
 * Callers:
 *     ?Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027C720 (-Present@BLTQUEUE@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVIC.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070E4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000CD7C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00F0408 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@PEAPEAVDXGSYNCOBJECT@@PEAPEAVDXGDEVICESYNCOBJECT@@PEAPEAVDXGADAPTERSYNCOBJECT@@@Z @ 0x1C00F4FA4 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@_NPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATE.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00FFBE0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0224AD0 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGALLOCATIONREFERENCE@@PEA_K2@Z @ 0x1C0225038 (-VmBusSendMakeResident@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIIUD3DDDI_MAKERESIDENT_FLAGS@@IPEBVDXGA.c)
 *     ?DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ @ 0x1C027B648 (-DestroyStagingBuffer@BLTQUEUE@@QEAAXXZ.c)
 */

__int64 __fastcall BLTQUEUE::PrepareStagingBuffer(
        BLTQUEUE *this,
        struct DXGDEVICE *a2,
        unsigned int a3,
        PERESOURCE **a4)
{
  __int64 v4; // rax
  PERESOURCE **v6; // r13
  __int64 v7; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rcx
  const GUID *v15; // r8
  int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // r9
  int v19; // edx
  __int64 v20; // rdx
  __int64 v21; // rax
  struct _EX_RUNDOWN_REF *v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _QWORD *v35; // rax
  int v36; // eax
  __int64 v37; // r8
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // r15
  int v44; // r12d
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rbx
  __int64 v48; // rax
  int v49; // ecx
  __int64 v50; // rcx
  struct DXGPROCESS *Current; // rax
  unsigned int v52; // esi
  struct DXGPROCESS *v53; // r15
  char *v54; // r13
  __int64 v55; // rcx
  const GUID *v56; // r8
  int v57; // r9d
  __int64 v58; // rax
  __int64 v59; // r8
  int v60; // ecx
  __int64 v61; // rcx
  __int64 v62; // rax
  struct _EX_RUNDOWN_REF *v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  PERESOURCE **v66; // rax
  __int64 v67; // rax
  int Resident; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rax
  int v77; // eax
  __int64 v78; // rax
  UINT Width; // ecx
  UINT Height; // eax
  struct _OBJECT_HANDLE_INFORMATION *v82; // [rsp+20h] [rbp-E0h]
  unsigned int v83[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v84; // [rsp+58h] [rbp-A8h] BYREF
  struct _D3DKMT_LOCK2 v85; // [rsp+60h] [rbp-A0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v86; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v87[12]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v88[54]; // [rsp+110h] [rbp+10h] BYREF
  DXGSYNCOBJECT *v89; // [rsp+2C0h] [rbp+1C0h] BYREF
  int v90; // [rsp+2C8h] [rbp+1C8h]

  v4 = *((_QWORD *)a2 + 2);
  v6 = a4;
  *(_QWORD *)v83 = a4;
  v7 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    *(_QWORD *)(v11 + 24) = 4100LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( v6 )
    DXGADAPTER::IsCoreResourceExclusiveOwner(v6[3]);
  v12 = *((_QWORD *)a2 + 5);
  LODWORD(v13) = 0;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 184, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v16 = *(_DWORD *)(v12 + 200);
      if ( v16 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v14, &EventBlockThread, v15, v16);
    }
    ExAcquirePushLockSharedEx(v12 + 184, 0LL);
  }
  v17 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v17 >= *(_DWORD *)(v12 + 224) )
    goto LABEL_17;
  v18 = *(_QWORD *)(v12 + 208);
  v19 = *(_DWORD *)(v18 + 16 * v17 + 8);
  if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v18 + 16 * v17 + 8) & 0x60)
    || (v19 & 0x2000) != 0
    || (v19 & 0x1F) == 0 )
  {
    goto LABEL_17;
  }
  v20 = v19 & 0x1F;
  if ( (_BYTE)v20 != 5 )
  {
    v21 = WdLogNewEntry5_WdError(((unsigned int)v7 >> 25) & 0x60, v20, 2LL * (unsigned int)v17);
    *(_QWORD *)(v21 + 24) = 267LL;
    WdLogEvent5_WdError(v21);
LABEL_17:
    v22 = 0LL;
    goto LABEL_18;
  }
  v22 = *(struct _EX_RUNDOWN_REF **)(v18 + 16LL * (unsigned int)v17);
LABEL_18:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v84, v22);
  ExReleasePushLockSharedEx(v12 + 184, 0LL);
  KeLeaveCriticalRegion();
  memset(&v86, 0, sizeof(v86));
  if ( !v84 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v35[3] = -1073741811LL;
    v35[4] = this;
    v35[5] = v7;
    WdLogEvent5_WdWarning(v35);
    goto LABEL_26;
  }
  v26 = *((_QWORD *)a2 + 2);
  v27 = *(_QWORD *)(v84[1].Count + 16);
  v28 = *(_QWORD *)(v26 + 16);
  if ( *(_QWORD *)(v27 + 16) == v28 )
  {
    v86.hAllocation = *(HANDLE *)(v84[6].Count + 16);
    v31 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(v26 + 16) + 2560LL),
            &v86,
            (const GUID *)v26);
    v30 = v31;
    if ( v31 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32, v34);
      v29[3] = v30;
      goto LABEL_24;
    }
LABEL_26:
    if ( !*((_DWORD *)this + 666) )
    {
      *((_QWORD *)this + 335) = 0LL;
      memset(v87, 0, sizeof(v87));
      v36 = *((_DWORD *)a2 + 83);
      v37 = *((_QWORD *)a2 + 2);
      HIDWORD(v87[1]) |= 0x80u;
      LODWORD(v87[0]) = v36;
      LODWORD(v82) = 12;
      LODWORD(v87[1]) = 5;
      v38 = CreateSynchronizationObjectInternal(
              (__int64)a2,
              0,
              v37,
              (__int64)v87,
              v82,
              &v89,
              (__int64 *)this + 334,
              0LL);
      v13 = v38;
      if ( v38 < 0 )
      {
        v42 = WdLogNewEntry5_WdError(v40, v39, v41);
        *(_QWORD *)(v42 + 24) = v13;
        *(_QWORD *)(v42 + 32) = 4158LL;
        WdLogEvent5_WdError(v42);
LABEL_67:
        LODWORD(v30) = v13;
        goto LABEL_68;
      }
      v43 = *((_QWORD *)a2 + 5);
      DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v43 + 184));
      v44 = v87[11];
      v45 = (LODWORD(v87[11]) >> 6) & 0xFFFFFF;
      if ( (unsigned int)v45 < *(_DWORD *)(v43 + 224) )
      {
        v46 = *(_QWORD *)(v43 + 208);
        if ( ((LODWORD(v87[11]) >> 25) & 0x60) == (*(_BYTE *)(v46 + 16 * v45 + 8) & 0x60)
          && (*(_DWORD *)(v46 + 16 * v45 + 8) & 0x1F) != 0 )
        {
          v47 = 2 * ((v87[11] >> 6) & 0xFFFFFFLL);
          if ( (*(_DWORD *)(v46 + 16 * ((v87[11] >> 6) & 0xFFFFFFLL) + 8) & 0x2000) == 0 )
          {
            v48 = WdLogNewEntry5_WdAssertion((LODWORD(v87[11]) >> 25) & 0x60, v46);
            *(_QWORD *)(v48 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v48);
            v46 = *(_QWORD *)(v43 + 208);
          }
          *(_DWORD *)(v46 + 8 * v47 + 8) &= ~0x2000u;
        }
      }
      *(_QWORD *)(v43 + 192) = 0LL;
      ExReleasePushLockExclusiveEx(v43 + 184, 0LL);
      KeLeaveCriticalRegion();
      v6 = *(PERESOURCE ***)v83;
      *((_DWORD *)this + 666) = v44;
    }
    v49 = *((_DWORD *)this + 660);
    if ( v49 )
    {
      if ( v86.Width != *((_DWORD *)this + 662) || v86.Height != *((_DWORD *)this + 663) )
      {
        BLTQUEUE::DestroyStagingBuffer(this);
        v49 = *((_DWORD *)this + 660);
      }
      if ( v49 )
        goto LABEL_67;
    }
    memset(v88, 0, 0x1A8uLL);
    v89 = *(DXGSYNCOBJECT **)&v86.Width;
    v90 = 0;
    HIDWORD(v88[0]) = 0;
    LODWORD(v88[2]) = 3;
    v88[3] = &v89;
    LODWORD(v13) = DXGDEVICE::CreateStandardAllocation(a2, (struct _D3DKM_CREATESTANDARDALLOCATION *)v88, v6);
    if ( (int)v13 < 0 )
      goto LABEL_67;
    *((_DWORD *)this + 658) = HIDWORD(v88[6]);
    *((_DWORD *)this + 660) = v88[1];
    Current = DXGPROCESS::GetCurrent(v50, v32);
    v52 = HIDWORD(v88[6]);
    v53 = Current;
    v54 = (char *)Current + 184;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v54, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v57 = *((_DWORD *)v54 + 4);
        if ( v57 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v55, &EventBlockThread, v56, v57);
      }
      ExAcquirePushLockSharedEx(v54, 0LL);
    }
    v58 = (v52 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v58 < *((_DWORD *)v53 + 56) )
    {
      v59 = *((_QWORD *)v53 + 26);
      v60 = *(_DWORD *)(v59 + 16 * v58 + 8);
      if ( ((v52 >> 25) & 0x60) == (*(_BYTE *)(v59 + 16 * v58 + 8) & 0x60) && (v60 & 0x2000) == 0 && (v60 & 0x1F) != 0 )
      {
        v61 = v60 & 0x1F;
        if ( (_BYTE)v61 == 5 )
        {
          v63 = *(struct _EX_RUNDOWN_REF **)(v59 + 16LL * (unsigned int)v58);
          goto LABEL_55;
        }
        v62 = WdLogNewEntry5_WdError(v61, 2LL * (unsigned int)v58, v59);
        *(_QWORD *)(v62 + 24) = 267LL;
        WdLogEvent5_WdError(v62);
      }
    }
    v63 = 0LL;
LABEL_55:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v83, v63);
    ExReleasePushLockSharedEx(v54, 0LL);
    KeLeaveCriticalRegion();
    v66 = *(PERESOURCE ***)v83;
    if ( !*(_QWORD *)v83 )
    {
      v67 = WdLogNewEntry5_WdAssertion(v65, v64);
      *(_QWORD *)(v67 + 24) = 4203LL;
      WdLogEvent5_WdAssertion(v67);
      v66 = *(PERESOURCE ***)v83;
    }
    *((_DWORD *)this + 659) = *((_DWORD *)v66 + 24);
    Resident = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendMakeResident(
                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4144LL),
                 *((unsigned int *)v53 + 92),
                 *((unsigned int *)a2 + 84),
                 0,
                 (struct D3DDDI_MAKERESIDENT_FLAGS)3,
                 1u,
                 (const struct DXGALLOCATIONREFERENCE *)v83,
                 0LL,
                 0LL);
    v13 = Resident;
    if ( Resident >= 0 )
    {
      memset(&v85, 0, sizeof(v85));
      v85.hAllocation = *((_DWORD *)this + 658);
      LODWORD(v13) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                       (DXG_GUEST_VIRTUALGPU_VMBUS *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 16LL) + 4144LL),
                       v53,
                       a2,
                       &v85,
                       0);
      if ( (int)v13 < 0 )
      {
        v76 = WdLogNewEntry5_WdError(v74, v73, v75);
        *(_QWORD *)(v76 + 24) = 4229LL;
        WdLogEvent5_WdError(v76);
      }
      *((_QWORD *)this + 332) = v85.pData;
      if ( (int)v13 >= 0 )
      {
        v77 = v90;
        if ( !v90 )
        {
          v78 = WdLogNewEntry5_WdAssertion(v74, v73);
          *(_QWORD *)(v78 + 24) = 4235LL;
          WdLogEvent5_WdAssertion(v78);
          v77 = v90;
        }
        Width = v86.Width;
        *((_QWORD *)this + 336) = 0LL;
        *((_DWORD *)this + 661) = v77;
        Height = v86.Height;
        *((_DWORD *)this + 663) = v86.Height;
        *((_DWORD *)this + 675) = Height;
        *((_DWORD *)this + 662) = Width;
        *((_DWORD *)this + 674) = Width;
      }
    }
    else
    {
      v72 = WdLogNewEntry5_WdError(v70, v69, v71);
      *(_QWORD *)(v72 + 24) = v13;
      WdLogEvent5_WdError(v72);
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v83, v73);
    goto LABEL_67;
  }
  v29 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v26);
  LODWORD(v30) = -1073741811;
  v29[3] = a2;
  v29[4] = v84;
  v29[5] = -1073741811LL;
LABEL_24:
  WdLogEvent5_WdError(v29);
LABEL_68:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v84, v32);
  return (unsigned int)v30;
}
