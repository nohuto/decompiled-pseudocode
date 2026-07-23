/*
 * XREFs of PspAllocateThread @ 0x14060F754
 * Callers:
 *     PspCreateThread @ 0x14060E80C (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x1408CA150 (PspCreatePicoThread.c)
 * Callees:
 *     KeInitializeSemaphore @ 0x14000A420 (KeInitializeSemaphore.c)
 *     PoEnergyEstimationEnabled @ 0x14000E540 (PoEnergyEstimationEnabled.c)
 *     RtlGetExtendedContextLength @ 0x140017050 (RtlGetExtendedContextLength.c)
 *     KeSelectIdealProcessor @ 0x14001C5E4 (KeSelectIdealProcessor.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     KeQuerySystemTimeUnsafe @ 0x140082404 (KeQuerySystemTimeUnsafe.c)
 *     ExInitializePushLock @ 0x140082420 (ExInitializePushLock.c)
 *     KeQueryMaximumGroupCount @ 0x140082430 (KeQueryMaximumGroupCount.c)
 *     KeQuerySystemTimePrecise @ 0x140082440 (KeQuerySystemTimePrecise.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     KeSelectNodeForAffinity @ 0x1400FCB50 (KeSelectNodeForAffinity.c)
 *     PsQueryThreadStartAddress @ 0x14011CB30 (PsQueryThreadStartAddress.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     KeInitThread @ 0x1405952E0 (KeInitThread.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     ExCreateHandleEx @ 0x1405E71E0 (ExCreateHandleEx.c)
 *     MmCreateTeb @ 0x14061001C (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1406105A0 (PspSetupUserStack.c)
 *     MmDeleteTeb @ 0x14067F450 (MmDeleteTeb.c)
 *     MmSecureVirtualMemoryEx @ 0x1406BE4E0 (MmSecureVirtualMemoryEx.c)
 *     PspWow64InitThread @ 0x1406C7EC0 (PspWow64InitThread.c)
 *     PspWow64SetupUserStack @ 0x1406DCC28 (PspWow64SetupUserStack.c)
 *     PspDeleteUserStack @ 0x1406EB994 (PspDeleteUserStack.c)
 *     PspUmsInitThread @ 0x1408C8AAC (PspUmsInitThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspAllocateThread(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        unsigned __int8 a3,
        __int64 a4,
        _DWORD *a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _QWORD *a10,
        _BYTE *a11,
        __int64 a12)
{
  struct _KTHREAD *CurrentThread; // r9
  int v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // r8d
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  unsigned int v22; // ebx
  unsigned int MaximumGroupCount; // ecx
  int Teb; // r14d
  char *v25; // rsi
  __int64 v26; // rax
  int v27; // eax
  ULONG_PTR v28; // rbx
  __int64 Handle; // rax
  _DWORD *v30; // rbx
  int v31; // r8d
  __int16 v32; // dx
  __int16 v33; // cx
  __int16 v34; // ax
  int v35; // eax
  __int64 v36; // rbx
  int inited; // eax
  __int64 v38; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  volatile signed __int64 *v42; // rsi
  signed __int64 v43; // rax
  __int64 v44; // rax
  _QWORD *v45; // rcx
  PVOID PoolWithTag; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  _OWORD *v49; // r8
  __int64 v50; // rcx
  void *v51; // rcx
  char v52; // bl
  __int64 v53; // [rsp+20h] [rbp-178h]
  int v54; // [rsp+50h] [rbp-148h]
  char v55; // [rsp+54h] [rbp-144h]
  __int16 v56; // [rsp+54h] [rbp-144h]
  PVOID Object; // [rsp+68h] [rbp-130h] BYREF
  __int64 v58; // [rsp+70h] [rbp-128h] BYREF
  __int64 v59; // [rsp+78h] [rbp-120h]
  _BYTE *v60; // [rsp+80h] [rbp-118h]
  _DWORD *v61; // [rsp+88h] [rbp-110h]
  __int64 v62; // [rsp+90h] [rbp-108h]
  __int64 v63; // [rsp+98h] [rbp-100h]
  __int64 v64; // [rsp+A0h] [rbp-F8h]
  ULONG ContextLength; // [rsp+A8h] [rbp-F0h] BYREF
  _QWORD *v66; // [rsp+B0h] [rbp-E8h]
  ULONG_PTR v67; // [rsp+B8h] [rbp-E0h]
  __int64 v68; // [rsp+C0h] [rbp-D8h]
  ULONG_PTR BugCheckParameter2; // [rsp+C8h] [rbp-D0h]
  char v70; // [rsp+D0h] [rbp-C8h]
  int v71; // [rsp+D1h] [rbp-C7h]
  __int16 v72; // [rsp+D5h] [rbp-C3h]
  char v73; // [rsp+D7h] [rbp-C1h]
  __int64 v74; // [rsp+D8h] [rbp-C0h]
  __int64 v75; // [rsp+E0h] [rbp-B8h]
  __int64 v76; // [rsp+E8h] [rbp-B0h]
  int v77; // [rsp+F0h] [rbp-A8h]
  int v78; // [rsp+F4h] [rbp-A4h]
  int v79; // [rsp+F8h] [rbp-A0h]
  int v80; // [rsp+FCh] [rbp-9Ch]
  __int64 v81; // [rsp+100h] [rbp-98h]
  __int64 v82; // [rsp+108h] [rbp-90h]
  _QWORD *v83; // [rsp+110h] [rbp-88h]
  signed __int64 v84; // [rsp+118h] [rbp-80h]
  _BYTE v85[48]; // [rsp+120h] [rbp-78h] BYREF

  v67 = BugCheckParameter1;
  BugCheckParameter2 = a2;
  v68 = a4;
  v61 = a5;
  v66 = a6;
  v83 = a10;
  v60 = a11;
  v59 = a12;
  memset(v85, 0, sizeof(v85));
  v63 = 0LL;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  CurrentThread = KeGetCurrentThread();
  v62 = (__int64)CurrentThread;
  v16 = 0;
  if ( a6 )
    v17 = *v66;
  else
    v17 = 0LL;
  v64 = v17;
  if ( !a4 )
    goto LABEL_9;
  v18 = 0LL;
  v19 = *(_DWORD *)(a4 + 4);
  v20 = (_QWORD *)((a4 + 320) & -(__int64)((v19 & 0x1000) != 0));
  if ( (v19 & 0x4000) != 0 )
    v18 = KiProcessorBlock[*(unsigned int *)(a4 + 252)];
  if ( !v18 )
  {
    if ( v20 && *v20 )
    {
      v41 = KeSelectNodeForAffinity((a4 + 320) & -(__int64)((*(_DWORD *)(a4 + 4) & 0x1000) != 0));
      v16 = *(unsigned __int16 *)(v41 + 146) + 1;
      *(_DWORD *)(a4 + 4) |= 0x4000u;
      *(_DWORD *)(a4 + 252) = (unsigned __int16)KeSelectIdealProcessor(v41, v20, 0LL, 0LL);
      CurrentThread = (struct _KTHREAD *)v62;
    }
LABEL_8:
    if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0
      && (*(_QWORD *)(BugCheckParameter1 + 1064) || (_KPROCESS *)BugCheckParameter1 != CurrentThread->Process) )
    {
      goto LABEL_80;
    }
LABEL_9:
    v21 = v59;
    *(_DWORD *)(v59 + 384) = 0;
    *(_BYTE *)(v21 + 388) = a3;
    if ( a5 )
    {
      if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
      {
LABEL_80:
        Teb = -1073741811;
        goto LABEL_81;
      }
      if ( a2 )
      {
        if ( a3 == 1 && (a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(_DWORD *)(v21 + 384) = *(_DWORD *)(a2 + 24) & (a3 != 0 ? 7666 : 73714);
      }
    }
    else if ( a2 )
    {
      *(_DWORD *)(v21 + 384) = *(_DWORD *)(a2 + 24) & 0x11FF2;
    }
    v55 = PoEnergyEstimationEnabled();
    v22 = v55 != 0 ? 2280 : 2080;
    MaximumGroupCount = KeQueryMaximumGroupCount();
    LODWORD(v59) = 0;
    if ( MaximumGroupCount > 1 )
    {
      LODWORD(v59) = (v55 != 0 ? 2287 : 2087) & 0xFFFFFFF8;
      v22 = v59 + 8 * MaximumGroupCount;
    }
    Teb = ObCreateObjectEx(a3, PsThreadType, a2, a3, v53, v22, 0, v22, &Object, 0LL);
    v54 = Teb;
    if ( Teb < 0 )
      goto LABEL_81;
    v25 = (char *)Object;
    memset(Object, 0, v22);
    if ( v55 )
    {
      *((_QWORD *)v25 + 248) = v25 + 2080;
      _interlockedbittestandset((volatile signed __int32 *)v25, 0x15u);
      v25 = (char *)Object;
    }
    if ( KiSchedulerAssistThreadFlagEnabled )
    {
      _interlockedbittestandset((volatile signed __int32 *)v25, 0x16u);
      v25 = (char *)Object;
    }
    v26 = (unsigned int)v59;
    if ( (_DWORD)v59 )
    {
      *((_DWORD *)v25 + 440) |= 0x20000u;
      *((_QWORD *)v25 + 250) = &v25[v26];
    }
    ExInitializePushLock((PKSPIN_LOCK)v25 + 217);
    v59 = (__int64)(v25 + 1608);
    *((_QWORD *)v25 + 201) = *(_QWORD *)(BugCheckParameter1 + 744);
    v27 = *a9;
    if ( (*a9 & 4) != 0 )
    {
      *((_DWORD *)v25 + 440) |= 4u;
      v27 = *a9;
    }
    if ( (v27 & 0x200) != 0 )
      *((_DWORD *)v25 + 29) |= 0x200000u;
    v28 = (ULONG_PTR)(v25 + 1744);
    BugCheckParameter2 = (ULONG_PTR)(v25 + 1744);
    *((_QWORD *)v25 + 218) = 0LL;
    *((_DWORD *)v25 + 438) = 7;
    KeInitializeSemaphore((PRKSEMAPHORE)(v25 + 1624), 0, 1);
    *((_QWORD *)v25 + 194) = v25 + 1544;
    *((_QWORD *)v25 + 193) = v25 + 1544;
    *((_QWORD *)v25 + 230) = v25 + 1832;
    *((_QWORD *)v25 + 229) = v25 + 1832;
    *((_QWORD *)v25 + 232) = v25 + 1848;
    *((_QWORD *)v25 + 231) = v25 + 1848;
    *((_QWORD *)v25 + 233) = 0LL;
    *((_QWORD *)v25 + 243) = v25 + 1936;
    *((_QWORD *)v25 + 242) = v25 + 1936;
    *((_QWORD *)v25 + 244) = 0LL;
    *((_QWORD *)v25 + 209) = v25 + 1664;
    *((_QWORD *)v25 + 208) = v25 + 1664;
    *((_QWORD *)v25 + 234) = 0LL;
    *((_QWORD *)v25 + 198) = 0LL;
    *((_QWORD *)v25 + 200) = v25 + 1592;
    *((_QWORD *)v25 + 199) = v25 + 1592;
    *((_QWORD *)v25 + 251) = -3LL;
    if ( KeQuerySystemTimeUnsafe() )
    {
      KeQuerySystemTimePrecise((__int64 *)v25 + 192);
    }
    else
    {
      v25 = (char *)Object;
      *((_QWORD *)Object + 192) = MEMORY[0xFFFFF78000000014];
    }
    *((_QWORD *)v25 + 256) = v25 + 2040;
    *((_QWORD *)v25 + 255) = v25 + 2040;
    *((_QWORD *)v25 + 257) = 0LL;
    *((_QWORD *)v25 + 259) = v25 + 2064;
    *((_QWORD *)v25 + 258) = v25 + 2064;
    ExAcquirePushLockExclusiveEx(v28, 0LL);
    Handle = ExCreateHandleEx(PspCidTable, (__int64)v25, 0, 0, 0LL);
    *((_QWORD *)v25 + 202) = Handle;
    if ( !Handle )
    {
      v42 = (volatile signed __int64 *)BugCheckParameter2;
      v43 = _InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
      v84 = v43;
      if ( (v43 & 2) != 0 && (v43 & 4) == 0 )
        ExfTryToWakePushLock(v42);
      KeAbPostRelease((ULONG_PTR)v42);
      Teb = -1073741670;
      v54 = -1073741670;
      v25 = (char *)Object;
      goto LABEL_112;
    }
    v30 = v61;
    if ( !v61 )
    {
      v36 = 0LL;
      v58 = 0LL;
      *((_QWORD *)v25 + 196) = a7;
      *((_QWORD *)v25 + 212) = a7;
      inited = KeInitThread(
                 (unsigned __int64)v25,
                 0LL,
                 (__int64)PspSystemThreadStartup,
                 a7,
                 a8,
                 0LL,
                 0LL,
                 BugCheckParameter1,
                 v16);
      goto LABEL_49;
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
    if ( !v60 )
    {
      if ( *(_QWORD *)(BugCheckParameter1 + 1856) )
      {
        v58 = 0LL;
        v44 = *((_QWORD *)v61 + 31);
        *((_QWORD *)v25 + 196) = v44;
        *((_QWORD *)v25 + 212) = v44;
        v45 = v66;
        *((_QWORD *)v25 + 246) = v66[1];
        *((_QWORD *)v25 + 247) = v45[2];
        _interlockedbittestandset((volatile signed __int32 *)v25, 0x1Au);
        RtlGetExtendedContextLength(MEMORY[0xFFFFF780000003D8] != 0LL ? 1048671 : 1048607, &ContextLength);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, ContextLength, 0x63537350u);
        v25 = (char *)Object;
        *((_QWORD *)Object + 253) = PoolWithTag;
        if ( !PoolWithTag )
        {
          Teb = -1073741670;
          v54 = -1073741670;
          goto LABEL_112;
        }
        v36 = v58;
        goto LABEL_48;
      }
      v36 = *(_QWORD *)(v62 + 240);
      v58 = v36;
      *((_QWORD *)v25 + 196) = PsQueryThreadStartAddress(v62, 1);
      *((_QWORD *)v25 + 212) = *(_QWORD *)(v62 + 1696);
      *((_DWORD *)v25 + 441) |= 0x10u;
      v47 = *(_QWORD *)(BugCheckParameter1 + 1064);
      if ( v47 )
      {
        v48 = 14392LL;
        if ( *(_WORD *)(v47 + 8) != 0x8664 )
          v48 = 12288LL;
        v62 = v48;
      }
      else
      {
        v62 = 6200LL;
      }
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v85);
      if ( MmSecureVirtualMemoryEx(v36, v62, 4LL) )
      {
        v49 = (_OWORD *)v59;
        *(_OWORD *)(v36 + 64) = *(_OWORD *)v59;
        *(_OWORD *)(v36 + 2008) = *v49;
        *(_DWORD *)(v36 + 6044) = 0;
        *(_DWORD *)(v36 + 6120) = 0;
        *(_WORD *)(v36 + 6126) &= 0x62Cu;
        *(_WORD *)(v36 + 6126) |= v56 | 0x40;
        v50 = *(_QWORD *)(BugCheckParameter1 + 1064);
        if ( v50 )
        {
          if ( *(_WORD *)(v50 + 8) == 0x8664 )
          {
            v81 = v36 + 0x2000;
            *(_QWORD *)(v36 + 8256) = *(_QWORD *)v49;
            *(_QWORD *)(v36 + 8264) = *((_QWORD *)v25 + 202);
            *(_QWORD *)(v36 + 10200) = *(_QWORD *)v49;
            *(_QWORD *)(v36 + 10208) = *((_QWORD *)v25 + 202);
            *(_DWORD *)(v36 + 14236) = 0;
            *(_DWORD *)(v36 + 14312) = 0;
            *(_WORD *)(v36 + 14318) &= 0x62Cu;
            *(_WORD *)(v36 + 14318) |= v56 | 0x40;
          }
          else
          {
            v82 = v36 + 0x2000;
            v77 = *(_DWORD *)v49;
            *(_DWORD *)(v36 + 8224) = v77;
            v78 = *((_DWORD *)v25 + 404);
            *(_DWORD *)(v36 + 8228) = v78;
            v79 = *(_DWORD *)v49;
            *(_DWORD *)(v36 + 9908) = v79;
            v80 = *((_DWORD *)v25 + 404);
            *(_DWORD *)(v36 + 9912) = v80;
            *(_DWORD *)(v36 + 12188) = 0;
            *(_DWORD *)(v36 + 12228) = 0;
            *(_WORD *)(v36 + 12234) &= 0x62Cu;
            *(_WORD *)(v36 + 12234) |= v56 | 0x40;
          }
        }
      }
      else
      {
        Teb = -1073741503;
        v54 = -1073741503;
      }
LABEL_58:
      KiUnstackDetachProcess((struct _KTHREAD *)v85, 0);
      if ( Teb < 0 )
        goto LABEL_112;
      goto LABEL_48;
    }
    if ( (*(_DWORD *)(BugCheckParameter1 + 2132) & 0x4000) != 0 && (!a4 || (*(_DWORD *)(a4 + 4) & 0x8000) == 0) )
      *((_DWORD *)v25 + 29) |= 0x100000u;
    if ( *(_QWORD *)(BugCheckParameter1 + 1064) )
    {
      v70 = 0;
      v75 = 0x8000LL;
      v76 = 0x40000LL;
      v74 = 0LL;
      Teb = PspSetupUserStack(BugCheckParameter1, v16);
      v54 = Teb;
      if ( Teb < 0 )
      {
LABEL_44:
        if ( Teb < 0 )
          goto LABEL_112;
        Teb = MmCreateTeb(BugCheckParameter1, (__int64)&v58);
        v54 = Teb;
        if ( Teb < 0 )
          goto LABEL_112;
        *((_QWORD *)v25 + 196) = *((_QWORD *)v30 + 31);
        *((_QWORD *)v25 + 212) = *((_QWORD *)v30 + 16);
        v36 = v58;
        if ( *(_QWORD *)(BugCheckParameter1 + 1064) )
        {
          Teb = PspWow64InitThread(BugCheckParameter1);
          v54 = Teb;
          if ( Teb < 0 )
            goto LABEL_112;
        }
        if ( !v56 )
        {
LABEL_48:
          inited = KeInitThread(
                     (unsigned __int64)v25,
                     0LL,
                     (__int64)PspUserThreadStartup,
                     a7,
                     *((_QWORD *)v25 + 196),
                     v61,
                     v36,
                     BugCheckParameter1,
                     v16);
LABEL_49:
          v54 = inited;
          Teb = inited;
          if ( inited < 0 )
          {
            if ( !v36 || !v60 )
              goto LABEL_112;
          }
          else if ( !a4
                 || (*(_DWORD *)(a4 + 4) & 0x8000) == 0
                 || (LOBYTE(v38) = a3, Teb = PspUmsInitThread(v25, v38, a4, v36), v54 = Teb, Teb >= 0) )
          {
            *v83 = v25;
            return 0LL;
          }
          MmDeleteTeb(BugCheckParameter1);
LABEL_112:
          if ( v60 && *v60 )
            PspDeleteUserStack(BugCheckParameter1);
          v51 = (void *)*((_QWORD *)v25 + 253);
          if ( v51 )
          {
            ExFreePoolWithTag(v51, 0x63537350u);
            *((_QWORD *)v25 + 253) = 0LL;
          }
          if ( *((_QWORD *)v25 + 202) )
          {
            v52 = _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 218, 0xFFFFFFFFFFFFFFFFuLL);
            if ( (v52 & 2) != 0 && (v52 & 4) == 0 )
              ExfTryToWakePushLock((volatile signed __int64 *)v25 + 218);
            KeAbPostRelease((ULONG_PTR)(v25 + 1744));
            Teb = v54;
            v25 = (char *)Object;
          }
          if ( !*((_QWORD *)v25 + 68) )
            ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
          ObfDereferenceObject(v25);
          return (unsigned int)Teb;
        }
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v85);
        *(_WORD *)(v36 + 6126) = v56;
        v40 = *(_QWORD *)(BugCheckParameter1 + 1064);
        if ( v40 )
        {
          if ( *(_WORD *)(v40 + 8) == 0x8664 )
          {
            v81 = v36 + 0x2000;
            *(_WORD *)(v36 + 14318) = v56;
          }
          else
          {
            v82 = v36 + 0x2000;
            *(_WORD *)(v36 + 12234) = v56;
          }
        }
        Teb = 0;
        v54 = 0;
        goto LABEL_58;
      }
      *v60 ^= (v70 ^ *v60) & 2;
      v35 = PspWow64SetupUserStack(BugCheckParameter1, v16);
    }
    else
    {
      v35 = PspSetupUserStack(BugCheckParameter1, v16);
    }
    v54 = v35;
    Teb = v35;
    goto LABEL_44;
  }
  if ( !v20 )
  {
    *(_DWORD *)(a4 + 4) = v19 | 0x1000;
    *(_WORD *)(a4 + 328) = *(unsigned __int8 *)(v18 + 208);
    *(_QWORD *)(a4 + 320) = qword_140572748[*(unsigned __int8 *)(v18 + 208)];
LABEL_73:
    v16 = *(unsigned __int16 *)(*(_QWORD *)(v18 + 192) + 146LL) + 1;
    goto LABEL_8;
  }
  if ( *(unsigned __int8 *)(v18 + 208) == *(_WORD *)(((a4 + 320) & -(__int64)((*(_DWORD *)(a4 + 4) & 0x1000) != 0)) + 8)
    && (!*v20 || (*v20 & *(_QWORD *)(v18 + 200)) != 0LL) )
  {
    goto LABEL_73;
  }
  Teb = -1073741776;
LABEL_81:
  ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
  return (unsigned int)Teb;
}
