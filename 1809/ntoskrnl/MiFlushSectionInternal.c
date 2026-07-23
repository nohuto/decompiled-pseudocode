/*
 * XREFs of MiFlushSectionInternal @ 0x14004C270
 * Callers:
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiCleanSection @ 0x14016983C (MiCleanSection.c)
 *     MiDeleteCachedSubsection @ 0x1402A1C08 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1402A246C (MiFlushControlArea.c)
 *     MmFlushVirtualMemory @ 0x1406B7EBC (MmFlushVirtualMemory.c)
 * Callees:
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     MiUnlockFlushMdl @ 0x14001E3D8 (MiUnlockFlushMdl.c)
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiIsRetryIoStatus @ 0x140022E18 (MiIsRetryIoStatus.c)
 *     MiChargePartitionResidentAvailable @ 0x140022F3C (MiChargePartitionResidentAvailable.c)
 *     MiReadyFlushMdlToWrite @ 0x14002DBD0 (MiReadyFlushMdlToWrite.c)
 *     MiObtainProtoReference @ 0x14002DD34 (MiObtainProtoReference.c)
 *     MiUnlockProtoPoolPage @ 0x14002F1F0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140030780 (MiCheckProtoPtePageState.c)
 *     MiEndingOffset @ 0x140031090 (MiEndingOffset.c)
 *     MiControlAreaUsingExtents @ 0x1400321B0 (MiControlAreaUsingExtents.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiIncrementSubsectionViewCount @ 0x140077A40 (MiIncrementSubsectionViewCount.c)
 *     MiDecrementSubsectionViewCount @ 0x1400794B0 (MiDecrementSubsectionViewCount.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiInsertUnusedSubsection @ 0x14007B7CC (MiInsertUnusedSubsection.c)
 *     MiRemoveUnusedSubsection @ 0x14007BBB8 (MiRemoveUnusedSubsection.c)
 *     MiClearPfnImageVerified @ 0x140082944 (MiClearPfnImageVerified.c)
 *     MiInitializePageFaultPacket @ 0x140096158 (MiInitializePageFaultPacket.c)
 *     MiGetPagePrivilege @ 0x1400B29B0 (MiGetPagePrivilege.c)
 *     PsGetIoPriorityThread @ 0x1400B6A80 (PsGetIoPriorityThread.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     MiWaitForPageWriteCompletion @ 0x1400F9B74 (MiWaitForPageWriteCompletion.c)
 *     IoDiskIoAttributionDereference @ 0x1401058D4 (IoDiskIoAttributionDereference.c)
 *     MiIssueSynchronousFlush @ 0x14011C9C8 (MiIssueSynchronousFlush.c)
 *     MiExpandFlushMdl @ 0x140125720 (MiExpandFlushMdl.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiIssueAsynchronousFlush @ 0x1402B4CC8 (MiIssueAsynchronousFlush.c)
 *     MiWaitForAsynchronousFlushes @ 0x1402B4F64 (MiWaitForAsynchronousFlushes.c)
 *     MiFlushFileOnlyMdl @ 0x1402B605C (MiFlushFileOnlyMdl.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1402C4EA4 (MiReturnCrossPartitionSectionCharges.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFlushSectionInternal(
        ULONG_PTR a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        NTSTATUS *a7)
{
  int v9; // ebx
  int v10; // edi
  __int64 v11; // rsi
  struct _MDL *v12; // r13
  bool v13; // zf
  __int64 v14; // r8
  ULONG_PTR v15; // r15
  ULONG_PTR v16; // r12
  KIRQL v17; // bl
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned __int64 v21; // r14
  __int64 v22; // rax
  unsigned __int8 v23; // bl
  int v24; // r14d
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  ULONG_PTR v28; // rsi
  unsigned __int64 v29; // rbx
  char v30; // al
  unsigned int *p_ByteCount; // r15
  unsigned int v32; // ecx
  int v33; // r14d
  unsigned __int64 v34; // rbx
  ULONG_PTR *v35; // r10
  int v36; // eax
  BOOL v37; // r13d
  int v38; // r12d
  unsigned int v39; // r9d
  struct _KPRCB *v40; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v42; // ett
  int v43; // r14d
  int v44; // ecx
  char v45; // al
  ULONG ByteOffset; // edx
  unsigned int v47; // r8d
  unsigned int v48; // esi
  int v49; // esi
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // r8
  __int64 v54; // r9
  PVOID v55; // rbx
  __int64 v56; // r15
  __int64 v57; // rsi
  signed __int64 *v58; // roff
  signed __int64 v59; // rax
  unsigned __int64 v60; // rdx
  signed __int64 v61; // rtt
  NTSTATUS *v62; // rcx
  __int64 result; // rax
  volatile LONG *v64; // rcx
  int v65; // eax
  __int64 v66; // rdx
  char v67; // al
  __int64 v68; // r14
  unsigned __int64 v69; // rsi
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  NTSTATUS *v73; // r14
  NTSTATUS v74; // ecx
  int v75; // eax
  int v76; // esi
  ULONG_PTR v77; // r14
  struct _MDL *v78; // rsi
  _QWORD *v79; // r15
  ULONG_PTR v80; // rax
  _QWORD *PoolWithTag; // rax
  __int64 v82; // r8
  _QWORD *v83; // rdx
  char *v84; // rcx
  _QWORD *v85; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  struct _KPRCB *v90; // rcx
  unsigned __int64 v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rbx
  __int64 v94; // rax
  LARGE_INTEGER *v95; // r8
  __int16 v96; // ax
  int v97; // eax
  struct _KPRCB *v98; // rcx
  unsigned __int8 v99[4]; // [rsp+40h] [rbp-288h] BYREF
  int v100; // [rsp+44h] [rbp-284h]
  __int64 v101; // [rsp+48h] [rbp-280h]
  ULONG_PTR v102; // [rsp+50h] [rbp-278h]
  __int64 v103; // [rsp+58h] [rbp-270h]
  int v104; // [rsp+60h] [rbp-268h]
  NTSTATUS *v105; // [rsp+68h] [rbp-260h]
  int v106; // [rsp+70h] [rbp-258h]
  PVOID P; // [rsp+78h] [rbp-250h]
  __int64 v108; // [rsp+80h] [rbp-248h]
  unsigned __int64 v109; // [rsp+88h] [rbp-240h]
  int IoPriorityThread; // [rsp+90h] [rbp-238h]
  _QWORD *v111; // [rsp+98h] [rbp-230h]
  __int64 *v112; // [rsp+A0h] [rbp-228h]
  __int64 v113; // [rsp+A8h] [rbp-220h]
  PEX_SPIN_LOCK SpinLock; // [rsp+B0h] [rbp-218h]
  PVOID v115; // [rsp+B8h] [rbp-210h]
  __int64 v116; // [rsp+C0h] [rbp-208h]
  PVOID Object; // [rsp+C8h] [rbp-200h]
  __int64 v118; // [rsp+D0h] [rbp-1F8h]
  int v119; // [rsp+D8h] [rbp-1F0h] BYREF
  int v120; // [rsp+DCh] [rbp-1ECh] BYREF
  unsigned int v121; // [rsp+E0h] [rbp-1E8h]
  __int64 v122; // [rsp+E8h] [rbp-1E0h]
  ULONG_PTR *v123; // [rsp+F0h] [rbp-1D8h]
  ULONG_PTR v124; // [rsp+F8h] [rbp-1D0h]
  struct _KTHREAD *CurrentThread; // [rsp+100h] [rbp-1C8h]
  unsigned __int64 v126; // [rsp+108h] [rbp-1C0h]
  ULONG_PTR v127; // [rsp+110h] [rbp-1B8h]
  __int64 v128; // [rsp+118h] [rbp-1B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+120h] [rbp-1A8h]
  _BYTE v130[192]; // [rsp+130h] [rbp-198h] BYREF
  _QWORD v131[18]; // [rsp+1F0h] [rbp-D8h] BYREF

  v9 = a6;
  v127 = a1;
  v118 = a4;
  v10 = 0;
  BugCheckParameter2 = (ULONG_PTR)a3;
  v113 = a5;
  v105 = a7;
  if ( (a6 & 2) == 0 )
    v10 = 2;
  if ( a5 )
  {
    v9 = a6 | 4;
    a6 |= 4u;
  }
  v11 = *a3;
  v12 = (struct _MDL *)v130;
  v115 = 0LL;
  v111 = 0LL;
  P = v130;
  v13 = (*(_DWORD *)(v11 + 56) & 0x40000000) == 0;
  v116 = v11;
  if ( !v13 )
  {
    v9 &= ~4u;
    a6 = v9;
  }
  if ( (v9 & 4) != 0 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA00uLL, 0x61466D4Du);
    v82 = v113;
    v83 = PoolWithTag;
    v115 = PoolWithTag;
    if ( v113 )
    {
      *(_QWORD *)(v113 + 40) = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225626LL;
    }
    else if ( !PoolWithTag )
    {
      goto LABEL_8;
    }
    *((_WORD *)PoolWithTag + 24) = 0;
    v84 = (char *)(PoolWithTag + 6);
    *((_BYTE *)PoolWithTag + 50) = 6;
    v12 = (struct _MDL *)(PoolWithTag + 10);
    v111 = PoolWithTag;
    *((_DWORD *)PoolWithTag + 13) = 0;
    v85 = PoolWithTag + 7;
    v85[1] = v85;
    *v85 = v85;
    *(_DWORD *)v83 = 0;
    v83[2] = 0LL;
    v83[5] = v82;
    v83[4] = v11;
    v83[9] = v12;
    v83[264] = v84;
    *((_WORD *)v83 + 156) = 0;
    *((_BYTE *)v83 + 314) = 6;
    *((_DWORD *)v83 + 79) = 0;
    v83[41] = v83 + 40;
    v83[40] = v83 + 40;
    v83[42] = v83 + 43;
    *((_DWORD *)v83 + 66) = 0;
    v83[35] = 0LL;
    v83[38] = v82;
    v83[37] = v11;
    v83[265] = v83 + 39;
    *((_WORD *)v83 + 288) = 0;
    *((_BYTE *)v83 + 578) = 6;
    *((_DWORD *)v83 + 145) = 0;
    v83[74] = v83 + 73;
    v83[73] = v83 + 73;
    v83[75] = v83 + 76;
    *((_DWORD *)v83 + 132) = 0;
    v83[68] = 0LL;
    v83[71] = v82;
    v83[70] = v11;
    v83[266] = v83 + 72;
    *((_WORD *)v83 + 420) = 0;
    *((_BYTE *)v83 + 842) = 6;
    *((_DWORD *)v83 + 211) = 0;
    v83[107] = v83 + 106;
    v83[106] = v83 + 106;
    v83[108] = v83 + 109;
    *((_DWORD *)v83 + 198) = 0;
    v83[101] = 0LL;
    v83[104] = v82;
    v83[103] = v11;
    v83[267] = v83 + 105;
    *((_WORD *)v83 + 552) = 0;
    *((_BYTE *)v83 + 1106) = 6;
    *((_DWORD *)v83 + 277) = 0;
    v83[140] = v83 + 139;
    v83[139] = v83 + 139;
    v83[141] = v83 + 142;
    *((_DWORD *)v83 + 264) = 0;
    v83[134] = 0LL;
    v83[137] = v82;
    v83[136] = v11;
    v83[268] = v83 + 138;
    *((_WORD *)v83 + 684) = 0;
    *((_BYTE *)v83 + 1370) = 6;
    *((_DWORD *)v83 + 343) = 0;
    v83[173] = v83 + 172;
    v83[172] = v83 + 172;
    *((_DWORD *)v83 + 330) = 0;
    P = v12;
    v83[167] = 0LL;
    v83[174] = v83 + 175;
    v83[170] = v82;
    v83[169] = v11;
    v83[269] = v83 + 171;
    *((_WORD *)v83 + 816) = 0;
    *((_BYTE *)v83 + 1634) = 6;
    *((_DWORD *)v83 + 409) = 0;
    v83[206] = v83 + 205;
    v83[205] = v83 + 205;
    v83[207] = v83 + 208;
    *((_DWORD *)v83 + 396) = 0;
    v83[200] = 0LL;
    v83[203] = v82;
    v83[202] = v11;
    v83[270] = v83 + 204;
    *((_WORD *)v83 + 948) = 0;
    *((_BYTE *)v83 + 1898) = 6;
    *((_DWORD *)v83 + 475) = 0;
    v83[239] = v83 + 238;
    v83[238] = v83 + 238;
    v83[240] = v83 + 241;
    *((_DWORD *)v83 + 462) = 0;
    v83[233] = 0LL;
    v83[236] = v82;
    v83[235] = v11;
    v83[271] = v83 + 237;
  }
LABEL_8:
  v126 = a2 + 8;
  Object = (PVOID)MiReferenceControlAreaFile(v11);
  CurrentThread = KeGetCurrentThread();
  IoPriorityThread = PsGetIoPriorityThread(CurrentThread);
  if ( IoPriorityThread < 2
    && (*(_DWORD *)(v14 + 116) & 0x400) == 0
    && *(_BYTE *)(v14 + 562) != 1
    && KeGetCurrentThread()[1].TrapFrame != (_KTRAP_FRAME *)2 )
  {
    IoPriorityThread = 2;
  }
  if ( v9 < 0 )
    v10 |= 0x10u;
  v112 = a3;
  *a7 = 0;
  v15 = (ULONG_PTR)a3;
  v16 = v127;
  *((_QWORD *)a7 + 1) = 0LL;
  v12->Next = 0LL;
  v12->MdlFlags = 0;
  v12->StartVa = 0LL;
  *(_QWORD *)&v12->ByteCount = 0LL;
  --*(_WORD *)(v14 + 484);
  v100 = 16;
  v106 = 0;
  v104 = 1;
  v103 = 0LL;
  v102 = v16;
  SpinLock = (PEX_SPIN_LOCK)(v11 + 72);
  v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 72));
  if ( !*(_QWORD *)(v11 + 32) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v17);
    if ( v115 )
    {
      ExFreePoolWithTag(v115, 0);
      if ( v113 )
        *(_QWORD *)(v113 + 40) = 0LL;
    }
    MiDereferenceControlAreaFile(v11, (unsigned __int64)Object);
    KeLeaveCriticalRegionThread(CurrentThread, v87, v88, v89);
    result = 0LL;
    *a7 = 0;
    *((_QWORD *)a7 + 1) = 0LL;
    return result;
  }
  v18 = *(_QWORD *)(v11 + 120);
  v122 = 8 * v18;
  if ( 8 * v18 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v18 + 32)) <= 1 )
    __fastfail(0xEu);
  v108 = 0LL;
  v19 = 0LL;
  v20 = v118;
  while ( 1 )
  {
LABEL_14:
    if ( v15 == v20 )
    {
      v21 = v126;
    }
    else
    {
      v21 = *(_QWORD *)(v15 + 8) + 8LL * (*(_DWORD *)(v15 + 44) - (*(_DWORD *)(v15 + 52) & 0x3FFFFFFFu));
      v20 = v118;
    }
    v109 = v21;
    if ( !v16 )
    {
      v16 = *(_QWORD *)(v15 + 8);
      v102 = v16;
    }
    if ( *(_DWORD *)(v15 + 104) && *(_QWORD *)(v15 + 8) )
      break;
    v19 += (__int64)(v21 - v16) >> 3 << 12;
    v80 = *(_QWORD *)(v15 + 16);
    v103 = v19;
    if ( !v80 )
    {
      if ( v21 == *(_QWORD *)(v15 + 8) + 8LL * (*(_DWORD *)(v15 + 44) - (*(_DWORD *)(v15 + 52) & 0x3FFFFFFFu)) )
      {
        v96 = MiEndingOffset(v15);
        v50 = v103;
        v52 = v108;
        v97 = v96 & 0xFFF;
        if ( v97 )
          v50 = v103 - (unsigned int)(4096 - v97);
        goto LABEL_98;
      }
LABEL_228:
      v52 = v108;
      v50 = v19;
      goto LABEL_98;
    }
    if ( v20 == v15 )
      goto LABEL_228;
    v16 = *(_QWORD *)(v80 + 8);
    v15 = v80;
    v102 = v16;
    v112 = (__int64 *)v80;
  }
  MiIncrementSubsectionViewCount(v15);
  if ( (*(_BYTE *)(v15 + 34) & 8) != 0 )
    MiRemoveUnusedSubsection(v15);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
  {
    v90 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v90->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v90);
  }
  __writecr8(v17);
  v124 = v16;
  v22 = 0LL;
  v23 = 17;
  v101 = 0LL;
  v99[0] = 17;
  if ( v16 >= v21 )
    goto LABEL_93;
  while ( 1 )
  {
    v24 = v10;
    if ( (v16 & 0xFFF) != 0 )
    {
      if ( v23 != 17 )
        goto LABEL_26;
    }
    else if ( v23 != 17 )
    {
      MiUnlockProtoPoolPage(v22, v23);
    }
    v22 = MiCheckProtoPtePageState(v16, v99);
    v101 = v22;
    if ( v22 )
      break;
    p_ByteCount = &v12->ByteCount;
    v16 = (v16 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    v13 = v12->ByteCount == 0;
    v102 = v16;
    if ( !v13 )
    {
LABEL_112:
      v23 = v99[0];
      if ( v99[0] != 17 )
      {
        MiUnlockProtoPoolPage(v22, v99[0]);
        v23 = 17;
        v99[0] = 17;
      }
      goto LABEL_114;
    }
    v23 = v99[0];
LABEL_68:
    if ( v16 >= v109 )
      goto LABEL_90;
  }
  while ( 1 )
  {
    while ( 1 )
    {
LABEL_26:
      v25 = *(_QWORD *)v16;
      v26 = *(_QWORD *)v16;
      if ( (*(_QWORD *)v16 & 1) != 0 )
        goto LABEL_34;
      if ( (*(_QWORD *)v16 & 0xC00LL) != 0x800 )
        goto LABEL_76;
      if ( !v25 || !qword_14043B180 || (v25 & qword_14043B180) != 0 )
      {
        v26 = *(_QWORD *)v16;
        if ( qword_14043B180 && (v25 & 0x10) == 0 )
          v26 = v25 & ~qword_14043B180;
LABEL_34:
        v27 = 48 * ((v26 >> 12) & 0xFFFFFFFFFLL);
        v128 = v27;
        if ( (*(_QWORD *)(v27 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0 )
          break;
      }
    }
    v28 = v27 - 0x58000000000LL;
    v119 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v119);
      while ( *(__int64 *)(v28 + 24) < 0 );
    }
    if ( *(_QWORD *)v16 == v25 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( !v28 )
  {
LABEL_76:
    p_ByteCount = &v12->ByteCount;
LABEL_73:
    v47 = *p_ByteCount;
    v10 |= 4u;
    if ( !*p_ByteCount )
      v10 = v24;
LABEL_64:
    v16 += 8LL;
    v102 = v16;
    if ( (v10 & 4) == 0 && (v16 != v109 || !v47) )
    {
      v23 = v99[0];
      goto LABEL_67;
    }
    goto LABEL_111;
  }
  v29 = *(_QWORD *)v16;
  if ( v16 >= 0xFFFFF6FB7DBED000uLL
    && v16 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v29 & 1) != 0
    && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
  {
    v91 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( v91 )
    {
      v92 = *(_QWORD *)(v91 + 8 * ((v16 >> 3) & 0x1FF));
      LOBYTE(v91) = v29 | 0x20;
      if ( (v92 & 0x20) == 0 )
        v91 = *(_QWORD *)v16;
      LOBYTE(v29) = v91;
      if ( (v92 & 0x42) != 0 )
        LOBYTE(v29) = v91 | 0x42;
    }
  }
  v30 = *(_BYTE *)(v28 + 34);
  p_ByteCount = &v12->ByteCount;
  if ( (v30 & 8) != 0 )
  {
    if ( !*p_ByteCount )
    {
      if ( (v10 & 2) != 0 )
      {
        MiWaitForPageWriteCompletion(v28, v116, v101, v99[0]);
        v23 = 17;
        v99[0] = 17;
        goto LABEL_67;
      }
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v23 = v99[0];
      v10 |= 8u;
LABEL_224:
      v16 = v109;
      goto LABEL_90;
    }
    goto LABEL_147;
  }
  if ( (v30 & 0x10) == 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_73;
  }
  v32 = *p_ByteCount;
  if ( (v30 & 0x20) != 0 )
  {
    if ( !v32 )
    {
      v120 = 1;
      MiInitializePageFaultPacket(0, 0, 0, 0, v131);
      v93 = v101;
      MiObtainProtoReference(v101, 1);
      MiWaitForCollidedFaultComplete(v131, v28, v93, v99[0], &v120);
      v23 = 17;
      v99[0] = 17;
      goto LABEL_67;
    }
LABEL_147:
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_111:
    v22 = v101;
    goto LABEL_112;
  }
  v33 = 0;
  if ( !v32 )
  {
    v33 = 2;
    ExAcquireSpinLockExclusiveAtDpcLevel(SpinLock);
    v64 = SpinLock;
    ++*(_DWORD *)(v116 + 76);
    ExReleaseSpinLockExclusiveFromDpcLevel(v64);
    v65 = v100;
    v12->Next = 0LL;
    v12->MdlFlags = 0;
    v12->StartVa = 0LL;
    *p_ByteCount = 0;
    v12->ByteOffset = v65;
  }
  v34 = v29 & 1;
  v35 = *(ULONG_PTR **)(qword_14043B808 + 8 * ((*(_QWORD *)(v28 + 40) >> 40) & 0x3FFLL));
  v36 = *(_DWORD *)(v28 + 16);
  v123 = v35;
  v37 = (v36 & 0x400) != 0LL;
  v38 = v33 & 2;
  v39 = 4;
  if ( !v34 )
    v38 = v33;
  if ( !v38 )
    v39 = 8;
  v121 = v39;
  if ( v35 == &MiSystemPartition )
  {
    v40 = KeGetCurrentPrcb();
    CachedResidentAvailable = v40->CachedResidentAvailable;
    if ( CachedResidentAvailable )
    {
      while ( CachedResidentAvailable != -1 )
      {
        v42 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&v40->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v42 == CachedResidentAvailable )
        {
          v43 = 1;
          goto LABEL_53;
        }
        if ( !CachedResidentAvailable )
          break;
      }
    }
  }
  v43 = MiChargePartitionResidentAvailable((__int64)v35, 1uLL, (unsigned int)-(v38 != 0));
  if ( !v43 )
    goto LABEL_200;
  v39 = v121;
  v35 = v123;
LABEL_53:
  v44 = v37;
  if ( !v38 )
    v44 = v37;
  if ( v44 && !(unsigned int)MiChargeCommit(v35, 1LL, v39) )
  {
    if ( v123 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)v123 + 920, 1uLL);
LABEL_200:
    v43 = 0;
    goto LABEL_60;
  }
  if ( !v34 )
  {
    MiUnlinkPageFromList(v28, 0);
    *(_QWORD *)(v28 + 24) &= 0xC000000000000000uLL;
  }
  v45 = *(_BYTE *)(v28 + 34);
  ++*(_WORD *)(v28 + 32);
  *(_BYTE *)(v28 + 34) = v45 | 8;
  *(_BYTE *)(v28 + 34) &= ~0x10u;
  if ( (*(_DWORD *)(v28 + 16) & 0x400LL) == 0 && (MiGetPagePrivilege(v28) & 0x10) != 0 )
  {
    *(_BYTE *)(v28 + 34) |= 0x20u;
    MiClearPfnImageVerified(v28);
  }
LABEL_60:
  _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v12 = (struct _MDL *)P;
  if ( !v43 )
  {
    v76 = 3;
    goto LABEL_124;
  }
  *((_QWORD *)P + *p_ByteCount + 6) = v128 / 48;
  ByteOffset = v12->ByteOffset;
  v47 = *p_ByteCount + 1;
  *p_ByteCount = v47;
  if ( v43 != 3 || v47 < 0x10 && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
  {
    if ( v47 == ByteOffset )
    {
      v76 = 1;
      goto LABEL_124;
    }
    v16 = v102;
    goto LABEL_64;
  }
  v76 = 2;
LABEL_124:
  MiUnlockProtoPoolPage(v101, v99[0]);
  v16 = v102;
  v23 = 17;
  v99[0] = 17;
  if ( v76 != 3 )
  {
    if ( v76 == 2 || v100 == 1 || (v77 = v102 + 8, v102 + 8 >= v109) )
    {
      v16 = v102 + 8;
      v102 += 8LL;
    }
    else
    {
      v78 = (struct _MDL *)MiExpandFlushMdl(v12);
      if ( v78 )
      {
        v79 = v111;
        if ( v12 != (struct _MDL *)v130 && (!v111 || v12 != (struct _MDL *)(v111 + 10)) )
          ExFreePoolWithTag(v12, 0);
        P = v78;
        v12 = v78;
        if ( v79 )
          v79[9] = v78;
        v16 += 8LL;
        v100 = v78->ByteOffset;
        v102 = v77;
        goto LABEL_67;
      }
      v16 += 8LL;
      v100 = v12->ByteOffset;
      v102 = v77;
    }
  }
LABEL_114:
  v10 &= ~4u;
  v66 = (__int64)v112;
  *p_ByteCount <<= 12;
  v67 = MiReadyFlushMdlToWrite((__int64)v12, v66, a6);
  if ( v111 )
  {
    v94 = MiIssueAsynchronousFlush(
            (_DWORD)Object,
            (_DWORD)v111,
            (_DWORD)v115,
            v113,
            v67,
            (a6 >> 2) & 4,
            IoPriorityThread,
            v122);
    v111 = (_QWORD *)v94;
    if ( v94 )
    {
      v12 = *(struct _MDL **)(v94 + 72);
      v100 = 16;
      goto LABEL_142;
    }
    v10 |= 1u;
    v104 = 0;
    goto LABEL_224;
  }
  v68 = v116;
  v69 = *(_QWORD *)(48 * (__int64)v12[1].Next - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
  if ( MiControlAreaUsingExtents(v116) )
  {
    MiFlushFileOnlyMdl(v70, v12, v71, v105);
  }
  else
  {
    v72 = a6 >> 2;
    LOBYTE(v72) = v72 & 4;
    MiIssueSynchronousFlush(Object, v12, v71, v72, v122, v105);
  }
  MiUnlockFlushMdl(v12, v68, (__int64)v105);
  v73 = v105;
  v74 = *v105;
  if ( *v105 >= 0 )
  {
    v106 = 0;
    if ( v12 == (struct _MDL *)v130 )
    {
LABEL_119:
      v12->ByteCount = 0;
      goto LABEL_67;
    }
    v100 = 16;
    ExFreePoolWithTag(v12, 0);
    v12 = (struct _MDL *)v130;
LABEL_142:
    P = v12;
    goto LABEL_119;
  }
  v102 = v69;
  v16 = v69;
  if ( v74 == -1073741740 && (v10 & 0x10) != 0 )
  {
    v95 = (LARGE_INTEGER *)&Mi10Milliseconds;
    goto LABEL_220;
  }
  v48 = *p_ByteCount;
  if ( !MiIsRetryIoStatus(v74, *p_ByteCount) )
    goto LABEL_84;
  if ( (--v106 & 0x1F) != 0 )
  {
    v95 = (LARGE_INTEGER *)&Mi30Milliseconds;
LABEL_220:
    KeDelayExecutionThread(0, 0, v95);
LABEL_221:
    *v73 = 0;
    v49 = 1;
    goto LABEL_85;
  }
  if ( v100 != 1 && v48 > 0x1000 )
  {
    v100 = 1;
    goto LABEL_221;
  }
LABEL_84:
  v49 = 0;
LABEL_85:
  v104 = v49;
  if ( v12 != (struct _MDL *)v130 )
  {
    if ( v100 != 1 )
      v100 = 16;
    ExFreePoolWithTag(v12, 0);
    v12 = (struct _MDL *)v130;
    P = v130;
  }
  v12->ByteCount = 0;
  if ( v49 )
  {
LABEL_67:
    v22 = v101;
    goto LABEL_68;
  }
LABEL_90:
  if ( v23 != 17 )
    MiUnlockProtoPoolPage(v101, v23);
  v15 = (ULONG_PTR)v112;
LABEL_93:
  v50 = ((__int64)(v16 - v124) >> 3 << 12) + v103;
  v103 = v50;
  v17 = ExAcquireSpinLockExclusive(SpinLock);
  if ( !*(_QWORD *)(v15 + 16)
    && v16 == *(_QWORD *)(v15 + 8) + 8LL * (*(_DWORD *)(v15 + 44) - (*(_DWORD *)(v15 + 52) & 0x3FFFFFFFu)) )
  {
    v75 = MiEndingOffset(v15) & 0xFFF;
    if ( v75 )
    {
      v50 -= (unsigned int)(4096 - v75);
      v103 = v50;
    }
  }
  v51 = MiDecrementSubsectionViewCount(v15);
  v52 = v51 + v108;
  v13 = *(_QWORD *)(v15 + 96) == 0LL;
  v108 += v51;
  if ( v13 && (*(_BYTE *)(v15 + 34) & 1) == 0 )
  {
    v52 += MiInsertUnusedSubsection(v15);
    v108 = v52;
  }
  if ( (v10 & 8) == 0 )
  {
    if ( v104 )
    {
      v20 = v118;
      if ( v15 != v118 )
      {
        v15 = *(_QWORD *)(v15 + 16);
        v112 = (__int64 *)v15;
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 8);
          v19 = v103;
          v102 = v16;
          goto LABEL_14;
        }
      }
    }
  }
LABEL_98:
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
  {
    v98 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v98->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v98);
  }
  __writecr8(v17);
  v55 = v115;
  v56 = v113;
  if ( v115 && !v113 )
  {
    if ( (int)MiWaitForAsynchronousFlushes(v115) < 0 )
      LOBYTE(v10) = v10 | 1;
    ExFreePoolWithTag(v55, 0);
  }
  v57 = v116;
  v58 = (signed __int64 *)(v116 + 64);
  _m_prefetchw((const void *)(v116 + 64));
  v59 = *v58;
  v60 = (unsigned __int64)Object;
  if ( ((unsigned __int64)Object ^ *v58) >= 0xF )
  {
LABEL_162:
    ObDereferenceObjectDeferDelete((PVOID)v60);
  }
  else
  {
    while ( 1 )
    {
      v61 = v59;
      v59 = _InterlockedCompareExchange64((volatile signed __int64 *)(v57 + 64), v59 + 1, v59);
      if ( v61 == v59 )
        break;
      if ( (v60 ^ v59) >= 0xF )
        goto LABEL_162;
    }
  }
  if ( v52 )
    MiReturnCrossPartitionSectionCharges(*(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(v57 + 60) & 0x3FF)), 1LL, v52);
  if ( v122 )
    IoDiskIoAttributionDereference(v122);
  KeLeaveCriticalRegionThread(CurrentThread, v60, v53, v54);
  if ( (v10 & 1) != 0 )
    return MiFlushSectionInternal(v127, (int)v126 - 8, BugCheckParameter2, v118, v56, a6 & 0xFFFFFFFB, (__int64)v105);
  v62 = v105;
  if ( (v10 & 8) != 0 )
  {
    result = 3221226547LL;
    *v105 = -1073740749;
  }
  else
  {
    result = (unsigned int)*v105;
  }
  *((_QWORD *)v62 + 1) = v50;
  return result;
}
