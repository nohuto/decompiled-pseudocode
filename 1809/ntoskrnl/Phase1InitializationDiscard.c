/*
 * XREFs of Phase1InitializationDiscard @ 0x1409B4E10
 * Callers:
 *     Phase1Initialization @ 0x14074C7A0 (Phase1Initialization.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140011EF8 (RtlStringCbCopyA.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     RtlInitAnsiString @ 0x1400EEE10 (RtlInitAnsiString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeFieldsToTime @ 0x140127130 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14013B0A0 (ExSystemTimeToLocalTime.c)
 *     KeSetSystemTime @ 0x1401434EC (KeSetSystemTime.c)
 *     RtlTimeToTimeFields @ 0x14015DB20 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x140160CF0 (ExLocalTimeToSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x14017844C (PoNotifySystemTimeSet.c)
 *     RtlStringCbPrintfA @ 0x14017DFF4 (RtlStringCbPrintfA.c)
 *     InbvDisplayString @ 0x14017E0D0 (InbvDisplayString.c)
 *     MakeGdtReadOnly @ 0x14017E238 (MakeGdtReadOnly.c)
 *     DisplayBootBitmap @ 0x14018189C (DisplayBootBitmap.c)
 *     FsRtlSendModernAppTermination @ 0x14018B0E0 (FsRtlSendModernAppTermination.c)
 *     KeSetAffinityProcess @ 0x1401905F4 (KeSetAffinityProcess.c)
 *     HvlWnfUpdateStartupState @ 0x140193FD4 (HvlWnfUpdateStartupState.c)
 *     InbvEnableDisplayString @ 0x140194040 (InbvEnableDisplayString.c)
 *     HvlDebuggerSupportInitialize @ 0x140194054 (HvlDebuggerSupportInitialize.c)
 *     InbvInstallDisplayStringFilter @ 0x1401940E0 (InbvInstallDisplayStringFilter.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _strupr @ 0x140194D10 (_strupr.c)
 *     strncmp @ 0x140194F40 (strncmp.c)
 *     strstr @ 0x140195000 (strstr.c)
 *     atol @ 0x1401950B0 (atol.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwCreateSection @ 0x1401B8C30 (ZwCreateSection.c)
 *     ZwQueryLicenseValue @ 0x1401BAC70 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x1401BB790 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlStringCbPrintfExA @ 0x140268CD8 (RtlStringCbPrintfExA.c)
 *     RtlInitializeCompression @ 0x1402ECA24 (RtlInitializeCompression.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpWriteTimeZoneBias @ 0x140584B28 (ExpWriteTimeZoneBias.c)
 *     MmMapViewInSystemSpace @ 0x1405A33A0 (MmMapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ExAcquireTimeRefreshLock @ 0x1406669FC (ExAcquireTimeRefreshLock.c)
 *     RtlFindMessage @ 0x14067CF90 (RtlFindMessage.c)
 *     ExReleaseTimeRefreshLock @ 0x1406BFE98 (ExReleaseTimeRefreshLock.c)
 *     ExInitializeLeapSecondData @ 0x1407351B0 (ExInitializeLeapSecondData.c)
 *     ExpRefreshTimeZoneInformation @ 0x140735864 (ExpRefreshTimeZoneInformation.c)
 *     RtlInitNlsTables @ 0x14075E2C0 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1407606F4 (RtlResetRtlTranslations.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140765168 (ExInitializeUtcTimeZoneBias.c)
 *     IopInitializeBootLogging @ 0x14081B214 (IopInitializeBootLogging.c)
 *     KdInitSystem @ 0x140916140 (KdInitSystem.c)
 *     BgGetDisplayContext @ 0x14094F024 (BgGetDisplayContext.c)
 *     SeInitSystem @ 0x1409AC3BC (SeInitSystem.c)
 *     VmInitSystem @ 0x1409AED1C (VmInitSystem.c)
 *     DbgkInitialize @ 0x1409AFA1C (DbgkInitialize.c)
 *     CcInitializeCacheManager @ 0x1409B16D8 (CcInitializeCacheManager.c)
 *     IoCreateObjectTypes @ 0x1409B1D90 (IoCreateObjectTypes.c)
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     KePerformGroupConfiguration @ 0x1409B6C1C (KePerformGroupConfiguration.c)
 *     KeStartAllProcessors @ 0x1409B6DAC (KeStartAllProcessors.c)
 *     MmInitSystem @ 0x1409BD4E4 (MmInitSystem.c)
 *     EmInitSystem @ 0x1409BE7E0 (EmInitSystem.c)
 *     CmInitSystem1 @ 0x1409C4050 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x1409C5288 (ExInitializeTimeRefresh.c)
 *     PsInitSystem @ 0x1409C5944 (PsInitSystem.c)
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 *     GetBootSystemTime @ 0x1409D2C24 (GetBootSystemTime.c)
 *     PfInitializeSuperfetch @ 0x1409D5634 (PfInitializeSuperfetch.c)
 *     ExInitSystem @ 0x1409D5FF0 (ExInitSystem.c)
 *     ExInitSystemPhase2 @ 0x1409D66E8 (ExInitSystemPhase2.c)
 *     SmInitSystem @ 0x1409D7CD8 (SmInitSystem.c)
 *     InbvDriverInitialize @ 0x1409D7F70 (InbvDriverInitialize.c)
 *     FsRtlInitSystem @ 0x1409D8714 (FsRtlInitSystem.c)
 *     KeInitializeClock @ 0x1409D9C58 (KeInitializeClock.c)
 *     LpcInitSystem @ 0x1409DAD94 (LpcInitSystem.c)
 *     CreateSystemRootLink @ 0x1409DB774 (CreateSystemRootLink.c)
 *     VerifierInitSystem @ 0x1409DBED4 (VerifierInitSystem.c)
 *     SeCodeIntegrityInitializePolicy @ 0x1409DD0B4 (SeCodeIntegrityInitializePolicy.c)
 *     InitSkuSessionParameters @ 0x1409DEA3C (InitSkuSessionParameters.c)
 *     PpInitSystem @ 0x1409DEDD4 (PpInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x1409DFDA8 (BcdInitializeBcdSyncMutant.c)
 *     ExInitializeExternalBootSupport @ 0x1409DFE1C (ExInitializeExternalBootSupport.c)
 *     ExInitializeNls @ 0x1409DFEAC (ExInitializeNls.c)
 *     MfgInitSystem @ 0x1409E010C (MfgInitSystem.c)
 *     ExInitLicenseCallback @ 0x1409E0480 (ExInitLicenseCallback.c)
 *     VslGetKsrContext @ 0x1409E056C (VslGetKsrContext.c)
 *     CreateMiniNtBootKey @ 0x1409F4080 (CreateMiniNtBootKey.c)
 *     RtlInitializeRangeListPackage @ 0x1409F92F8 (RtlInitializeRangeListPackage.c)
 *     BgkDisplayProgressIndicator @ 0x1409FB85C (BgkDisplayProgressIndicator.c)
 *     BgkDisplayBackgroundUpdate @ 0x1409FC3E4 (BgkDisplayBackgroundUpdate.c)
 */

char __fastcall Phase1InitializationDiscard(ULONG_PTR BugCheckParameter3)
{
  __int64 v2; // r12
  char *PoolWithTag; // r13
  struct _KTHREAD *CurrentThread; // rcx
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
  const CHAR *v42; // rbx
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
  _NLSTABLEINFO *v57; // r9
  USHORT *v58; // rdx
  USHORT *v59; // r8
  USHORT *v60; // rcx
  PNLSTABLEINFO v61; // rcx
  int v62; // eax
  __int128 *DisplayContext; // rax
  ULONG_PTR v64; // rbx
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // ebx
  char *v69; // rbx
  char *v70; // r12
  __int64 v71; // rdi
  const char *v72; // rbx
  int v73; // eax
  int v74; // ecx
  ULONG v75; // r9d
  int v76; // eax
  int v77; // eax
  int v78; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-E0h]
  char v81; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER Time; // [rsp+48h] [rbp-B8h] BYREF
  int v83; // [rsp+50h] [rbp-B0h]
  PMESSAGE_RESOURCE_ENTRY v84; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Type; // [rsp+64h] [rbp-9Ch] BYREF
  int Buffer; // [rsp+68h] [rbp-98h] BYREF
  size_t pcbRemaining; // [rsp+70h] [rbp-90h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+80h] [rbp-80h] BYREF
  HANDLE SectionHandle; // [rsp+88h] [rbp-78h] BYREF
  PVOID MappedBase; // [rsp+90h] [rbp-70h] BYREF
  struct _SINGLE_LIST_ENTRY v93; // [rsp+98h] [rbp-68h] BYREF
  PMESSAGE_RESOURCE_ENTRY v94; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-58h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR ViewSize; // [rsp+B8h] [rbp-48h] BYREF
  PMESSAGE_RESOURCE_ENTRY v98; // [rsp+C0h] [rbp-40h] BYREF
  _STRING v99; // [rsp+C8h] [rbp-38h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-18h] BYREF
  _OWORD v102[4]; // [rsp+100h] [rbp+0h] BYREF
  char pszDest[24]; // [rsp+140h] [rbp+40h] BYREF

  LOBYTE(v83) = 0;
  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 132);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  LODWORD(InitializationPhase) = 1;
  v81 = 0;
  KeSetPriorityThread(CurrentThread, 31);
  v5 = *(char **)(BugCheckParameter3 + 216);
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
  KeInitializeClock((unsigned int)InitializationPhase);
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
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v84);
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
    LODWORD(MessageResourceEntry) = 17763;
    v21 = RtlStringCbPrintfA(v19, v18, (NTSTRSAFE_PCSTR)v84->Text, pszDest, MessageResourceEntry, PoolWithTag);
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
  if ( !PoInitSystem(0, BugCheckParameter3) )
LABEL_192:
    KeBugCheck(0xA0u);
  if ( !ExpRealTimeIsUniversal )
  {
    v28 = *(_DWORD *)(v2 + 436);
    if ( v28 == -1 )
    {
      v28 = ExpAltTimeZoneBias;
      *(_DWORD *)(v2 + 436) = ExpAltTimeZoneBias;
      v81 = 1;
    }
    *(_QWORD *)(v2 + 440) = 600000000LL * v28;
    MEMORY[0xFFFFF7800000025C] = 0;
    ExpWriteTimeZoneBias((_DWORD *)(v2 + 440));
  }
  GetBootSystemTime(*(_QWORD *)(BugCheckParameter3 + 240), &Time);
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
  KeSetSystemTime((struct _SINGLE_LIST_ENTRY *)&Time, &v93, 4);
  PoNotifySystemTimeSet((__int64 *)&Time, (__int64 *)&v93);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( ZwQueryLicenseValue(&DestinationString, &Type, &KeRegisteredProcessors, 4u, &ResultDataSize) < 0
    || ResultDataSize != 4
    || Type != 4 )
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
  qword_140A0B6A8 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors();
  qword_140A0B6B0 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  MakeGdtReadOnly();
  v42 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v94) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const CHAR *)v94->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_159:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v99, v42);
  if ( v99.Length >= 2u )
    v99.Length -= 2;
  v43 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v43 = 1073741981;
  v44 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v43, &v84);
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
            &v99);
  else
    v48 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v84->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v45 + 255) >> 8,
            &v99);
  if ( v48 < 0 )
    KeBugCheckEx(0x32u, v48, 7uLL, 4uLL, 0LL);
  InbvDisplayString((__int64)PoolWithTag);
  ExFreePoolWithTag(PoolWithTag, 0);
  if ( !ObInitSystem() )
    KeBugCheck(0x62u);
  if ( !(unsigned __int8)ExInitSystem() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 1uLL, 0LL);
  if ( !IoCreateObjectTypes() )
    KeBugCheckEx(0x32u, 0xFFFFFFFFC0000001uLL, 0LL, 4uLL, 0LL);
  if ( !(unsigned __int8)KeInitSystem(1LL) )
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
  PsInitSystem(1LL, BugCheckParameter3);
  ExInitLicenseCallback();
  SystemRootLink = CreateSystemRootLink(BugCheckParameter3);
  if ( SystemRootLink < 0 )
    KeBugCheckEx(0x64u, SystemRootLink, 0LL, 0LL, 0LL);
  if ( !(unsigned __int8)MmInitSystem(1LL, BugCheckParameter3) )
    KeBugCheck(0x65u);
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
  if ( !(unsigned __int8)CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  v62 = ExInitializeLeapSecondData();
  if ( v62 < 0 )
    KeBugCheckEx(0x32u, v62, 0xCuLL, 0LL, 0LL);
  InitSkuSessionParameters();
  qword_140A0B698 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v102, 0, sizeof(v102));
  LODWORD(v102[0]) = 64;
  *((_QWORD *)&v102[0] + 1) = MmMapLockedRestartPages;
  *(_QWORD *)&v102[1] = MmUnmapLockedRestartPages;
  *((_QWORD *)&v102[1] + 1) = KeRemoveEnclavePage;
  VslGetKsrContext();
  DisplayContext = BgGetDisplayContext();
  v64 = (int)KsrInitSystem(BugCheckParameter3, v102, DisplayContext);
  qword_140A0B6A0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v64 + 0x80000000) >= 0 && (_DWORD)v64 != -1073741637 )
    KeBugCheckEx(0x32u, v64, 0LL, 1uLL, 0LL);
  ExKsrInterface = v102[2];
  *(_OWORD *)&xmmword_14040AD30 = v102[3];
  v65 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v65 < 0 )
    KeBugCheckEx(0x32u, v65, 8uLL, 0LL, 0LL);
  v66 = MfgInitSystem(BugCheckParameter3);
  if ( v66 < 0 )
    KeBugCheckEx(0x32u, v66, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  SmInitSystem(0LL);
  v67 = VmInitSystem();
  if ( v67 < 0 )
    KeBugCheckEx(0x32u, v67, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2584LL) & 2) == 0 || strstr(v6, "FORCETIMESYNC") )
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  HvlWnfUpdateStartupState();
  Buffer = 0;
  FsRtlSendModernAppTermination(&Buffer, 1u, 1);
  ExInitializeTimeRefresh();
  ExAcquireTimeRefreshLock(1u);
  ExInitializeUtcTimeZoneBias(&LocalTime);
  v68 = *(_DWORD *)(v2 + 436);
  ExpRefreshTimeZoneInformation(0);
  ExReleaseTimeRefreshLock();
  if ( v81 )
  {
    ExLocalTimeToSystemTime(&LocalTime, &Time);
    KeSetSystemTime((struct _SINGLE_LIST_ENTRY *)&Time, &v93, 4);
  }
  else if ( v68 != *(_DWORD *)(v2 + 436) )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem() )
    KeBugCheck(0x68u);
  RtlInitializeCompression();
  RtlInitializeRangeListPackage();
  HvlDebuggerSupportInitialize(BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  if ( !(unsigned __int8)LpcInitSystem() )
    KeBugCheck(0x6Au);
  if ( v6 )
    v69 = strstr(v6, "SAFEBOOT:");
  else
    v69 = 0LL;
  v70 = v69;
  if ( v69 )
  {
    v71 = 9LL;
    v72 = v69 + 9;
    if ( !strncmp(v72, "MINIMAL", 7uLL) )
    {
      InitSafeBootMode = 1;
      v71 = 16LL;
    }
    else
    {
      if ( !strncmp(v72, "NETWORK", 7uLL) )
      {
        v71 = 16LL;
      }
      else if ( !strncmp(v72, "DSREPAIR", 8uLL) )
      {
        v23 = 3;
        v71 = 17LL;
      }
      else
      {
        v23 = 0;
      }
      InitSafeBootMode = v23;
    }
    if ( v70[v71] )
    {
      v73 = strncmp(&v70[v71], "(ALTERNATESHELL)", 0x10uLL);
      v74 = (unsigned __int8)v83;
      if ( !v73 )
        v74 = 1;
      v83 = v74;
    }
    if ( InitSafeBootMode )
    {
      v75 = 0;
      switch ( InitSafeBootMode )
      {
        case 1:
          v75 = 168;
          break;
        case 2:
          v75 = 169;
          break;
        case 3:
          v75 = 170;
          break;
      }
      if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v75, &v98) >= 0 )
        InbvDisplayString((__int64)v98->Text);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 116LL) & 0x800) != 0 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v84) >= 0 )
      InbvDisplayString((__int64)v84->Text);
    IopInitializeBootLogging(BugCheckParameter3, (__int64)(PoolWithTag + 256));
  }
  ExInitSystemPhase2();
  if ( InitIsWinPEMode )
    CreateMiniNtBootKey();
  v76 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v76 < 0 )
    KeBugCheckEx(0x32u, v76, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v77 = ExInitializeNls();
  if ( v77 < 0 )
    KeBugCheckEx(0x32u, v77, 7uLL, 0LL, 0LL);
  v78 = ExInitializeExternalBootSupport();
  if ( v78 < 0 )
    KeBugCheckEx(0x32u, v78, 8uLL, 0LL, 0LL);
  if ( !PoInitSystem(1, BugCheckParameter3) )
    goto LABEL_192;
  return v83;
}
