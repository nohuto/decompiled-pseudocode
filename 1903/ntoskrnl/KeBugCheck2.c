/*
 * XREFs of KeBugCheck2 @ 0x1402A7B60
 * Callers:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14001B7E0 (KeQueryCurrentStackInformation.c)
 *     MmIsSessionAddress @ 0x14009EE80 (MmIsSessionAddress.c)
 *     KeRemoveProcessorAffinityEx @ 0x1400BA2E0 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x1400BA320 (KeCopyAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x1400BE2F0 (KeIsEmptyAffinityEx.c)
 *     DbgPrintEx @ 0x1401264A0 (DbgPrintEx.c)
 *     KdRefreshDebuggerNotPresent @ 0x140181F30 (KdRefreshDebuggerNotPresent.c)
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     KiFilterBugCheckInfo @ 0x1401AA0DC (KiFilterBugCheckInfo.c)
 *     KiMarkBugCheckRegions @ 0x1401AAA5C (KiMarkBugCheckRegions.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlLogGuestCrashInformation @ 0x140284CB4 (HvlLogGuestCrashInformation.c)
 *     HvlNotifyRootCrashdump @ 0x140288CEC (HvlNotifyRootCrashdump.c)
 *     HvlPrepareForRootCrashdump @ 0x140288DC0 (HvlPrepareForRootCrashdump.c)
 *     IoInitializeBugCheckProgress @ 0x140295154 (IoInitializeBugCheckProgress.c)
 *     IoSaveBugCheckProgress @ 0x1402953B0 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x1402954E8 (IoSetBugCheckProgressFlag.c)
 *     IoWriteCrashDump @ 0x14029580C (IoWriteCrashDump.c)
 *     KdDecodeDataBlock @ 0x1402A1C00 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x1402A20AC (KdEnableDebuggerWithLock.c)
 *     KiCheckForFreezeExecution @ 0x1402A419C (KiCheckForFreezeExecution.c)
 *     KiBugCheckDebugBreak @ 0x1402A8DA0 (KiBugCheckDebugBreak.c)
 *     KiBugCheckUnicodeToAnsi @ 0x1402A8FC4 (KiBugCheckUnicodeToAnsi.c)
 *     KiDisplayBlueScreen @ 0x1402A9008 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x1402A9390 (KiDumpParameterImages.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1402A951C (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1402A96CC (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x1402A9768 (KiPcToFileHeader.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1402A9838 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiScanBugCheckCallbackList @ 0x1402A9964 (KiScanBugCheckCallbackList.c)
 *     KeSaveSupervisorState @ 0x1402AAC58 (KeSaveSupervisorState.c)
 *     KiSendFreeze @ 0x1402AE848 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x1402AE914 (KiSendThawExecution.c)
 *     KiSetDebuggerOwner @ 0x1402AEAB8 (KiSetDebuggerOwner.c)
 *     MmLocateUnloadedDriver @ 0x1402C3D88 (MmLocateUnloadedDriver.c)
 *     MmIsAddressValid @ 0x1402C4C10 (MmIsAddressValid.c)
 *     MmIsSpecialPoolAddress @ 0x1402C53BC (MmIsSpecialPoolAddress.c)
 *     PoAddPowerTriageData @ 0x1402F71F4 (PoAddPowerTriageData.c)
 *     DbgUnLoadImageSymbols @ 0x14030B1EC (DbgUnLoadImageSymbols.c)
 *     VfNotifyVerifierOfEvent @ 0x1409641B0 (VfNotifyVerifierOfEvent.c)
 */

void __fastcall __noreturn KeBugCheck2(
        int a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6)
{
  const CHAR *v6; // rsi
  __int64 v8; // r14
  unsigned __int8 CurrentIrql; // cl
  signed __int32 v12; // eax
  unsigned int v13; // edx
  signed __int32 v14; // ecx
  char v15; // bl
  char CurrentStackInformation; // r8
  signed __int32 v17; // eax
  unsigned int v18; // edx
  signed __int32 v19; // ecx
  int v20; // ecx
  size_t v21; // r8
  _OWORD *v22; // rcx
  __int64 v23; // rdx
  _CONTEXT *Context; // rax
  __int128 v25; // xmm1
  unsigned __int8 v26; // dl
  int IsEmptyAffinity; // eax
  unsigned int v28; // ecx
  const CHAR *v29; // r14
  __int64 v30; // rbx
  int v31; // eax
  __int64 v32; // rax
  struct _KTHREAD *v33; // r15
  char v34; // r10
  int v35; // eax
  __int64 *v36; // rcx
  unsigned __int64 v37; // r15
  struct _KTHREAD *v38; // rcx
  _KPROCESS *Process; // rcx
  int v40; // r14d
  int v41; // eax
  struct _KPRCB *v42; // rdi
  volatile signed __int32 *SchedulerAssist; // rcx
  bool v44; // si
  int v45; // ecx
  bool v46; // r13
  bool v47; // r14
  unsigned int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  _CONTEXT *v52; // rax
  _OWORD *v53; // rcx
  __int64 v54; // rdx
  __int128 v55; // xmm1
  __int64 v56; // rbx
  int v57; // r11d
  char v58; // bl
  __int64 v59; // rcx
  unsigned __int8 v60; // [rsp+50h] [rbp-B0h]
  char v61; // [rsp+51h] [rbp-AFh]
  char v62; // [rsp+52h] [rbp-AEh] BYREF
  bool v63; // [rsp+53h] [rbp-ADh]
  bool v64; // [rsp+54h] [rbp-ACh]
  bool v65; // [rsp+55h] [rbp-ABh]
  char v66; // [rsp+56h] [rbp-AAh]
  unsigned int v67; // [rsp+58h] [rbp-A8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A0h]
  PCSTR Format; // [rsp+68h] [rbp-98h]
  int v70; // [rsp+78h] [rbp-88h]
  unsigned __int64 v71; // [rsp+80h] [rbp-80h]
  int v72; // [rsp+88h] [rbp-78h]
  struct _KPRCB *CurrentPrcb; // [rsp+90h] [rbp-70h]
  unsigned int v74; // [rsp+98h] [rbp-68h] BYREF
  unsigned int Number; // [rsp+9Ch] [rbp-64h]
  __int64 v76; // [rsp+A0h] [rbp-60h] BYREF
  __int64 (__fastcall *v77)(); // [rsp+A8h] [rbp-58h]
  __int64 v78; // [rsp+B0h] [rbp-50h] BYREF
  void *Src; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 v80[88]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v81[77]; // [rsp+170h] [rbp+70h] BYREF
  char pszDest[176]; // [rsp+640h] [rbp+540h] BYREF

  v6 = (const CHAR *)a5;
  v8 = a6;
  v67 = a1;
  memset(v80, 0, 0xA8uLL);
  v63 = 1;
  pszDest[0] = 0;
  CurrentThread = KeGetCurrentThread();
  v77 = KiBugCheckProgress;
  v65 = IopAutoReboot != 0;
  LOBYTE(v70) = 0;
  v66 = 0;
  Format = 0LL;
  v71 = 0LL;
  v64 = 1;
  v72 = 0;
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
    CurrentStackInformation = KeQueryCurrentStackInformation((__int64)&v74, (__int64)&Src, (__int64)&v78);
    v17 = KiBugCheckActive;
    v18 = (16 * KeGetCurrentPrcb()->Number) | 3;
    while ( (v17 & 3) != 3 )
    {
      v19 = v17;
      v17 = _InterlockedCompareExchange(&KiBugCheckActive, v18, v17);
      if ( v17 == v19 )
      {
        if ( CurrentStackInformation )
        {
          if ( v74 > 9 || (v20 = 929, !_bittest(&v20, v74)) )
          {
            v21 = v78 - (_QWORD)Src;
            if ( (unsigned __int64)(v78 - (_QWORD)Src) > 0x6000 )
              v21 = 24576LL;
            memmove(&KiPreBugcheckStackSaveArea, Src, v21);
          }
        }
LABEL_25:
        v60 = 1;
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
        goto LABEL_25;
    }
  }
  v60 = 0;
LABEL_11:
  if ( KeSmapEnabled )
    __asm { stac }
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  KeSaveSupervisorState(CurrentPrcb->ExtendedSupervisorState, MEMORY[0xFFFFF780000005F0] | 0x100LL);
  if ( !qword_140443080 )
    goto LABEL_14;
  if ( PopSimulateHiberBugcheck )
    PoPowerDownActionInProgress = 0;
  if ( *(_BYTE *)(qword_140443080 + 3) )
  {
    if ( v60 )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A bugcheck occurred during the late stages of hibernate suspend or resume.\n"
        "Due to verification temporarily enabled by Po during this time,\n"
        "regular bugcheck processing may not work.\n"
        "\n");
      if ( v67 == 10 )
        DbgPrintEx(
          0x65u,
          0,
          "Memory was accessed during this time that was not properly marked\n"
          "for the boot phase of hibernate! Check the callstack and parameters\n"
          "to find the pages that need to be marked.\n"
          "\n");
    }
    v15 = 1;
    v77 = 0LL;
  }
  else
  {
LABEL_14:
    v15 = 0;
  }
  v22 = v81;
  v23 = 9LL;
  v61 = v15;
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
  v26 = v60;
  *v22 = *(_OWORD *)&Context->P1Home;
  v22[1] = *(_OWORD *)&Context->P3Home;
  v22[2] = *(_OWORD *)&Context->P5Home;
  v22[3] = *(_OWORD *)&Context->ContextFlags;
  v22[4] = *(_OWORD *)&Context->SegGs;
  if ( !v60 )
  {
    v33 = CurrentThread;
    goto LABEL_143;
  }
  ((void (__fastcall *)(_OWORD *, _QWORD, _QWORD, __int64))off_140424608[0])(v22, v60, 0LL, 128LL);
  HvlEnlightenments &= 0x2000u;
  IoSaveBugCheckProgress(96);
  IsEmptyAffinity = KeIsEmptyAffinityEx(KiNmiInProgress);
  ((void (__fastcall *)(bool))off_1404243D8[0])(IsEmptyAffinity == 0);
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(2LL);
  if ( !v15 )
    KiSaveCurrentEtwTraceBuffer();
  IoAddTriageDumpDataBlock((ULONG)&KseEngine, (PVOID)0x60);
  v28 = v67;
  if ( v67 == 229 )
  {
    KiScanBugCheckCallbackList();
    ((void (__fastcall *)(_QWORD))off_1404245E8[0])(0LL);
    HalReturnToFirmware(3LL);
  }
  qword_14044D248 = a2;
  qword_14044D250 = a3;
  if ( v67 == -1073741103 )
    v28 = 195;
  qword_14044D258 = a4;
  KiBugCheckData = v28;
  v67 = v28;
  qword_14044D260 = a5;
  if ( v28 > 0xCB )
  {
    switch ( v28 )
    {
      case 0xD8u:
        KiBugCheckDriver = a2 + 88;
        goto LABEL_52;
      case 0xEAu:
        KiBugCheckDriver = a4;
        goto LABEL_52;
      case 0xEFu:
        LOBYTE(v70) = 1;
        goto LABEL_52;
    }
    if ( v28 != 252 )
    {
      if ( v28 == 317 )
      {
        v72 = 8;
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
        v40 = HIDWORD(Process[2].ActiveProcessors.Bitmap[4]) >> 12;
        LOBYTE(v40) = (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0;
        v70 = v40;
      }
      goto LABEL_52;
    }
    goto LABEL_107;
  }
  switch ( v28 )
  {
    case 0xCBu:
      v71 = a2;
      goto LABEL_52;
    case 0xAu:
      if ( a5 < ExPoolCodeStart || a5 >= ExPoolCodeEnd )
      {
        KiPcToFileHeader(a5, &v76, 0LL, &v62);
        if ( v62 == 1 )
        {
          if ( KiPcToFileHeader(a2, &v76, 1LL, &v62) )
          {
            KiBugCheckData = 211LL;
            KiBugCheckDriver = v76 + 88;
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
      v71 = 0LL;
      goto LABEL_52;
    case 0x4Cu:
      v36 = &qword_14044D248;
      KiBugCheckData = (unsigned int)a2;
      v37 = a3 - (_QWORD)&qword_14044D248;
      LOBYTE(v70) = 1;
      v29 = (const CHAR *)a4;
      v66 = 1;
      do
      {
        *v36 = *(__int64 *)((char *)v36 + v37);
        ++v36;
      }
      while ( (__int64)v36 < (__int64)&KiHardwareTrigger );
      goto LABEL_67;
  }
  if ( v28 != 80 )
  {
    if ( v28 == 123 )
    {
      v63 = (a4 & 1) == 0;
      v64 = (a4 & 2) == 0;
      goto LABEL_52;
    }
    if ( v28 != 142 && v28 != 190 )
      goto LABEL_52;
LABEL_107:
    v6 = 0LL;
    if ( !a6 )
    {
      if ( !a4 || (a4 & 3) != 0 )
        goto LABEL_52;
      v8 = a4;
    }
    if ( v28 != 142 )
    {
      v71 = *(_QWORD *)(v8 + 360);
      if ( KeGetCurrentThread()->ApcStateIndex == 1 )
      {
        LOBYTE(v41) = MmIsSessionAddress(v71);
        if ( !v41 )
        {
LABEL_66:
          v29 = 0LL;
          goto LABEL_67;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        {
          LOBYTE(v70) = 1;
          goto LABEL_66;
        }
      }
    }
LABEL_52:
    v29 = Format;
    v6 = Format;
LABEL_67:
    v33 = CurrentThread;
    goto LABEL_68;
  }
  v6 = 0LL;
  v30 = 0LL;
  if ( !a6 )
  {
    if ( !a4 || (a4 & 3) != 0 )
    {
      v62 = 1;
      goto LABEL_62;
    }
    v8 = a4;
  }
  v71 = *(_QWORD *)(v8 + 360);
  qword_14044D258 = v71;
  v30 = KiPcToFileHeader(v71, &v76, 0LL, &v62);
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    LOBYTE(v31) = MmIsSessionAddress(v71);
    if ( v31 )
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        LOBYTE(v70) = 1;
    }
  }
LABEL_62:
  if ( (unsigned int)MmIsSpecialPoolAddress(a2) == 1 )
  {
    v32 = 213LL;
    v15 = v61;
    if ( v62 == 1 )
      v32 = 204LL;
    KiBugCheckData = v32;
    goto LABEL_66;
  }
  if ( v71 == a2 )
  {
    LOBYTE(v35) = MmIsSessionAddress(a2);
    v33 = CurrentThread;
    if ( v35 == 1 && (unsigned __int64)CurrentThread->Teb - 1 > 0xFFFF7FFFFFFFFFFEuLL )
    {
      KiBugCheckData = 207LL;
LABEL_75:
      v15 = v61;
      v29 = 0LL;
      goto LABEL_68;
    }
  }
  else
  {
    v33 = CurrentThread;
  }
  if ( v30 )
    goto LABEL_75;
  v15 = v61;
  v29 = 0LL;
  KiBugCheckDriver = MmLocateUnloadedDriver(a2);
  if ( KiBugCheckDriver )
    KiBugCheckData = 206LL;
LABEL_68:
  KiFilterBugCheckInfo(&v67, (__int64)&KiBugCheckData);
  HvlLogGuestCrashInformation(KiBugCheckData, qword_14044D248, qword_14044D250, qword_14044D258, qword_14044D260);
  v34 = 0;
  if ( KiBugCheckDriver )
  {
    KiBugCheckUnicodeToAnsi(KiBugCheckDriver, pszDest);
  }
  else if ( v71 )
  {
    KiDumpParameterImages(pszDest);
    v34 = 0;
  }
  if ( KdPitchDebugger == v34 )
    qword_140424AA8 = (__int64)v81;
  if ( v67 == 226
    || (_BYTE)KdDebuggerEnabled == v34 && KdEventLoggingEnabled == v34
    || KiHypervisorInitiatedCrashDump != v34
    || KdRefreshDebuggerNotPresent() && !KdEventLoggingPresent )
  {
    v26 = v60;
LABEL_143:
    v42 = CurrentPrcb;
    goto LABEL_144;
  }
  v42 = CurrentPrcb;
  if ( !CurrentPrcb->NmiActive )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
      KiBugCheckData,
      (const void *)qword_14044D248,
      (const void *)qword_14044D250,
      (const void *)qword_14044D258,
      (const void *)qword_14044D260);
    if ( KiBugCheckDriver )
      DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
    if ( v66 )
    {
      if ( v29 )
        DbgPrintEx(0x65u, 0, v29);
      if ( v6 )
        DbgPrintEx(0x65u, 0, v6);
    }
  }
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    KiBugCheckDebugBreak(3u);
  v26 = v60;
LABEL_144:
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
      KiSetDebuggerOwner(v42);
      KeCopyAffinityEx((__int64)v80, (unsigned __int16 *)KeActiveProcessors);
      KeRemoveProcessorAffinityEx(v80, v42->Number);
      KiSendFreeze(v80, 0LL);
      KeStallExecutionProcessor(0xF4240u);
    }
    IoInitializeBugCheckProgress(v67, a2);
    IoSaveBugCheckProgress(1);
    if ( v15 )
    {
      v44 = v64;
      v47 = v63;
      v46 = v65;
    }
    else
    {
      v44 = v64;
      if ( CrashdmpDumpBlock && v64 )
        v45 = v72;
      else
        v45 = v72 | 4;
      v46 = v65;
      v47 = v63;
      v48 = v45 | 2;
      if ( v65 )
        v48 = v45;
      v49 = v48 | 1;
      if ( v63 )
        v49 = v48;
      KiDisplayBlueScreen(v49);
    }
    HvlPrepareForRootCrashdump();
    if ( !v15 )
    {
      KiInvokeBugCheckEntryCallbacks(v51, v50, 0LL);
      IoSaveBugCheckProgress(2);
      KiInvokeBugCheckAddTriageDumpDataCallbacks();
      IoSaveBugCheckProgress(5);
    }
    if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
      KdEnableDebuggerWithLock(0);
    v52 = v42->Context;
    v53 = v81;
    v54 = 9LL;
    do
    {
      *(_OWORD *)&v52->P1Home = *v53;
      *(_OWORD *)&v52->P3Home = v53[1];
      *(_OWORD *)&v52->P5Home = v53[2];
      *(_OWORD *)&v52->ContextFlags = v53[3];
      *(_OWORD *)&v52->SegGs = v53[4];
      *(_OWORD *)&v52->Dr1 = v53[5];
      *(_OWORD *)&v52->Dr3 = v53[6];
      v52 = (_CONTEXT *)((char *)v52 + 128);
      v55 = v53[7];
      v53 += 8;
      *(_OWORD *)&v52[-1].LastExceptionToRip = v55;
      --v54;
    }
    while ( v54 );
    *(_OWORD *)&v52->P1Home = *v53;
    *(_OWORD *)&v52->P3Home = v53[1];
    *(_OWORD *)&v52->P5Home = v53[2];
    *(_OWORD *)&v52->ContextFlags = v53[3];
    *(_OWORD *)&v52->SegGs = v53[4];
    if ( v44 )
    {
      if ( v67 == 265 )
      {
        KiMarkBugCheckRegions(qword_14044D248, qword_14044D250, qword_14044D258, qword_14044D260);
        if ( qword_14044D260 == 47 )
        {
          v56 = qword_14044D258;
          if ( MmIsAddressValid((PVOID)(qword_14044D258 + 1544)) )
            IoAddTriageDumpDataBlock(*(_QWORD *)(v56 + 1544), (PVOID)0x1000);
        }
      }
      KdDecodeDataBlock();
      v57 = v67;
      if ( v67 == 395 )
      {
        if ( qword_14044D248 != 396 || !KdpBreakpointChangeCount )
        {
LABEL_183:
          IoWriteCrashDump(
            KiBugCheckData,
            qword_14044D248,
            qword_14044D250,
            qword_14044D258,
            qword_14044D260,
            v81,
            v33,
            (__int64)v77);
          IoSaveBugCheckProgress(3);
          goto LABEL_191;
        }
        IoAddTriageDumpDataBlock((ULONG)&KdpBreakpointChangeCount, (PVOID)4);
        v57 = v67;
      }
      if ( v57 == 239 )
      {
        PoAddPowerTriageData();
        if ( CriticalProcessExceptionData )
        {
          IoAddTriageDumpDataBlock((ULONG)&CriticalProcessExceptionData, (PVOID)0x30);
          if ( (_WORD)xmmword_140432530 )
            IoAddTriageDumpDataBlock(DWORD2(xmmword_140432530), (PVOID)(unsigned __int16)xmmword_140432530);
        }
      }
      goto LABEL_183;
    }
  }
  else
  {
    v58 = KiBugCheckActive;
    if ( Number != (unsigned int)KiBugCheckActive >> 4 )
    {
      while ( 1 )
      {
        KiCheckForFreezeExecution(0LL);
        _mm_pause();
      }
    }
    if ( KiHypervisorInitiatedCrashDump || (KiBugCheckActive & 0xCu) >= 8 )
    {
      while ( 1 )
        ((void (__fastcall *)(volatile signed __int32 *))off_140424318)(SchedulerAssist);
    }
    IoSetBugCheckProgressFlag(0x20000);
    _InterlockedExchangeAdd(&KiBugCheckActive, 4u);
    if ( (v58 & 0xC) != 0 )
      KiBugCheckDebugBreak(4u);
    v47 = v63;
    v46 = v65;
  }
LABEL_191:
  if ( !VslVsmEnabled )
  {
    if ( (HvlpFlags & 2) != 0 )
      HvlNotifyRootCrashdump(2);
    HvlEnlightenments = HvlpEnlightenments;
    off_1404244E8[0]();
  }
  IoSaveBugCheckProgress(99);
  if ( !v61 )
    KiScanBugCheckCallbackList();
  off_1404245F8[0]();
  IoSaveBugCheckProgress(4);
  if ( v46 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0LL);
    if ( !KiHypervisorInitiatedCrashDump )
      DbgUnLoadImageSymbols(0LL, (PVOID)0xFFFFFFFFFFFFFFFFLL, 0LL);
    ((void (__fastcall *)(_QWORD))off_1404245E8[0])(0LL);
    if ( (!PoPowerDownActionInProgress || PoPowerResetActionInProgress) && v47 )
      v59 = 3LL;
    else
      v59 = 1LL;
    HalReturnToFirmware(v59);
  }
  KiBugCheckDebugBreak(4u);
}
