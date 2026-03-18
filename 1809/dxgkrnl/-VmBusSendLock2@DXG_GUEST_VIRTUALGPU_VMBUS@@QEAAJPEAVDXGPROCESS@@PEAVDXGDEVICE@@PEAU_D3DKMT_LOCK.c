/*
 * XREFs of ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C01F4B14
 * Callers:
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100E00 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkLock2 @ 0x1C0102FB0 (DxgkLock2.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C02467F4 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0012428 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00AC058 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0102F60 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0106DA0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C0229704 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_LOCK2 *a4,
        unsigned __int8 a5)
{
  char *v5; // rdi
  D3DKMT_HANDLE hAllocation; // ebx
  __int64 v11; // rax
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _EX_RUNDOWN_REF *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  struct _EX_RUNDOWN_REF *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  struct _MDL *Count; // r10
  ULONG *v25; // r15
  unsigned int HostProcess; // eax
  PVOID v27; // rcx
  struct _MDL *v28; // r14
  NTSTATUS v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  PMDL Mdl; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  struct _MDL *v35; // rdx
  struct _MDL *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  NTSTATUS v39; // eax
  __int64 v40; // rax
  struct _MDL *Priority; // [rsp+28h] [rbp-A9h]
  PVOID BaseAddress; // [rsp+30h] [rbp-A1h] BYREF
  unsigned int v44; // [rsp+38h] [rbp-99h] BYREF
  struct _EX_RUNDOWN_REF *v45; // [rsp+40h] [rbp-91h] BYREF
  struct _EX_RUNDOWN_REF *v46; // [rsp+48h] [rbp-89h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-81h] BYREF
  ULONG_PTR v48; // [rsp+58h] [rbp-79h]
  __int64 v49; // [rsp+60h] [rbp-71h] BYREF
  unsigned int v50; // [rsp+68h] [rbp-69h]
  int v51; // [rsp+6Ch] [rbp-65h]
  int v52; // [rsp+70h] [rbp-61h]
  int v53; // [rsp+78h] [rbp-59h]
  int v54; // [rsp+7Ch] [rbp-55h]
  struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB Value; // [rsp+80h] [rbp-51h]
  char v56; // [rsp+90h] [rbp-41h]
  __int64 v57; // [rsp+94h] [rbp-3Dh]
  _BYTE v58[24]; // [rsp+A0h] [rbp-31h] BYREF
  int v59; // [rsp+B8h] [rbp-19h] BYREF
  unsigned __int64 v60; // [rsp+C0h] [rbp-11h]

  v45 = 0LL;
  v5 = (char *)a2 + 208;
  hAllocation = a4->hAllocation;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 208));
  v11 = (hAllocation >> 6) & 0xFFFFFF;
  if ( (unsigned int)v11 >= *((_DWORD *)a2 + 62) )
    goto LABEL_7;
  v12 = *((_QWORD *)a2 + 29);
  v13 = *(_DWORD *)(v12 + 16 * v11 + 8);
  if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v12 + 16 * v11 + 8) & 0x60)
    || (v13 & 0x2000) != 0
    || (v13 & 0x1F) == 0 )
  {
    goto LABEL_7;
  }
  v14 = v13 & 0x1F;
  if ( (_BYTE)v14 != 5 )
  {
    v15 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v15 + 24) = 316LL;
    WdLogEvent5_WdError(v15);
LABEL_7:
    v16 = 0LL;
    goto LABEL_8;
  }
  v16 = *(struct _EX_RUNDOWN_REF **)(v12 + 16LL * (unsigned int)v11);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v46, v16);
  ExReleasePushLockSharedEx(v5, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v45, (struct DXGALLOCATION **)&v46);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v46);
  v20 = v45;
  LODWORD(v5) = -1073741811;
  if ( !v45 )
  {
    v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(_QWORD *)(v21 + 24) = 6917LL;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_48;
  }
  v22 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  if ( *(_QWORD *)(*(_QWORD *)(v45[1].Count + 16) + 16LL) != v22 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v22);
    v23[3] = a3;
    v23[4] = v20;
    v23[5] = -1073741811LL;
LABEL_47:
    WdLogEvent5_WdError(v23);
    goto LABEL_48;
  }
  LODWORD(v5) = 0;
  if ( v45[14].Count )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)&v45[13]) == 1
      && !(BYTE4(v45[17].Ptr) & 1 | ((BYTE4(v45[17].Ptr) & 2) != 0)) )
    {
      _InterlockedAdd(&g_VgpuNumAllocationsUnderCpuAccess, 1u);
    }
    Count = (struct _MDL *)v20[14].Count;
    if ( (BYTE4(v45[17].Ptr) & 1) != 0 )
    {
      if ( (Count->MdlFlags & 5) != 0 )
        Count = (struct _MDL *)Count->MappedSystemVa;
      else
        Count = (struct _MDL *)MmMapLockedPagesSpecifyCache(Count, 0, MmCached, 0LL, 0, 0x40000010u);
    }
    a4->pData = Count;
    goto LABEL_48;
  }
  v25 = (ULONG *)&v45[16];
  RegionSize = v45[16].Count;
  v48 = v45[6].Count;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v49 = 0LL;
  v50 = HostProcess;
  v51 = 0;
  v52 = 23;
  v56 = 0;
  v57 = 0LL;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v58, (struct _KTHREAD **)a2);
  v54 = v20[12].Count;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v58);
  v53 = *((_DWORD *)a3 + 84);
  Value = (struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB)a4->Flags.Value;
  if ( a5 )
  {
    v56 = 1;
    v57 = 0LL;
  }
  v44 = 16;
  LODWORD(v5) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
                  this,
                  (struct DXGKVMB_COMMAND_BASE *)&v49,
                  0x40u,
                  &v59,
                  &v44,
                  Priority);
  if ( (int)v5 < 0 || (LODWORD(v5) = -1073741823, v44 < 0x10) || (LODWORD(v5) = v59, v59 < 0) )
  {
LABEL_46:
    v23 = (_QWORD *)WdLogNewEntry5_WdError(v27);
    v23[3] = (int)v5;
    goto LABEL_47;
  }
  BaseAddress = 0LL;
  v28 = 0LL;
  v29 = ZwAllocateVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &BaseAddress,
          0LL,
          &RegionSize,
          0x801000u,
          ~(unsigned __int16)(*(_DWORD *)(v48 + 4) >> 9) & 0x400 | 4);
  v5 = (char *)v29;
  if ( v29 < 0 )
  {
    v31 = WdLogNewEntry5_WdError(v30);
    *(_QWORD *)(v31 + 24) = this;
    *(_QWORD *)(v31 + 32) = v5;
    goto LABEL_29;
  }
  Mdl = IoAllocateMdl(0LL, *v25, 0, 0, 0LL);
  v28 = Mdl;
  if ( Mdl )
  {
    v35 = Mdl + 1;
    v36 = (struct _MDL *)(v60 >> 12);
    v37 = *(_QWORD *)v25 >> 12;
    if ( (_DWORD)v37 )
    {
      v38 = (unsigned int)v37;
      do
      {
        v35->Next = v36;
        v36 = (struct _MDL *)((char *)v36 + 1);
        v35 = (struct _MDL *)((char *)v35 + 8);
        --v38;
      }
      while ( v38 );
    }
    v39 = MmRotatePhysicalView(BaseAddress, &RegionSize, v28, MmToFrameBufferNoCopy, 0LL, 0LL);
    v5 = (char *)v39;
    if ( v39 >= 0 )
    {
      LODWORD(v20[9].Count) |= 0x80000u;
      v20[14].Count = (ULONG_PTR)BaseAddress;
      _InterlockedAdd((volatile signed __int32 *)&v20[13], 1u);
      _InterlockedAdd(&g_VgpuNumAllocationsUnderCpuAccess, 1u);
      _InterlockedAdd(&g_VgpuNumAllocationsLocked, 1u);
      g_VgpuNumLockedBytes += *(_QWORD *)v25;
      a4->pData = BaseAddress;
LABEL_38:
      if ( (int)v5 >= 0 )
        goto LABEL_43;
      goto LABEL_39;
    }
    v31 = WdLogNewEntry5_WdError(v27);
    *(_QWORD *)(v31 + 24) = v5;
    *(_QWORD *)(v31 + 32) = 7024LL;
LABEL_29:
    WdLogEvent5_WdError(v31);
    goto LABEL_38;
  }
  v34 = (_QWORD *)WdLogNewEntry5_WdError(v33);
  LODWORD(v5) = -1073741801;
  v34[3] = *((_QWORD *)this + 7);
  v34[4] = -1073741801LL;
  v34[5] = 7009LL;
  WdLogEvent5_WdError(v34);
LABEL_39:
  v40 = WdLogNewEntry5_WdError(v27);
  *(_QWORD *)(v40 + 24) = (int)v5;
  WdLogEvent5_WdError(v40);
  v27 = BaseAddress;
  if ( BaseAddress )
  {
    if ( (*(_DWORD *)(v48 + 4) & 0x40000) != 0 )
      MmUnmapLockedPages(BaseAddress, v28);
    else
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v20[16].Count, 0x8000u);
  }
LABEL_43:
  if ( v28 )
    IoFreeMdl(v28);
  if ( (int)v5 < 0 )
    goto LABEL_46;
LABEL_48:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v45);
  return (unsigned int)v5;
}
