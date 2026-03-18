/*
 * XREFs of ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C01F79D8
 * Callers:
 *     DxgkLock2 @ 0x1C0102FB0 (DxgkLock2.c)
 *     DxgkUnlock2 @ 0x1C0106F60 (DxgkUnlock2.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0124C00 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1C01D997C (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x1C01F797C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAU_M.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_UNLOCK2 *a4,
        unsigned __int8 a5)
{
  D3DKMT_HANDLE hAllocation; // edi
  char *v6; // rsi
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct _EX_RUNDOWN_REF *v17; // rdx
  __int64 v18; // rcx
  struct DXGALLOCATION *v19; // rdi
  int v20; // esi
  _QWORD *v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  struct _MDL *v24; // r9
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v30; // [rsp+20h] [rbp-30h] BYREF
  int v31; // [rsp+28h] [rbp-28h]
  int v32; // [rsp+2Ch] [rbp-24h]
  int v33; // [rsp+30h] [rbp-20h]
  int v34; // [rsp+38h] [rbp-18h]
  int v35; // [rsp+3Ch] [rbp-14h]
  unsigned __int8 v36; // [rsp+40h] [rbp-10h]
  struct DXGALLOCATION *v37; // [rsp+A8h] [rbp+58h] BYREF

  hAllocation = a4->hAllocation;
  v6 = (char *)a2 + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 208));
  v11 = 0;
  v12 = (hAllocation >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 >= *((_DWORD *)a2 + 62) )
    goto LABEL_7;
  v13 = *((_QWORD *)a2 + 29);
  v14 = *(_DWORD *)(v13 + 16 * v12 + 8);
  if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60)
    || (v14 & 0x2000) != 0
    || (v14 & 0x1F) == 0 )
  {
    goto LABEL_7;
  }
  v15 = v14 & 0x1F;
  if ( (_BYTE)v15 != 5 )
  {
    v16 = WdLogNewEntry5_WdError(v15);
    *(_QWORD *)(v16 + 24) = 316LL;
    WdLogEvent5_WdError(v16);
LABEL_7:
    v17 = 0LL;
    goto LABEL_8;
  }
  v17 = *(struct _EX_RUNDOWN_REF **)(v13 + 16LL * (unsigned int)v12);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v37, v17);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  v19 = v37;
  v20 = -1073741811;
  if ( !v37 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v18);
    v21[3] = a4->hAllocation;
LABEL_13:
    WdLogEvent5_WdError(v21);
LABEL_21:
    v11 = v20;
    goto LABEL_22;
  }
  v22 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v37 + 1) + 16LL) + 16LL) != v22 )
  {
    v21 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v21[3] = a3;
    v21[4] = v37;
    v21[5] = -1073741811LL;
    goto LABEL_13;
  }
  if ( !*((_DWORD *)v37 + 26)
    || _InterlockedExchangeAdd((volatile signed __int32 *)v37 + 26, 0xFFFFFFFF) != 1
    || (*((_BYTE *)v19 + 140) & 3) != 0 )
  {
    v20 = 0;
    goto LABEL_21;
  }
  _InterlockedDecrement(&g_VgpuNumAllocationsUnderCpuAccess);
  v23 = MEMORY[0xFFFFF78000000014] - *((_QWORD *)v19 + 15);
  *((_QWORD *)v19 + 15) = MEMORY[0xFFFFF78000000014];
  if ( v23 < 0x1E8480 )
  {
LABEL_22:
    LODWORD(v27) = v11;
    goto LABEL_23;
  }
  UnlockParavirtualizedAllocationOnGuest(v37, 1);
  v31 = *((_DWORD *)a2 + 98);
  v36 = a5;
  v30 = 0LL;
  v32 = 0;
  v33 = 24;
  v35 = *((_DWORD *)v19 + 24);
  v34 = *((_DWORD *)a3 + 84);
  v25 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
          this,
          (struct DXGKVMB_COMMAND_BASE *)&v30,
          (const GUID *)0x28,
          v24);
  v27 = v25;
  if ( v25 < 0 )
  {
    v28 = WdLogNewEntry5_WdError(v26);
    *(_QWORD *)(v28 + 24) = v27;
    WdLogEvent5_WdError(v28);
  }
LABEL_23:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v37);
  return (unsigned int)v27;
}
