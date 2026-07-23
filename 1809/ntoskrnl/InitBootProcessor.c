/*
 * XREFs of InitBootProcessor @ 0x1409B5EDC
 * Callers:
 *     KiInitializeKernel @ 0x140572310 (KiInitializeKernel.c)
 * Callees:
 *     RtlInitString @ 0x140002070 (RtlInitString.c)
 *     RtlInitAnsiString @ 0x1400EEE10 (RtlInitAnsiString.c)
 *     DbgLoadImageSymbols @ 0x1400F4CE0 (DbgLoadImageSymbols.c)
 *     KeAdjustInterruptTime @ 0x140159988 (KeAdjustInterruptTime.c)
 *     RtlStringCbPrintfA @ 0x14017DFF4 (RtlStringCbPrintfA.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018DE90 (VslGetNestedPageProtectionFlags.c)
 *     RtlStringCbCopyExA @ 0x140192398 (RtlStringCbCopyExA.c)
 *     HvlPhase1Initialize @ 0x140193B34 (HvlPhase1Initialize.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _strupr @ 0x140194D10 (_strupr.c)
 *     strstr @ 0x140195000 (strstr.c)
 *     atol @ 0x1401950B0 (atol.c)
 *     KeBugCheck @ 0x1401BBD00 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1401C54B0 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlStringCbCatExA @ 0x140268C20 (RtlStringCbCatExA.c)
 *     __report_rangecheckfailure @ 0x140268FBC (__report_rangecheckfailure.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x1405ABDA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFindMessage @ 0x14067CF90 (RtlFindMessage.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14073370C (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrAccessResource @ 0x140757D20 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x140757D40 (LdrFindResource_U.c)
 *     RtlInitNlsTables @ 0x14075E2C0 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x1407606F4 (RtlResetRtlTranslations.c)
 *     RtlGetHostNtSystemRoot @ 0x1407653C8 (RtlGetHostNtSystemRoot.c)
 *     RtlpInitializeStackTraceDatabase @ 0x140893188 (RtlpInitializeStackTraceDatabase.c)
 *     SeInitSystem @ 0x1409AC3BC (SeInitSystem.c)
 *     DbgkInitialize @ 0x1409AFA1C (DbgkInitialize.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 *     ObInitSystem @ 0x1409B2964 (ObInitSystem.c)
 *     MmInitSystem @ 0x1409BD4E4 (MmInitSystem.c)
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 *     CmInitSystem0 @ 0x1409CDCF0 (CmInitSystem0.c)
 *     ExInitSystem @ 0x1409D5FF0 (ExInitSystem.c)
 *     InbvDriverInitialize @ 0x1409D7F70 (InbvDriverInitialize.c)
 *     PsInitializeQuotaSystem @ 0x1409D8580 (PsInitializeQuotaSystem.c)
 *     BootApplicationPersistentDataInitialize @ 0x1409D9020 (BootApplicationPersistentDataInitialize.c)
 *     WheaInitializeServices @ 0x1409D9438 (WheaInitializeServices.c)
 *     KeInitializeClock @ 0x1409D9C58 (KeInitializeClock.c)
 *     ExComputeTickCountMultiplier @ 0x1409DADD4 (ExComputeTickCountMultiplier.c)
 *     VerifierInitSystem @ 0x1409DBED4 (VerifierInitSystem.c)
 *     PpInitSystem @ 0x1409DEDD4 (PpInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x1409DFB48 (InitializeDynamicPartitioningPolicy.c)
 *     KeNumaInitialize @ 0x1409DFD20 (KeNumaInitialize.c)
 *     HeadlessInit @ 0x1409E05DC (HeadlessInit.c)
 *     ExBurnMemory @ 0x1409F4248 (ExBurnMemory.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x1409F42CC (ExpRevokeBootLoaderPagePrivileges.c)
 */

__int64 __fastcall InitBootProcessor(char *StartContext)
{
  ULONG_PTR v2; // r10
  unsigned int v3; // ecx
  unsigned int v4; // edx
  unsigned int *v5; // r8
  ULONG_PTR v6; // rax
  char *v7; // rdi
  char *v8; // rax
  char *v9; // rax
  __int64 v10; // rdx
  char *v11; // rax
  char *v12; // rax
  __int64 v13; // rdx
  ULONG_PTR v14; // r9
  char *v15; // r10
  unsigned __int64 v16; // kr00_8
  size_t v17; // rcx
  size_t v18; // rax
  bool v19; // cf
  ULONG_PTR v20; // r8
  ULONG_PTR v21; // rax
  PUSHORT *v22; // r9
  int v23; // ecx
  PNLSTABLEINFO v24; // rcx
  int *v25; // rdx
  int *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  NTSTATUS v29; // eax
  UNICODE_STRING *HostNtSystemRoot; // r13
  NTSTATUS v31; // eax
  int v32; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  ULONG v34; // r14d
  PVOID PoolWithTag; // rax
  void *v36; // rsi
  unsigned int v37; // r15d
  char *i; // rsi
  char *v39; // r8
  unsigned int v40; // r9d
  __int64 v41; // rdx
  char v42; // al
  NTSTATUS v43; // eax
  size_t v44; // rdx
  const char *v45; // r8
  NTSTRSAFE_PSTR *v46; // r9
  NTSTATUS Message; // eax
  NTSTATUS v48; // eax
  size_t v49; // rdx
  const char *v50; // r8
  NTSTATUS v51; // eax
  NTSTATUS v52; // eax
  NTSTATUS v53; // eax
  NTSTATUS v54; // eax
  NTSTATUS v55; // eax
  PVOID v56; // rax
  void *v57; // rdi
  PVOID v58; // rax
  __int64 result; // rax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  int dwFlagsa; // [rsp+30h] [rbp-D8h]
  ULONG Size; // [rsp+38h] [rbp-D0h] BYREF
  STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  size_t pcbRemaining; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Resource; // [rsp+58h] [rbp-B0h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+60h] [rbp-A8h] BYREF
  PMESSAGE_RESOURCE_ENTRY v68; // [rsp+68h] [rbp-A0h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd[2]; // [rsp+70h] [rbp-98h] BYREF
  STRING Name; // [rsp+80h] [rbp-88h] BYREF
  _LDR_RESOURCE_INFO ResourceInfo; // [rsp+90h] [rbp-78h] BYREF
  CHAR pszDest[256]; // [rsp+A8h] [rbp-60h] BYREF
  CHAR Source[64]; // [rsp+1A8h] [rbp+A0h] BYREF

  dword_14055C994 = 259;
  dword_14055C990 = 1;
  byte_14055C951 = 1;
  qword_14055C960 = (__int64)&PspTimeZoneStateBuffer;
  dword_14055D634 = -1;
  v2 = *(unsigned int *)StartContext;
  if ( (_DWORD)v2 != 10 || (v3 = *((_DWORD *)StartContext + 1)) != 0 || (v4 = *((_DWORD *)StartContext + 2), v4 != 352) )
  {
    v4 = *((_DWORD *)StartContext + 2);
    v3 = *((_DWORD *)StartContext + 1);
    v6 = 0LL;
    goto LABEL_107;
  }
  v5 = (unsigned int *)*((_QWORD *)StartContext + 30);
  v6 = *v5;
  if ( (_DWORD)v6 != 3448 || v5[728] != 167772166 )
LABEL_107:
    KeBugCheckEx(0x100u, v2, v3, v4, v6);
  MEMORY[0xFFFFF780000002C4] = v5[707];
  if ( (VslGetNestedPageProtectionFlags() & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges(StartContext);
  v7 = (char *)*((_QWORD *)StartContext + 27);
  LODWORD(InitializationPhase) = 0;
  if ( v7 )
  {
    strupr(v7);
    v8 = strstr(v7, "PERFMEM");
    if ( v8 )
    {
      v9 = strstr(v8, "=");
      if ( v9 )
      {
        v10 = (__int64)atol(v9 + 1) << 8;
        if ( *(_QWORD *)(*((_QWORD *)StartContext + 30) + 2784LL) )
        {
          BBTPagesToReserve = v10;
        }
        else if ( v10 )
        {
          BBTPagesToReserve = ExBurnMemory(StartContext, v10, 23LL, &BBTMemoryDescriptor);
        }
      }
    }
    v11 = strstr(v7, "BURNMEMORY");
    if ( v11 )
    {
      v12 = strstr(v11, "=");
      if ( v12 )
      {
        v13 = (__int64)atol(v12 + 1) << 8;
        if ( v13 )
          ExBurnMemory(StartContext, v13, 6LL, &BurnMemoryDescriptor);
      }
    }
    if ( strstr(v7, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v14 = 0LL;
  v15 = (char *)*((_QWORD *)StartContext + 4);
  while ( v15 != StartContext + 32 )
  {
    if ( *((_DWORD *)v15 + 4) == 21 )
    {
      v16 = *((_QWORD *)v15 + 4);
      ppszDestEnd[1] = (NTSTRSAFE_PSTR)((v16 * (unsigned __int128)0x1000uLL) >> 64);
      if ( !is_mul_ok(v16, 0x1000uLL) )
        goto LABEL_128;
      v17 = InitNlsTableSize + (v16 << 12);
      v18 = -1LL;
      v19 = v17 < InitNlsTableSize;
      if ( v17 >= InitNlsTableSize )
        v18 = InitNlsTableSize + (v16 << 12);
      InitNlsTableSize = v18;
      if ( v19 )
        goto LABEL_128;
    }
    v20 = *((_QWORD *)v15 + 3);
    v21 = *((_QWORD *)v15 + 4);
    if ( v20 < v14 )
      KeBugCheckEx(0x31u, (ULONG_PTR)v15, v20, v21, v14);
    v15 = *(char **)v15;
    v14 = v20 + v21;
  }
  v22 = (PUSHORT *)*((_QWORD *)StartContext + 28);
  if ( *v22 && v22[1] )
  {
    InitNlsTableBase = *v22;
    InitAnsiCodePageDataOffset = 0;
    InitOemCodePageDataOffset = *((_DWORD *)v22 + 2) - *(_DWORD *)v22;
    v23 = *((_DWORD *)v22 + 4) - *(_DWORD *)v22;
  }
  else
  {
    v23 = 0;
    InitNlsTableBase = v22[2];
    InitAnsiCodePageDataOffset = 0;
    InitOemCodePageDataOffset = 0;
  }
  InitUnicodeCaseTableDataOffset = v23;
  RtlInitNlsTables(*v22, v22[1], v22[2], (PNLSTABLEINFO)v22);
  RtlResetRtlTranslations(v24);
  ExLeapSecondData = *(PVOID *)(*((_QWORD *)StartContext + 30) + 2904LL);
  WheaInitializeServices();
  ((void (__fastcall *)(__int64 (__fastcall **)()))off_1403FF5F0[0])(HalIommuDispatch);
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, StartContext) )
    KeBugCheck(0x5Cu);
  KeInitializeClock((unsigned int)InitializationPhase);
  PsInitializeQuotaSystem(1LL);
  CmInitSystem0(StartContext);
  v25 = KvfFeatureStates;
  v26 = KvfFeatureStates;
  v27 = 2LL;
  do
  {
    if ( (unsigned int)*v26 >= 8 )
      *v26 = 0;
    v26 += 6;
    --v27;
  }
  while ( v27 );
  if ( (*(_DWORD *)(*((_QWORD *)StartContext + 30) + 116LL) & 1) == 0 )
  {
    v28 = 2LL;
    do
    {
      if ( (*v25 & 2) != 0 )
        *v25 = *v25 & 0xFFFFFFFE | ((*v25 & 1) == 0) | 4;
      v25 += 6;
      --v28;
    }
    while ( v28 );
  }
  if ( !PopEnergyEstimationEnabled )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !(unsigned __int8)KeInitSystem(0LL) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  ExpTickCountMultiplier = ExComputeTickCountMultiplier();
  MEMORY[0xFFFFF78000000004] = ExpTickCountMultiplier;
  MEMORY[0xFFFFF7800000023C] = 0;
  v29 = RtlStringCbPrintfA(pszDest, 0x100uLL, "C:%s", *((const char **)StartContext + 25));
  if ( v29 < 0 )
    KeBugCheckEx(0x6Eu, v29, 0LL, 0LL, 0LL);
  RtlInitString(&DestinationString, pszDest);
  DestinationString.Buffer[--DestinationString.Length] = 0;
  HostNtSystemRoot = (UNICODE_STRING *)RtlGetHostNtSystemRoot();
  HostNtSystemRoot->Buffer = (wchar_t *)0xFFFFF78000000030LL;
  *(_DWORD *)&HostNtSystemRoot->Length = 34078720;
  v31 = RtlAnsiStringToUnicodeString(HostNtSystemRoot, &DestinationString, 0);
  if ( v31 < 0 )
    KeBugCheckEx(0x6Eu, v31, 1uLL, 0LL, 0LL);
  ResourceInfo.Type = 11LL;
  ResourceInfo.Name = 1LL;
  ResourceInfo.Language = 0LL;
  Resource = 0LL;
  Size = 0;
  if ( LdrFindResource_U((PVOID)0x140000000LL, &ResourceInfo, 3u, &ResourceDataEntry) >= 0
    && LdrAccessResource((PVOID)0x140000000LL, ResourceDataEntry, &Resource, &Size) >= 0 )
  {
    KiBugCodeMessages = Resource;
  }
  CmNtGlobalFlag2 &= 1u;
  MEMORY[0xFFFFF78000000258] = CmGlobalValidationRunlevel;
  MEMORY[0xFFFFF7800000028B] = 1;
  v32 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v32;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v32 << 16;
  if ( InitTickRolloverDelayLength != 4 || InitTickRolloverDelayType != 4 )
    InitTickRolloverDelay = 0;
  if ( InitTickRolloverDelay )
  {
    KeAdjustInterruptTime(10000LL * (unsigned int)-InitTickRolloverDelay, 1);
    MEMORY[0xFFFFF78000000348] = KeQueryPerformanceCounter(0LL);
    KiSystemTimeErrorAccumulator = 0LL;
  }
  NtGlobalFlag |= CmNtGlobalFlag;
  NtGlobalFlag2 |= CmNtGlobalFlag2;
  MEMORY[0xFFFFF780000003C0] = 1;
  MEMORY[0xFFFFF780000003C4] = 1;
  MEMORY[0xFFFFF7800000036A] = 1;
  if ( !(unsigned __int8)ExInitSystem() )
    goto LABEL_128;
  KeNumaInitialize();
  VerifierInitSystem(StartContext);
  InitializeDynamicPartitioningPolicy();
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !(unsigned __int8)MmInitSystem(0LL, StartContext) )
    goto LABEL_128;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  KiHwPolicyDriverImageBase = 0LL;
  qword_140A0B688 = PerformanceCounter.QuadPart;
  HalInitializeBios(0LL, StartContext);
  InbvDriverInitialize(0LL, StartContext, 0LL);
  if ( KiBugCodeMessages )
  {
    v34 = Size;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6342694Bu);
    v36 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheck(0x7Du);
    memmove(PoolWithTag, KiBugCodeMessages, v34);
    KiBugCodeMessages = v36;
  }
  if ( *((_DWORD *)StartContext + 3) < 2u )
  {
    IopAutoReboot = 0;
    KeBugCheckEx(0x196u, *((unsigned int *)StartContext + 3), 2uLL, 0LL, 0LL);
  }
  v37 = 0;
  for ( i = (char *)*((_QWORD *)StartContext + 2); i != StartContext + 16; ++v37 )
  {
    if ( v37 >= 3 )
    {
      v39 = (char *)*((_QWORD *)i + 10);
      if ( *(_WORD *)v39 == 92 )
      {
        v40 = *((unsigned __int16 *)i + 36) >> 1;
        if ( (unsigned __int64)v40 + 1 <= 0x100 )
        {
          v41 = 0LL;
          do
          {
            v42 = *v39;
            v39 += 2;
            pszDest[v41] = v42;
            v41 = (unsigned int)(v41 + 1);
          }
          while ( (unsigned int)v41 < v40 );
          if ( (unsigned int)v41 >= 0x100uLL )
            _report_rangecheckfailure();
          pszDest[v41] = 0;
LABEL_75:
          RtlInitString(&Name, pszDest);
          DbgLoadImageSymbols(&Name, *((PVOID *)i + 6), 0xFFFFFFFFuLL);
        }
      }
      else if ( ((unsigned __int64)*((unsigned __int16 *)i + 44) >> 1)
              + ((unsigned __int64)HostNtSystemRoot->Length >> 1)
              + 17 <= 0x100 )
      {
        v43 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%ws\\System32\\Drivers\\%wZ", HostNtSystemRoot->Buffer + 2, i + 88);
        if ( v43 < 0 )
          KeBugCheckEx(0x31u, v43, 3uLL, 0LL, 0LL);
        goto LABEL_75;
      }
    }
    i = *(char **)i;
  }
  if ( KdBreakAfterSymbolLoad )
    DbgBreakPointWithStatus(1u);
  dword_14040ADF0 = ((StartContext[264] & 1) != 0) + 1;
  ExpBootEnvironmentInformation = *(_OWORD *)(*((_QWORD *)StartContext + 30) + 216LL);
  qword_14040ADF8 = *(_QWORD *)(*((_QWORD *)StartContext + 30) + 2576LL);
  HvlPhase1Initialize((__int64)StartContext);
  if ( **((_DWORD **)StartContext + 30) >= 0xD78u )
    HeadlessInit(StartContext);
  BootApplicationPersistentDataInitialize(StartContext);
  MEMORY[0xFFFFF780000002B4] = 2147418111;
  MEMORY[0xFFFFF780000002B8] = 0x80000000;
  if ( CmNtCSDVersion )
  {
    Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000087u, &v68);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString(&DestinationString, (PCSZ)v68->Text);
    DestinationString.Length -= 2;
    dwFlagsa = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
    LODWORD(MessageResourceEntry) = BYTE1(CmNtCSDVersion);
    v48 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString, MessageResourceEntry);
    if ( v48 < 0 )
      KeBugCheckEx(0x31u, v48, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      v51 = RtlStringCbCatExA(pszDest, v49, v50, ppszDestEnd, &pcbRemaining, dwFlagsa);
      if ( v51 < 0 )
        KeBugCheckEx(0x31u, v51, 6uLL, 0LL, 0LL);
      v52 = RtlStringCbPrintfA(ppszDestEnd[0], pcbRemaining, "v.%u", HIWORD(CmNtCSDVersion));
      if ( v52 < 0 )
        KeBugCheckEx(0x31u, v52, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v53 = RtlStringCbCopyExA(pszDest, v44, v45, v46, &pcbRemaining, dwFlags);
    if ( v53 < 0 )
      KeBugCheckEx(0x31u, v53, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - pcbRemaining;
  }
  RtlInitAnsiString(&DestinationString, pszDest);
  v54 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, &DestinationString, 1u);
  if ( v54 < 0 )
    KeBugCheckEx(0x31u, v54, 9uLL, 0LL, 0LL);
  v55 = RtlStringCbPrintfA(Source, 0x40uLL, "%u.%u", 6, 3);
  if ( v55 < 0 )
    KeBugCheckEx(0x31u, v55, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, Source) )
LABEL_128:
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v56 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x800000uLL, 0x63617453u);
    v57 = v56;
    if ( v56 )
    {
      if ( (int)RtlpInitializeStackTraceDatabase((__int64)v56, 0x800000LL, 0x800000uLL) < 0 )
        ExFreePoolWithTag(v57, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
  {
    v58 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x11620uLL, 0x67626445u);
    RtlpExceptionLog2 = (__int64)v58;
    if ( v58 )
      memset(v58, 0, 0x11620uLL);
  }
  HandleTableListLock = 0LL;
  qword_14096FA18 = (__int64)&HandleTableListHead;
  HandleTableListHead = (__int64)&HandleTableListHead;
  ExpFreeListCount = HalQueryMaximumProcessorCount();
  if ( !ObInitSystem() )
    KeBugCheck(0x5Eu);
  if ( !SeInitSystem() )
    KeBugCheck(0x5Fu);
  if ( !PspInitPhase0(StartContext) || (int)DbgkInitialize() < 0 )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x8Fu);
  MEMORY[0xFFFFF7800000026C] = 10;
  MEMORY[0xFFFFF78000000270] = 0;
  MEMORY[0xFFFFF78000000260] = 17763;
  MEMORY[0xFFFFF7800000026A] = KeProcessorArchitecture;
  MEMORY[0xFFFFF7800000002C] = -31132;
  MEMORY[0xFFFFF7800000002E] = -31132;
  result = 0LL;
  MEMORY[0xFFFFF780000003A4] = 0;
  return result;
}
