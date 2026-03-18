/*
 * XREFs of ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0224AD0
 * Callers:
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E0E20 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkLock2 @ 0x1C0104A40 (DxgkLock2.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0105590 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C027BFD0 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000BB90 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01025B4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107250 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0107410 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x1C025E230 (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_LOCK2 *a4,
        unsigned __int8 a5)
{
  D3DKMT_HANDLE hAllocation; // ebx
  char *v6; // rdi
  __int64 v11; // rcx
  const GUID *v12; // r8
  int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rax
  struct _EX_RUNDOWN_REF *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  struct _EX_RUNDOWN_REF *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // rax
  struct _MDL *Count; // r10
  ULONG *v30; // r15
  char v31; // al
  PVOID v32; // rcx
  __int64 v33; // r8
  struct _MDL *v34; // r14
  NTSTATUS v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  PMDL Mdl; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  _QWORD *v44; // rax
  struct _MDL *v45; // rdx
  struct _MDL *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r8
  NTSTATUS v49; // eax
  __int64 v50; // rax
  struct _MDL *Priority; // [rsp+28h] [rbp-A9h]
  PVOID BaseAddress; // [rsp+30h] [rbp-A1h] BYREF
  unsigned int v54; // [rsp+38h] [rbp-99h] BYREF
  struct _EX_RUNDOWN_REF *v55; // [rsp+40h] [rbp-91h] BYREF
  struct _EX_RUNDOWN_REF *v56; // [rsp+48h] [rbp-89h] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-81h] BYREF
  ULONG_PTR v58; // [rsp+58h] [rbp-79h]
  __int64 v59; // [rsp+60h] [rbp-71h] BYREF
  unsigned int HostProcess; // [rsp+68h] [rbp-69h]
  int v61; // [rsp+6Ch] [rbp-65h]
  int v62; // [rsp+70h] [rbp-61h]
  int v63; // [rsp+78h] [rbp-59h]
  int v64; // [rsp+7Ch] [rbp-55h]
  struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB Value; // [rsp+80h] [rbp-51h]
  char v66; // [rsp+90h] [rbp-41h]
  __int64 v67; // [rsp+94h] [rbp-3Dh]
  _BYTE v68[24]; // [rsp+A0h] [rbp-31h] BYREF
  int v69; // [rsp+B8h] [rbp-19h] BYREF
  unsigned __int64 v70; // [rsp+C0h] [rbp-11h]

  hAllocation = a4->hAllocation;
  v6 = (char *)a2 + 184;
  v55 = 0LL;
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v6, 0LL) )
  {
    if ( bTracingEnabled )
    {
      v13 = *((_DWORD *)v6 + 4);
      if ( v13 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v11, &EventBlockThread, v12, v13);
    }
    ExAcquirePushLockSharedEx(v6, 0LL);
  }
  v14 = (hAllocation >> 6) & 0xFFFFFF;
  if ( (unsigned int)v14 >= *((_DWORD *)a2 + 56) )
    goto LABEL_13;
  v15 = *((_QWORD *)a2 + 26);
  v16 = *(_DWORD *)(v15 + 16 * v14 + 8);
  if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(v15 + 16 * v14 + 8) & 0x60)
    || (v16 & 0x2000) != 0
    || (v16 & 0x1F) == 0 )
  {
    goto LABEL_13;
  }
  v17 = v16 & 0x1F;
  if ( (_BYTE)v17 != 5 )
  {
    v18 = WdLogNewEntry5_WdError(v17, 2LL * (unsigned int)v14, v15);
    *(_QWORD *)(v18 + 24) = 267LL;
    WdLogEvent5_WdError(v18);
LABEL_13:
    v19 = 0LL;
    goto LABEL_14;
  }
  v19 = *(struct _EX_RUNDOWN_REF **)(v15 + 16LL * (unsigned int)v14);
LABEL_14:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v56, v19);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  DXGALLOCATIONREFERENCE::MoveAssign(&v55, &v56);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v56, v20);
  v24 = v55;
  LODWORD(v6) = -1073741811;
  if ( !v55 )
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = 6883LL;
    WdLogEvent5_WdWarning(v25);
    goto LABEL_54;
  }
  v26 = *(_QWORD *)(v55[1].Count + 16);
  v27 = *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL);
  if ( *(_QWORD *)(v26 + 16) != v27 )
  {
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v27, v26, v23);
    v28[3] = a3;
    v28[4] = v24;
    v28[5] = -1073741811LL;
LABEL_53:
    WdLogEvent5_WdError(v28);
    goto LABEL_54;
  }
  if ( v55[14].Count )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)&v55[13]) == 1
      && !(BYTE4(v55[17].Ptr) & 1 | ((BYTE4(v55[17].Ptr) & 2) != 0)) )
    {
      _InterlockedAdd(&g_VgpuNumAllocationsUnderCpuAccess, 1u);
    }
    Count = (struct _MDL *)v24[14].Count;
    if ( (BYTE4(v55[17].Ptr) & 1) != 0 )
    {
      if ( (Count->MdlFlags & 5) != 0 )
        Count = (struct _MDL *)Count->MappedSystemVa;
      else
        Count = (struct _MDL *)MmMapLockedPagesSpecifyCache(Count, 0, MmCached, 0LL, 0, 0x40000010u);
    }
    a4->pData = Count;
    LODWORD(v6) = 0;
    goto LABEL_54;
  }
  v30 = (ULONG *)&v55[16];
  RegionSize = v55[16].Count;
  v58 = v55[6].Count;
  HostProcess = DXGPROCESS::GetHostProcess(a2);
  v59 = 0LL;
  v61 = 0;
  v66 = 0;
  v67 = 0LL;
  v62 = 23;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v68, (struct _KTHREAD **)a2);
  v64 = v24[12].Count;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v68);
  v63 = *((_DWORD *)a3 + 84);
  Value = (struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB)a4->Flags.Value;
  v31 = v66;
  if ( a5 )
    v31 = 1;
  v54 = 16;
  v66 = v31;
  LODWORD(v6) = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(
                  this,
                  (struct DXGKVMB_COMMAND_BASE *)&v59,
                  0x40u,
                  &v69,
                  &v54,
                  Priority);
  if ( (int)v6 < 0 || (LODWORD(v6) = -1073741823, v54 < 0x10) || (LODWORD(v6) = v69, v69 < 0) )
  {
LABEL_52:
    v28 = (_QWORD *)WdLogNewEntry5_WdError(v32, v26, v33);
    v28[3] = (int)v6;
    goto LABEL_53;
  }
  BaseAddress = 0LL;
  v34 = 0LL;
  v35 = ZwAllocateVirtualMemory(
          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
          &BaseAddress,
          0LL,
          &RegionSize,
          0x801000u,
          ~(unsigned __int16)(*(_DWORD *)(v58 + 4) >> 9) & 0x400 | 4);
  v6 = (char *)v35;
  if ( v35 < 0 )
  {
    v39 = WdLogNewEntry5_WdError(v37, v36, v38);
    *(_QWORD *)(v39 + 24) = this;
    *(_QWORD *)(v39 + 32) = v6;
    goto LABEL_35;
  }
  Mdl = IoAllocateMdl(0LL, *v30, 0, 0, 0LL);
  v34 = Mdl;
  if ( Mdl )
  {
    v45 = Mdl + 1;
    v46 = (struct _MDL *)(v70 >> 12);
    v47 = *(_QWORD *)v30 >> 12;
    if ( (_DWORD)v47 )
    {
      v48 = (unsigned int)v47;
      do
      {
        v45->Next = v46;
        v46 = (struct _MDL *)((char *)v46 + 1);
        v45 = (struct _MDL *)((char *)v45 + 8);
        --v48;
      }
      while ( v48 );
    }
    v49 = MmRotatePhysicalView(BaseAddress, &RegionSize, v34, MmToFrameBufferNoCopy, 0LL, 0LL);
    v6 = (char *)v49;
    if ( v49 >= 0 )
    {
      LODWORD(v24[9].Count) |= 0x80000u;
      v24[14].Count = (ULONG_PTR)BaseAddress;
      _InterlockedAdd((volatile signed __int32 *)&v24[13], 1u);
      _InterlockedAdd(&g_VgpuNumAllocationsUnderCpuAccess, 1u);
      _InterlockedAdd(&g_VgpuNumAllocationsLocked, 1u);
      g_VgpuNumLockedBytes += *(_QWORD *)v30;
      a4->pData = BaseAddress;
LABEL_44:
      if ( (int)v6 >= 0 )
        goto LABEL_49;
      goto LABEL_45;
    }
    v39 = WdLogNewEntry5_WdError(v32, v26, v33);
    *(_QWORD *)(v39 + 24) = v6;
    *(_QWORD *)(v39 + 32) = 6990LL;
LABEL_35:
    WdLogEvent5_WdError(v39);
    goto LABEL_44;
  }
  v44 = (_QWORD *)WdLogNewEntry5_WdError(v42, v41, v43);
  LODWORD(v6) = -1073741801;
  v44[3] = *((_QWORD *)this + 7);
  v44[4] = -1073741801LL;
  v44[5] = 6975LL;
  WdLogEvent5_WdError(v44);
LABEL_45:
  v50 = WdLogNewEntry5_WdError(v32, v26, v33);
  *(_QWORD *)(v50 + 24) = (int)v6;
  WdLogEvent5_WdError(v50);
  v32 = BaseAddress;
  if ( BaseAddress )
  {
    if ( (*(_DWORD *)(v58 + 4) & 0x40000) != 0 )
      MmUnmapLockedPages(BaseAddress, v34);
    else
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &v24[16].Count, 0x8000u);
  }
LABEL_49:
  if ( v34 )
    IoFreeMdl(v34);
  if ( (int)v6 < 0 )
    goto LABEL_52;
LABEL_54:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v55, v26);
  return (unsigned int)v6;
}
