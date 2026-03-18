/*
 * XREFs of ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C0207CA8
 * Callers:
 *     DxgkQueryAllocationResidency @ 0x1C0209B50 (DxgkQueryAllocationResidency.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C000C3B0 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0023D5C (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0116040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C0225F14 (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
 */

int __fastcall DXGDEVICE::QueryAllocationResidency(
        struct DXGPROCESS **this,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a2,
        unsigned __int8 a3)
{
  __int64 hResource; // r8
  _QWORD *v7; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS v8; // esi
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rax
  ULONG_PTR Count; // r14
  int v18; // eax
  _DWORD *pResidencyStatus; // rdx
  __int64 v20; // rdx
  UINT i; // r14d
  __int64 v22; // r15
  unsigned int *v23; // rdx
  unsigned int v24; // r12d
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DXGPROCESS *v32; // r8
  _QWORD *v33; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS v34; // eax
  ULONG64 v35; // rdx
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v36; // r8
  _BYTE v37[16]; // [rsp+30h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v38; // [rsp+78h] [rbp+10h] BYREF

  hResource = a2->hResource;
  if ( (_DWORD)hResource && a2->AllocationCount )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, hResource);
    v7[3] = this;
    v7[4] = -1073741811LL;
LABEL_46:
    WdLogEvent5_WdWarning(v7);
    return -1073741811;
  }
  v8 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINGPUMEMORY;
  if ( (*((_BYTE *)this + 1749) & 1) != 0 )
    return DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)this[2] + 2) + 4144LL),
             this[5],
             (struct DXGDEVICE *)this,
             a3,
             a2);
  if ( !(_DWORD)hResource )
  {
    if ( a2->AllocationCount )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= a2->AllocationCount )
          return 0;
        if ( a3 )
        {
          v22 = i;
          v23 = (unsigned int *)&a2->phAllocationList[v22];
          if ( (unsigned __int64)v23 >= MmUserProbeAddress )
            v23 = (unsigned int *)MmUserProbeAddress;
          v24 = *v23;
        }
        else
        {
          v22 = i;
          v24 = a2->phAllocationList[v22];
        }
        DXGPROCESS::GetAllocationSafe((__int64)this[5], (DXGALLOCATIONREFERENCE *)&v38, v24);
        if ( !v38 )
          break;
        v30 = *(_QWORD *)(v38[1].Count + 16);
        v31 = *(_QWORD *)(v30 + 16);
        v32 = this[2];
        if ( v31 != *((_QWORD *)v32 + 2) )
        {
          v33 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30, v32);
          v33[3] = this;
          v33[4] = v38;
          v33[5] = -1073741811LL;
          WdLogEvent5_WdError(v33);
          goto LABEL_36;
        }
        v34 = (*(unsigned int (__fastcall **)(_QWORD, ULONG_PTR))(*(_QWORD *)(*((_QWORD *)v32 + 68) + 8LL) + 176LL))(
                *((_QWORD *)v32 + 69),
                v38[3].Count);
        if ( a3 )
        {
          v36 = &a2->pResidencyStatus[v22];
          v35 = MmUserProbeAddress;
          if ( (unsigned __int64)v36 >= MmUserProbeAddress )
            v36 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
          *v36 = v34;
        }
        else
        {
          a2->pResidencyStatus[v22] = v34;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v38, v35);
      }
      v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v26, v25, v27);
      v28[3] = this;
      v28[4] = v24;
      v28[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v28);
LABEL_36:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v38, v29);
      return -1073741811;
    }
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, hResource);
    v7[3] = this;
    v7[4] = a2->AllocationCount;
    v7[5] = -1073741811LL;
    goto LABEL_46;
  }
  DXGPROCESS::GetResourceSafe((__int64)this[5], (DXGRESOURCEREFERENCE *)&v38, hResource);
  if ( !v38 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, 0LL, v11);
    v12[3] = this;
    v12[4] = a2->hResource;
    v12[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
LABEL_9:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v38, v13);
    return -1073741811;
  }
  v14 = *(_QWORD *)(v38[1].Count + 16);
  v15 = *(_QWORD *)(v14 + 16);
  if ( v15 != *((_QWORD *)this[2] + 2) )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v14, v38, v15);
    v16[3] = this;
    v16[4] = v38;
    v16[5] = -1073741811LL;
    WdLogEvent5_WdError(v16);
    goto LABEL_9;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, (struct DXGFASTMUTEX *const)&v38[10], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  Count = v38[3].Count;
  if ( Count )
  {
    while ( 1 )
    {
      v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 68) + 8LL) + 176LL))(
              *((_QWORD *)this[2] + 69),
              *(_QWORD *)(Count + 24));
      if ( v18 == 3 )
        break;
      if ( v18 == 2 )
        v8 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINSHAREDMEMORY;
      Count = *(_QWORD *)(Count + 64);
      if ( !Count )
        goto LABEL_19;
    }
    v8 = D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT;
  }
LABEL_19:
  if ( a3 )
  {
    pResidencyStatus = a2->pResidencyStatus;
    if ( (unsigned __int64)pResidencyStatus >= MmUserProbeAddress )
      pResidencyStatus = (_DWORD *)MmUserProbeAddress;
    *pResidencyStatus = v8;
  }
  else
  {
    *a2->pResidencyStatus = v8;
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v37);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v38, v20);
  return 0;
}
