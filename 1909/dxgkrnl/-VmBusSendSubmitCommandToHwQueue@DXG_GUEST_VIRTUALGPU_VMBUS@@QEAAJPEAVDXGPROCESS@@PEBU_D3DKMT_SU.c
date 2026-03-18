/*
 * XREFs of ?VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C02277F0
 * Callers:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C024C6B8 (DxgkSubmitCommandToHwQueueInternal.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BD80 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C000BDF8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C530 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0023CC4 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     memmove @ 0x1C0025100 (memmove.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C0107704 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C010C3A0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0228000 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E8C0 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommandToHwQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a3)
{
  DXG_GUEST_VIRTUALGPU_VMBUS *v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned int v11; // r15d
  __int64 v12; // rax
  struct _EX_RUNDOWN_REF *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _EX_RUNDOWN_REF *v18; // rsi
  __int64 v19; // rax
  size_t v20; // r8
  char *v21; // r14
  const D3DKMT_HANDLE *WrittenPrimaries; // rdx
  __int64 PrivateDriverDataSize; // rax
  char *pPrivateDriverData; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // r14d
  struct _EX_RUNDOWN_REF **AllocationUnsafe; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 Count_low; // rdx
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  struct _MDL *v42; // r9
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rax
  __int64 v48; // rax
  struct _EX_RUNDOWN_REF *v49; // [rsp+20h] [rbp-88h] BYREF
  struct _EX_RUNDOWN_REF *v50[2]; // [rsp+28h] [rbp-80h] BYREF
  char v51[8]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v52; // [rsp+40h] [rbp-68h]
  char v53; // [rsp+48h] [rbp-60h]
  _BYTE v54[88]; // [rsp+50h] [rbp-58h] BYREF

  v5 = this;
  v52 = *((_QWORD *)this + 7);
  v53 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
  if ( *(_DWORD *)(*((_QWORD *)v5 + 7) + 176LL) != 1 )
  {
    if ( v53 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    return 3221226166LL;
  }
  if ( g_VgpuDisableSubmitCommand )
  {
    if ( v53 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
    return 0LL;
  }
  v9 = 4 * a3->NumPrimaries;
  v10 = (unsigned int)(v9 + 80);
  if ( (unsigned int)v9 >= 0xFFFFFFB0 )
  {
    v48 = WdLogNewEntry5_WdWarning(v10, v6, v7);
    *(_QWORD *)(v48 + 24) = 7938LL;
  }
  else
  {
    v11 = v10 + a3->PrivateDriverDataSize;
    if ( v11 >= (unsigned int)v10 )
    {
      if ( v11 > 0x20000 )
      {
        v12 = WdLogNewEntry5_WdWarning(v10, v6, v7);
        *(_QWORD *)(v12 + 24) = 7950LL;
        WdLogEvent5_WdWarning(v12);
        if ( v53 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
        return 3221225659LL;
      }
      v13 = (struct _EX_RUNDOWN_REF *)operator new[](v11, 0x4B677844u, (POOL_TYPE)512);
      v18 = v13;
      v50[1] = v13;
      if ( !v13 )
      {
        v19 = WdLogNewEntry5_WdLowResource(v15, v14, v16, v17);
        *(_QWORD *)(v19 + 24) = 7957LL;
        WdLogEvent5_WdLowResource(v19);
        if ( v53 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
        return 3221225495LL;
      }
      v13->Count = 0LL;
      v13[1].Count = 0LL;
      LODWORD(v13[2].Count) = 52;
      LODWORD(v13[1].Count) = DXGPROCESS::GetHostProcess(a2);
      *(_OWORD *)&v18[3].Count = *(_OWORD *)&a3->hHwQueue;
      *(_OWORD *)&v18[5].Count = *(_OWORD *)&a3->CommandBuffer;
      *(_OWORD *)&v18[7].Count = *(_OWORD *)&a3->pPrivateDriverData;
      v18[9].Count = (ULONG_PTR)a3->WrittenPrimaries;
      v20 = (unsigned int)v9;
      v21 = (char *)&v18[10] + v9;
      if ( a3->NumPrimaries )
      {
        WrittenPrimaries = a3->WrittenPrimaries;
        if ( (const D3DKMT_HANDLE *)((char *)WrittenPrimaries + v20) < WrittenPrimaries
          || (unsigned __int64)WrittenPrimaries + v20 > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(&v18[10], WrittenPrimaries, v20);
      }
      PrivateDriverDataSize = a3->PrivateDriverDataSize;
      if ( (_DWORD)PrivateDriverDataSize )
      {
        pPrivateDriverData = (char *)a3->pPrivateDriverData;
        if ( &pPrivateDriverData[PrivateDriverDataSize] < pPrivateDriverData
          || (unsigned __int64)&pPrivateDriverData[PrivateDriverDataSize] > MmUserProbeAddress )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
        memmove(v21, pPrivateDriverData, (unsigned int)PrivateDriverDataSize);
      }
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v54, (struct _KTHREAD **)a2);
      v27 = 0;
      if ( a3->NumPrimaries )
      {
        while ( 1 )
        {
          v49 = 0LL;
          AllocationUnsafe = (struct _EX_RUNDOWN_REF **)DXGPROCESS::GetAllocationUnsafe(
                                                          (__int64)a2,
                                                          (DXGALLOCATIONREFERENCE *)v50,
                                                          *((_DWORD *)&v18[10].Count + v27));
          DXGALLOCATIONREFERENCE::MoveAssign(&v49, AllocationUnsafe);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v50, v29);
          if ( !v49 )
            break;
          *((_DWORD *)&v18[10].Count + v27) = v49[12].Count;
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49, v30);
          if ( ++v27 >= a3->NumPrimaries )
          {
            v5 = this;
            goto LABEL_33;
          }
        }
        v39 = WdLogNewEntry5_WdWarning(v31, v30, v32);
        *(_QWORD *)(v39 + 24) = 7999LL;
        WdLogEvent5_WdWarning(v39);
        LODWORD(v38) = -1073741811;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v49, v40);
      }
      else
      {
LABEL_33:
        Count_low = LODWORD(v18[3].Count);
        v34 = (LODWORD(v18[3].Count) >> 6) & 0xFFFFFF;
        if ( (unsigned int)v34 < *((_DWORD *)a2 + 56) )
        {
          v26 = (unsigned int)v34;
          v35 = *((_QWORD *)a2 + 26);
          v25 = *(unsigned int *)(v35 + 16 * v34 + 8);
          Count_low = ((unsigned int)Count_low >> 25) & 0x60;
          if ( (_BYTE)Count_low == (*(_BYTE *)(v35 + 16 * v34 + 8) & 0x60) && (v25 & 0x2000) == 0 && (v25 & 0x1F) != 0 )
          {
            v26 = 2LL * (unsigned int)v34;
            v25 &= 0x1Fu;
            if ( (_BYTE)v25 == 15 )
            {
              v41 = *(_QWORD *)(v35 + 16LL * (unsigned int)v34);
              if ( v41 )
              {
                LODWORD(v18[3].Count) = *(_DWORD *)(v41 + 28);
                DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v54);
                v43 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                        v5,
                        (struct DXGKVMB_COMMAND_BASE *)v18,
                        v11,
                        v42);
                v38 = v43;
                if ( v43 < 0 )
                {
                  v47 = WdLogNewEntry5_WdWarning(v45, v44, v46);
                  *(_QWORD *)(v47 + 24) = v38;
                  WdLogEvent5_WdWarning(v47);
                }
                goto LABEL_45;
              }
            }
            else
            {
              v36 = WdLogNewEntry5_WdError(v25, Count_low, v26);
              *(_QWORD *)(v36 + 24) = 267LL;
              WdLogEvent5_WdError(v36);
            }
          }
        }
        v37 = WdLogNewEntry5_WdWarning(v25, Count_low, v26);
        *(_QWORD *)(v37 + 24) = 8009LL;
        WdLogEvent5_WdWarning(v37);
        LODWORD(v38) = -1073741811;
      }
      DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v54);
LABEL_45:
      operator delete[](v18);
      if ( v53 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
      return (unsigned int)v38;
    }
    v48 = WdLogNewEntry5_WdWarning(v10, v6, v7);
    *(_QWORD *)(v48 + 24) = 7944LL;
  }
  WdLogEvent5_WdWarning(v48);
  if ( v53 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v51);
  return 3221225485LL;
}
