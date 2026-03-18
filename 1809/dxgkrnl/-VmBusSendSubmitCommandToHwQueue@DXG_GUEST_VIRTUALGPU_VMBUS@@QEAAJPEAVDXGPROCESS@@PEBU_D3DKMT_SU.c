/*
 * XREFs of ?VmBusSendSubmitCommandToHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEBU_D3DKMT_SUBMITCOMMANDTOHWQUEUE@@@Z @ 0x1C01F7168
 * Callers:
 *     DxgkSubmitCommandToHwQueueInternal @ 0x1C0217C78 (DxgkSubmitCommandToHwQueueInternal.c)
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?GetAllocationUnsafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C0010C44 (-GetAllocationUnsafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0012060 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1DXGHANDLETABLELOCKSHARED@@QEAA@XZ @ 0x1C00123E8 (--1DXGHANDLETABLELOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSubmitCommandToHwQueue(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        const struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE *a3)
{
  DXG_GUEST_VIRTUALGPU_VMBUS *v5; // r12
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v9; // r14
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // r15d
  __int64 v14; // rax
  struct _EX_RUNDOWN_REF *v15; // rax
  __int64 v16; // rcx
  struct _EX_RUNDOWN_REF *v17; // rsi
  __int64 v18; // rax
  size_t v19; // r8
  char *v20; // r14
  const D3DKMT_HANDLE *WrittenPrimaries; // rdx
  __int64 PrivateDriverDataSize; // rax
  char *pPrivateDriverData; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // r14d
  struct DXGALLOCATION **AllocationUnsafe; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 Count_low; // rdx
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  struct _MDL *v39; // r9
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  struct _EX_RUNDOWN_REF *v45; // [rsp+20h] [rbp-88h] BYREF
  struct _EX_RUNDOWN_REF *v46[2]; // [rsp+28h] [rbp-80h] BYREF
  char v47[8]; // [rsp+38h] [rbp-70h] BYREF
  __int64 v48; // [rsp+40h] [rbp-68h]
  char v49; // [rsp+48h] [rbp-60h]
  _BYTE v50[88]; // [rsp+50h] [rbp-58h] BYREF

  v5 = this;
  v48 = *((_QWORD *)this + 7);
  v49 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
  if ( *(_DWORD *)(*((_QWORD *)v5 + 7) + 176LL) != 1 )
  {
    if ( v49 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
    return 3221226166LL;
  }
  if ( g_VgpuDisableSubmitCommand )
  {
    if ( v49 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
    return 0LL;
  }
  v9 = 4 * a3->NumPrimaries;
  v10 = v9 + 80;
  if ( (unsigned int)v9 >= 0xFFFFFFB0 )
  {
    v11 = WdLogNewEntry5_WdWarning(v6, 0xFFFFFFFFLL, v7);
    *(_QWORD *)(v11 + 24) = 7972LL;
LABEL_14:
    WdLogEvent5_WdWarning(v11);
    if ( v49 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
    return 3221225485LL;
  }
  v12 = v10 + a3->PrivateDriverDataSize;
  if ( (unsigned int)v12 < v10 )
  {
    v11 = WdLogNewEntry5_WdWarning(v12, v10, v7);
    *(_QWORD *)(v11 + 24) = 7978LL;
    goto LABEL_14;
  }
  v13 = v10 + a3->PrivateDriverDataSize;
  if ( (unsigned int)v12 > 0x20000 )
  {
    v14 = WdLogNewEntry5_WdWarning(v12, v10, v7);
    *(_QWORD *)(v14 + 24) = 7984LL;
    WdLogEvent5_WdWarning(v14);
    if ( v49 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
    return 3221225659LL;
  }
  v15 = (struct _EX_RUNDOWN_REF *)operator new[]((unsigned int)v12, 0x4B677844u, (POOL_TYPE)512);
  v17 = v15;
  v46[1] = v15;
  if ( !v15 )
  {
    v18 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v18 + 24) = 7991LL;
    WdLogEvent5_WdLowResource(v18);
    if ( v49 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
    return 3221225495LL;
  }
  v15->Count = 0LL;
  v15[1].Count = 0LL;
  LODWORD(v15[2].Count) = 52;
  LODWORD(v15[1].Count) = DXGPROCESS::GetHostProcess(a2);
  *(_OWORD *)&v17[3].Count = *(_OWORD *)&a3->hHwQueue;
  *(_OWORD *)&v17[5].Count = *(_OWORD *)&a3->CommandBuffer;
  *(_OWORD *)&v17[7].Count = *(_OWORD *)&a3->pPrivateDriverData;
  v17[9].Count = (ULONG_PTR)a3->WrittenPrimaries;
  v19 = (unsigned int)v9;
  v20 = (char *)&v17[10] + v9;
  if ( a3->NumPrimaries )
  {
    WrittenPrimaries = a3->WrittenPrimaries;
    if ( (const D3DKMT_HANDLE *)((char *)WrittenPrimaries + v19) < WrittenPrimaries
      || (unsigned __int64)WrittenPrimaries + v19 > MmUserProbeAddress )
    {
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    memmove(&v17[10], WrittenPrimaries, v19);
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
    memmove(v20, pPrivateDriverData, (unsigned int)PrivateDriverDataSize);
  }
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v50, (struct _KTHREAD **)a2);
  v26 = 0;
  if ( a3->NumPrimaries )
  {
    while ( 1 )
    {
      v45 = 0LL;
      AllocationUnsafe = (struct DXGALLOCATION **)DXGPROCESS::GetAllocationUnsafe(
                                                    (__int64)a2,
                                                    (DXGALLOCATIONREFERENCE *)v46,
                                                    *((_DWORD *)&v17[10].Count + v26));
      DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v45, AllocationUnsafe);
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(v46);
      if ( !v45 )
        break;
      *((_DWORD *)&v17[10].Count + v26) = v45[12].Count;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v45);
      if ( ++v26 >= a3->NumPrimaries )
      {
        v5 = this;
        goto LABEL_39;
      }
    }
    v37 = WdLogNewEntry5_WdWarning(v29, v28, v30);
    *(_QWORD *)(v37 + 24) = 8033LL;
    WdLogEvent5_WdWarning(v37);
    LODWORD(v36) = -1073741811;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v45);
  }
  else
  {
LABEL_39:
    Count_low = LODWORD(v17[3].Count);
    v32 = (LODWORD(v17[3].Count) >> 6) & 0xFFFFFF;
    if ( (unsigned int)v32 < *((_DWORD *)a2 + 62) )
    {
      v25 = (unsigned int)v32;
      v33 = *((_QWORD *)a2 + 29);
      v24 = *(unsigned int *)(v33 + 16 * v32 + 8);
      Count_low = ((unsigned int)Count_low >> 25) & 0x60;
      if ( (_BYTE)Count_low == (*(_BYTE *)(v33 + 16 * v32 + 8) & 0x60) && (v24 & 0x2000) == 0 && (v24 & 0x1F) != 0 )
      {
        v25 = 2LL * (unsigned int)v32;
        v24 &= 0x1Fu;
        if ( (_BYTE)v24 == 15 )
        {
          v38 = *(_QWORD *)(v33 + 16LL * (unsigned int)v32);
          if ( v38 )
          {
            LODWORD(v17[3].Count) = *(_DWORD *)(v38 + 28);
            DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v50);
            v40 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
                    v5,
                    (struct DXGKVMB_COMMAND_BASE *)v17,
                    v13,
                    v39);
            v36 = v40;
            if ( v40 < 0 )
            {
              v44 = WdLogNewEntry5_WdWarning(v42, v41, v43);
              *(_QWORD *)(v44 + 24) = v36;
              WdLogEvent5_WdWarning(v44);
            }
            goto LABEL_51;
          }
        }
        else
        {
          v34 = WdLogNewEntry5_WdError(v24);
          *(_QWORD *)(v34 + 24) = 316LL;
          WdLogEvent5_WdError(v34);
        }
      }
    }
    v35 = WdLogNewEntry5_WdWarning(v24, Count_low, v25);
    *(_QWORD *)(v35 + 24) = 8043LL;
    WdLogEvent5_WdWarning(v35);
    LODWORD(v36) = -1073741811;
  }
  DXGHANDLETABLELOCKSHARED::~DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v50);
LABEL_51:
  operator delete[](v17);
  if ( v49 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v47);
  return (unsigned int)v36;
}
