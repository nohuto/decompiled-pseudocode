/*
 * XREFs of KeBugCheck2 @ 0x140291380
 * Callers:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400245B0 (MmIsSessionAddress.c)
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     MiIsAddressValid @ 0x140068590 (MiIsAddressValid.c)
 *     KeQueryCurrentStackInformation @ 0x1400CAC30 (KeQueryCurrentStackInformation.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400EDAF0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400EDB30 (KeCopyAffinityEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     MmIsSpecialPoolAddress @ 0x1401671B0 (MmIsSpecialPoolAddress.c)
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KdRefreshDebuggerNotPresent @ 0x140193F90 (KdRefreshDebuggerNotPresent.c)
 *     KiFilterBugCheckInfo @ 0x14019F91C (KiFilterBugCheckInfo.c)
 *     KiMarkBugCheckRegions @ 0x1401A0270 (KiMarkBugCheckRegions.c)
 *     KiYieldWaitForDebugger @ 0x1401B4468 (KiYieldWaitForDebugger.c)
 *     DebugService2 @ 0x1401C5500 (DebugService2.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvlLogGuestCrashInformation @ 0x140271144 (HvlLogGuestCrashInformation.c)
 *     HvlNotifyRootCrashdump @ 0x140274E1C (HvlNotifyRootCrashdump.c)
 *     HvlPrepareForRootCrashdump @ 0x140274EE0 (HvlPrepareForRootCrashdump.c)
 *     IoInitializeBugCheckProgress @ 0x1402801C4 (IoInitializeBugCheckProgress.c)
 *     IoSaveBugCheckProgress @ 0x140280410 (IoSaveBugCheckProgress.c)
 *     IoUpdateBugCheckProgressEnvVariable @ 0x1402806AC (IoUpdateBugCheckProgressEnvVariable.c)
 *     IoWriteCrashDump @ 0x14028079C (IoWriteCrashDump.c)
 *     KdDecodeDataBlock @ 0x14028BD64 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x14028C20C (KdEnableDebuggerWithLock.c)
 *     KeBugCheckUnicodeToAnsi @ 0x140292190 (KeBugCheckUnicodeToAnsi.c)
 *     KiBugCheckDebugBreak @ 0x140292550 (KiBugCheckDebugBreak.c)
 *     KiDisplayBlueScreen @ 0x140292764 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x140292AC4 (KiDumpParameterImages.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x140292C50 (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x140292DF0 (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x140292E8C (KiPcToFileHeader.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x140292F5C (KiSaveCurrentEtwTraceBuffer.c)
 *     KiScanBugCheckCallbackList @ 0x14029307C (KiScanBugCheckCallbackList.c)
 *     KeSaveSupervisorState @ 0x140294468 (KeSaveSupervisorState.c)
 *     KiSendFreeze @ 0x140297BA0 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x140297C64 (KiSendThawExecution.c)
 *     KiSetDebuggerOwner @ 0x140297DF0 (KiSetDebuggerOwner.c)
 *     MmLocateUnloadedDriver @ 0x1402AB368 (MmLocateUnloadedDriver.c)
 *     PopInternalAddToDumpFile @ 0x1402D3514 (PopInternalAddToDumpFile.c)
 *     VfNotifyVerifierOfEvent @ 0x140926D20 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall __noreturn KeBugCheck2(
        int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  const CHAR *v6; // rsi
  __int64 v7; // r14
  unsigned __int8 CurrentIrql; // cl
  signed __int32 v12; // eax
  unsigned int v13; // edx
  signed __int32 v14; // ecx
  char v15; // bl
  bool v16; // r8
  signed __int32 v17; // eax
  unsigned int v18; // edx
  signed __int32 v19; // ecx
  int v20; // ecx
  size_t v21; // r8
  __int128 *v22; // rcx
  __int64 v23; // rdx
  _CONTEXT *Context; // rax
  __int128 v25; // xmm1
  unsigned __int8 v26; // dl
  int IsEmptyAffinity; // eax
  unsigned int v28; // ecx
  const CHAR *v29; // r14
  __int64 v30; // rbx
  int v31; // eax
  struct _KTHREAD *v32; // r15
  __int64 v33; // rax
  __int64 v34; // rcx
  int v35; // eax
  __int64 *v36; // rcx
  unsigned __int64 v37; // r15
  struct _KTHREAD *v38; // rcx
  _KPROCESS *Process; // rcx
  int v40; // r14d
  int v41; // eax
  char v42; // r10
  struct _KPRCB *v43; // rdi
  volatile signed __int32 *SchedulerAssist; // rcx
  bool v45; // si
  int v46; // ecx
  bool v47; // r13
  bool v48; // r14
  unsigned int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int128 *v53; // rax
  __int128 *v54; // rcx
  __int64 v55; // rdx
  __int128 v56; // xmm1
  _QWORD *v57; // rbx
  int v58; // r11d
  _DWORD *CurrentServerSiloGlobals; // rax
  char *v60; // rbx
  unsigned __int16 v61; // ax
  char v62; // bl
  __int64 v63; // rcx
  unsigned __int8 v64; // [rsp+50h] [rbp-B0h]
  char v65; // [rsp+51h] [rbp-AFh]
  char v66; // [rsp+52h] [rbp-AEh] BYREF
  bool v67; // [rsp+53h] [rbp-ADh]
  bool v68; // [rsp+54h] [rbp-ACh]
  bool v69; // [rsp+55h] [rbp-ABh]
  char v70; // [rsp+56h] [rbp-AAh]
  unsigned int v71; // [rsp+58h] [rbp-A8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A0h]
  const CHAR *v73; // [rsp+68h] [rbp-98h]
  int v74; // [rsp+78h] [rbp-88h]
  __int64 v75; // [rsp+80h] [rbp-80h]
  int v76; // [rsp+88h] [rbp-78h]
  struct _KPRCB *CurrentPrcb; // [rsp+90h] [rbp-70h]
  unsigned int v78; // [rsp+98h] [rbp-68h] BYREF
  unsigned int Number; // [rsp+9Ch] [rbp-64h]
  __int64 v80; // [rsp+A0h] [rbp-60h] BYREF
  __int64 (__fastcall *v81)(); // [rsp+A8h] [rbp-58h]
  unsigned __int64 v82; // [rsp+B0h] [rbp-50h] BYREF
  void *Src; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v84[4]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int16 v85[88]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v86[77]; // [rsp+190h] [rbp+90h] BYREF
  char pszDest[176]; // [rsp+660h] [rbp+560h] BYREF

  v6 = (const CHAR *)a5;
  v7 = a6;
  pszDest[0] = 0;
  v71 = a1;
  CurrentThread = KeGetCurrentThread();
  v81 = KiBugCheckProgress;
  v69 = IopAutoReboot != 0;
  LOBYTE(v74) = 0;
  v70 = 0;
  v73 = 0LL;
  v75 = 0LL;
  v67 = 1;
  v68 = 1;
  v76 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    }
  }
  if ( KeGetCurrentThread()->InitialStack )
  {
    v16 = KeQueryCurrentStackInformation(&v78, (char **)&Src, &v82);
    v17 = KiBugCheckActive;
    v18 = (16 * KeGetCurrentPrcb()->Number) | 3;
    while ( (v17 & 3) != 3 )
    {
      v19 = v17;
      v17 = _InterlockedCompareExchange(&KiBugCheckActive, v18, v17);
      if ( v17 == v19 )
      {
        if ( v16 )
        {
          if ( v78 > 9 || (v20 = 929, !_bittest(&v20, v78)) )
          {
            v21 = v82 - (_QWORD)Src;
            if ( v82 - (unsigned __int64)Src > 0x6000 )
              v21 = 24576LL;
            memmove(&KiPreBugcheckStackSaveArea, Src, v21);
          }
        }
LABEL_23:
        v64 = 1;
        goto LABEL_11;
      }
    }
  }
  else
  {
    v12 = KiBugCheckActive;
    v13 = (16 * KeGetCurrentPrcb()->Number) | 3;
    while ( (v12 & 3) != 3 )
    {
      v14 = v12;
      v12 = _InterlockedCompareExchange(&KiBugCheckActive, v13, v12);
      if ( v12 == v14 )
        goto LABEL_23;
    }
  }
  v64 = 0;
LABEL_11:
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  KeSaveSupervisorState(CurrentPrcb->ExtendedSupervisorState, MEMORY[0xFFFFF780000005F0] | 0x100LL);
  if ( !BugCheckParameter4 )
    goto LABEL_12;
  if ( PopSimulateHiberBugcheck )
    PoPowerDownActionInProgress = 0;
  if ( *(_BYTE *)(BugCheckParameter4 + 3) )
  {
    if ( v64 )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A bugcheck occurred during the late stages of hibernate suspend or resume.\n"
        "Due to verification temporarily enabled by Po during this time,\n"
        "regular bugcheck processing may not work.\n"
        "\n");
      if ( v71 == 10 )
        DbgPrintEx(
          0x65u,
          0,
          "Memory was accessed during this time that was not properly marked\n"
          "for the boot phase of hibernate! Check the callstack and parameters\n"
          "to find the pages that need to be marked.\n"
          "\n");
    }
    v15 = 1;
    v81 = 0LL;
  }
  else
  {
LABEL_12:
    v15 = 0;
  }
  v22 = v86;
  v23 = 9LL;
  v65 = v15;
  Context = CurrentPrcb->Context;
  do
  {
    *v22 = *(_OWORD *)&Context->P1Home;
    v22[1] = *(_OWORD *)&Context->P3Home;
    v22[2] = *(_OWORD *)&Context->P5Home;
    v22[3] = *(_OWORD *)&Context->ContextFlags;
    v22[4] = *(_OWORD *)&Context->SegGs;
    v22[5] = *(_OWORD *)&Context->Dr1;
    v22[6] = *(_OWORD *)&Context->Dr3;
    v22 += 8;
    v25 = *(_OWORD *)&Context->Dr7;
    Context = (_CONTEXT *)((char *)Context + 128);
    *(v22 - 1) = v25;
    --v23;
  }
  while ( v23 );
  v26 = v64;
  *v22 = *(_OWORD *)&Context->P1Home;
  v22[1] = *(_OWORD *)&Context->P3Home;
  v22[2] = *(_OWORD *)&Context->P5Home;
  v22[3] = *(_OWORD *)&Context->ContextFlags;
  v22[4] = *(_OWORD *)&Context->SegGs;
  if ( !v64 )
  {
    v32 = CurrentThread;
    goto LABEL_144;
  }
  ((void (__fastcall *)(__int128 *, _QWORD, _QWORD, __int64))off_1403FF608[0])(v22, v64, 0LL, 128LL);
  HvlEnlightenments &= 0x2000u;
  IoSaveBugCheckProgress(0x60u);
  IsEmptyAffinity = KeIsEmptyAffinityEx(KiNmiInProgress);
  ((void (__fastcall *)(bool))off_1403FF3D8[0])(IsEmptyAffinity == 0);
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(2LL);
  if ( !v15 )
    KiSaveCurrentEtwTraceBuffer();
  IoAddTriageDumpDataBlock((int)&KseEngine, 96);
  v28 = v71;
  if ( v71 == 229 )
  {
    KiScanBugCheckCallbackList();
    ((void (__fastcall *)(_QWORD))off_1403FF5E8[0])(0LL);
    HalReturnToFirmware(3LL);
  }
  qword_140422688 = a2;
  qword_140422690 = a3;
  if ( v71 == -1073741103 )
    v28 = 195;
  qword_140422698 = a4;
  KiBugCheckData = v28;
  v71 = v28;
  qword_1404226A0 = a5;
  if ( v28 > 0xCB )
  {
    switch ( v28 )
    {
      case 0xD8u:
        KiBugCheckDriver = a2 + 88;
        goto LABEL_50;
      case 0xEAu:
        KiBugCheckDriver = a4;
        goto LABEL_50;
      case 0xEFu:
        LOBYTE(v74) = 1;
        goto LABEL_50;
    }
    if ( v28 != 252 )
    {
      if ( v28 == 317 )
      {
        v76 = 8;
      }
      else if ( v28 == 335 )
      {
        if ( a3 < 0x100 && a5 )
        {
          v38 = CurrentThread;
          if ( *(_QWORD *)(a5 + 8) )
            v38 = *(struct _KTHREAD **)(a5 + 8);
          CurrentThread = v38;
        }
        Process = KeGetCurrentThread()->ApcState.Process;
        v40 = HIDWORD(Process[2].ActiveProcessors.Bitmap[0]) >> 12;
        LOBYTE(v40) = (Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0;
        v74 = v40;
      }
      goto LABEL_50;
    }
    goto LABEL_104;
  }
  switch ( v28 )
  {
    case 0xCBu:
      v75 = a2;
      goto LABEL_50;
    case 0xAu:
      if ( a5 < ExPoolCodeStart || a5 >= ExPoolCodeEnd )
      {
        KiPcToFileHeader(a5, &v80, 0LL, &v66);
        if ( v66 == 1 )
        {
          if ( KiPcToFileHeader(a2, &v80, 1LL, &v66) )
          {
            KiBugCheckData = 211LL;
            KiBugCheckDriver = v80 + 88;
          }
          else
          {
            KiBugCheckDriver = MmLocateUnloadedDriver(a2);
            if ( KiBugCheckDriver )
              KiBugCheckData = 212LL;
          }
        }
        else
        {
          KiBugCheckData = 209LL;
        }
      }
      else
      {
        KiBugCheckData = 197LL;
      }
      v75 = 0LL;
      goto LABEL_50;
    case 0x4Cu:
      v36 = &qword_140422688;
      KiBugCheckData = (unsigned int)a2;
      v37 = a3 - (_QWORD)&qword_140422688;
      LOBYTE(v74) = 1;
      v29 = (const CHAR *)a4;
      v70 = 1;
      do
      {
        *v36 = *(__int64 *)((char *)v36 + v37);
        ++v36;
      }
      while ( (__int64)v36 < (__int64)&KiHardwareTrigger );
      goto LABEL_114;
  }
  if ( v28 != 80 )
  {
    if ( v28 == 123 )
    {
      v67 = (a4 & 1) == 0;
      v68 = (a4 & 2) == 0;
      goto LABEL_50;
    }
    if ( v28 != 142 && v28 != 190 )
      goto LABEL_50;
LABEL_104:
    v6 = 0LL;
    if ( !a6 )
    {
      if ( !a4 || (a4 & 3) != 0 )
        goto LABEL_50;
      v7 = a4;
    }
    if ( v28 != 142 )
    {
      v75 = *(_QWORD *)(v7 + 360);
      if ( KeGetCurrentThread()->ApcStateIndex == 1 )
      {
        LOBYTE(v41) = MmIsSessionAddress(v75);
        if ( !v41 )
        {
LABEL_113:
          v29 = 0LL;
          goto LABEL_114;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        {
          LOBYTE(v74) = 1;
          goto LABEL_113;
        }
      }
    }
LABEL_50:
    v29 = v73;
    v6 = v73;
LABEL_114:
    v32 = CurrentThread;
    goto LABEL_115;
  }
  v6 = 0LL;
  v30 = 0LL;
  if ( !a6 )
  {
    if ( !a4 || (a4 & 3) != 0 )
    {
      v66 = 1;
      goto LABEL_60;
    }
    v7 = a4;
  }
  v75 = *(_QWORD *)(v7 + 360);
  qword_140422698 = v75;
  v30 = KiPcToFileHeader(v75, &v80, 0LL, &v66);
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    LOBYTE(v31) = MmIsSessionAddress(v75);
    if ( v31 )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        LOBYTE(v74) = 1;
    }
  }
LABEL_60:
  if ( MmIsSpecialPoolAddress(a2) )
  {
    v15 = v65;
    v32 = CurrentThread;
    v29 = 0LL;
    if ( ((a2 >> 9) & 8) != 0 )
    {
      v33 = 214LL;
      v34 = 205LL;
    }
    else
    {
      v33 = 213LL;
      v34 = 204LL;
    }
    if ( v66 == 1 )
      v33 = v34;
    KiBugCheckData = v33;
    goto LABEL_115;
  }
  if ( v75 == a2 )
  {
    LOBYTE(v35) = MmIsSessionAddress(a2);
    v32 = CurrentThread;
    if ( v35 == 1 && (unsigned __int64)CurrentThread->Teb - 1 > 0xFFFF7FFFFFFFFFFEuLL )
    {
      KiBugCheckData = 207LL;
LABEL_72:
      v15 = v65;
      v29 = 0LL;
      goto LABEL_115;
    }
  }
  else
  {
    v32 = CurrentThread;
  }
  if ( v30 )
    goto LABEL_72;
  v15 = v65;
  v29 = 0LL;
  KiBugCheckDriver = MmLocateUnloadedDriver(a2);
  if ( KiBugCheckDriver )
    KiBugCheckData = 206LL;
LABEL_115:
  KiFilterBugCheckInfo(&v71, (__int64)&KiBugCheckData);
  HvlLogGuestCrashInformation(KiBugCheckData, qword_140422688, qword_140422690, qword_140422698, qword_1404226A0);
  v42 = 0;
  if ( KiBugCheckDriver )
  {
    KeBugCheckUnicodeToAnsi(KiBugCheckDriver, pszDest);
  }
  else if ( v75 )
  {
    KiDumpParameterImages(pszDest);
    v42 = 0;
  }
  if ( KdPitchDebugger == v42 )
    qword_1403FFAA8 = (__int64)v86;
  if ( v71 == 226
    || (_BYTE)KdDebuggerEnabled == v42 && KdEventLoggingEnabled == v42
    || KiHypervisorInitiatedCrashDump != v42
    || KdRefreshDebuggerNotPresent() && !KdEventLoggingPresent )
  {
    v26 = v64;
LABEL_144:
    v43 = CurrentPrcb;
    goto LABEL_145;
  }
  v43 = CurrentPrcb;
  if ( !CurrentPrcb->NmiActive )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
      KiBugCheckData,
      (const void *)qword_140422688,
      (const void *)qword_140422690,
      (const void *)qword_140422698,
      (const void *)qword_1404226A0);
    if ( KiBugCheckDriver )
      DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
    if ( v70 )
    {
      if ( v29 )
        DbgPrintEx(0x65u, 0, v29);
      if ( v6 )
        DbgPrintEx(0x65u, 0, v6);
    }
  }
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    KiBugCheckDebugBreak(3u);
  v26 = v64;
LABEL_145:
  _disable();
  SchedulerAssist = (volatile signed __int32 *)KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)SchedulerAssist < 2u )
  {
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    _InterlockedOr(SchedulerAssist, 0x10000u);
  }
  if ( v26 )
  {
    if ( (unsigned int)KeNumberProcessors_0 > 1 && !KiHypervisorInitiatedCrashDump )
    {
      KiSetDebuggerOwner(v43);
      KeCopyAffinityEx((__int64)v85, (unsigned __int16 *)KeActiveProcessors);
      KeRemoveProcessorAffinityEx(v85, v43->Number);
      KiSendFreeze(v85, 0LL);
      KeStallExecutionProcessor(0xF4240u);
    }
    IoInitializeBugCheckProgress(v71, a2);
    IoSaveBugCheckProgress(1u);
    if ( v15 )
    {
      v45 = v68;
      v48 = v67;
      v47 = v69;
    }
    else
    {
      v45 = v68;
      if ( CrashdmpDumpBlock && v68 )
        v46 = v76;
      else
        v46 = v76 | 4;
      v47 = v69;
      v48 = v67;
      v49 = v46 | 2;
      if ( v69 )
        v49 = v46;
      v50 = v49 | 1;
      if ( v67 )
        v50 = v49;
      KiDisplayBlueScreen(v50);
    }
    HvlPrepareForRootCrashdump();
    if ( !v15 )
    {
      KiInvokeBugCheckEntryCallbacks(v52, v51, 0LL);
      IoSaveBugCheckProgress(2u);
      KiInvokeBugCheckAddTriageDumpDataCallbacks();
      IoSaveBugCheckProgress(5u);
    }
    if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
      KdEnableDebuggerWithLock(0);
    v53 = (__int128 *)v43->Context;
    v54 = v86;
    v55 = 9LL;
    do
    {
      *v53 = *v54;
      v53[1] = v54[1];
      v53[2] = v54[2];
      v53[3] = v54[3];
      v53[4] = v54[4];
      v53[5] = v54[5];
      v53[6] = v54[6];
      v53 += 8;
      v56 = v54[7];
      v54 += 8;
      *(v53 - 1) = v56;
      --v55;
    }
    while ( v55 );
    *v53 = *v54;
    v53[1] = v54[1];
    v53[2] = v54[2];
    v53[3] = v54[3];
    v53[4] = v54[4];
    if ( v45 )
    {
      if ( v71 == 265 )
      {
        KiMarkBugCheckRegions(qword_140422688, qword_140422690, qword_140422698, qword_1404226A0);
        if ( qword_1404226A0 == 47 )
        {
          v57 = (_QWORD *)(qword_140422698 + 1544);
          if ( MiIsAddressValid(qword_140422698 + 1544) )
            IoAddTriageDumpDataBlock(*v57, 4096);
        }
      }
      KdDecodeDataBlock();
      v58 = v71;
      if ( v71 == 395 )
      {
        if ( qword_140422688 != 396 || !KdpBreakpointChangeCount )
        {
LABEL_184:
          IoWriteCrashDump(
            KiBugCheckData,
            qword_140422688,
            qword_140422690,
            qword_140422698,
            qword_1404226A0,
            v86,
            v32,
            (__int64)v81,
            v74);
          IoSaveBugCheckProgress(3u);
          v15 = v65;
          goto LABEL_194;
        }
        IoAddTriageDumpDataBlock((int)&KdpBreakpointChangeCount, 4);
        v58 = v71;
      }
      if ( v58 == 239 )
      {
        PopInternalAddToDumpFile(0LL, 0LL, 0LL);
        CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
        v60 = (char *)(CurrentServerSiloGlobals + 298);
        if ( CurrentServerSiloGlobals[298] )
        {
          IoAddTriageDumpDataBlock((_DWORD)CurrentServerSiloGlobals + 1192, 48);
          v61 = *((_WORD *)v60 + 8);
          if ( v61 )
            IoAddTriageDumpDataBlock(*((_QWORD *)v60 + 3), v61);
        }
      }
      goto LABEL_184;
    }
  }
  else
  {
    v62 = KiBugCheckActive;
    if ( Number != (unsigned int)KiBugCheckActive >> 4 )
      KiYieldWaitForDebugger();
    if ( KiHypervisorInitiatedCrashDump || (KiBugCheckActive & 0xCu) >= 8 )
    {
      while ( 1 )
        ((void (__fastcall *)(volatile signed __int32 *))off_1403FF318)(SchedulerAssist);
    }
    if ( CrashdmpDumpBlock )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1404) |= 0x20000u;
      IoUpdateBugCheckProgressEnvVariable();
    }
    _InterlockedExchangeAdd(&KiBugCheckActive, 4u);
    if ( (v62 & 0xC) != 0 )
      KiBugCheckDebugBreak(4u);
    v15 = v65;
    v48 = v67;
    v47 = v69;
  }
LABEL_194:
  if ( !VslVsmEnabled )
  {
    if ( (HvlpFlags & 2) != 0 )
      HvlNotifyRootCrashdump(2);
    HvlEnlightenments = HvlpEnlightenments;
    off_1403FF4E8[0]();
  }
  IoSaveBugCheckProgress(0x63u);
  if ( !v15 )
    KiScanBugCheckCallbackList();
  off_1403FF5F8[0]();
  IoSaveBugCheckProgress(4u);
  if ( v47 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0LL);
    if ( !KiHypervisorInitiatedCrashDump )
    {
      v84[0] = -1LL;
      v84[2] = 0LL;
      v84[1] = 0LL;
      DebugService2(0LL, (__int64)v84, 4u);
    }
    ((void (__fastcall *)(_QWORD))off_1403FF5E8[0])(0LL);
    if ( (!PoPowerDownActionInProgress || PoPowerResetActionInProgress) && v48 )
      v63 = 3LL;
    else
      v63 = 1LL;
    HalReturnToFirmware(v63);
  }
  KiBugCheckDebugBreak(4u);
}
