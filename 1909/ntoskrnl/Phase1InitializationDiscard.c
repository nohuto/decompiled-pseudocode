/*
 * XREFs of Phase1InitializationDiscard @ 0x140A07524
 * Callers:
 *     Phase1Initialization @ 0x140768980 (Phase1Initialization.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140010D60 (KeSetPriorityThread.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyA @ 0x14008C158 (RtlStringCbCopyA.c)
 *     RtlInitAnsiString @ 0x1400EA030 (RtlInitAnsiString.c)
 *     FsRtlSendModernAppTermination @ 0x140104300 (FsRtlSendModernAppTermination.c)
 *     RtlTimeFieldsToTime @ 0x140121DD0 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14013D240 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x1401453D0 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x14015CA10 (ExLocalTimeToSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x1401822EC (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x140182550 (KeSetSystemTime.c)
 *     MakeGdtReadOnly @ 0x140185D0C (MakeGdtReadOnly.c)
 *     DisplayBootBitmap @ 0x14018AF08 (DisplayBootBitmap.c)
 *     RtlStringCbPrintfA @ 0x14018C564 (RtlStringCbPrintfA.c)
 *     InbvDisplayString @ 0x14018C640 (InbvDisplayString.c)
 *     KeSetAffinityProcess @ 0x14019AD38 (KeSetAffinityProcess.c)
 *     HvlDebuggerSupportInitialize @ 0x14019E488 (HvlDebuggerSupportInitialize.c)
 *     HvlWnfUpdateStartupState @ 0x14019ED10 (HvlWnfUpdateStartupState.c)
 *     InbvEnableDisplayString @ 0x14019ED70 (InbvEnableDisplayString.c)
 *     InbvInstallDisplayStringFilter @ 0x14019EDB0 (InbvInstallDisplayStringFilter.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _strupr @ 0x14019F9F0 (_strupr.c)
 *     strncmp @ 0x14019FC70 (strncmp.c)
 *     strstr @ 0x14019FD30 (strstr.c)
 *     atol @ 0x14019FDE0 (atol.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateSection @ 0x1401C1590 (ZwCreateSection.c)
 *     ZwQueryLicenseValue @ 0x1401C35F0 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x1401C4110 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1401C4680 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlStringCbPrintfExA @ 0x14027B808 (RtlStringCbPrintfExA.c)
 *     RtlInitializeCompression @ 0x14030AA94 (RtlInitializeCompression.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     RtlFindMessage @ 0x140675350 (RtlFindMessage.c)
 *     MmMapViewInSystemSpace @ 0x1406A3A80 (MmMapViewInSystemSpace.c)
 *     ExReleaseTimeRefreshLock @ 0x1406A71E0 (ExReleaseTimeRefreshLock.c)
 *     ExAcquireTimeRefreshLock @ 0x1406A7200 (ExAcquireTimeRefreshLock.c)
 *     ExpRefreshTimeZoneInformation @ 0x1407643E8 (ExpRefreshTimeZoneInformation.c)
 *     RtlInitNlsTables @ 0x140786260 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x140789014 (RtlResetRtlTranslations.c)
 *     IopInitializeBootLogging @ 0x140853614 (IopInitializeBootLogging.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     BgGetDisplayContext @ 0x14098E024 (BgGetDisplayContext.c)
 *     KePerformGroupConfiguration @ 0x1409EDA90 (KePerformGroupConfiguration.c)
 *     KeStartAllProcessors @ 0x1409EDC20 (KeStartAllProcessors.c)
 *     MmInitSystem @ 0x1409F0CD4 (MmInitSystem.c)
 *     EmInitSystem @ 0x1409F93E0 (EmInitSystem.c)
 *     KeInitializeClock @ 0x1409FCFBC (KeInitializeClock.c)
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 *     PsInitSystem @ 0x1409FEE9C (PsInitSystem.c)
 *     SeInitSystem @ 0x1409FEF7C (SeInitSystem.c)
 *     VmInitSystem @ 0x140A0169C (VmInitSystem.c)
 *     DbgkInitialize @ 0x140A026CC (DbgkInitialize.c)
 *     CcInitializeCacheManager @ 0x140A040E4 (CcInitializeCacheManager.c)
 *     IoCreateObjectTypes @ 0x140A04504 (IoCreateObjectTypes.c)
 *     ObInitSystem @ 0x140A0533C (ObInitSystem.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 *     ExInitializeExternalBootSupport @ 0x140A09788 (ExInitializeExternalBootSupport.c)
 *     ExInitializeNls @ 0x140A09818 (ExInitializeNls.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140A0986C (SeCodeIntegrityInitializePolicy.c)
 *     ExpComputeCyclesPerYield @ 0x140A09AD0 (ExpComputeCyclesPerYield.c)
 *     ExInitSystemPhase2 @ 0x140A09B30 (ExInitSystemPhase2.c)
 *     CmInitSystem1 @ 0x140A0D1F0 (CmInitSystem1.c)
 *     ExInitializeLeapSecondData @ 0x140A0EDE8 (ExInitializeLeapSecondData.c)
 *     ExInitializeTimeRefresh @ 0x140A0EFD4 (ExInitializeTimeRefresh.c)
 *     ExInitSystem @ 0x140A18360 (ExInitSystem.c)
 *     PfInitializeSuperfetch @ 0x140A19260 (PfInitializeSuperfetch.c)
 *     SmInitSystem @ 0x140A19F08 (SmInitSystem.c)
 *     InbvDriverInitialize @ 0x140A1A1BC (InbvDriverInitialize.c)
 *     FsRtlInitSystem @ 0x140A1A600 (FsRtlInitSystem.c)
 *     LpcInitSystem @ 0x140A1D354 (LpcInitSystem.c)
 *     CreateSystemRootLink @ 0x140A1DB6C (CreateSystemRootLink.c)
 *     VerifierInitSystem @ 0x140A1E23C (VerifierInitSystem.c)
 *     GetBootSystemTime @ 0x140A20708 (GetBootSystemTime.c)
 *     InitSkuSessionParameters @ 0x140A20B38 (InitSkuSessionParameters.c)
 *     PpInitSystem @ 0x140A216DC (PpInitSystem.c)
 *     MfgInitSystem @ 0x140A223F4 (MfgInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x140A22664 (BcdInitializeBcdSyncMutant.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140A22C8C (ExInitializeUtcTimeZoneBias.c)
 *     ExInitLicenseCallback @ 0x140A22EC8 (ExInitLicenseCallback.c)
 *     VslGetKsrContext @ 0x140A22F94 (VslGetKsrContext.c)
 *     CreateMiniNtBootKey @ 0x140A381D0 (CreateMiniNtBootKey.c)
 *     RtlInitializeRangeListPackage @ 0x140A3DBF0 (RtlInitializeRangeListPackage.c)
 *     BgkDisplayProgressIndicator @ 0x140A4028C (BgkDisplayProgressIndicator.c)
 *     BgkDisplayBackgroundUpdate @ 0x140A40E38 (BgkDisplayBackgroundUpdate.c)
 */

char __fastcall Phase1InitializationDiscard(_QWORD *BugCheckParameter3)
{
  char *PoolWithTag; // r13
  struct _KTHREAD *CurrentThread; // rcx
  char v4; // r12
  char *v5; // rcx
  char *v6; // rdi
  char *v7; // rax
  char *v8; // rax
  char *v9; // rax
  char *v10; // rbx
  __int16 v11; // ax
  int v12; // edx
  char v13; // al
  NTSTATUS Message; // eax
  NTSTRSAFE_PSTR v15; // rbx
  int v16; // r15d
  NTSTATUS v17; // eax
  size_t v18; // r14
  char *v19; // rbx
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  int v23; // r14d
  _OWORD *v24; // rax
  char *v25; // rcx
  __int64 v26; // rdx
  __int128 v27; // xmm1
  int v28; // eax
  char *v29; // rax
  char *v30; // rax
  __int16 v31; // bx
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  char *v36; // rax
  char *v37; // rax
  char *v38; // rax
  char *v39; // rax
  char *v40; // rax
  char *v41; // rax
  const char *v42; // rbx
  ULONG v43; // r9d
  NTSTATUS v44; // eax
  __int64 v45; // r9
  __int64 v46; // rdx
  _QWORD *v47; // rcx
  NTSTATUS v48; // eax
  int inited; // eax
  int v50; // eax
  int SystemRootLink; // eax
  NTSTATUS v52; // eax
  NTSTATUS v53; // eax
  ULONG_PTR v54; // rbx
  NTSTATUS v55; // eax
  char *v56; // rbx
  struct _NLSTABLEINFO *v57; // r9
  USHORT *v58; // rdx
  USHORT *v59; // r8
  USHORT *v60; // rcx
  PNLSTABLEINFO v61; // rcx
  int v62; // eax
  __int128 *DisplayContext; // rax
  ULONG_PTR v64; // rbx
  int v65; // eax
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  int v73; // ebx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  char *v89; // rbx
  char *v90; // r12
  __int64 v91; // rdi
  const char *v92; // rbx
  int v93; // eax
  ULONG v94; // r9d
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  int v109; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-E0h]
  LARGE_INTEGER Time; // [rsp+40h] [rbp-C0h] BYREF
  int v113; // [rsp+48h] [rbp-B8h]
  PMESSAGE_RESOURCE_ENTRY v114; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+58h] [rbp-A8h] BYREF
  int v116; // [rsp+60h] [rbp-A0h]
  int v117; // [rsp+64h] [rbp-9Ch] BYREF
  int v118; // [rsp+68h] [rbp-98h] BYREF
  size_t pcbRemaining; // [rsp+70h] [rbp-90h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+78h] [rbp-88h] BYREF
  __int64 v121; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+88h] [rbp-78h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-70h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp-68h] BYREF
  STRING v125; // [rsp+A0h] [rbp-60h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+B0h] [rbp-50h] BYREF
  PMESSAGE_RESOURCE_ENTRY v127; // [rsp+C0h] [rbp-40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp-38h] BYREF
  ULONG_PTR ViewSize; // [rsp+D0h] [rbp-30h] BYREF
  PMESSAGE_RESOURCE_ENTRY v130; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v132[10]; // [rsp+F0h] [rbp-10h] BYREF
  char pszDest[24]; // [rsp+140h] [rbp+40h] BYREF

  Time.QuadPart = 0LL;
  LocalTime.QuadPart = 0LL;
  v121 = 0LL;
  *(_QWORD *)&v125.Length = 0LL;
  v125.Buffer = 0LL;
  MaximumSize.QuadPart = 0LL;
  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  LOBYTE(v113) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v132, 0, 0x48uLL);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  LODWORD(InitializationPhase) = 1;
  v4 = 0;
  KeSetPriorityThread(CurrentThread, 31);
  v5 = (char *)BugCheckParameter3[27];
  if ( v5 )
    v6 = strupr(v5);
  else
    v6 = 0LL;
  if ( v6 )
  {
    v7 = strstr(v6, " HYPERVISORROOTPROC=");
    if ( v7 )
    {
      v8 = strstr(v7, "=");
      if ( v8 )
        KeRootProcSpecified = atol(v8 + 1);
    }
    v9 = strstr(v6, " HYPERVISORROOTPROCNUMANODES=");
    if ( v9 )
    {
      v10 = strstr(v9, "=");
      if ( v10 )
      {
        do
        {
          if ( (unsigned int)KeRootProcNumaNodesSpecified >= 0x40 )
            break;
          v11 = atol(++v10);
          v12 = KeRootProcNumaNodesSpecified;
          KeRootProcNumaNodes[KeRootProcNumaNodesSpecified] = v11;
          KeRootProcNumaNodesSpecified = v12 + 1;
          while ( 1 )
          {
            v13 = *v10;
            if ( *v10 == 44 )
              break;
            if ( v13 == 32 )
              goto LABEL_19;
            if ( !v13 )
              break;
            ++v10;
          }
        }
        while ( v13 != 32 && v13 );
      }
    }
  }
LABEL_19:
  KePerformGroupConfiguration(BugCheckParameter3);
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, BugCheckParameter3) )
    goto LABEL_159;
  KeInitializeClock((unsigned int)InitializationPhase, (__int64)BugCheckParameter3);
  if ( !v6 || !strstr(v6, "NOGUIBOOT") )
  {
    InbvEnableDisplayString(0);
    BgkDisplayProgressIndicator();
    BgkDisplayBackgroundUpdate();
    InbvInstallDisplayStringFilter((__int64 (__fastcall *)(_QWORD))DisplayFilter);
    InbvDriverInitialize(1LL, BugCheckParameter3, 7LL);
    DisplayBootBitmap(0);
  }
  if ( v6 && strstr(v6, "MININT") )
  {
    InitIsWinPEMode = 1;
    if ( strstr(v6, "INRAM") )
      InitWinPEModeType |= 0x80000000;
    else
      InitWinPEModeType |= 1u;
  }
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v114);
  v15 = PoolWithTag;
  ppszDestEnd = PoolWithTag;
  v16 = Message;
  pcbRemaining = 256LL;
  if ( CmCSDVersionString.Length )
  {
    v17 = RtlStringCbPrintfExA(PoolWithTag, 0xFFuLL, &ppszDestEnd, &pcbRemaining, 0, ": %wZ", &CmCSDVersionString);
    if ( v17 < 0 )
      KeBugCheckEx(0x32u, v17, 7uLL, 0LL, 0LL);
    v15 = ppszDestEnd;
    v18 = pcbRemaining;
  }
  else
  {
    v18 = 255LL;
    pcbRemaining = 255LL;
  }
  *v15 = 0;
  v19 = v15 + 1;
  ppszDestEnd = v19;
  v20 = RtlStringCbPrintfA(pszDest, 0x18uLL, "%u.%u", 10, 0);
  if ( v20 < 0 )
    KeBugCheckEx(0x32u, v20, 7uLL, 1uLL, 0LL);
  if ( v16 < 0 )
  {
    v22 = RtlStringCbCopyA(v19, v18, "MICROSOFT (R) WINDOWS (TM)\n");
    if ( v22 < 0 )
      KeBugCheckEx(0x32u, v22, 7uLL, 3uLL, 0LL);
  }
  else
  {
    LODWORD(MessageResourceEntry) = 18363 - (KernelVersionBump != 1);
    v21 = RtlStringCbPrintfA(v19, v18, (NTSTRSAFE_PCSTR)v114->Text, pszDest, MessageResourceEntry, PoolWithTag);
    if ( v21 < 0 )
      KeBugCheckEx(0x32u, v21, 7uLL, 2uLL, 0LL);
  }
  InbvDisplayString((__int64)v19);
  v23 = 2;
  v24 = PoolWithTag + 256;
  v25 = PoolWithTag;
  v26 = 2LL;
  do
  {
    *v24 = *(_OWORD *)v25;
    v24[1] = *((_OWORD *)v25 + 1);
    v24[2] = *((_OWORD *)v25 + 2);
    v24[3] = *((_OWORD *)v25 + 3);
    v24[4] = *((_OWORD *)v25 + 4);
    v24[5] = *((_OWORD *)v25 + 5);
    v24[6] = *((_OWORD *)v25 + 6);
    v24 += 8;
    v27 = *((_OWORD *)v25 + 7);
    v25 += 128;
    *(v24 - 1) = v27;
    --v26;
  }
  while ( v26 );
  if ( !PoInitSystem(0, (__int64)BugCheckParameter3) )
LABEL_192:
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    v28 = ExpLastTimeZoneBias;
    if ( ExpLastTimeZoneBias == -1 )
    {
      v28 = ExpAltTimeZoneBias;
      v4 = 1;
      ExpLastTimeZoneBias = ExpAltTimeZoneBias;
    }
    ExpTimeZoneBias = 600000000LL * v28;
    MEMORY[0xFFFFF7800000025C] = 0;
    MEMORY[0xFFFFF78000000028] = (unsigned __int64)(600000000LL * v28) >> 32;
    MEMORY[0xFFFFF78000000020] = 600000000LL * v28;
  }
  GetBootSystemTime(BugCheckParameter3[30], &Time);
  if ( v6 )
  {
    v29 = strstr(v6, "YEAR");
    if ( v29 )
    {
      v30 = strstr(v29, "=");
      if ( v30 )
      {
        v31 = atol(v30 + 1);
        RtlTimeToTimeFields(&Time, &TimeFields);
        TimeFields.Year = v31;
        RtlTimeFieldsToTime(&TimeFields, &Time);
      }
    }
  }
  if ( ExpRealTimeIsUniversal )
    LocalTime = Time;
  else
    ExSystemTimeToLocalTime(&Time, &LocalTime);
  KeSetSystemTime((__int64)&Time, (__int64)&v121, 4);
  PoNotifySystemTimeSet((__int64 *)&Time, &v121);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v117, (__int64)&KeRegisteredProcessors) < 0
    || v116 != 4
    || v117 != 4 )
  {
    KeRegisteredProcessors = 1;
  }
  if ( v6 )
  {
    v32 = strstr(v6, " BOOTPROC=");
    if ( v32 )
    {
      v33 = strstr(v32, "=");
      if ( v33 )
        KeBootprocSpecified = atol(v33 + 1);
    }
    v34 = strstr(v6, " NUMPROC=");
    if ( v34 )
    {
      v35 = strstr(v34, "=");
      if ( v35 )
        KeNumprocSpecified = atol(v35 + 1);
    }
    v36 = strstr(v6, " HYPERVISORNUMPROC=");
    if ( v36 )
    {
      v37 = strstr(v36, "=");
      if ( v37 )
        KeHypervisorNumprocSpecified = atol(v37 + 1);
    }
    v38 = strstr(v6, " HYPERVISORROOTPROCPERNODE=");
    if ( v38 )
    {
      v39 = strstr(v38, "=");
      if ( v39 )
        KeRootProcPerNodeSpecified = atol(v39 + 1);
    }
    v40 = strstr(v6, " HYPERVISORROOTPROCPERCORE=");
    if ( v40 )
    {
      v41 = strstr(v40, "=");
      if ( v41 )
        KeRootProcPerCoreSpecified = atol(v41 + 1);
    }
    if ( strstr(v6, " MAXPROC") )
      KeMaximumProcessors = 1280;
  }
  qword_140A4F6C8 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors();
  qword_140A4F6D0 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  MakeGdtReadOnly();
  v42 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v127) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const char *)v127->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_159:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v125, v42);
  if ( v125.Length >= 2u )
    v125.Length -= 2;
  v43 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v43 = 1073741981;
  v44 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v43, &v114);
  v45 = 0LL;
  v46 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v46 )
  {
    v47 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v45 += *v47;
      v47 += 2;
      --v46;
    }
    while ( v46 );
  }
  if ( v44 < 0 )
    v48 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v45 + 255) >> 8,
            &v125);
  else
    v48 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v114->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v45 + 255) >> 8,
            &v125);
  if ( v48 < 0 )
    KeBugCheckEx(0x32u, v48, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)PoolWithTag);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !ObInitSystem() )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  HalReportResourceUsage(0xFFFFFFFFLL);
  if ( !IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  if ( !KeInitSystem(1) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 2uLL, 0LL);
  if ( !KdInitSystem(InitializationPhase, 0LL) )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 3uLL, 0LL);
  inited = TmInitSystem(
             &TmResourceManagerObjectType,
             &TmEnlistmentObjectType,
             &TmTransactionManagerObjectType,
             &TmTransactionObjectType);
  if ( (int)(inited + 0x80000000) >= 0 && inited != -1073741637 )
    KeBugCheckEx(0x32u, 0LL, 0LL, 0LL, 0LL);
  v50 = DbgkInitialize();
  if ( v50 < 0 )
    KeBugCheckEx(0x32u, v50, 0LL, 0LL, 0LL);
  BcdInitializeBcdSyncMutant();
  VerifierInitSystem(0LL);
  if ( !SeInitSystem() )
    KeBugCheck(0x63u);
  PsInitSystem(1, BugCheckParameter3);
  ExInitLicenseCallback();
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  qword_140A4F6E8 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !MmInitSystem(1, (ULONG_PTR)BugCheckParameter3) )
    KeBugCheck(0x65u);
  qword_140A4F6F0 = KeQueryPerformanceCounter(0LL).QuadPart;
  MaximumSize.QuadPart = InitNlsTableSize;
  v52 = ZwCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v52 < 0 )
    KeBugCheckEx(0x32u, v52, 1uLL, 0LL, 0LL);
  v53 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
  InitNlsSectionPointer = Object;
  v54 = v53;
  ZwClose(SectionHandle);
  if ( (v54 & 0x80000000) != 0LL )
    KeBugCheckEx(0x32u, v54, 2uLL, 0LL, 0LL);
  MappedBase = 0LL;
  ViewSize = 0LL;
  v55 = MmMapViewInSystemSpace(InitNlsSectionPointer, &MappedBase, &ViewSize);
  if ( v55 < 0 )
    KeBugCheckEx(0x32u, v55, 3uLL, 0LL, 0LL);
  v56 = (char *)MappedBase;
  memmove(MappedBase, InitNlsTableBase, InitNlsTableSize);
  InitNlsTableBase = v56;
  if ( InitUnicodeCaseTableDataOffset )
  {
    v59 = (USHORT *)&v56[InitUnicodeCaseTableDataOffset];
    v58 = (USHORT *)&v56[InitOemCodePageDataOffset];
    v60 = (USHORT *)&v56[InitAnsiCodePageDataOffset];
  }
  else
  {
    v58 = 0LL;
    v59 = (USHORT *)v56;
    v60 = 0LL;
  }
  RtlInitNlsTables(v60, v58, v59, v57);
  RtlResetRtlTranslations(v61);
  if ( !CcInitializeCacheManager() )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1((ULONG_PTR)BugCheckParameter3) )
    KeBugCheck(0x67u);
  v62 = ExInitializeLeapSecondData();
  if ( v62 < 0 )
    KeBugCheckEx(0x32u, v62, 0xCuLL, 0LL, 0LL);
  InitSkuSessionParameters();
  qword_140A4F6B8 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v132, 0, 0x48uLL);
  LODWORD(v132[0]) = 72;
  v132[1] = MmMapLockedRestartPagesNoAlignment;
  v132[2] = MmUnmapLockedRestartPages;
  v132[3] = KeRemoveEnclavePage;
  v132[4] = KdPullRemoteFileEx;
  VslGetKsrContext();
  DisplayContext = BgGetDisplayContext();
  v64 = (int)KsrInitSystem(BugCheckParameter3, v132, DisplayContext);
  qword_140A4F6C0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v64 + 0x80000000) >= 0 && (_DWORD)v64 != -1073741637 )
    KeBugCheckEx(0x32u, v64, 0LL, 1uLL, 0LL);
  ExKsrInterface = *(_OWORD *)&v132[5];
  *(_OWORD *)&xmmword_1404323D0 = *(_OWORD *)&v132[7];
  v65 = EmInitSystem(0, (__int64)BugCheckParameter3);
  if ( v65 < 0 )
    KeBugCheckEx(0x32u, v65, 8uLL, 0LL, 0LL);
  v66 = MfgInitSystem(BugCheckParameter3);
  if ( v66 < 0 )
    KeBugCheckEx(0x32u, v66, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  SmInitSystem(0LL);
  v69 = VmInitSystem(v68, v67);
  if ( v69 < 0 )
    KeBugCheckEx(0x32u, v69, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter3[30] + 2608LL) & 2) == 0 || strstr(v6, "FORCETIMESYNC") )
    ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0LL);
  HvlWnfUpdateStartupState();
  v118 = 0;
  FsRtlSendModernAppTermination(&v118, 1u, 1);
  ExInitializeTimeRefresh(v71, v70, v72);
  ExAcquireTimeRefreshLock(1u);
  ExInitializeUtcTimeZoneBias(&LocalTime);
  v73 = ExpLastTimeZoneBias;
  ExpRefreshTimeZoneInformation();
  ExReleaseTimeRefreshLock();
  if ( v4 )
  {
    ExLocalTimeToSystemTime(&LocalTime, &Time);
    KeSetSystemTime((__int64)&Time, (__int64)&v121, 4);
  }
  else if ( v73 != ExpLastTimeZoneBias )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem(v75, v74, v76) )
    KeBugCheck(0x68u);
  RtlInitializeCompression();
  RtlInitializeRangeListPackage(v78, v77, v79);
  HvlDebuggerSupportInitialize((__int64)BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, (char *)&KdDebuggerNotPresent + 5);
  if ( !(unsigned __int8)PpInitSystem(v81, v80, v82) )
    KeBugCheck(0x90u);
  if ( !(unsigned __int8)LpcInitSystem(v84, v83, v85) )
    KeBugCheck(0x6Au);
  if ( v6 )
    v89 = strstr(v6, "SAFEBOOT:");
  else
    v89 = 0LL;
  v90 = v89;
  if ( v89 )
  {
    v91 = 9LL;
    v92 = v89 + 9;
    if ( !strncmp(v92, "MINIMAL", 7uLL) )
    {
      InitSafeBootMode = 1;
      v91 = 16LL;
    }
    else
    {
      if ( !strncmp(v92, "NETWORK", 7uLL) )
      {
        v91 = 16LL;
      }
      else if ( !strncmp(v92, "DSREPAIR", 8uLL) )
      {
        v23 = 3;
        v91 = 17LL;
      }
      else
      {
        v23 = 0;
      }
      InitSafeBootMode = v23;
    }
    v87 = (__int64)&v90[v91];
    if ( v90[v91] )
    {
      v93 = strncmp((const char *)v87, "(ALTERNATESHELL)", 0x10uLL);
      v87 = (unsigned __int8)v113;
      if ( !v93 )
        v87 = 1LL;
      v113 = v87;
    }
    if ( InitSafeBootMode )
    {
      v94 = 0;
      switch ( InitSafeBootMode )
      {
        case 1:
          v94 = 168;
          break;
        case 2:
          v94 = 169;
          break;
        case 3:
          v94 = 170;
          break;
      }
      if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v94, &v130) >= 0 )
        InbvDisplayString((__int64)v130->Text);
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter3[30] + 116LL) & 0x800) != 0 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v114) >= 0 )
      InbvDisplayString((__int64)v114->Text);
    IopInitializeBootLogging((__int64)BugCheckParameter3, (__int64)(PoolWithTag + 256));
  }
  ExInitSystemPhase2(v87, v86, v88);
  MEMORY[0xFFFFF780000002D6] = ExpComputeCyclesPerYield(v96, v95, v97);
  if ( InitIsWinPEMode )
    CreateMiniNtBootKey(v99, v98, v100);
  v101 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v101 < 0 )
    KeBugCheckEx(0x32u, v101, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v105 = ExInitializeNls(v103, v102, v104);
  if ( v105 < 0 )
    KeBugCheckEx(0x32u, v105, 7uLL, 0LL, 0LL);
  v109 = ExInitializeExternalBootSupport(v107, v106, v108);
  if ( v109 < 0 )
    KeBugCheckEx(0x32u, v109, 8uLL, 0LL, 0LL);
  if ( !PoInitSystem(1, (__int64)BugCheckParameter3) )
    goto LABEL_192;
  return v113;
}
