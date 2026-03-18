/*
 * XREFs of MiFlushSectionInternal @ 0x1400515D0
 * Callers:
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MmFlushSection @ 0x140077E98 (MmFlushSection.c)
 *     MiCleanSection @ 0x14017085C (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x1402B8BA0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1402B9410 (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x14062450C (MmFlushVirtualMemory.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     MiGetPagePrivilege @ 0x140024CF0 (MiGetPagePrivilege.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KeDelayExecutionThread @ 0x14003AEC0 (KeDelayExecutionThread.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiCheckProtoPtePageState @ 0x1400549A0 (MiCheckProtoPtePageState.c)
 *     MiUnlockProtoPoolPage @ 0x140055030 (MiUnlockProtoPoolPage.c)
 *     PsGetIoPriorityThread @ 0x14005A5C0 (PsGetIoPriorityThread.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     MiControlAreaUsingExtents @ 0x14006EFE0 (MiControlAreaUsingExtents.c)
 *     MiInsertUnusedSubsection @ 0x14006FF30 (MiInsertUnusedSubsection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDecrementSubsectionViewCount @ 0x140071910 (MiDecrementSubsectionViewCount.c)
 *     MiIncrementSubsectionViewCount @ 0x140072660 (MiIncrementSubsectionViewCount.c)
 *     MiUnlockFlushMdl @ 0x140074CF8 (MiUnlockFlushMdl.c)
 *     MiObtainProtoReference @ 0x140093DC0 (MiObtainProtoReference.c)
 *     MiInitializePageFaultPacket @ 0x14009561C (MiInitializePageFaultPacket.c)
 *     MiUnlinkPageFromList @ 0x1400B3280 (MiUnlinkPageFromList.c)
 *     MiEndingOffset @ 0x1400B89BC (MiEndingOffset.c)
 *     MiReadyFlushMdlToWrite @ 0x1400BB47C (MiReadyFlushMdlToWrite.c)
 *     MiClearPfnImageVerified @ 0x1400BB9EC (MiClearPfnImageVerified.c)
 *     MiIsRetryIoStatus @ 0x1400BF9D0 (MiIsRetryIoStatus.c)
 *     MiRemoveUnusedSubsection @ 0x1400C08CC (MiRemoveUnusedSubsection.c)
 *     MiChargePartitionResidentAvailable @ 0x1400CA9C8 (MiChargePartitionResidentAvailable.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 *     IoDiskIoAttributionDereference @ 0x1400EC348 (IoDiskIoAttributionDereference.c)
 *     MiWaitForCollidedFaultComplete @ 0x140109964 (MiWaitForCollidedFaultComplete.c)
 *     MiWaitForPageWriteCompletion @ 0x140118D34 (MiWaitForPageWriteCompletion.c)
 *     MiIssueSynchronousFlush @ 0x14011ECA4 (MiIssueSynchronousFlush.c)
 *     MiExpandFlushMdl @ 0x140129484 (MiExpandFlushMdl.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiIssueAsynchronousFlush @ 0x1402C9F28 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x1402CA1C4 (MiWaitForAsynchronousFlushes.c)
 *     MiFlushFileOnlyMdl @ 0x1402CBE58 (MiFlushFileOnlyMdl.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402DE948 (MiReturnCrossPartitionSectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFlushSectionInternal(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  int v9; // ebx
  int v10; // edi
  __int64 v11; // rsi
  struct _MDL *v12; // r13
  __int64 v13; // r8
  ULONG_PTR v14; // r15
  ULONG_PTR v15; // r12
  KIRQL v16; // bl
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r14
  int v21; // r14d
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  ULONG_PTR v25; // rsi
  unsigned __int64 v26; // rbx
  char v27; // al
  unsigned int *p_ByteCount; // r15
  unsigned int v29; // r14d
  int v30; // r12d
  unsigned __int64 v31; // rbx
  ULONG_PTR *v32; // r10
  int v33; // eax
  BOOL v34; // r13d
  int v35; // r14d
  unsigned int v36; // r9d
  struct _KPRCB *v37; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v39; // ett
  int v40; // r12d
  int v41; // ecx
  char v42; // al
  ULONG ByteOffset; // r8d
  unsigned int v44; // edx
  unsigned int v45; // esi
  int v46; // esi
  __int64 v47; // r14
  __int64 v48; // r12
  signed __int64 *v49; // roff
  signed __int64 v50; // rax
  signed __int64 v51; // rtt
  __int64 result; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rsi
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  int v59; // eax
  int v60; // esi
  __int64 v61; // rsi
  ULONG_PTR v62; // rax
  char *PoolWithTag; // rax
  char *v64; // rdx
  char *v65; // rcx
  _QWORD *v66; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v68; // rcx
  unsigned __int64 DeepFreezeStartTime; // rdx
  __int64 v70; // rax
  __int64 v71; // rax
  LARGE_INTEGER *v72; // r8
  int v73; // eax
  struct _KPRCB *v74; // rcx
  int v75; // [rsp+44h] [rbp-284h]
  __int64 v76; // [rsp+48h] [rbp-280h]
  ULONG_PTR v77; // [rsp+50h] [rbp-278h]
  __int64 v78; // [rsp+58h] [rbp-270h]
  int v79; // [rsp+60h] [rbp-268h]
  int v80; // [rsp+70h] [rbp-258h]
  struct _MDL *P; // [rsp+78h] [rbp-250h]
  __int64 v82; // [rsp+80h] [rbp-248h]
  unsigned __int64 v83; // [rsp+88h] [rbp-240h]
  int IoPriorityThread; // [rsp+90h] [rbp-238h]
  char *v85; // [rsp+98h] [rbp-230h]
  ULONG_PTR v86; // [rsp+A0h] [rbp-228h]
  volatile LONG *SpinLock; // [rsp+B0h] [rbp-218h]
  PVOID v88; // [rsp+B8h] [rbp-210h]
  __int64 v89; // [rsp+C0h] [rbp-208h]
  ULONG_PTR Object; // [rsp+C8h] [rbp-200h]
  int v92; // [rsp+D8h] [rbp-1F0h] BYREF
  int v93; // [rsp+DCh] [rbp-1ECh] BYREF
  unsigned int v94; // [rsp+E0h] [rbp-1E8h]
  __int64 v95; // [rsp+E8h] [rbp-1E0h]
  ULONG_PTR *v96; // [rsp+F0h] [rbp-1D8h]
  ULONG_PTR v97; // [rsp+F8h] [rbp-1D0h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-1C8h]
  unsigned __int64 v99; // [rsp+108h] [rbp-1C0h]
  ULONG_PTR v100; // [rsp+110h] [rbp-1B8h]
  __int64 v101; // [rsp+118h] [rbp-1B0h]
  __int64 *v102; // [rsp+120h] [rbp-1A8h]
  _BYTE v103[192]; // [rsp+130h] [rbp-198h] BYREF
  _BYTE v104[144]; // [rsp+1F0h] [rbp-D8h] BYREF

  v102 = a3;
  v100 = a1;
  memset(v103, 0, 0xB8uLL);
  v9 = a6;
  v10 = 0;
  if ( (a6 & 2) == 0 )
    v10 = 2;
  if ( a5 )
  {
    v9 = a6 | 4;
    a6 |= 4u;
  }
  v11 = *a3;
  v12 = (struct _MDL *)v103;
  v88 = 0LL;
  v85 = 0LL;
  P = (struct _MDL *)v103;
  v89 = *a3;
  if ( (*(_DWORD *)(*a3 + 56) & 0x40000000) != 0 )
  {
    v9 &= ~4u;
    a6 = v9;
  }
  if ( (v9 & 4) != 0 )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA00uLL, 0x61466D4Du);
    v64 = PoolWithTag;
    v88 = PoolWithTag;
    if ( a5 )
    {
      *(_QWORD *)(a5 + 40) = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    else if ( !PoolWithTag )
    {
      goto LABEL_8;
    }
    *((_WORD *)PoolWithTag + 24) = 0;
    v65 = PoolWithTag + 48;
    PoolWithTag[50] = 6;
    v12 = (struct _MDL *)(PoolWithTag + 80);
    v85 = PoolWithTag;
    *((_DWORD *)PoolWithTag + 13) = 0;
    v66 = PoolWithTag + 56;
    v66[1] = v66;
    *v66 = v66;
    *(_DWORD *)v64 = 0;
    *((_QWORD *)v64 + 2) = 0LL;
    *((_QWORD *)v64 + 5) = a5;
    *((_QWORD *)v64 + 4) = v11;
    *((_QWORD *)v64 + 9) = v12;
    *((_QWORD *)v64 + 264) = v65;
    *((_WORD *)v64 + 156) = 0;
    v64[314] = 6;
    *((_DWORD *)v64 + 79) = 0;
    *((_QWORD *)v64 + 41) = v64 + 320;
    *((_QWORD *)v64 + 40) = v64 + 320;
    *((_QWORD *)v64 + 42) = v64 + 344;
    *((_DWORD *)v64 + 66) = 0;
    *((_QWORD *)v64 + 35) = 0LL;
    *((_QWORD *)v64 + 38) = a5;
    *((_QWORD *)v64 + 37) = v11;
    *((_QWORD *)v64 + 265) = v64 + 312;
    *((_WORD *)v64 + 288) = 0;
    v64[578] = 6;
    *((_DWORD *)v64 + 145) = 0;
    *((_QWORD *)v64 + 74) = v64 + 584;
    *((_QWORD *)v64 + 73) = v64 + 584;
    *((_QWORD *)v64 + 75) = v64 + 608;
    *((_DWORD *)v64 + 132) = 0;
    *((_QWORD *)v64 + 68) = 0LL;
    *((_QWORD *)v64 + 71) = a5;
    *((_QWORD *)v64 + 70) = v11;
    *((_QWORD *)v64 + 266) = v64 + 576;
    *((_WORD *)v64 + 420) = 0;
    v64[842] = 6;
    *((_DWORD *)v64 + 211) = 0;
    *((_QWORD *)v64 + 107) = v64 + 848;
    *((_QWORD *)v64 + 106) = v64 + 848;
    *((_QWORD *)v64 + 108) = v64 + 872;
    *((_DWORD *)v64 + 198) = 0;
    *((_QWORD *)v64 + 101) = 0LL;
    *((_QWORD *)v64 + 104) = a5;
    *((_QWORD *)v64 + 103) = v11;
    *((_QWORD *)v64 + 267) = v64 + 840;
    *((_WORD *)v64 + 552) = 0;
    v64[1106] = 6;
    *((_DWORD *)v64 + 277) = 0;
    *((_QWORD *)v64 + 140) = v64 + 1112;
    *((_QWORD *)v64 + 139) = v64 + 1112;
    *((_QWORD *)v64 + 141) = v64 + 1136;
    *((_DWORD *)v64 + 264) = 0;
    *((_QWORD *)v64 + 134) = 0LL;
    *((_QWORD *)v64 + 137) = a5;
    *((_QWORD *)v64 + 136) = v11;
    *((_QWORD *)v64 + 268) = v64 + 1104;
    *((_WORD *)v64 + 684) = 0;
    v64[1370] = 6;
    *((_DWORD *)v64 + 343) = 0;
    *((_QWORD *)v64 + 173) = v64 + 1376;
    *((_QWORD *)v64 + 172) = v64 + 1376;
    *((_DWORD *)v64 + 330) = 0;
    P = v12;
    *((_QWORD *)v64 + 167) = 0LL;
    *((_QWORD *)v64 + 174) = v64 + 1400;
    *((_QWORD *)v64 + 170) = a5;
    *((_QWORD *)v64 + 169) = v11;
    *((_QWORD *)v64 + 269) = v64 + 1368;
    *((_WORD *)v64 + 816) = 0;
    v64[1634] = 6;
    *((_DWORD *)v64 + 409) = 0;
    *((_QWORD *)v64 + 206) = v64 + 1640;
    *((_QWORD *)v64 + 205) = v64 + 1640;
    *((_QWORD *)v64 + 207) = v64 + 1664;
    *((_DWORD *)v64 + 396) = 0;
    *((_QWORD *)v64 + 200) = 0LL;
    *((_QWORD *)v64 + 203) = a5;
    *((_QWORD *)v64 + 202) = v11;
    *((_QWORD *)v64 + 270) = v64 + 1632;
    *((_WORD *)v64 + 948) = 0;
    v64[1898] = 6;
    *((_DWORD *)v64 + 475) = 0;
    *((_QWORD *)v64 + 239) = v64 + 1904;
    *((_QWORD *)v64 + 238) = v64 + 1904;
    *((_QWORD *)v64 + 240) = v64 + 1928;
    *((_DWORD *)v64 + 462) = 0;
    *((_QWORD *)v64 + 233) = 0LL;
    *((_QWORD *)v64 + 236) = a5;
    *((_QWORD *)v64 + 235) = v11;
    *((_QWORD *)v64 + 271) = v64 + 1896;
  }
LABEL_8:
  v99 = a2 + 8;
  Object = MiReferenceControlAreaFile(v11);
  CurrentThread = KeGetCurrentThread();
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
  if ( IoPriorityThread < 2
    && (*(_DWORD *)(v13 + 116) & 0x400) == 0
    && *(_BYTE *)(v13 + 562) != 1
    && KeGetCurrentThread()[1].TrapFrame != (_KTRAP_FRAME *)2 )
  {
    IoPriorityThread = 2;
  }
  if ( v9 < 0 )
    v10 |= 0x10u;
  v86 = (ULONG_PTR)a3;
  *a7 = 0;
  v14 = (ULONG_PTR)a3;
  v15 = v100;
  *((_QWORD *)a7 + 1) = 0LL;
  v12->Next = 0LL;
  v12->MdlFlags = 0;
  v12->StartVa = 0LL;
  *(_QWORD *)&v12->ByteCount = 0LL;
  --*(_WORD *)(v13 + 484);
  v75 = 16;
  v80 = 0;
  v79 = 1;
  v78 = 0LL;
  v77 = v15;
  SpinLock = (volatile LONG *)(v11 + 72);
  v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
  if ( !*(_QWORD *)(v11 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v16);
    if ( v88 )
    {
      ExFreePoolWithTag(v88, 0);
      if ( a5 )
        *(_QWORD *)(a5 + 40) = 0LL;
    }
    MiDereferenceControlAreaFile(v11, Object);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    result = 0LL;
    *a7 = 0;
    *((_QWORD *)a7 + 1) = 0LL;
    return result;
  }
  v17 = *(_QWORD *)(v11 + 120);
  v95 = 8 * v17;
  if ( 8 * v17 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v17 + 32)) <= 1 )
    __fastfail(0xEu);
  v82 = 0LL;
  v18 = 0LL;
  v19 = a4;
  while ( 1 )
  {
LABEL_14:
    if ( v14 == v19 )
    {
      v20 = v99;
    }
    else
    {
      v20 = *(_QWORD *)(v14 + 8) + 8LL * (*(_DWORD *)(v14 + 44) - (*(_DWORD *)(v14 + 52) & 0x3FFFFFFFu));
      v19 = a4;
    }
    v83 = v20;
    if ( !v15 )
    {
      v15 = *(_QWORD *)(v14 + 8);
      v77 = v15;
    }
    if ( *(_DWORD *)(v14 + 104) && *(_QWORD *)(v14 + 8) )
      break;
    v18 += (__int64)(v20 - v15) >> 3 << 12;
    v62 = *(_QWORD *)(v14 + 16);
    v78 = v18;
    if ( !v62 )
    {
      if ( v20 == *(_QWORD *)(v14 + 8) + 8LL * (*(_DWORD *)(v14 + 44) - (*(_DWORD *)(v14 + 52) & 0x3FFFFFFFu)) )
      {
        v47 = v18;
        v48 = v82;
        v73 = MiEndingOffset(v14) & 0xFFF;
        if ( v73 )
          v47 = v78 - (unsigned int)(4096 - v73);
        goto LABEL_86;
      }
LABEL_216:
      v48 = v82;
      v47 = v18;
      goto LABEL_86;
    }
    if ( v19 == v14 )
      goto LABEL_216;
    v15 = *(_QWORD *)(v62 + 8);
    v14 = *(_QWORD *)(v14 + 16);
    v77 = v15;
    v86 = v62;
  }
  MiIncrementSubsectionViewCount(v14);
  if ( (*(_BYTE *)(v14 + 34) & 8) != 0 )
    MiRemoveUnusedSubsection(v14);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
  {
    v68 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v68->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v68);
  }
  __writecr8(v16);
  v97 = v15;
  if ( v15 >= v20 )
    goto LABEL_81;
  while ( 2 )
  {
    v21 = v10;
    v76 = MiCheckProtoPtePageState(v15);
    if ( !v76 )
    {
      p_ByteCount = &v12->ByteCount;
      v15 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      v77 = v15;
      if ( !v12->ByteCount )
        goto LABEL_69;
      goto LABEL_99;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v22 = *(_QWORD *)v15;
        v23 = *(_QWORD *)v15;
        if ( (*(_QWORD *)v15 & 1) != 0 )
          goto LABEL_33;
        if ( (*(_QWORD *)v15 & 0xC00LL) != 0x800 )
          goto LABEL_64;
        if ( !v22 || !qword_140465800 || (v22 & qword_140465800) != 0 )
        {
          v23 = *(_QWORD *)v15;
          if ( qword_140465800 && (v22 & 0x10) == 0 )
            v23 = v22 & ~qword_140465800;
LABEL_33:
          v24 = 48 * ((v23 >> 12) & 0xFFFFFFFFFLL);
          v101 = v24;
          if ( (*(_QWORD *)(v24 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
            break;
        }
      }
      v25 = v24 - 0x58000000000LL;
      v92 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v92);
        while ( *(__int64 *)(v25 + 24) < 0 );
      }
      if ( *(_QWORD *)v15 == v22 )
        break;
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    if ( !v25 )
    {
LABEL_64:
      p_ByteCount = &v12->ByteCount;
      goto LABEL_65;
    }
    v26 = *(_QWORD *)v15;
    if ( v15 >= 0xFFFFF6FB7DBED000uLL
      && v15 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v26 & 1) != 0
      && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
    {
      DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
      if ( DeepFreezeStartTime )
      {
        v70 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v15 >> 3) & 0x1FF));
        LOBYTE(DeepFreezeStartTime) = v26 | 0x20;
        if ( (v70 & 0x20) == 0 )
          DeepFreezeStartTime = *(_QWORD *)v15;
        LOBYTE(v26) = DeepFreezeStartTime;
        if ( (v70 & 0x42) != 0 )
          LOBYTE(v26) = DeepFreezeStartTime | 0x42;
      }
    }
    v27 = *(_BYTE *)(v25 + 34);
    p_ByteCount = &v12->ByteCount;
    if ( (v27 & 8) != 0 )
    {
      if ( !*p_ByteCount )
      {
        if ( (v10 & 2) != 0 )
        {
          MiWaitForPageWriteCompletion(v25, v89, v76, 17LL);
          goto LABEL_69;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v10 |= 8u;
LABEL_210:
        v15 = v83;
        break;
      }
LABEL_132:
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_99;
    }
    if ( (v27 & 0x10) == 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_65:
      v44 = *p_ByteCount;
      v10 |= 4u;
      if ( !*p_ByteCount )
        v10 = v21;
      goto LABEL_67;
    }
    v29 = *p_ByteCount;
    if ( (v27 & 0x20) != 0 )
    {
      memset(v104, 0, 0x88uLL);
      if ( !v29 )
      {
        v93 = 1;
        MiInitializePageFaultPacket(0, 0, 0, 0, (__int64)v104);
        MiObtainProtoReference(v76, 1LL);
        MiWaitForCollidedFaultComplete((unsigned int)v104, v25, v76, 17, (__int64)&v93);
        goto LABEL_69;
      }
      goto LABEL_132;
    }
    v30 = 0;
    if ( !v29 )
    {
      v30 = 2;
      ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
      ++*(_DWORD *)(v89 + 76);
      ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      v12->Next = 0LL;
      v12->MdlFlags = 0;
      v12->StartVa = 0LL;
      *p_ByteCount = 0;
      v12->ByteOffset = v75;
    }
    v31 = v26 & 1;
    v32 = *(ULONG_PTR **)(qword_140465E88 + 8 * ((*(_QWORD *)(v25 + 40) >> 40) & 0x3FFLL));
    v33 = *(_DWORD *)(v25 + 16);
    v96 = v32;
    v34 = (v33 & 0x400) != 0LL;
    v35 = v30 & 2;
    v36 = 4;
    if ( !v31 )
      v35 = v30;
    if ( !v35 )
      v36 = 8;
    v94 = v36;
    if ( v32 == &MiSystemPartition )
    {
      v37 = KeGetCurrentPrcb();
      CachedResidentAvailable = v37->CachedResidentAvailable;
      if ( CachedResidentAvailable )
      {
        while ( CachedResidentAvailable != -1 )
        {
          v39 = CachedResidentAvailable;
          CachedResidentAvailable = _InterlockedCompareExchange(
                                      (volatile signed __int32 *)&v37->CachedResidentAvailable,
                                      CachedResidentAvailable - 1,
                                      CachedResidentAvailable);
          if ( v39 == CachedResidentAvailable )
          {
            v40 = 1;
            goto LABEL_53;
          }
          if ( !CachedResidentAvailable )
            break;
        }
      }
    }
    v40 = MiChargePartitionResidentAvailable(v32, 1LL, (unsigned int)-(v35 != 0));
    if ( !v40 )
      goto LABEL_186;
    v36 = v94;
    v32 = v96;
LABEL_53:
    v41 = v34;
    if ( !v35 )
      v41 = v34;
    if ( v41 && !(unsigned int)MiChargeCommit(v32, 1LL, v36) )
    {
      if ( v96 == &MiSystemPartition )
        MiReturnResidentAvailable(1LL);
      else
        _InterlockedExchangeAdd64((volatile signed __int64 *)v96 + 1016, 1uLL);
LABEL_186:
      v40 = 0;
      goto LABEL_60;
    }
    if ( !v31 )
    {
      MiUnlinkPageFromList(v25);
      *(_QWORD *)(v25 + 24) &= 0xC000000000000000uLL;
    }
    v42 = *(_BYTE *)(v25 + 34);
    ++*(_WORD *)(v25 + 32);
    *(_BYTE *)(v25 + 34) = v42 | 8;
    *(_BYTE *)(v25 + 34) &= ~0x10u;
    if ( (*(_DWORD *)(v25 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v25, 1, 0LL) & 0x10) != 0 )
      MiClearPfnImageVerified(v25);
LABEL_60:
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v12 = P;
    if ( !v40 )
    {
      v60 = 3;
      goto LABEL_109;
    }
    *((_QWORD *)&P[1].Next + *p_ByteCount) = v101 / 48;
    ByteOffset = P->ByteOffset;
    v44 = *p_ByteCount + 1;
    *p_ByteCount = v44;
    if ( v40 != 3 || v44 < 0x10 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    {
      if ( v44 == ByteOffset )
      {
        v60 = 1;
        goto LABEL_109;
      }
      v15 = v77;
LABEL_67:
      v15 += 8LL;
      v77 = v15;
      if ( (v10 & 4) == 0 && (v15 != v83 || !v44) )
        goto LABEL_69;
      goto LABEL_99;
    }
    v60 = 2;
LABEL_109:
    MiUnlockProtoPoolPage(v76, 17LL);
    v15 = v77;
    if ( v60 == 3 )
      goto LABEL_99;
    if ( v60 == 2 || v75 == 1 || v77 + 8 >= v83 )
    {
      v15 = v77 + 8;
      v77 += 8LL;
      goto LABEL_99;
    }
    v61 = MiExpandFlushMdl(P);
    if ( v61 )
    {
      if ( P != (struct _MDL *)v103 && (!v85 || P != (struct _MDL *)(v85 + 80)) )
        ExFreePoolWithTag(P, 0);
      P = (struct _MDL *)v61;
      v12 = (struct _MDL *)v61;
      if ( v85 )
        *((_QWORD *)v85 + 9) = v61;
      v15 = v77 + 8;
      v75 = *(_DWORD *)(v61 + 44);
      v77 += 8LL;
      goto LABEL_69;
    }
    v15 = v77 + 8;
    v75 = P->ByteOffset;
    v77 += 8LL;
LABEL_99:
    v10 &= ~4u;
    *p_ByteCount <<= 12;
    v53 = MiReadyFlushMdlToWrite(v12, v86, a6);
    if ( v85 )
    {
      v71 = MiIssueAsynchronousFlush(Object, (_DWORD)v85, (_DWORD)v88, a5, v53, (a6 >> 2) & 4, IoPriorityThread, v95);
      v85 = (char *)v71;
      if ( v71 )
      {
        v12 = *(struct _MDL **)(v71 + 72);
        v75 = 16;
        goto LABEL_128;
      }
      v10 |= 1u;
      v79 = 0;
      goto LABEL_210;
    }
    v54 = *(_QWORD *)(48 * (__int64)v12[1].Next - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
    if ( (unsigned int)MiControlAreaUsingExtents(v89, 0LL, v53) )
    {
      MiFlushFileOnlyMdl(v55, v12, v56, a7);
    }
    else
    {
      v57 = a6 >> 2;
      LOBYTE(v57) = v57 & 4;
      MiIssueSynchronousFlush(Object, v12, v56, v57, v95, a7);
    }
    MiUnlockFlushMdl(v12);
    v58 = *a7;
    if ( (int)v58 >= 0 )
    {
      v80 = 0;
      if ( v12 == (struct _MDL *)v103 )
      {
LABEL_104:
        v12->ByteCount = 0;
        goto LABEL_69;
      }
      v75 = 16;
      ExFreePoolWithTag(v12, 0);
      v12 = (struct _MDL *)v103;
LABEL_128:
      P = v12;
      goto LABEL_104;
    }
    v77 = v54;
    v15 = v54;
    if ( (_DWORD)v58 == -1073741740 && (v10 & 0x10) != 0 )
    {
      v72 = (LARGE_INTEGER *)&Mi10Milliseconds;
      goto LABEL_206;
    }
    v45 = *p_ByteCount;
    if ( !(unsigned int)MiIsRetryIoStatus(v58, *p_ByteCount) )
      goto LABEL_77;
    if ( (--v80 & 0x1F) != 0 )
    {
      v72 = (LARGE_INTEGER *)&Mi30Milliseconds;
LABEL_206:
      KeDelayExecutionThread(0, 0, v72);
LABEL_207:
      *a7 = 0;
      v46 = 1;
      goto LABEL_78;
    }
    if ( v75 != 1 && v45 > 0x1000 )
    {
      v75 = 1;
      goto LABEL_207;
    }
LABEL_77:
    v46 = 0;
LABEL_78:
    v79 = v46;
    if ( v12 != (struct _MDL *)v103 )
    {
      if ( v75 != 1 )
        v75 = 16;
      ExFreePoolWithTag(v12, 0);
      v12 = (struct _MDL *)v103;
      P = (struct _MDL *)v103;
    }
    v12->ByteCount = 0;
    if ( v46 )
    {
LABEL_69:
      if ( v15 >= v83 )
        break;
      continue;
    }
    break;
  }
  v14 = v86;
LABEL_81:
  v47 = ((__int64)(v15 - v97) >> 3 << 12) + v78;
  v78 = v47;
  v16 = ExAcquireSpinLockExclusive(SpinLock);
  if ( !*(_QWORD *)(v14 + 16)
    && v15 == *(_QWORD *)(v14 + 8) + 8LL * (*(_DWORD *)(v14 + 44) - (*(_DWORD *)(v14 + 52) & 0x3FFFFFFFu)) )
  {
    v59 = MiEndingOffset(v14) & 0xFFF;
    if ( v59 )
    {
      v47 -= (unsigned int)(4096 - v59);
      v78 = v47;
    }
  }
  v48 = MiDecrementSubsectionViewCount(v14) + v82;
  v82 = v48;
  if ( !*(_QWORD *)(v14 + 96) && (*(_BYTE *)(v14 + 34) & 1) == 0 )
  {
    v48 += MiInsertUnusedSubsection(v14);
    v82 = v48;
  }
  if ( (v10 & 8) == 0 )
  {
    if ( v79 )
    {
      v19 = a4;
      if ( v14 != a4 )
      {
        v14 = *(_QWORD *)(v14 + 16);
        v86 = v14;
        if ( v14 )
        {
          v15 = *(_QWORD *)(v14 + 8);
          v18 = v78;
          v77 = v15;
          goto LABEL_14;
        }
      }
    }
  }
LABEL_86:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v16 < 2u )
  {
    v74 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v74->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v74);
  }
  __writecr8(v16);
  if ( v88 && !a5 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(v88) < 0 )
      LOBYTE(v10) = v10 | 1;
    ExFreePoolWithTag(v88, 0);
  }
  v49 = (signed __int64 *)(v89 + 64);
  _m_prefetchw((const void *)(v89 + 64));
  v50 = *v49;
  if ( (Object ^ *v49) >= 0xF )
  {
LABEL_148:
    ObDereferenceObjectDeferDelete((PVOID)Object);
  }
  else
  {
    while ( 1 )
    {
      v51 = v50;
      v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(v89 + 64), v50 + 1, v50);
      if ( v51 == v50 )
        break;
      if ( (Object ^ v50) >= 0xF )
        goto LABEL_148;
    }
  }
  if ( v48 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(v89 + 60) & 0x3FF)), 1LL, v48);
  if ( v95 )
    IoDiskIoAttributionDereference(v95);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( (v10 & 1) != 0 )
    return MiFlushSectionInternal(v100, v99 - 8, v102, a4, a5, a6 & 0xFFFFFFFB, a7);
  if ( (v10 & 8) != 0 )
  {
    result = 3221226547LL;
    *a7 = -1073740749;
  }
  else
  {
    result = *a7;
  }
  *((_QWORD *)a7 + 1) = v47;
  return result;
}
