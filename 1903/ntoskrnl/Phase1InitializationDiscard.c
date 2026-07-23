/*
 * XREFs of Phase1InitializationDiscard @ 0x140A07008
 * Callers:
 *     Phase1Initialization @ 0x1407573D0 (Phase1Initialization.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140010B30 (KeSetPriorityThread.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyA @ 0x14008AE58 (RtlStringCbCopyA.c)
 *     FsRtlSendModernAppTermination @ 0x1400B7820 (FsRtlSendModernAppTermination.c)
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     RtlTimeFieldsToTime @ 0x140120F80 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14013CC60 (ExSystemTimeToLocalTime.c)
 *     RtlTimeToTimeFields @ 0x140144D30 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x14015C370 (ExLocalTimeToSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x140181BFC (PoNotifySystemTimeSet.c)
 *     KeSetSystemTime @ 0x140181E60 (KeSetSystemTime.c)
 *     MakeGdtReadOnly @ 0x14018575C (MakeGdtReadOnly.c)
 *     DisplayBootBitmap @ 0x14018A578 (DisplayBootBitmap.c)
 *     RtlStringCbPrintfA @ 0x14018BBD4 (RtlStringCbPrintfA.c)
 *     InbvDisplayString @ 0x14018BCB0 (InbvDisplayString.c)
 *     KeSetAffinityProcess @ 0x14019A6D8 (KeSetAffinityProcess.c)
 *     HvlDebuggerSupportInitialize @ 0x14019DD68 (HvlDebuggerSupportInitialize.c)
 *     HvlWnfUpdateStartupState @ 0x14019E5F0 (HvlWnfUpdateStartupState.c)
 *     InbvEnableDisplayString @ 0x14019E650 (InbvEnableDisplayString.c)
 *     InbvInstallDisplayStringFilter @ 0x14019E690 (InbvInstallDisplayStringFilter.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _strupr @ 0x14019F2D0 (_strupr.c)
 *     strncmp @ 0x14019F550 (strncmp.c)
 *     strstr @ 0x14019F610 (strstr.c)
 *     atol @ 0x14019F6C0 (atol.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwCreateSection @ 0x1401C0A10 (ZwCreateSection.c)
 *     ZwQueryLicenseValue @ 0x1401C2A70 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x1401C3590 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1401C3B00 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlStringCbPrintfExA @ 0x14027BAA8 (RtlStringCbPrintfExA.c)
 *     RtlInitializeCompression @ 0x14030AFE4 (RtlInitializeCompression.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     MmMapViewInSystemSpace @ 0x1406AD0D0 (MmMapViewInSystemSpace.c)
 *     RtlFindMessage @ 0x1406C58E0 (RtlFindMessage.c)
 *     ExpRefreshTimeZoneInformation @ 0x14075FA7C (ExpRefreshTimeZoneInformation.c)
 *     RtlInitNlsTables @ 0x140783F00 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x140786CB4 (RtlResetRtlTranslations.c)
 *     IopInitializeBootLogging @ 0x140853F14 (IopInitializeBootLogging.c)
 *     KdInitSystem @ 0x140953150 (KdInitSystem.c)
 *     BgGetDisplayContext @ 0x14098E024 (BgGetDisplayContext.c)
 *     KePerformGroupConfiguration @ 0x1409EDB78 (KePerformGroupConfiguration.c)
 *     KeStartAllProcessors @ 0x1409EDD08 (KeStartAllProcessors.c)
 *     MmInitSystem @ 0x1409F0DC4 (MmInitSystem.c)
 *     EmInitSystem @ 0x1409F94D0 (EmInitSystem.c)
 *     KeInitializeClock @ 0x1409FCAA0 (KeInitializeClock.c)
 *     KeInitSystem @ 0x1409FD23C (KeInitSystem.c)
 *     PsInitSystem @ 0x1409FE980 (PsInitSystem.c)
 *     SeInitSystem @ 0x1409FEA60 (SeInitSystem.c)
 *     VmInitSystem @ 0x140A01180 (VmInitSystem.c)
 *     DbgkInitialize @ 0x140A021B0 (DbgkInitialize.c)
 *     CcInitializeCacheManager @ 0x140A03BC8 (CcInitializeCacheManager.c)
 *     IoCreateObjectTypes @ 0x140A03FE8 (IoCreateObjectTypes.c)
 *     ObInitSystem @ 0x140A04E20 (ObInitSystem.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 *     ExInitializeExternalBootSupport @ 0x140A0925C (ExInitializeExternalBootSupport.c)
 *     ExInitializeNls @ 0x140A092EC (ExInitializeNls.c)
 *     SeCodeIntegrityInitializePolicy @ 0x140A09340 (SeCodeIntegrityInitializePolicy.c)
 *     ExpComputeCyclesPerYield @ 0x140A095A4 (ExpComputeCyclesPerYield.c)
 *     ExInitSystemPhase2 @ 0x140A09604 (ExInitSystemPhase2.c)
 *     CmInitSystem1 @ 0x140A0CCC4 (CmInitSystem1.c)
 *     ExInitializeLeapSecondData @ 0x140A0E650 (ExInitializeLeapSecondData.c)
 *     ExInitSystem @ 0x140A17EA0 (ExInitSystem.c)
 *     PfInitializeSuperfetch @ 0x140A18DA0 (PfInitializeSuperfetch.c)
 *     SmInitSystem @ 0x140A19D78 (SmInitSystem.c)
 *     InbvDriverInitialize @ 0x140A1A02C (InbvDriverInitialize.c)
 *     FsRtlInitSystem @ 0x140A1A388 (FsRtlInitSystem.c)
 *     LpcInitSystem @ 0x140A1D178 (LpcInitSystem.c)
 *     CreateSystemRootLink @ 0x140A1D990 (CreateSystemRootLink.c)
 *     VerifierInitSystem @ 0x140A1E060 (VerifierInitSystem.c)
 *     GetBootSystemTime @ 0x140A20528 (GetBootSystemTime.c)
 *     InitSkuSessionParameters @ 0x140A20958 (InitSkuSessionParameters.c)
 *     PpInitSystem @ 0x140A215F8 (PpInitSystem.c)
 *     MfgInitSystem @ 0x140A22314 (MfgInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x140A22584 (BcdInitializeBcdSyncMutant.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140A22BAC (ExInitializeUtcTimeZoneBias.c)
 *     ExInitLicenseCallback @ 0x140A22DE8 (ExInitLicenseCallback.c)
 *     VslGetKsrContext @ 0x140A22EB4 (VslGetKsrContext.c)
 *     CreateMiniNtBootKey @ 0x140A38450 (CreateMiniNtBootKey.c)
 *     RtlInitializeRangeListPackage @ 0x140A3DE20 (RtlInitializeRangeListPackage.c)
 *     BgkDisplayProgressIndicator @ 0x140A404BC (BgkDisplayProgressIndicator.c)
 *     BgkDisplayBackgroundUpdate @ 0x140A41068 (BgkDisplayBackgroundUpdate.c)
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
  __int64 v67; // rdx
  __int64 v68; // rcx
  int v69; // eax
  int v70; // ebx
  char *v71; // rbx
  char *v72; // r12
  __int64 v73; // rdi
  const char *v74; // rbx
  int v75; // eax
  int v76; // ecx
  ULONG v77; // r9d
  int v78; // eax
  int v79; // eax
  int v80; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-E0h]
  LARGE_INTEGER Time; // [rsp+40h] [rbp-C0h] BYREF
  int v84; // [rsp+48h] [rbp-B8h]
  PMESSAGE_RESOURCE_ENTRY v85; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ResultDataSize; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Type; // [rsp+64h] [rbp-9Ch] BYREF
  int Buffer; // [rsp+68h] [rbp-98h] BYREF
  size_t pcbRemaining; // [rsp+70h] [rbp-90h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+78h] [rbp-88h] BYREF
  __int64 v92; // [rsp+80h] [rbp-80h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+88h] [rbp-78h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-70h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp-68h] BYREF
  _STRING v96; // [rsp+A0h] [rbp-60h] BYREF
  _TIME_FIELDS TimeFields; // [rsp+B0h] [rbp-50h] BYREF
  PMESSAGE_RESOURCE_ENTRY v98; // [rsp+C0h] [rbp-40h] BYREF
  PVOID Object; // [rsp+C8h] [rbp-38h] BYREF
  ULONG_PTR ViewSize; // [rsp+D0h] [rbp-30h] BYREF
  PMESSAGE_RESOURCE_ENTRY v101; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v103[10]; // [rsp+F0h] [rbp-10h] BYREF
  char pszDest[24]; // [rsp+140h] [rbp+40h] BYREF

  Time.QuadPart = 0LL;
  LocalTime.QuadPart = 0LL;
  v92 = 0LL;
  *(_QWORD *)&v96.Length = 0LL;
  v96.Buffer = 0LL;
  MaximumSize.QuadPart = 0LL;
  *(_QWORD *)&TimeFields.Year = 0LL;
  *(_QWORD *)&TimeFields.Minute = 0LL;
  LOBYTE(v84) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(v103, 0, 0x48uLL);
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
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v85);
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
    v21 = RtlStringCbPrintfA(v19, v18, (NTSTRSAFE_PCSTR)v85->Text, pszDest, MessageResourceEntry, PoolWithTag);
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
  KeSetSystemTime((__int64)&Time, (__int64)&v92, 4);
  PoNotifySystemTimeSet((__int64 *)&Time, &v92);
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
  qword_140A506C8 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors();
  qword_140A506D0 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  MakeGdtReadOnly();
  v42 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v98) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const CHAR *)v98->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_159:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v96, v42);
  if ( v96.Length >= 2u )
    v96.Length -= 2;
  v43 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v43 = 1073741981;
  v44 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v43, &v85);
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
            &v96);
  else
    v48 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v85->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v45 + 255) >> 8,
            &v96);
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
  qword_140A506E8 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !MmInitSystem(1, (ULONG_PTR)BugCheckParameter3) )
    KeBugCheck(0x65u);
  qword_140A506F0 = KeQueryPerformanceCounter(0LL).QuadPart;
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
  qword_140A506B8 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v103, 0, 0x48uLL);
  LODWORD(v103[0]) = 72;
  v103[1] = MmMapLockedRestartPagesNoAlignment;
  v103[2] = MmUnmapLockedRestartPages;
  v103[3] = KeRemoveEnclavePage;
  v103[4] = KdPullRemoteFileEx;
  VslGetKsrContext();
  DisplayContext = BgGetDisplayContext();
  v64 = (int)KsrInitSystem(BugCheckParameter3, v103, DisplayContext);
  qword_140A506C0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v64 + 0x80000000) >= 0 && (_DWORD)v64 != -1073741637 )
    KeBugCheckEx(0x32u, v64, 0LL, 1uLL, 0LL);
  ExKsrInterface = *(_OWORD *)&v103[5];
  *(_OWORD *)&xmmword_140432430 = *(_OWORD *)&v103[7];
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
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  HvlWnfUpdateStartupState();
  Buffer = 0;
  FsRtlSendModernAppTermination(&Buffer, 1u, 1);
  ExInitializeUtcTimeZoneBias(&LocalTime);
  v70 = ExpLastTimeZoneBias;
  ExpRefreshTimeZoneInformation();
  if ( v4 )
  {
    ExLocalTimeToSystemTime(&LocalTime, &Time);
    KeSetSystemTime((__int64)&Time, (__int64)&v92, 4);
  }
  else if ( v70 != ExpLastTimeZoneBias )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem() )
    KeBugCheck(0x68u);
  RtlInitializeCompression();
  RtlInitializeRangeListPackage();
  HvlDebuggerSupportInitialize((__int64)BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x90u);
  if ( !(unsigned __int8)LpcInitSystem() )
    KeBugCheck(0x6Au);
  if ( v6 )
    v71 = strstr(v6, "SAFEBOOT:");
  else
    v71 = 0LL;
  v72 = v71;
  if ( v71 )
  {
    v73 = 9LL;
    v74 = v71 + 9;
    if ( !strncmp(v74, "MINIMAL", 7uLL) )
    {
      InitSafeBootMode = 1;
      v73 = 16LL;
    }
    else
    {
      if ( !strncmp(v74, "NETWORK", 7uLL) )
      {
        v73 = 16LL;
      }
      else if ( !strncmp(v74, "DSREPAIR", 8uLL) )
      {
        v23 = 3;
        v73 = 17LL;
      }
      else
      {
        v23 = 0;
      }
      InitSafeBootMode = v23;
    }
    if ( v72[v73] )
    {
      v75 = strncmp(&v72[v73], "(ALTERNATESHELL)", 0x10uLL);
      v76 = (unsigned __int8)v84;
      if ( !v75 )
        v76 = 1;
      v84 = v76;
    }
    if ( InitSafeBootMode )
    {
      v77 = 0;
      switch ( InitSafeBootMode )
      {
        case 1:
          v77 = 168;
          break;
        case 2:
          v77 = 169;
          break;
        case 3:
          v77 = 170;
          break;
      }
      if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v77, &v101) >= 0 )
        InbvDisplayString((__int64)v101->Text);
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter3[30] + 116LL) & 0x800) != 0 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v85) >= 0 )
      InbvDisplayString((__int64)v85->Text);
    IopInitializeBootLogging((__int64)BugCheckParameter3, (__int64)(PoolWithTag + 256));
  }
  ExInitSystemPhase2();
  MEMORY[0xFFFFF780000002D6] = ExpComputeCyclesPerYield();
  if ( InitIsWinPEMode )
    CreateMiniNtBootKey();
  v78 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v78 < 0 )
    KeBugCheckEx(0x32u, v78, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v79 = ExInitializeNls();
  if ( v79 < 0 )
    KeBugCheckEx(0x32u, v79, 7uLL, 0LL, 0LL);
  v80 = ExInitializeExternalBootSupport();
  if ( v80 < 0 )
    KeBugCheckEx(0x32u, v80, 8uLL, 0LL, 0LL);
  if ( !PoInitSystem(1, (__int64)BugCheckParameter3) )
    goto LABEL_192;
  return v84;
}
