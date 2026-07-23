/*
 * XREFs of PspAllocateThread @ 0x1405F8E84
 * Callers:
 *     NtCreateUserProcess @ 0x14060B950 (NtCreateUserProcess.c)
 *     PspCreateThread @ 0x140622D64 (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x14088D6A0 (PspCreatePicoThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeQuerySystemTimeUnsafe @ 0x14008A3B4 (KeQuerySystemTimeUnsafe.c)
 *     KeInitializeSemaphore @ 0x14008A3D0 (KeInitializeSemaphore.c)
 *     ExInitializePushLock @ 0x14008A3F0 (ExInitializePushLock.c)
 *     KeSchedulerAssistThreadFlagEnabled @ 0x14008A3FC (KeSchedulerAssistThreadFlagEnabled.c)
 *     KeQueryMaximumGroupCount @ 0x14008A410 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x14008A4E0 (KeQuerySystemTimePrecise.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlGetExtendedContextLength @ 0x1400A1C84 (RtlGetExtendedContextLength.c)
 *     PsQueryThreadStartAddress @ 0x1400A38B0 (PsQueryThreadStartAddress.c)
 *     PoEnergyEstimationEnabled @ 0x1400ACEC0 (PoEnergyEstimationEnabled.c)
 *     KeSelectIdealProcessor @ 0x1400D8A34 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x1401157D8 (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     KeInitThread @ 0x1405666E0 (KeInitThread.c)
 *     ExCreateHandleEx @ 0x1405D2380 (ExCreateHandleEx.c)
 *     MmDeleteTeb @ 0x1405E066C (MmDeleteTeb.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     MmSecureVirtualMemoryEx @ 0x1405F6CB0 (MmSecureVirtualMemoryEx.c)
 *     MmCreateTeb @ 0x1405F9848 (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1405F9DD0 (PspSetupUserStack.c)
 *     PspWow64InitThread @ 0x1406A91FC (PspWow64InitThread.c)
 *     PspWow64SetupUserStack @ 0x1406BCE68 (PspWow64SetupUserStack.c)
 *     PspDeleteUserStack @ 0x1406CC310 (PspDeleteUserStack.c)
 *     PspUmsInitThread @ 0x14088BF6C (PspUmsInitThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspAllocateThread(
        _KPROCESS *BugCheckParameter1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _QWORD *a10,
        _BYTE *a11,
        __int64 a12)
{
  unsigned __int8 v13; // r10
  _DWORD *v16; // r8
  struct _KTHREAD *CurrentThread; // r11
  int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r9d
  _QWORD *v22; // rbx
  unsigned int v23; // ebx
  unsigned int MaximumGroupCount; // ecx
  int v25; // r14d
  char *v26; // rsi
  __int64 v27; // rax
  ULONG_PTR v28; // rbx
  __int64 Handle; // rax
  _DWORD *v30; // rbx
  int v31; // r8d
  __int16 v32; // dx
  __int16 v33; // cx
  __int16 v34; // ax
  _BYTE *v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 Teb; // rbx
  int inited; // eax
  unsigned __int64 v41; // rcx
  int v42; // ecx
  __int64 v43; // rax
  volatile signed __int64 *v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rcx
  PVOID PoolWithTag; // rax
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  _OWORD *v50; // r8
  unsigned __int64 v51; // rcx
  void *v52; // rcx
  __int64 v53; // [rsp+20h] [rbp-168h]
  int v54; // [rsp+50h] [rbp-138h]
  char v55; // [rsp+54h] [rbp-134h]
  __int16 v56; // [rsp+54h] [rbp-134h]
  __int64 v57; // [rsp+60h] [rbp-128h]
  PVOID Object; // [rsp+68h] [rbp-120h] BYREF
  __int64 v59; // [rsp+70h] [rbp-118h] BYREF
  _OWORD *v60; // [rsp+78h] [rbp-110h]
  _DWORD *v61; // [rsp+80h] [rbp-108h]
  _BYTE *v62; // [rsp+88h] [rbp-100h]
  __int64 v63; // [rsp+90h] [rbp-F8h]
  __int64 v64; // [rsp+98h] [rbp-F0h]
  __int64 v65; // [rsp+A0h] [rbp-E8h]
  ULONG ContextLength; // [rsp+A8h] [rbp-E0h] BYREF
  struct _KTHREAD *v67; // [rsp+B0h] [rbp-D8h]
  _KPROCESS *v68; // [rsp+B8h] [rbp-D0h]
  __int64 v69; // [rsp+C0h] [rbp-C8h]
  int v70; // [rsp+C8h] [rbp-C0h]
  int v71; // [rsp+CCh] [rbp-BCh]
  int v72; // [rsp+D0h] [rbp-B8h]
  int v73; // [rsp+D4h] [rbp-B4h]
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp-B0h]
  __int64 v75; // [rsp+E0h] [rbp-A8h]
  __int64 v76; // [rsp+E8h] [rbp-A0h]
  _QWORD *v77; // [rsp+F0h] [rbp-98h]
  _BYTE v78[8]; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v79; // [rsp+100h] [rbp-88h]
  __int64 v80; // [rsp+108h] [rbp-80h]
  __int64 v81; // [rsp+110h] [rbp-78h]
  _BYTE v82[48]; // [rsp+118h] [rbp-70h] BYREF

  v13 = a3;
  v68 = BugCheckParameter1;
  v60 = (_OWORD *)a2;
  v69 = a4;
  v16 = a5;
  v61 = a5;
  v63 = (__int64)a6;
  v77 = a10;
  v62 = a11;
  v64 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v67 = CurrentThread;
  v18 = 0;
  if ( a6 )
    v19 = *a6;
  else
    v19 = 0LL;
  v65 = v19;
  v57 = v19;
  if ( !a4 )
    goto LABEL_9;
  v20 = 0LL;
  v21 = *(_DWORD *)(a4 + 4);
  v22 = (_QWORD *)((a4 + 320) & -(__int64)((*(_DWORD *)(a4 + 4) & 0x1000) != 0));
  if ( (v21 & 0x4000) != 0 )
    v20 = KiProcessorBlock[*(unsigned int *)(a4 + 252)];
  if ( !v20 )
  {
    if ( v22 && *v22 )
    {
      v43 = KeSelectNodeForAffinity((a4 + 320) & -(__int64)((*(_DWORD *)(a4 + 4) & 0x1000) != 0));
      v18 = *(unsigned __int16 *)(v43 + 146) + 1;
      *(_DWORD *)(a4 + 4) |= 0x4000u;
      *(_DWORD *)(a4 + 252) = KeSelectIdealProcessor(v43, (__int64)v22, 0LL);
      v16 = v61;
      v13 = a3;
      CurrentThread = v67;
    }
LABEL_8:
    if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0
      && (BugCheckParameter1[1].ActiveProcessors.Bitmap[7] || BugCheckParameter1 != CurrentThread->Process) )
    {
      goto LABEL_78;
    }
LABEL_9:
    *(_DWORD *)(a12 + 384) = 0;
    *(_BYTE *)(a12 + 388) = v13;
    if ( v16 )
    {
      if ( BugCheckParameter1 == PsInitialSystemProcess )
      {
LABEL_78:
        v25 = -1073741811;
        goto LABEL_79;
      }
      if ( a2 )
      {
        if ( v13 == 1 && (a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(_DWORD *)(a12 + 384) = *(_DWORD *)(a2 + 24) & (v13 != 0 ? 7666 : 73714);
      }
    }
    else if ( a2 )
    {
      *(_DWORD *)(a12 + 384) = *(_DWORD *)(a2 + 24) & 0x11FF2;
    }
    v55 = PoEnergyEstimationEnabled();
    v23 = v55 != 0 ? 2264 : 2064;
    MaximumGroupCount = KeQueryMaximumGroupCount();
    LODWORD(v60) = 0;
    if ( MaximumGroupCount > 1 )
    {
      LODWORD(v60) = (v55 != 0 ? 2271 : 2071) & 0xFFFFFFF8;
      v23 = (_DWORD)v60 + 8 * MaximumGroupCount;
    }
    v25 = ObCreateObjectEx(a3, PsThreadType, a2, a3, v53, v23, 0, v23, &Object, 0LL);
    v54 = v25;
    if ( v25 < 0 )
      goto LABEL_79;
    v26 = (char *)Object;
    memset(Object, 0, v23);
    if ( v55 )
    {
      *((_QWORD *)v26 + 246) = v26 + 2064;
      _interlockedbittestandset((volatile signed __int32 *)v26, 0x15u);
      v26 = (char *)Object;
    }
    if ( (unsigned int)KeSchedulerAssistThreadFlagEnabled() )
    {
      _interlockedbittestandset((volatile signed __int32 *)v26, 0x16u);
      v26 = (char *)Object;
    }
    v27 = (unsigned int)v60;
    if ( (_DWORD)v60 )
    {
      *((_DWORD *)v26 + 436) |= 0x20000u;
      *((_QWORD *)v26 + 248) = &v26[v27];
    }
    ExInitializePushLock((PKSPIN_LOCK)v26 + 215);
    v60 = v26 + 1592;
    *((_QWORD *)v26 + 199) = BugCheckParameter1[1].Header.WaitListHead.Flink;
    if ( (*a9 & 4) != 0 )
      *((_DWORD *)v26 + 436) |= 4u;
    v28 = (ULONG_PTR)(v26 + 1728);
    BugCheckParameter2 = (ULONG_PTR)(v26 + 1728);
    *((_QWORD *)v26 + 216) = 0LL;
    *((_DWORD *)v26 + 434) = 7;
    KeInitializeSemaphore((PRKSEMAPHORE)(v26 + 1608), 0, 1);
    *((_QWORD *)v26 + 192) = v26 + 1528;
    *((_QWORD *)v26 + 191) = v26 + 1528;
    *((_QWORD *)v26 + 228) = v26 + 1816;
    *((_QWORD *)v26 + 227) = v26 + 1816;
    *((_QWORD *)v26 + 230) = v26 + 1832;
    *((_QWORD *)v26 + 229) = v26 + 1832;
    *((_QWORD *)v26 + 231) = 0LL;
    *((_QWORD *)v26 + 241) = v26 + 1920;
    *((_QWORD *)v26 + 240) = v26 + 1920;
    *((_QWORD *)v26 + 242) = 0LL;
    *((_QWORD *)v26 + 207) = v26 + 1648;
    *((_QWORD *)v26 + 206) = v26 + 1648;
    *((_QWORD *)v26 + 232) = 0LL;
    *((_QWORD *)v26 + 196) = 0LL;
    *((_QWORD *)v26 + 198) = v26 + 1576;
    *((_QWORD *)v26 + 197) = v26 + 1576;
    *((_QWORD *)v26 + 249) = -3LL;
    if ( KeQuerySystemTimeUnsafe() )
    {
      KeQuerySystemTimePrecise((LARGE_INTEGER *)v26 + 190);
    }
    else
    {
      v26 = (char *)Object;
      *((_QWORD *)Object + 190) = MEMORY[0xFFFFF78000000014];
    }
    *((_QWORD *)v26 + 254) = v26 + 2024;
    *((_QWORD *)v26 + 253) = v26 + 2024;
    *((_QWORD *)v26 + 255) = 0LL;
    *((_QWORD *)v26 + 257) = v26 + 2048;
    *((_QWORD *)v26 + 256) = v26 + 2048;
    ExAcquirePushLockExclusiveEx(v28, 0LL);
    Handle = ExCreateHandleEx(PspCidTable, (__int64)v26, 0, 0, 0LL);
    *((_QWORD *)v26 + 200) = Handle;
    if ( !Handle )
    {
      v44 = (volatile signed __int64 *)BugCheckParameter2;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v44);
      KeAbPostRelease((ULONG_PTR)v44);
      v25 = -1073741670;
      v54 = -1073741670;
      v26 = (char *)Object;
      goto LABEL_109;
    }
    v30 = v61;
    if ( !v61 )
    {
      Teb = 0LL;
      v59 = 0LL;
      *((_QWORD *)v26 + 194) = a7;
      *((_QWORD *)v26 + 210) = a7;
      inited = KeInitThread(
                 (unsigned __int64)v26,
                 0LL,
                 (__int64)PspSystemThreadStartup,
                 a7,
                 a8,
                 0LL,
                 0LL,
                 (__int64)BugCheckParameter1,
                 v18);
      goto LABEL_47;
    }
    v31 = *a9;
    v32 = (16 * (*a9 & 0x40)) | 8;
    if ( (*a9 & 2) == 0 )
      v32 = 16 * (v31 & 0x40);
    v33 = v32 | 0x2000;
    if ( (v31 & 0x80u) == 0 )
      v33 = v32;
    v34 = v33 | 0x4000;
    if ( (v31 & 0x100) == 0 )
      v34 = v33;
    v56 = v34;
    v35 = v62;
    if ( !v62 )
    {
      if ( BugCheckParameter1[2].ActiveProcessors.Bitmap[9] )
      {
        v59 = 0LL;
        v45 = *((_QWORD *)v61 + 31);
        *((_QWORD *)v26 + 194) = v45;
        *((_QWORD *)v26 + 210) = v45;
        v46 = v63;
        *((_QWORD *)v26 + 244) = *(_QWORD *)(v63 + 8);
        *((_QWORD *)v26 + 245) = *(_QWORD *)(v46 + 16);
        _interlockedbittestandset((volatile signed __int32 *)v26, 0x1Au);
        RtlGetExtendedContextLength(MEMORY[0xFFFFF780000003D8] != 0LL ? 1048671 : 1048607, &ContextLength);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, ContextLength, 0x63537350u);
        v26 = (char *)Object;
        *((_QWORD *)Object + 251) = PoolWithTag;
        if ( !PoolWithTag )
        {
          v25 = -1073741670;
          v54 = -1073741670;
          goto LABEL_109;
        }
        Teb = v59;
        goto LABEL_46;
      }
      Teb = (__int64)v67->Teb;
      v59 = Teb;
      *((_QWORD *)v26 + 194) = PsQueryThreadStartAddress((__int64)v67, 1);
      *((_QWORD *)v26 + 210) = v67[1].ApcState.ApcListHead[0].Blink;
      *((_DWORD *)v26 + 437) |= 0x10u;
      v48 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
      if ( v48 )
      {
        v49 = 14392LL;
        if ( *(_WORD *)(v48 + 8) != 0x8664 )
          v49 = 12288LL;
        v63 = v49;
      }
      else
      {
        v63 = 6200LL;
      }
      KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v82);
      if ( MmSecureVirtualMemoryEx(Teb, v63, 4, 0) )
      {
        v50 = v60;
        *(_OWORD *)(Teb + 64) = *v60;
        *(_OWORD *)(Teb + 2008) = *v50;
        *(_DWORD *)(Teb + 6044) = 0;
        *(_DWORD *)(Teb + 6120) = 0;
        *(_WORD *)(Teb + 6126) &= 0x62Cu;
        *(_WORD *)(Teb + 6126) |= v56 | 0x40;
        v51 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
        if ( v51 )
        {
          if ( *(_WORD *)(v51 + 8) == 0x8664 )
          {
            v75 = Teb + 0x2000;
            *(_QWORD *)(Teb + 8256) = *(_QWORD *)v50;
            *(_QWORD *)(Teb + 8264) = *((_QWORD *)v26 + 200);
            *(_QWORD *)(Teb + 10200) = *(_QWORD *)v50;
            *(_QWORD *)(Teb + 10208) = *((_QWORD *)v26 + 200);
            *(_DWORD *)(Teb + 14236) = 0;
            *(_DWORD *)(Teb + 14312) = 0;
            *(_WORD *)(Teb + 14318) &= 0x62Cu;
            *(_WORD *)(Teb + 14318) |= v56 | 0x40;
          }
          else
          {
            v76 = Teb + 0x2000;
            v70 = *(_DWORD *)v50;
            *(_DWORD *)(Teb + 8224) = v70;
            v71 = *((_DWORD *)v26 + 400);
            *(_DWORD *)(Teb + 8228) = v71;
            v72 = *(_DWORD *)v50;
            *(_DWORD *)(Teb + 9908) = v72;
            v73 = *((_DWORD *)v26 + 400);
            *(_DWORD *)(Teb + 9912) = v73;
            *(_DWORD *)(Teb + 12188) = 0;
            *(_DWORD *)(Teb + 12228) = 0;
            *(_WORD *)(Teb + 12234) &= 0x62Cu;
            *(_WORD *)(Teb + 12234) |= v56 | 0x40;
          }
        }
      }
      else
      {
        v25 = -1073741503;
        v54 = -1073741503;
      }
LABEL_56:
      KiUnstackDetachProcess((__int64)v82, 0LL);
      if ( v25 < 0 )
        goto LABEL_109;
      goto LABEL_46;
    }
    if ( (BugCheckParameter1[2].ReadyTime & 0x4000) != 0 && (!a4 || (*(_DWORD *)(a4 + 4) & 0x8000) == 0) )
      *((_DWORD *)v26 + 29) |= 0x100000u;
    if ( BugCheckParameter1[1].ActiveProcessors.Bitmap[7] )
    {
      v78[0] = 0;
      v80 = 0x8000LL;
      v81 = 0x40000LL;
      v79 = 0LL;
      v25 = PspSetupUserStack(BugCheckParameter1, v30, v57, v78, v18);
      v54 = v25;
      if ( v25 < 0 )
      {
LABEL_42:
        if ( v25 < 0 )
          goto LABEL_109;
        v25 = MmCreateTeb((ULONG_PTR)BugCheckParameter1, (__int64)&v59);
        v54 = v25;
        if ( v25 < 0 )
          goto LABEL_109;
        *((_QWORD *)v26 + 194) = *((_QWORD *)v30 + 31);
        *((_QWORD *)v26 + 210) = *((_QWORD *)v30 + 16);
        Teb = v59;
        if ( BugCheckParameter1[1].ActiveProcessors.Bitmap[7] )
        {
          v25 = PspWow64InitThread((ULONG_PTR)BugCheckParameter1);
          v54 = v25;
          if ( v25 < 0 )
            goto LABEL_109;
        }
        if ( !v56 )
        {
LABEL_46:
          inited = KeInitThread(
                     (unsigned __int64)v26,
                     0LL,
                     (__int64)PspUserThreadStartup,
                     a7,
                     *((_QWORD *)v26 + 194),
                     v61,
                     Teb,
                     (__int64)BugCheckParameter1,
                     v18);
LABEL_47:
          v54 = inited;
          v25 = inited;
          if ( inited < 0 )
          {
            if ( !Teb || !v62 )
              goto LABEL_109;
          }
          else if ( !a4
                 || (*(_DWORD *)(a4 + 4) & 0x8000) == 0
                 || (LOBYTE(v37) = a3, v25 = PspUmsInitThread(v26, v37, a4, Teb), v54 = v25, v25 >= 0) )
          {
            *v77 = v26;
            return 0LL;
          }
          MmDeleteTeb(BugCheckParameter1, Teb);
LABEL_109:
          if ( v62 && *v62 )
            PspDeleteUserStack(BugCheckParameter1, v37, v57, v62);
          v52 = (void *)*((_QWORD *)v26 + 251);
          if ( v52 )
          {
            ExFreePoolWithTag(v52, 0x63537350u);
            *((_QWORD *)v26 + 251) = 0LL;
          }
          if ( *((_QWORD *)v26 + 200) )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 216, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)v26 + 216);
            KeAbPostRelease((ULONG_PTR)(v26 + 1728));
            v25 = v54;
            v26 = (char *)Object;
          }
          if ( !*((_QWORD *)v26 + 68) )
            ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
          ObfDereferenceObject(v26);
          return (unsigned int)v25;
        }
        KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v82);
        *(_WORD *)(Teb + 6126) = v56;
        v41 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
        if ( v41 )
        {
          if ( *(_WORD *)(v41 + 8) == 0x8664 )
          {
            v75 = Teb + 0x2000;
            *(_WORD *)(Teb + 14318) = v56;
          }
          else
          {
            v76 = Teb + 0x2000;
            *(_WORD *)(Teb + 12234) = v56;
          }
        }
        v25 = 0;
        v54 = 0;
        goto LABEL_56;
      }
      v42 = (int)v62;
      *v62 ^= (v78[0] ^ *v62) & 2;
      v36 = PspWow64SetupUserStack((_DWORD)BugCheckParameter1, v37, v57, v42, v18);
    }
    else
    {
      v36 = PspSetupUserStack(BugCheckParameter1, v30, v57, v35, v18);
    }
    v54 = v36;
    v25 = v36;
    goto LABEL_42;
  }
  if ( !v22 )
  {
    *(_DWORD *)(a4 + 4) = v21 | 0x1000;
    *(_WORD *)(a4 + 328) = *(unsigned __int8 *)(v20 + 208);
    *(_QWORD *)(a4 + 320) = qword_1405426A8[*(unsigned __int8 *)(v20 + 208)];
LABEL_71:
    v18 = *(unsigned __int16 *)(*(_QWORD *)(v20 + 192) + 146LL) + 1;
    goto LABEL_8;
  }
  if ( *(unsigned __int8 *)(v20 + 208) == *(_WORD *)(((a4 + 320) & -(__int64)((*(_DWORD *)(a4 + 4) & 0x1000) != 0)) + 8)
    && (!*v22 || (*v22 & *(_QWORD *)(v20 + 200)) != 0LL) )
  {
    goto LABEL_71;
  }
  v25 = -1073741776;
LABEL_79:
  ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
  return (unsigned int)v25;
}
