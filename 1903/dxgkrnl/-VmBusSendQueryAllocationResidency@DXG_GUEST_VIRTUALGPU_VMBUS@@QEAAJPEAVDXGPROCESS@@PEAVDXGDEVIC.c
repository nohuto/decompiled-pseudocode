/*
 * XREFs of ?VmBusSendQueryAllocationResidency@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@EPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@@Z @ 0x1C02258A4
 * Callers:
 *     ?QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z @ 0x1C0207638 (-QueryAllocationResidency@DXGDEVICE@@QEAAJPEAU_D3DKMT_QUERYALLOCATIONRESIDENCY@@E@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00088AC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BC08 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0023C74 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ?GetResourceUnsafe@DXGPROCESS@@QEAA?AVDXGRESOURCEREFERENCE@@I@Z @ 0x1C0023DF0 (-GetResourceUnsafe@DXGPROCESS@@QEAA-AVDXGRESOURCEREFERENCE@@I@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C010F350 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAllocationResidency(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        char a4,
        struct _D3DKMT_QUERYALLOCATIONRESIDENCY *a5)
{
  unsigned int v7; // r13d
  struct _D3DKMT_QUERYALLOCATIONRESIDENCY *v8; // rsi
  __int64 AllocationCount; // r11
  __int64 v10; // rax
  __int64 v12; // rcx
  struct _EX_RUNDOWN_REF *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _EX_RUNDOWN_REF *v18; // rdi
  __int64 v19; // rax
  int v20; // eax
  int Count; // ebx
  unsigned int v22; // r12d
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _EX_RUNDOWN_REF *v27; // r14
  __int64 v28; // rax
  unsigned int hResource; // r8d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rdx
  UINT i; // r15d
  __int64 v36; // r13
  unsigned int *v37; // rdx
  unsigned int v38; // r8d
  __int64 v39; // rdx
  __int64 Count_low; // rcx
  __int64 v41; // r8
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 j; // r9
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *pResidencyStatus; // rax
  D3DKMT_ALLOCATIONRESIDENCYSTATUS *v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rax
  struct _MDL *v51; // [rsp+28h] [rbp-80h]
  int v52; // [rsp+30h] [rbp-78h]
  unsigned int v53; // [rsp+34h] [rbp-74h]
  struct _EX_RUNDOWN_REF *v54[3]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v55[80]; // [rsp+58h] [rbp-50h] BYREF

  v7 = 56;
  v52 = 56;
  v8 = a5;
  AllocationCount = a5->AllocationCount;
  if ( (a5->hResource == 0) == ((_DWORD)AllocationCount == 0) )
  {
    v10 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v10 + 24) = 7268LL;
LABEL_3:
    WdLogEvent5_WdError(v10);
    return 3221225485LL;
  }
  if ( (_DWORD)AllocationCount )
  {
    if ( (unsigned __int64)(4 * AllocationCount) > 0xFFFFFFFF )
    {
      v10 = WdLogNewEntry5_WdError(0xFFFFFFFFLL, a2, a3);
      *(_QWORD *)(v10 + 24) = 7275LL;
      goto LABEL_3;
    }
    v12 = (unsigned int)(4 * AllocationCount + 56);
    if ( (unsigned int)v12 < 0x38 )
    {
      v10 = WdLogNewEntry5_WdError(v12, a2, a3);
      *(_QWORD *)(v10 + 24) = 7280LL;
      goto LABEL_3;
    }
    v7 = 4 * AllocationCount + 56;
    v52 = v7;
  }
  v13 = (struct _EX_RUNDOWN_REF *)operator new(v7, 0x4B677844u, 1, (POOL_TYPE)512);
  v18 = v13;
  v54[1] = v13;
  if ( !v13 )
  {
    v19 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
    *(_QWORD *)(v19 + 24) = 7288LL;
    WdLogEvent5_WdLowResource(v19);
    return 3221225495LL;
  }
  v13->Count = 0LL;
  LODWORD(v13[1].Count) = 0;
  HIDWORD(v13[1].Ptr) = 0;
  LODWORD(v13[2].Count) = 41;
  memset(&v13[3], 0, 0x20uLL);
  LODWORD(v18[1].Count) = *((_DWORD *)a2 + 92);
  LODWORD(v18[3].Count) = *((_DWORD *)a3 + 84);
  LODWORD(v18[5].Count) = v8->AllocationCount;
  v20 = 1;
  if ( !v8->hResource )
    v20 = v8->AllocationCount;
  v53 = v20;
  Count = -1073741811;
  LODWORD(a5) = -1073741811;
  v22 = (4 * v20 + 7) & 0xFFFFFFF8;
  v27 = (struct _EX_RUNDOWN_REF *)operator new[](v22, 0x4B677844u, (POOL_TYPE)512);
  v54[2] = v27;
  if ( v27 )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v55, (struct _KTHREAD **)a2);
    hResource = v8->hResource;
    if ( hResource )
    {
      DXGPROCESS::GetResourceUnsafe((__int64)a2, (DXGRESOURCEREFERENCE *)&a5, hResource);
      if ( !a5 || (v31 = *(&a5->AllocationCount + 1), !(_DWORD)v31) )
      {
        v33 = WdLogNewEntry5_WdError(v31, v30, v32);
        *(_QWORD *)(v33 + 24) = 7318LL;
        WdLogEvent5_WdError(v33);
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&a5, v34);
LABEL_21:
        DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v55);
        goto LABEL_45;
      }
      v8->hResource = v31;
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)&a5, v30);
    }
    else
    {
      for ( i = 0; i < v8->AllocationCount; ++i )
      {
        v36 = i;
        if ( a4 )
        {
          v37 = (unsigned int *)&v8->phAllocationList[v36];
          if ( (unsigned __int64)v37 >= MmUserProbeAddress )
            v37 = (unsigned int *)MmUserProbeAddress;
          v38 = *v37;
        }
        else
        {
          v38 = v8->phAllocationList[i];
        }
        DXGPROCESS::GetAllocationUnsafe((__int64)a2, (DXGALLOCATIONREFERENCE *)v54, v38);
        if ( !v54[0] || (Count_low = LODWORD(v54[0][12].Count), !(_DWORD)Count_low) )
        {
          v42 = WdLogNewEntry5_WdError(Count_low, v39, v41);
          *(_QWORD *)(v42 + 24) = 7351LL;
          WdLogEvent5_WdError(v42);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v54, v43);
          goto LABEL_21;
        }
        *(_DWORD *)((char *)&v18[7].Count + v36 * 4) = Count_low;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v54, v39);
      }
      v7 = v52;
    }
    DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v55);
    LODWORD(a5) = v22;
    Count = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
              this,
              (struct DXGKVMB_COMMAND_BASE *)v18,
              v7,
              v27,
              (unsigned int *)&a5,
              v51);
    if ( Count >= 0 )
    {
      Count = -1073741823;
      if ( (unsigned int)a5 >= v22 )
      {
        Count = v27->Count;
        if ( SLODWORD(v27->Count) >= 0 )
        {
          for ( j = 0LL; (unsigned int)j < v53; j = (unsigned int)(j + 1) )
          {
            pResidencyStatus = v8->pResidencyStatus;
            if ( a4 )
            {
              v46 = &pResidencyStatus[j];
              if ( (unsigned __int64)v46 >= MmUserProbeAddress )
                v46 = (D3DKMT_ALLOCATIONRESIDENCYSTATUS *)MmUserProbeAddress;
              *v46 = *((D3DKMT_ALLOCATIONRESIDENCYSTATUS *)&v27->Ptr + j + 1);
            }
            else
            {
              pResidencyStatus[j] = *((D3DKMT_ALLOCATIONRESIDENCYSTATUS *)&v27->Ptr + j + 1);
            }
          }
        }
      }
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
    *(_QWORD *)(v28 + 24) = 7306LL;
    WdLogEvent5_WdLowResource(v28);
    Count = -1073741801;
  }
LABEL_45:
  operator delete[](v18);
  operator delete[](v27);
  if ( Count < 0 )
  {
    v50 = WdLogNewEntry5_WdError(v48, v47, v49);
    *(_QWORD *)(v50 + 24) = Count;
    WdLogEvent5_WdError(v50);
  }
  return (unsigned int)Count;
}
