/*
 * XREFs of Phase1InitializationDiscard @ 0x1409B3E10
 * Callers:
 *     Phase1Initialization @ 0x14074B5B0 (Phase1Initialization.c)
 * Callees:
 *     RtlStringCbCopyA @ 0x140011EF8 (RtlStringCbCopyA.c)
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     KeSetPriorityThread @ 0x1400CD870 (KeSetPriorityThread.c)
 *     RtlInitAnsiString @ 0x1400EED90 (RtlInitAnsiString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109D40 (PsGetCurrentServerSiloGlobals.c)
 *     RtlTimeFieldsToTime @ 0x140127060 (RtlTimeFieldsToTime.c)
 *     ExSystemTimeToLocalTime @ 0x14013AFA0 (ExSystemTimeToLocalTime.c)
 *     KeSetSystemTime @ 0x1401433EC (KeSetSystemTime.c)
 *     RtlTimeToTimeFields @ 0x14015DA20 (RtlTimeToTimeFields.c)
 *     ExLocalTimeToSystemTime @ 0x140160BF0 (ExLocalTimeToSystemTime.c)
 *     PoNotifySystemTimeSet @ 0x14017834C (PoNotifySystemTimeSet.c)
 *     RtlStringCbPrintfA @ 0x14017DEB4 (RtlStringCbPrintfA.c)
 *     InbvDisplayString @ 0x14017DF90 (InbvDisplayString.c)
 *     MakeGdtReadOnly @ 0x14017E0F8 (MakeGdtReadOnly.c)
 *     DisplayBootBitmap @ 0x14018175C (DisplayBootBitmap.c)
 *     FsRtlSendModernAppTermination @ 0x14018AFA0 (FsRtlSendModernAppTermination.c)
 *     KeSetAffinityProcess @ 0x1401904B4 (KeSetAffinityProcess.c)
 *     HvlWnfUpdateStartupState @ 0x140193E94 (HvlWnfUpdateStartupState.c)
 *     InbvEnableDisplayString @ 0x140193F00 (InbvEnableDisplayString.c)
 *     HvlDebuggerSupportInitialize @ 0x140193F14 (HvlDebuggerSupportInitialize.c)
 *     InbvInstallDisplayStringFilter @ 0x140193FA0 (InbvInstallDisplayStringFilter.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     _strupr @ 0x140194BD0 (_strupr.c)
 *     strncmp @ 0x140194E00 (strncmp.c)
 *     strstr @ 0x140194EC0 (strstr.c)
 *     atol @ 0x140194F70 (atol.c)
 *     ZwClose @ 0x1401B8370 (ZwClose.c)
 *     ZwCreateSection @ 0x1401B8AD0 (ZwCreateSection.c)
 *     ZwQueryLicenseValue @ 0x1401BAB10 (ZwQueryLicenseValue.c)
 *     ZwSetSystemTime @ 0x1401BB630 (ZwSetSystemTime.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA70 (ZwUpdateWnfStateData.c)
 *     KeBugCheck @ 0x1401BBBA0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     RtlStringCbPrintfExA @ 0x140268AE8 (RtlStringCbPrintfExA.c)
 *     RtlInitializeCompression @ 0x1402EC834 (RtlInitializeCompression.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ExpWriteTimeZoneBias @ 0x140583B28 (ExpWriteTimeZoneBias.c)
 *     MmMapViewInSystemSpace @ 0x1405A23A0 (MmMapViewInSystemSpace.c)
 *     ObReferenceObjectByHandle @ 0x1405E8350 (ObReferenceObjectByHandle.c)
 *     ExAcquireTimeRefreshLock @ 0x14066583C (ExAcquireTimeRefreshLock.c)
 *     RtlFindMessage @ 0x14067BDD0 (RtlFindMessage.c)
 *     ExReleaseTimeRefreshLock @ 0x1406BEBF8 (ExReleaseTimeRefreshLock.c)
 *     ExInitializeLeapSecondData @ 0x140733FC0 (ExInitializeLeapSecondData.c)
 *     ExpRefreshTimeZoneInformation @ 0x140734674 (ExpRefreshTimeZoneInformation.c)
 *     RtlInitNlsTables @ 0x14075D0D0 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x14075F504 (RtlResetRtlTranslations.c)
 *     ExInitializeUtcTimeZoneBias @ 0x140763F78 (ExInitializeUtcTimeZoneBias.c)
 *     IopInitializeBootLogging @ 0x14081A014 (IopInitializeBootLogging.c)
 *     KdInitSystem @ 0x140915140 (KdInitSystem.c)
 *     BgGetDisplayContext @ 0x14094E024 (BgGetDisplayContext.c)
 *     SeInitSystem @ 0x1409AB3BC (SeInitSystem.c)
 *     VmInitSystem @ 0x1409ADD1C (VmInitSystem.c)
 *     DbgkInitialize @ 0x1409AEA1C (DbgkInitialize.c)
 *     CcInitializeCacheManager @ 0x1409B06D8 (CcInitializeCacheManager.c)
 *     IoCreateObjectTypes @ 0x1409B0D90 (IoCreateObjectTypes.c)
 *     ObInitSystem @ 0x1409B1964 (ObInitSystem.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 *     KePerformGroupConfiguration @ 0x1409B5C1C (KePerformGroupConfiguration.c)
 *     KeStartAllProcessors @ 0x1409B5DAC (KeStartAllProcessors.c)
 *     MmInitSystem @ 0x1409BC4E4 (MmInitSystem.c)
 *     EmInitSystem @ 0x1409BD7E0 (EmInitSystem.c)
 *     CmInitSystem1 @ 0x1409C3050 (CmInitSystem1.c)
 *     ExInitializeTimeRefresh @ 0x1409C4288 (ExInitializeTimeRefresh.c)
 *     PsInitSystem @ 0x1409C4944 (PsInitSystem.c)
 *     KeInitSystem @ 0x1409C4988 (KeInitSystem.c)
 *     GetBootSystemTime @ 0x1409D1C24 (GetBootSystemTime.c)
 *     PfInitializeSuperfetch @ 0x1409D4634 (PfInitializeSuperfetch.c)
 *     ExInitSystem @ 0x1409D4FF0 (ExInitSystem.c)
 *     ExInitSystemPhase2 @ 0x1409D56E8 (ExInitSystemPhase2.c)
 *     SmInitSystem @ 0x1409D6CD8 (SmInitSystem.c)
 *     InbvDriverInitialize @ 0x1409D6F70 (InbvDriverInitialize.c)
 *     FsRtlInitSystem @ 0x1409D7714 (FsRtlInitSystem.c)
 *     KeInitializeClock @ 0x1409D8C58 (KeInitializeClock.c)
 *     LpcInitSystem @ 0x1409D9D94 (LpcInitSystem.c)
 *     CreateSystemRootLink @ 0x1409DA774 (CreateSystemRootLink.c)
 *     VerifierInitSystem @ 0x1409DAED4 (VerifierInitSystem.c)
 *     SeCodeIntegrityInitializePolicy @ 0x1409DC0B4 (SeCodeIntegrityInitializePolicy.c)
 *     InitSkuSessionParameters @ 0x1409DDA3C (InitSkuSessionParameters.c)
 *     PpInitSystem @ 0x1409DDDD4 (PpInitSystem.c)
 *     BcdInitializeBcdSyncMutant @ 0x1409DEDA8 (BcdInitializeBcdSyncMutant.c)
 *     ExInitializeExternalBootSupport @ 0x1409DEE1C (ExInitializeExternalBootSupport.c)
 *     ExInitializeNls @ 0x1409DEEAC (ExInitializeNls.c)
 *     MfgInitSystem @ 0x1409DF10C (MfgInitSystem.c)
 *     ExInitLicenseCallback @ 0x1409DF480 (ExInitLicenseCallback.c)
 *     VslGetKsrContext @ 0x1409DF56C (VslGetKsrContext.c)
 *     CreateMiniNtBootKey @ 0x1409F3080 (CreateMiniNtBootKey.c)
 *     RtlInitializeRangeListPackage @ 0x1409F82F8 (RtlInitializeRangeListPackage.c)
 *     BgkDisplayProgressIndicator @ 0x1409FA85C (BgkDisplayProgressIndicator.c)
 *     BgkDisplayBackgroundUpdate @ 0x1409FB3E4 (BgkDisplayBackgroundUpdate.c)
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
  __int64 v42; // rcx
  const char *v43; // rbx
  ULONG v44; // r9d
  NTSTATUS v45; // eax
  __int64 v46; // r9
  __int64 v47; // rdx
  _QWORD *v48; // rcx
  NTSTATUS v49; // eax
  int inited; // eax
  int v51; // eax
  int SystemRootLink; // eax
  NTSTATUS v53; // eax
  NTSTATUS v54; // eax
  ULONG_PTR v55; // rbx
  NTSTATUS v56; // eax
  char *v57; // rbx
  struct _NLSTABLEINFO *v58; // r9
  USHORT *v59; // rdx
  USHORT *v60; // r8
  USHORT *v61; // rcx
  PNLSTABLEINFO v62; // rcx
  int v63; // eax
  __int128 *DisplayContext; // rax
  ULONG_PTR v65; // rbx
  int v66; // eax
  int v67; // eax
  int v68; // eax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  int v72; // ebx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  char *v88; // rbx
  char *v89; // r12
  __int64 v90; // rdi
  const char *v91; // rbx
  int v92; // eax
  ULONG v93; // r9d
  __int64 v94; // rdx
  __int64 v95; // rcx
  __int64 v96; // r8
  int v97; // eax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  int v101; // eax
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  int v105; // eax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+20h] [rbp-E0h]
  char v108; // [rsp+40h] [rbp-C0h]
  LARGE_INTEGER Time; // [rsp+48h] [rbp-B8h] BYREF
  int v110; // [rsp+50h] [rbp-B0h]
  PMESSAGE_RESOURCE_ENTRY v111; // [rsp+58h] [rbp-A8h] BYREF
  int v112; // [rsp+60h] [rbp-A0h]
  int v113; // [rsp+64h] [rbp-9Ch] BYREF
  int v114; // [rsp+68h] [rbp-98h] BYREF
  size_t pcbRemaining; // [rsp+70h] [rbp-90h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER LocalTime; // [rsp+80h] [rbp-80h] BYREF
  HANDLE SectionHandle; // [rsp+88h] [rbp-78h] BYREF
  PVOID MappedBase; // [rsp+90h] [rbp-70h] BYREF
  struct _SINGLE_LIST_ENTRY v120; // [rsp+98h] [rbp-68h] BYREF
  PMESSAGE_RESOURCE_ENTRY v121; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+A8h] [rbp-58h] BYREF
  PVOID Object; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR ViewSize; // [rsp+B8h] [rbp-48h] BYREF
  PMESSAGE_RESOURCE_ENTRY v125; // [rsp+C0h] [rbp-40h] BYREF
  STRING v126; // [rsp+C8h] [rbp-38h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+D8h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+E8h] [rbp-18h] BYREF
  _OWORD v129[4]; // [rsp+100h] [rbp+0h] BYREF
  char pszDest[24]; // [rsp+140h] [rbp+40h] BYREF

  LOBYTE(v110) = 0;
  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 132);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x74696E49u);
  if ( !PoolWithTag )
    KeBugCheck(0x31u);
  CurrentThread = KeGetCurrentThread();
  LODWORD(InitializationPhase) = 1;
  v108 = 0;
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
  Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x4000007Eu, &v111);
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
    v21 = RtlStringCbPrintfA(v19, v18, (NTSTRSAFE_PCSTR)v111->Text, pszDest, MessageResourceEntry, PoolWithTag);
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
      v108 = 1;
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
  KeSetSystemTime((struct _SINGLE_LIST_ENTRY *)&Time, &v120, 4);
  PoNotifySystemTimeSet((__int64 *)&Time, (__int64 *)&v120);
  RtlInitUnicodeString(&DestinationString, L"Kernel-RegisteredProcessors");
  if ( (int)ZwQueryLicenseValue((__int64)&DestinationString, (__int64)&v113, (__int64)&KeRegisteredProcessors) < 0
    || v112 != 4
    || v113 != 4 )
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
  qword_140A0A6A8 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeStartAllProcessors(v42);
  qword_140A0A6B0 = KeQueryPerformanceCounter(0LL).QuadPart;
  KeSetAffinityProcess((__int64)KeGetCurrentThread()->ApcState.Process, 0, (unsigned __int16 *)KeActiveProcessors);
  MakeGdtReadOnly();
  v43 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000089u, &v121) < 0
      ? "MultiProcessor Kernel\r\n"
      : (const char *)v121->Text;
  if ( !(unsigned __int8)HalAllProcessorsStarted() )
LABEL_159:
    KeBugCheck(0x61u);
  RtlInitAnsiString(&v126, v43);
  if ( v126.Length >= 2u )
    v126.Length -= 2;
  v44 = 1073741960;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
    v44 = 1073741981;
  v45 = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v44, &v111);
  v46 = 0LL;
  v47 = *(unsigned int *)MmPhysicalMemoryBlock;
  if ( (_DWORD)v47 )
  {
    v48 = (char *)MmPhysicalMemoryBlock + 24;
    do
    {
      v46 += *v48;
      v48 += 2;
      --v47;
    }
    while ( v47 );
  }
  if ( v45 < 0 )
    v49 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            "%u System Processor [%u MB Memory] %Z\n",
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v46 + 255) >> 8,
            &v126);
  else
    v49 = RtlStringCbPrintfA(
            PoolWithTag,
            0x100uLL,
            (NTSTRSAFE_PCSTR)v111->Text,
            (unsigned int)KeNumberProcessors_0,
            (unsigned __int64)(v46 + 255) >> 8,
            &v126);
  if ( v49 < 0 )
    KeBugCheckEx(0x32u, v49, 7uLL, 4uLL, 0LL);
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
  v51 = DbgkInitialize();
  if ( v51 < 0 )
    KeBugCheckEx(0x32u, v51, 0LL, 0LL, 0LL);
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
  v53 = ZwCreateSection(&SectionHandle, 0xF001Fu, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
  if ( v53 < 0 )
    KeBugCheckEx(0x32u, v53, 1uLL, 0LL, 0LL);
  v54 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
  InitNlsSectionPointer = Object;
  v55 = v54;
  ZwClose(SectionHandle);
  if ( (v55 & 0x80000000) != 0LL )
    KeBugCheckEx(0x32u, v55, 2uLL, 0LL, 0LL);
  MappedBase = 0LL;
  ViewSize = 0LL;
  v56 = MmMapViewInSystemSpace(InitNlsSectionPointer, &MappedBase, &ViewSize);
  if ( v56 < 0 )
    KeBugCheckEx(0x32u, v56, 3uLL, 0LL, 0LL);
  v57 = (char *)MappedBase;
  memmove(MappedBase, InitNlsTableBase, InitNlsTableSize);
  InitNlsTableBase = v57;
  if ( InitUnicodeCaseTableDataOffset )
  {
    v60 = (USHORT *)&v57[InitUnicodeCaseTableDataOffset];
    v59 = (USHORT *)&v57[InitOemCodePageDataOffset];
    v61 = (USHORT *)&v57[InitAnsiCodePageDataOffset];
  }
  else
  {
    v59 = 0LL;
    v60 = (USHORT *)v57;
    v61 = 0LL;
  }
  RtlInitNlsTables(v61, v59, v60, v58);
  RtlResetRtlTranslations(v62);
  if ( !CcInitializeCacheManager() )
    KeBugCheck(0x66u);
  if ( !(unsigned __int8)CmInitSystem1(BugCheckParameter3) )
    KeBugCheck(0x67u);
  v63 = ExInitializeLeapSecondData();
  if ( v63 < 0 )
    KeBugCheckEx(0x32u, v63, 0xCuLL, 0LL, 0LL);
  InitSkuSessionParameters();
  qword_140A0A698 = KeQueryPerformanceCounter(0LL).QuadPart;
  memset(v129, 0, sizeof(v129));
  LODWORD(v129[0]) = 64;
  *((_QWORD *)&v129[0] + 1) = MmMapLockedRestartPages;
  *(_QWORD *)&v129[1] = MmUnmapLockedRestartPages;
  *((_QWORD *)&v129[1] + 1) = KeRemoveEnclavePage;
  VslGetKsrContext();
  DisplayContext = BgGetDisplayContext();
  v65 = (int)KsrInitSystem(BugCheckParameter3, v129, DisplayContext);
  qword_140A0A6A0 = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( (int)(v65 + 0x80000000) >= 0 && (_DWORD)v65 != -1073741637 )
    KeBugCheckEx(0x32u, v65, 0LL, 1uLL, 0LL);
  ExKsrInterface = v129[2];
  *(_OWORD *)&xmmword_140409CD0 = v129[3];
  v66 = EmInitSystem(0LL, BugCheckParameter3);
  if ( v66 < 0 )
    KeBugCheckEx(0x32u, v66, 8uLL, 0LL, 0LL);
  v67 = MfgInitSystem(BugCheckParameter3);
  if ( v67 < 0 )
    KeBugCheckEx(0x32u, v67, 9uLL, 0LL, 0LL);
  PfInitializeSuperfetch();
  SmInitSystem(0LL);
  v68 = VmInitSystem();
  if ( v68 < 0 )
    KeBugCheckEx(0x32u, v68, 0xAuLL, 0LL, 0LL);
  if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter3 + 240) + 2584LL) & 2) == 0 || strstr(v6, "FORCETIMESYNC") )
    ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0LL);
  HvlWnfUpdateStartupState();
  v114 = 0;
  FsRtlSendModernAppTermination(&v114, 1u, 1);
  ExInitializeTimeRefresh(v70, v69, v71);
  ExAcquireTimeRefreshLock(1u);
  ExInitializeUtcTimeZoneBias(&LocalTime);
  v72 = *(_DWORD *)(v2 + 436);
  ExpRefreshTimeZoneInformation(0);
  ExReleaseTimeRefreshLock();
  if ( v108 )
  {
    ExLocalTimeToSystemTime(&LocalTime, &Time);
    KeSetSystemTime((struct _SINGLE_LIST_ENTRY *)&Time, &v120, 4);
  }
  else if ( v72 != *(_DWORD *)(v2 + 436) )
  {
    ZwSetSystemTime(0LL, 0LL);
  }
  if ( !(unsigned __int8)FsRtlInitSystem(v74, v73, v75) )
    KeBugCheck(0x68u);
  RtlInitializeCompression();
  RtlInitializeRangeListPackage(v77, v76, v78);
  HvlDebuggerSupportInitialize(BugCheckParameter3);
  HalReportResourceUsage(0LL);
  KdInitialize(1LL, BugCheckParameter3, &KdpContext);
  if ( !(unsigned __int8)PpInitSystem(v80, v79, v81) )
    KeBugCheck(0x90u);
  if ( !(unsigned __int8)LpcInitSystem(v83, v82, v84) )
    KeBugCheck(0x6Au);
  if ( v6 )
    v88 = strstr(v6, "SAFEBOOT:");
  else
    v88 = 0LL;
  v89 = v88;
  if ( v88 )
  {
    v90 = 9LL;
    v91 = v88 + 9;
    if ( !strncmp(v91, "MINIMAL", 7uLL) )
    {
      InitSafeBootMode = 1;
      v90 = 16LL;
    }
    else
    {
      if ( !strncmp(v91, "NETWORK", 7uLL) )
      {
        v90 = 16LL;
      }
      else if ( !strncmp(v91, "DSREPAIR", 8uLL) )
      {
        v23 = 3;
        v90 = 17LL;
      }
      else
      {
        v23 = 0;
      }
      InitSafeBootMode = v23;
    }
    v86 = (__int64)&v89[v90];
    if ( v89[v90] )
    {
      v92 = strncmp((const char *)v86, "(ALTERNATESHELL)", 0x10uLL);
      v86 = (unsigned __int8)v110;
      if ( !v92 )
        v86 = 1LL;
      v110 = v86;
    }
    if ( InitSafeBootMode )
    {
      v93 = 0;
      switch ( InitSafeBootMode )
      {
        case 1:
          v93 = 168;
          break;
        case 2:
          v93 = 169;
          break;
        case 3:
          v93 = 170;
          break;
      }
      if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, v93, &v125) >= 0 )
        InbvDisplayString((__int64)v125->Text);
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 240) + 116LL) & 0x800) != 0 )
  {
    if ( RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0xB7u, &v111) >= 0 )
      InbvDisplayString((__int64)v111->Text);
    IopInitializeBootLogging(BugCheckParameter3, (__int64)(PoolWithTag + 256));
  }
  ExInitSystemPhase2(v86, v85, v87);
  if ( InitIsWinPEMode )
    CreateMiniNtBootKey(v95, v94, v96);
  v97 = SeCodeIntegrityInitializePolicy(BugCheckParameter3);
  if ( v97 < 0 )
    KeBugCheckEx(0x32u, v97, 0x69436553uLL, 0LL, 0LL);
  KdpTimeSlipPending = 0;
  v101 = ExInitializeNls(v99, v98, v100);
  if ( v101 < 0 )
    KeBugCheckEx(0x32u, v101, 7uLL, 0LL, 0LL);
  v105 = ExInitializeExternalBootSupport(v103, v102, v104);
  if ( v105 < 0 )
    KeBugCheckEx(0x32u, v105, 8uLL, 0LL, 0LL);
  if ( !PoInitSystem(1, BugCheckParameter3) )
    goto LABEL_192;
  return v110;
}
