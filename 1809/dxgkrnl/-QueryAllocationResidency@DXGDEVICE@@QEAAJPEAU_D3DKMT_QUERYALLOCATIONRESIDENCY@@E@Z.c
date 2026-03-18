/*
 * XREFs of ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C01D91E4
 * Callers:
 *     DxgkQueryAllocationResidency @ 0x1C01DAFC0 (DxgkQueryAllocationResidency.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E42C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000E790 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0014E00 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceSafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C00212B0 (-GetResourceSafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     ?VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0035544 (-VidMmQueryAllocationResidency@VIDMM_EXPORT@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAVVIDM.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01069A0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C01F5890 (-VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVIC.c)
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
  __int64 v13; // rcx
  _QWORD *v14; // rax
  ULONG_PTR Count; // r14
  int v16; // eax
  _DWORD *pResidencyStatus; // rdx
  UINT i; // r14d
  __int64 v19; // r15
  unsigned int *v20; // rdx
  unsigned int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  struct DXGPROCESS *v26; // r9
  _QWORD *v27; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS AllocationResidency; // eax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v29; // r8
  _BYTE v30[16]; // [rsp+30h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v31; // [rsp+78h] [rbp+10h] BYREF

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
             (DXG_GUEST_VIRTUALGPU_VMBUS *)(*((_QWORD *)this[2] + 2) + 4152LL),
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
          v19 = i;
          v20 = (unsigned int *)&a2->phAllocationList[v19];
          if ( (unsigned __int64)v20 >= MmUserProbeAddress )
            v20 = (unsigned int *)MmUserProbeAddress;
          v21 = *v20;
        }
        else
        {
          v19 = i;
          v21 = a2->phAllocationList[v19];
        }
        DXGPROCESS::GetAllocationSafe((__int64)this[5], (DXGALLOCATIONREFERENCE *)&v31, v21);
        if ( !v31 )
          break;
        v25 = *(_QWORD *)(v31[1].Count + 16);
        v26 = this[2];
        if ( *(_QWORD *)(v25 + 16) != *((_QWORD *)v26 + 2) )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdError(v25);
          v27[3] = this;
          v27[4] = v31;
          v27[5] = -1073741811LL;
          WdLogEvent5_WdError(v27);
          goto LABEL_36;
        }
        AllocationResidency = (unsigned int)VIDMM_EXPORT::VidMmQueryAllocationResidency(
                                              *((VIDMM_EXPORT **)v26 + 68),
                                              *((struct VIDMM_GLOBAL **)v26 + 69),
                                              (struct _VIDMM_MULTI_ALLOC *)v31[3].Count);
        if ( a3 )
        {
          v29 = &a2->pResidencyStatus[v19];
          if ( (unsigned __int64)v29 >= MmUserProbeAddress )
            v29 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
          *v29 = AllocationResidency;
        }
        else
        {
          a2->pResidencyStatus[v19] = AllocationResidency;
        }
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, 0LL);
      v24[3] = this;
      v24[4] = v21;
      v24[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v24);
LABEL_36:
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v31);
      return -1073741811;
    }
    v7 = (_QWORD *)WdLogNewEntry5_WdWarning(this, a2, hResource);
    v7[3] = this;
    v7[4] = a2->AllocationCount;
    v7[5] = -1073741811LL;
    goto LABEL_46;
  }
  DXGPROCESS::GetResourceSafe((__int64)this[5], (DXGRESOURCEREFERENCE *)&v31, hResource);
  if ( !v31 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, 0LL, v11);
    v12[3] = this;
    v12[4] = a2->hResource;
    v12[5] = -1073741811LL;
    WdLogEvent5_WdWarning(v12);
LABEL_9:
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v31);
    return -1073741811;
  }
  v13 = *((_QWORD *)this[2] + 2);
  if ( *(_QWORD *)(*(_QWORD *)(v31[1].Count + 16) + 16LL) != v13 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v13);
    v14[3] = this;
    v14[4] = v31;
    v14[5] = -1073741811LL;
    WdLogEvent5_WdError(v14);
    goto LABEL_9;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, (struct DXGFASTMUTEX *const)&v31[10], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  Count = v31[3].Count;
  if ( Count )
  {
    while ( 1 )
    {
      v16 = VIDMM_EXPORT::VidMmQueryAllocationResidency(
              *((VIDMM_EXPORT **)this[2] + 68),
              *((struct VIDMM_GLOBAL **)this[2] + 69),
              *(struct _VIDMM_MULTI_ALLOC **)(Count + 24));
      if ( v16 == 3 )
        break;
      if ( v16 == 2 )
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
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v30);
  DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v31);
  return 0;
}
