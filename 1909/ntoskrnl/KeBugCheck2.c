/*
 * XREFs of KeBugCheck2 @ 0x1402A78C0
 * Callers:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 * Callees:
 *     KeQueryCurrentStackInformation @ 0x14001BBD0 (KeQueryCurrentStackInformation.c)
 *     KeRemoveProcessorAffinityEx @ 0x14009A150 (KeRemoveProcessorAffinityEx.c)
 *     KeCopyAffinityEx @ 0x14009A190 (KeCopyAffinityEx.c)
 *     KeIsEmptyAffinityEx @ 0x14009E170 (KeIsEmptyAffinityEx.c)
 *     MmIsSessionAddress @ 0x1400C6CC0 (MmIsSessionAddress.c)
 *     DbgPrintEx @ 0x140126B10 (DbgPrintEx.c)
 *     KdRefreshDebuggerNotPresent @ 0x140182620 (KdRefreshDebuggerNotPresent.c)
 *     IoAddTriageDumpDataBlock @ 0x14019BF38 (IoAddTriageDumpDataBlock.c)
 *     KiFilterBugCheckInfo @ 0x1401AA7FC (KiFilterBugCheckInfo.c)
 *     KiMarkBugCheckRegions @ 0x1401AB17C (KiMarkBugCheckRegions.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlLogGuestCrashInformation @ 0x140284A14 (HvlLogGuestCrashInformation.c)
 *     HvlNotifyRootCrashdump @ 0x140288A4C (HvlNotifyRootCrashdump.c)
 *     HvlPrepareForRootCrashdump @ 0x140288B20 (HvlPrepareForRootCrashdump.c)
 *     IoInitializeBugCheckProgress @ 0x140294EB4 (IoInitializeBugCheckProgress.c)
 *     IoSaveBugCheckProgress @ 0x140295110 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressFlag @ 0x140295248 (IoSetBugCheckProgressFlag.c)
 *     IoWriteCrashDump @ 0x14029556C (IoWriteCrashDump.c)
 *     KdDecodeDataBlock @ 0x1402A1960 (KdDecodeDataBlock.c)
 *     KdEnableDebuggerWithLock @ 0x1402A1E0C (KdEnableDebuggerWithLock.c)
 *     KiCheckForFreezeExecution @ 0x1402A3EFC (KiCheckForFreezeExecution.c)
 *     KiBugCheckDebugBreak @ 0x1402A8B00 (KiBugCheckDebugBreak.c)
 *     KiBugCheckUnicodeToAnsi @ 0x1402A8D24 (KiBugCheckUnicodeToAnsi.c)
 *     KiDisplayBlueScreen @ 0x1402A8D68 (KiDisplayBlueScreen.c)
 *     KiDumpParameterImages @ 0x1402A90F0 (KiDumpParameterImages.c)
 *     KiInvokeBugCheckAddTriageDumpDataCallbacks @ 0x1402A927C (KiInvokeBugCheckAddTriageDumpDataCallbacks.c)
 *     KiInvokeBugCheckEntryCallbacks @ 0x1402A942C (KiInvokeBugCheckEntryCallbacks.c)
 *     KiPcToFileHeader @ 0x1402A94C8 (KiPcToFileHeader.c)
 *     KiSaveCurrentEtwTraceBuffer @ 0x1402A9598 (KiSaveCurrentEtwTraceBuffer.c)
 *     KiScanBugCheckCallbackList @ 0x1402A96C4 (KiScanBugCheckCallbackList.c)
 *     KeSaveSupervisorState @ 0x1402AA9B8 (KeSaveSupervisorState.c)
 *     KiSendFreeze @ 0x1402AE5A8 (KiSendFreeze.c)
 *     KiSendThawExecution @ 0x1402AE674 (KiSendThawExecution.c)
 *     KiSetDebuggerOwner @ 0x1402AE818 (KiSetDebuggerOwner.c)
 *     MmLocateUnloadedDriver @ 0x1402C3AE8 (MmLocateUnloadedDriver.c)
 *     MmIsAddressValid @ 0x1402C4970 (MmIsAddressValid.c)
 *     MmIsSpecialPoolAddress @ 0x1402C511C (MmIsSpecialPoolAddress.c)
 *     PoAddPowerTriageData @ 0x1402F6CA4 (PoAddPowerTriageData.c)
 *     DbgUnLoadImageSymbols @ 0x14030AC9C (DbgUnLoadImageSymbols.c)
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
  __int64 v31; // rax
  struct _KTHREAD *v32; // r15
  char v33; // r10
  BOOL IsSessionAddress; // eax
  __int64 *v35; // rcx
  unsigned __int64 v36; // r15
  struct _KTHREAD *v37; // rcx
  _KPROCESS *Process; // rcx
  int v39; // r14d
  struct _KPRCB *v40; // rdi
  volatile signed __int32 *SchedulerAssist; // rcx
  bool v42; // si
  int v43; // ecx
  bool v44; // r13
  bool v45; // r14
  unsigned int v46; // eax
  __int64 v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  _CONTEXT *v50; // rax
  _OWORD *v51; // rcx
  __int64 v52; // rdx
  __int128 v53; // xmm1
  __int64 v54; // rbx
  int v55; // r11d
  char v56; // bl
  __int64 v57; // rcx
  unsigned __int8 v58; // [rsp+50h] [rbp-B0h]
  char v59; // [rsp+51h] [rbp-AFh]
  char v60; // [rsp+52h] [rbp-AEh] BYREF
  bool v61; // [rsp+53h] [rbp-ADh]
  bool v62; // [rsp+54h] [rbp-ACh]
  bool v63; // [rsp+55h] [rbp-ABh]
  char v64; // [rsp+56h] [rbp-AAh]
  unsigned int v65; // [rsp+58h] [rbp-A8h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-A0h]
  PCSTR Format; // [rsp+68h] [rbp-98h]
  int v68; // [rsp+78h] [rbp-88h]
  unsigned __int64 v69; // [rsp+80h] [rbp-80h]
  int v70; // [rsp+88h] [rbp-78h]
  struct _KPRCB *CurrentPrcb; // [rsp+90h] [rbp-70h]
  unsigned int v72; // [rsp+98h] [rbp-68h] BYREF
  unsigned int Number; // [rsp+9Ch] [rbp-64h]
  __int64 v74; // [rsp+A0h] [rbp-60h] BYREF
  __int64 (__fastcall *v75)(); // [rsp+A8h] [rbp-58h]
  __int64 v76; // [rsp+B0h] [rbp-50h] BYREF
  void *Src; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int16 v78[88]; // [rsp+C0h] [rbp-40h] BYREF
  _OWORD v79[77]; // [rsp+170h] [rbp+70h] BYREF
  char pszDest[176]; // [rsp+640h] [rbp+540h] BYREF

  v6 = (const CHAR *)a5;
  v8 = a6;
  v65 = a1;
  memset(v78, 0, 0xA8uLL);
  v61 = 1;
  pszDest[0] = 0;
  CurrentThread = KeGetCurrentThread();
  v75 = KiBugCheckProgress;
  v63 = IopAutoReboot != 0;
  LOBYTE(v68) = 0;
  v64 = 0;
  Format = 0LL;
  v69 = 0LL;
  v62 = 1;
  v70 = 0;
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
    CurrentStackInformation = KeQueryCurrentStackInformation((__int64)&v72, (__int64)&Src, (__int64)&v76);
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
          if ( v72 > 9 || (v20 = 929, !_bittest(&v20, v72)) )
          {
            v21 = v76 - (_QWORD)Src;
            if ( (unsigned __int64)(v76 - (_QWORD)Src) > 0x6000 )
              v21 = 24576LL;
            memmove(&KiPreBugcheckStackSaveArea, Src, v21);
          }
        }
LABEL_25:
        v58 = 1;
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
  v58 = 0;
LABEL_11:
  if ( KeSmapEnabled )
    __asm { stac }
  CurrentPrcb = KeGetCurrentPrcb();
  Number = CurrentPrcb->Number;
  KeSaveSupervisorState(CurrentPrcb->ExtendedSupervisorState, MEMORY[0xFFFFF780000005F0] | 0x100LL);
  if ( !qword_140443000 )
    goto LABEL_14;
  if ( PopSimulateHiberBugcheck )
    PoPowerDownActionInProgress = 0;
  if ( *(_BYTE *)(qword_140443000 + 3) )
  {
    if ( v58 )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "A bugcheck occurred during the late stages of hibernate suspend or resume.\n"
        "Due to verification temporarily enabled by Po during this time,\n"
        "regular bugcheck processing may not work.\n"
        "\n");
      if ( v65 == 10 )
        DbgPrintEx(
          0x65u,
          0,
          "Memory was accessed during this time that was not properly marked\n"
          "for the boot phase of hibernate! Check the callstack and parameters\n"
          "to find the pages that need to be marked.\n"
          "\n");
    }
    v15 = 1;
    v75 = 0LL;
  }
  else
  {
LABEL_14:
    v15 = 0;
  }
  v22 = v79;
  v23 = 9LL;
  v59 = v15;
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
  v26 = v58;
  *v22 = *(_OWORD *)&Context->P1Home;
  v22[1] = *(_OWORD *)&Context->P3Home;
  v22[2] = *(_OWORD *)&Context->P5Home;
  v22[3] = *(_OWORD *)&Context->ContextFlags;
  v22[4] = *(_OWORD *)&Context->SegGs;
  if ( !v58 )
  {
    v32 = CurrentThread;
    goto LABEL_143;
  }
  ((void (__fastcall *)(_OWORD *, _QWORD, _QWORD, __int64))off_140424608[0])(v22, v58, 0LL, 128LL);
  HvlEnlightenments &= 0x2000u;
  IoSaveBugCheckProgress(96);
  IsEmptyAffinity = KeIsEmptyAffinityEx(KiNmiInProgress);
  ((void (__fastcall *)(bool))off_1404243D8[0])(IsEmptyAffinity == 0);
  if ( ViVerifierEnabled )
    VfNotifyVerifierOfEvent(2LL);
  if ( !v15 )
    KiSaveCurrentEtwTraceBuffer();
  IoAddTriageDumpDataBlock((ULONG)&KseEngine, (PVOID)0x60);
  v28 = v65;
  if ( v65 == 229 )
  {
    KiScanBugCheckCallbackList();
    ((void (__fastcall *)(_QWORD))off_1404245E8[0])(0LL);
    HalReturnToFirmware(3LL);
  }
  qword_14044CF48 = a2;
  qword_14044CF50 = a3;
  if ( v65 == -1073741103 )
    v28 = 195;
  qword_14044CF58 = a4;
  KiBugCheckData = v28;
  v65 = v28;
  qword_14044CF60 = a5;
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
        LOBYTE(v68) = 1;
        goto LABEL_52;
    }
    if ( v28 != 252 )
    {
      if ( v28 == 317 )
      {
        v70 = 8;
      }
      else if ( v28 == 335 )
      {
        if ( a3 < 0x100 && a5 )
        {
          v37 = CurrentThread;
          if ( *(_QWORD *)(a5 + 8) )
            v37 = *(struct _KTHREAD **)(a5 + 8);
          CurrentThread = v37;
        }
        Process = KeGetCurrentThread()->ApcState.Process;
        v39 = HIDWORD(Process[2].ActiveProcessors.Bitmap[4]) >> 12;
        LOBYTE(v39) = (Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0;
        v68 = v39;
      }
      goto LABEL_52;
    }
    goto LABEL_107;
  }
  switch ( v28 )
  {
    case 0xCBu:
      v69 = a2;
      goto LABEL_52;
    case 0xAu:
      if ( a5 < ExPoolCodeStart || a5 >= ExPoolCodeEnd )
      {
        KiPcToFileHeader(a5, &v74, 0LL, &v60);
        if ( v60 == 1 )
        {
          if ( KiPcToFileHeader(a2, &v74, 1LL, &v60) )
          {
            KiBugCheckData = 211LL;
            KiBugCheckDriver = v74 + 88;
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
      v69 = 0LL;
      goto LABEL_52;
    case 0x4Cu:
      v35 = &qword_14044CF48;
      KiBugCheckData = (unsigned int)a2;
      v36 = a3 - (_QWORD)&qword_14044CF48;
      LOBYTE(v68) = 1;
      v29 = (const CHAR *)a4;
      v64 = 1;
      do
      {
        *v35 = *(__int64 *)((char *)v35 + v36);
        ++v35;
      }
      while ( (__int64)v35 < (__int64)&KiHardwareTrigger );
      goto LABEL_67;
  }
  if ( v28 != 80 )
  {
    if ( v28 == 123 )
    {
      v61 = (a4 & 1) == 0;
      v62 = (a4 & 2) == 0;
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
      v69 = *(_QWORD *)(v8 + 360);
      if ( KeGetCurrentThread()->ApcStateIndex == 1 )
      {
        if ( !MmIsSessionAddress(v69) )
        {
LABEL_66:
          v29 = 0LL;
          goto LABEL_67;
        }
        if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        {
          LOBYTE(v68) = 1;
          goto LABEL_66;
        }
      }
    }
LABEL_52:
    v29 = Format;
    v6 = Format;
LABEL_67:
    v32 = CurrentThread;
    goto LABEL_68;
  }
  v6 = 0LL;
  v30 = 0LL;
  if ( !a6 )
  {
    if ( !a4 || (a4 & 3) != 0 )
    {
      v60 = 1;
      goto LABEL_62;
    }
    v8 = a4;
  }
  v69 = *(_QWORD *)(v8 + 360);
  qword_14044CF58 = v69;
  v30 = KiPcToFileHeader(v69, &v74, 0LL, &v60);
  if ( KeGetCurrentThread()->ApcStateIndex == 1
    && MmIsSessionAddress(v69)
    && (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
  {
    LOBYTE(v68) = 1;
  }
LABEL_62:
  if ( (unsigned int)MmIsSpecialPoolAddress(a2) == 1 )
  {
    v31 = 213LL;
    v15 = v59;
    if ( v60 == 1 )
      v31 = 204LL;
    KiBugCheckData = v31;
    goto LABEL_66;
  }
  if ( v69 == a2 )
  {
    IsSessionAddress = MmIsSessionAddress(a2);
    v32 = CurrentThread;
    if ( IsSessionAddress && (unsigned __int64)CurrentThread->Teb - 1 > 0xFFFF7FFFFFFFFFFEuLL )
    {
      KiBugCheckData = 207LL;
LABEL_75:
      v15 = v59;
      v29 = 0LL;
      goto LABEL_68;
    }
  }
  else
  {
    v32 = CurrentThread;
  }
  if ( v30 )
    goto LABEL_75;
  v15 = v59;
  v29 = 0LL;
  KiBugCheckDriver = MmLocateUnloadedDriver(a2);
  if ( KiBugCheckDriver )
    KiBugCheckData = 206LL;
LABEL_68:
  KiFilterBugCheckInfo(&v65, (__int64)&KiBugCheckData);
  HvlLogGuestCrashInformation(KiBugCheckData, qword_14044CF48, qword_14044CF50, qword_14044CF58, qword_14044CF60);
  v33 = 0;
  if ( KiBugCheckDriver )
  {
    KiBugCheckUnicodeToAnsi(KiBugCheckDriver, pszDest);
  }
  else if ( v69 )
  {
    KiDumpParameterImages(pszDest);
    v33 = 0;
  }
  if ( KdPitchDebugger == v33 )
    qword_140424AA8 = (__int64)v79;
  if ( v65 == 226
    || (_BYTE)KdDebuggerEnabled == v33 && KdEventLoggingEnabled == v33
    || KiHypervisorInitiatedCrashDump != v33
    || KdRefreshDebuggerNotPresent() && !KdEventLoggingPresent )
  {
    v26 = v58;
LABEL_143:
    v40 = CurrentPrcb;
    goto LABEL_144;
  }
  v40 = CurrentPrcb;
  if ( !CurrentPrcb->NmiActive )
  {
    DbgPrintEx(
      0x65u,
      0,
      "\n*** Fatal System Error: 0x%08lx\n                       (0x%p,0x%p,0x%p,0x%p)\n\n",
      KiBugCheckData,
      (const void *)qword_14044CF48,
      (const void *)qword_14044CF50,
      (const void *)qword_14044CF58,
      (const void *)qword_14044CF60);
    if ( KiBugCheckDriver )
      DbgPrintEx(0x65u, 0, "Driver at fault: %s.\n", pszDest);
    if ( v64 )
    {
      if ( v29 )
        DbgPrintEx(0x65u, 0, v29);
      if ( v6 )
        DbgPrintEx(0x65u, 0, v6);
    }
  }
  if ( (_BYTE)KdDebuggerEnabled && !(_BYTE)KdDebuggerNotPresent )
    KiBugCheckDebugBreak(3u);
  v26 = v58;
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
      KiSetDebuggerOwner(v40);
      KeCopyAffinityEx((__int64)v78, (unsigned __int16 *)KeActiveProcessors);
      KeRemoveProcessorAffinityEx(v78, v40->Number);
      KiSendFreeze(v78, 0LL);
      KeStallExecutionProcessor(0xF4240u);
    }
    IoInitializeBugCheckProgress(v65, a2);
    IoSaveBugCheckProgress(1);
    if ( v15 )
    {
      v42 = v62;
      v45 = v61;
      v44 = v63;
    }
    else
    {
      v42 = v62;
      if ( CrashdmpDumpBlock && v62 )
        v43 = v70;
      else
        v43 = v70 | 4;
      v44 = v63;
      v45 = v61;
      v46 = v43 | 2;
      if ( v63 )
        v46 = v43;
      v47 = v46 | 1;
      if ( v61 )
        v47 = v46;
      KiDisplayBlueScreen(v47);
    }
    HvlPrepareForRootCrashdump();
    if ( !v15 )
    {
      KiInvokeBugCheckEntryCallbacks(v49, v48, 0LL);
      IoSaveBugCheckProgress(2);
      KiInvokeBugCheckAddTriageDumpDataCallbacks();
      IoSaveBugCheckProgress(5);
    }
    if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger )
      KdEnableDebuggerWithLock(0);
    v50 = v40->Context;
    v51 = v79;
    v52 = 9LL;
    do
    {
      *(_OWORD *)&v50->P1Home = *v51;
      *(_OWORD *)&v50->P3Home = v51[1];
      *(_OWORD *)&v50->P5Home = v51[2];
      *(_OWORD *)&v50->ContextFlags = v51[3];
      *(_OWORD *)&v50->SegGs = v51[4];
      *(_OWORD *)&v50->Dr1 = v51[5];
      *(_OWORD *)&v50->Dr3 = v51[6];
      v50 = (_CONTEXT *)((char *)v50 + 128);
      v53 = v51[7];
      v51 += 8;
      *(_OWORD *)&v50[-1].LastExceptionToRip = v53;
      --v52;
    }
    while ( v52 );
    *(_OWORD *)&v50->P1Home = *v51;
    *(_OWORD *)&v50->P3Home = v51[1];
    *(_OWORD *)&v50->P5Home = v51[2];
    *(_OWORD *)&v50->ContextFlags = v51[3];
    *(_OWORD *)&v50->SegGs = v51[4];
    if ( v42 )
    {
      if ( v65 == 265 )
      {
        KiMarkBugCheckRegions(qword_14044CF48, qword_14044CF50, qword_14044CF58, qword_14044CF60);
        if ( qword_14044CF60 == 47 )
        {
          v54 = qword_14044CF58;
          if ( MmIsAddressValid((PVOID)(qword_14044CF58 + 1544)) )
            IoAddTriageDumpDataBlock(*(_QWORD *)(v54 + 1544), (PVOID)0x1000);
        }
      }
      KdDecodeDataBlock();
      v55 = v65;
      if ( v65 == 395 )
      {
        if ( qword_14044CF48 != 396 || !KdpBreakpointChangeCount )
        {
LABEL_183:
          IoWriteCrashDump(
            KiBugCheckData,
            qword_14044CF48,
            qword_14044CF50,
            qword_14044CF58,
            qword_14044CF60,
            v79,
            v32,
            (__int64)v75);
          IoSaveBugCheckProgress(3);
          goto LABEL_191;
        }
        IoAddTriageDumpDataBlock((ULONG)&KdpBreakpointChangeCount, (PVOID)4);
        v55 = v65;
      }
      if ( v55 == 239 )
      {
        PoAddPowerTriageData();
        if ( CriticalProcessExceptionData )
        {
          IoAddTriageDumpDataBlock((ULONG)&CriticalProcessExceptionData, (PVOID)0x30);
          if ( (_WORD)xmmword_1404324D0 )
            IoAddTriageDumpDataBlock(DWORD2(xmmword_1404324D0), (PVOID)(unsigned __int16)xmmword_1404324D0);
        }
      }
      goto LABEL_183;
    }
  }
  else
  {
    v56 = KiBugCheckActive;
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
    if ( (v56 & 0xC) != 0 )
      KiBugCheckDebugBreak(4u);
    v45 = v61;
    v44 = v63;
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
  if ( !v59 )
    KiScanBugCheckCallbackList();
  off_1404245F8[0]();
  IoSaveBugCheckProgress(4);
  if ( v44 )
  {
    KiResumeForReboot = 1;
    KiSendThawExecution(0LL);
    if ( !KiHypervisorInitiatedCrashDump )
      DbgUnLoadImageSymbols(0LL, (PVOID)0xFFFFFFFFFFFFFFFFLL, 0LL);
    ((void (__fastcall *)(_QWORD))off_1404245E8[0])(0LL);
    if ( (!PoPowerDownActionInProgress || PoPowerResetActionInProgress) && v45 )
      v57 = 3LL;
    else
      v57 = 1LL;
    HalReturnToFirmware(v57);
  }
  KiBugCheckDebugBreak(4u);
}
