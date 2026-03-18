/*
 * XREFs of ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C02279EC
 * Callers:
 *     DxgkUnlock2 @ 0x1C0103EA0 (DxgkUnlock2.c)
 *     DxgkLock2 @ 0x1C0104A40 (DxgkLock2.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0105590 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0131250 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C0207E00 (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C0227990 (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
        struct _KTHREAD **this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_UNLOCK2 *a4,
        unsigned __int8 a5)
{
  D3DKMT_HANDLE hAllocation; // esi
  char *v6; // rdi
  __int64 v11; // rcx
  const GUID *v12; // r8
  int v13; // ebx
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct _EX_RUNDOWN_REF *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct DXGALLOCATION *v24; // rdi
  int v25; // esi
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  struct _MDL *v30; // r9
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v37; // [rsp+20h] [rbp-30h] BYREF
  int v38; // [rsp+28h] [rbp-28h]
  int v39; // [rsp+2Ch] [rbp-24h]
  int v40; // [rsp+30h] [rbp-20h]
  int v41; // [rsp+38h] [rbp-18h]
  int v42; // [rsp+3Ch] [rbp-14h]
  unsigned __int8 v43; // [rsp+40h] [rbp-10h]
  struct DXGALLOCATION *v44; // [rsp+A8h] [rbp+58h] BYREF

  hAllocation = a4->hAllocation;
  v6 = (char *)a2 + 184;
  KeEnterCriticalRegion();
  v13 = 0;
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v14 = *((_DWORD *)v6 + 4);
      if ( v14 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v11, &EventBlockThread, v12, v14);
    }
    ExAcquirePushLockSharedEx(v6, 0LL);
  }
  v15 = (hAllocation >> 6) & 0xFFFFFF;
  if ( (unsigned int)v15 >= *((_DWORD *)a2 + 56) )
    goto LABEL_13;
  v16 = *((_QWORD *)a2 + 26);
  v17 = *(_DWORD *)(v16 + 16 * v15 + 8);
  if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v16 + 16 * v15 + 8) & 0x60)
    || (v17 & 0x2000) != 0
    || (v17 & 0x1F) == 0 )
  {
    goto LABEL_13;
  }
  v18 = v17 & 0x1F;
  if ( (_BYTE)v18 != 5 )
  {
    v19 = WdLogNewEntry5_WdError(v18, 2LL * (unsigned int)v15, v16);
    *(_QWORD *)(v19 + 24) = 267LL;
    WdLogEvent5_WdError(v19);
LABEL_13:
    v20 = 0LL;
    goto LABEL_14;
  }
  v20 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * (unsigned int)v15);
LABEL_14:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v44, v20);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  v24 = v44;
  v25 = -1073741811;
  if ( !v44 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21, v23);
    v26[3] = a4->hAllocation;
LABEL_19:
    WdLogEvent5_WdError(v26);
LABEL_27:
    v13 = v25;
    goto LABEL_28;
  }
  v27 = *(_QWORD *)(*((_QWORD *)v44 + 1) + 16LL);
  v28 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  if ( *(_QWORD *)(v27 + 16) != v28 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27, v23);
    v26[3] = a3;
    v26[4] = v44;
    v26[5] = -1073741811LL;
    goto LABEL_19;
  }
  if ( !*((_DWORD *)v44 + 26)
    || _InterlockedExchangeAdd((volatile signed __int32 *)v44 + 26, 0xFFFFFFFF) != 1
    || (*((_BYTE *)v24 + 140) & 3) != 0 )
  {
    v25 = 0;
    goto LABEL_27;
  }
  _InterlockedDecrement(&g_VgpuNumAllocationsUnderCpuAccess);
  v29 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)v24 + 15);
  *((_QWORD *)v24 + 15) = MEMORY[0xFFFFF78000000014];
  if ( v29 < 0x1E8480 )
  {
LABEL_28:
    LODWORD(v34) = v13;
    goto LABEL_29;
  }
  LOBYTE(v27) = 1;
  UnlockParavirtualizedAllocationOnGuest(v44, v27);
  v38 = *((_DWORD *)a2 + 92);
  v43 = a5;
  v37 = 0LL;
  v39 = 0;
  v40 = 24;
  v42 = *((_DWORD *)v24 + 24);
  v41 = *((_DWORD *)a3 + 84);
  v31 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
          this,
          (struct DXGKVMB_COMMAND_BASE *)&v37,
          (const GUID *)0x28,
          v30);
  v34 = v31;
  if ( v31 < 0 )
  {
    v35 = WdLogNewEntry5_WdError(v32, v27, v33);
    *(_QWORD *)(v35 + 24) = v34;
    WdLogEvent5_WdError(v35);
  }
LABEL_29:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v44, v27);
  return (unsigned int)v34;
}
