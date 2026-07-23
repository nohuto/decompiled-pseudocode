/*
 * XREFs of InitBootProcessor @ 0x140A0816C
 * Callers:
 *     KiInitializeKernel @ 0x1405A1240 (KiInitializeKernel.c)
 * Callees:
 *     PoEnergyEstimationEnabled @ 0x14000E310 (PoEnergyEstimationEnabled.c)
 *     RtlULongLongMult @ 0x1400935D4 (RtlULongLongMult.c)
 *     RtlULongLongAdd @ 0x1400BC49C (RtlULongLongAdd.c)
 *     RtlInitAnsiString @ 0x1400E5090 (RtlInitAnsiString.c)
 *     RtlInitString @ 0x1400EBCC0 (RtlInitString.c)
 *     DbgLoadImageSymbols @ 0x140154DB0 (DbgLoadImageSymbols.c)
 *     KeAdjustInterruptTime @ 0x140169EC4 (KeAdjustInterruptTime.c)
 *     KeRebaselineSystemTime @ 0x14016A18C (KeRebaselineSystemTime.c)
 *     RtlStringCbPrintfA @ 0x14018BBD4 (RtlStringCbPrintfA.c)
 *     VslGetNestedPageProtectionFlags @ 0x14018C150 (VslGetNestedPageProtectionFlags.c)
 *     RtlStringCbCopyExA @ 0x14019C15C (RtlStringCbCopyExA.c)
 *     KvfInitFeatureStates @ 0x14019D4A8 (KvfInitFeatureStates.c)
 *     HvlPhase1Initialize @ 0x14019DFE8 (HvlPhase1Initialize.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _strupr @ 0x14019F2D0 (_strupr.c)
 *     strstr @ 0x14019F610 (strstr.c)
 *     atol @ 0x14019F6C0 (atol.c)
 *     KeBugCheck @ 0x1401C3B00 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     DbgBreakPointWithStatus @ 0x1401CB970 (DbgBreakPointWithStatus.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     RtlStringCbCatExA @ 0x14027B9F0 (RtlStringCbCatExA.c)
 *     __report_rangecheckfailure @ 0x14027BD8C (__report_rangecheckfailure.c)
 *     RtlControlStackTraceDataBase @ 0x14030B7E8 (RtlControlStackTraceDataBase.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063CAA0 (RtlAnsiStringToUnicodeString.c)
 *     RtlFindMessage @ 0x1406C58E0 (RtlFindMessage.c)
 *     RtlGetHostNtSystemRoot @ 0x1406EFC5C (RtlGetHostNtSystemRoot.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14075DCB0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     LdrAccessResource @ 0x14077D0F0 (LdrAccessResource.c)
 *     LdrFindResource_U @ 0x14077D110 (LdrFindResource_U.c)
 *     RtlInitNlsTables @ 0x140783F00 (RtlInitNlsTables.c)
 *     RtlResetRtlTranslations @ 0x140786CB4 (RtlResetRtlTranslations.c)
 *     MmInitSystem @ 0x1409F0DC4 (MmInitSystem.c)
 *     KeInitializeClock @ 0x1409FCAA0 (KeInitializeClock.c)
 *     KeInitSystem @ 0x1409FD23C (KeInitSystem.c)
 *     PsInitSystem @ 0x1409FE980 (PsInitSystem.c)
 *     SeInitSystem @ 0x1409FEA60 (SeInitSystem.c)
 *     DbgkInitialize @ 0x140A021B0 (DbgkInitialize.c)
 *     ObInitSystem @ 0x140A04E20 (ObInitSystem.c)
 *     CmInitSystem0 @ 0x140A120A8 (CmInitSystem0.c)
 *     ExInitSystem @ 0x140A17EA0 (ExInitSystem.c)
 *     InbvDriverInitialize @ 0x140A1A02C (InbvDriverInitialize.c)
 *     PsInitializeQuotaSystem @ 0x140A1AA84 (PsInitializeQuotaSystem.c)
 *     WheaInitializeServices @ 0x140A1B200 (WheaInitializeServices.c)
 *     BootApplicationPersistentDataInitialize @ 0x140A1B344 (BootApplicationPersistentDataInitialize.c)
 *     ExComputeTickCountMultiplier @ 0x140A1D38C (ExComputeTickCountMultiplier.c)
 *     VerifierInitSystem @ 0x140A1E060 (VerifierInitSystem.c)
 *     PpInitSystem @ 0x140A215F8 (PpInitSystem.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A221E4 (InitializeDynamicPartitioningPolicy.c)
 *     KeNumaInitialize @ 0x140A2244C (KeNumaInitialize.c)
 *     ExpValidateLoader @ 0x140A22860 (ExpValidateLoader.c)
 *     ExpInitializeBootEnvironment @ 0x140A22C7C (ExpInitializeBootEnvironment.c)
 *     ExInitializeHandleTablePackage @ 0x140A22CC4 (ExInitializeHandleTablePackage.c)
 *     HeadlessInit @ 0x140A22ECC (HeadlessInit.c)
 *     ExBurnMemory @ 0x140A38640 (ExBurnMemory.c)
 *     ExpRevokeBootLoaderPagePrivileges @ 0x140A386C4 (ExpRevokeBootLoaderPagePrivileges.c)
 *     RtlInitializeExceptionLog @ 0x140A3DDE0 (RtlInitializeExceptionLog.c)
 */

__int64 __fastcall InitBootProcessor(ULONG_PTR a1)
{
  char *v2; // rdi
  char *v3; // rax
  char *v4; // rax
  __int64 v5; // rdx
  char *v6; // rax
  char *v7; // rax
  __int64 v8; // rdx
  ULONG_PTR v9; // r9
  ULONG_PTR v10; // r11
  ULONG_PTR v11; // r10
  ULONG_PTR v12; // r8
  __int64 v13; // rax
  PUSHORT *v14; // r9
  int v15; // ecx
  PNLSTABLEINFO v16; // rcx
  NTSTATUS v17; // eax
  UNICODE_STRING *HostNtSystemRoot; // r13
  NTSTATUS v19; // eax
  int v20; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  ULONG v22; // esi
  PVOID PoolWithTag; // rax
  void *v24; // rdi
  const char *v25; // rcx
  unsigned int v26; // r15d
  __int64 *i; // rdi
  char *v28; // r8
  unsigned int v29; // r9d
  __int64 v30; // rdx
  char v31; // al
  NTSTATUS v32; // eax
  size_t v33; // rdx
  const char *v34; // r8
  NTSTRSAFE_PSTR *v35; // r9
  NTSTATUS Message; // eax
  NTSTATUS v37; // eax
  size_t v38; // rdx
  const char *v39; // r8
  NTSTATUS v40; // eax
  NTSTATUS v41; // eax
  NTSTATUS v42; // eax
  NTSTATUS v43; // eax
  NTSTATUS v44; // eax
  PVOID v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  void *v48; // rdi
  __int64 result; // rax
  PMESSAGE_RESOURCE_ENTRY *MessageResourceEntry; // [rsp+28h] [rbp-E0h]
  ULONG dwFlags; // [rsp+30h] [rbp-D8h]
  ULONG dwFlagsa; // [rsp+30h] [rbp-D8h]
  STRING DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  ULONG Size[2]; // [rsp+48h] [rbp-C0h] BYREF
  size_t pcbRemaining; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Resource; // [rsp+58h] [rbp-B0h] BYREF
  ULONGLONG pullResult; // [rsp+60h] [rbp-A8h] BYREF
  PIMAGE_RESOURCE_DATA_ENTRY ResourceDataEntry; // [rsp+68h] [rbp-A0h] BYREF
  PMESSAGE_RESOURCE_ENTRY v59; // [rsp+70h] [rbp-98h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+78h] [rbp-90h] BYREF
  STRING Name; // [rsp+80h] [rbp-88h] BYREF
  _QWORD v62[3]; // [rsp+90h] [rbp-78h] BYREF
  _LDR_RESOURCE_INFO ResourceInfo; // [rsp+A8h] [rbp-60h] BYREF
  CHAR pszDest[256]; // [rsp+C8h] [rbp-40h] BYREF
  CHAR Source[64]; // [rsp+1C8h] [rbp+C0h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&Name.Length = 0LL;
  Name.Buffer = 0LL;
  ExpValidateLoader();
  MEMORY[0xFFFFF780000002C4] = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 2852LL);
  if ( (VslGetNestedPageProtectionFlags() & 6) == 6 )
    ExpRevokeBootLoaderPagePrivileges(a1);
  v2 = *(char **)(a1 + 216);
  LODWORD(InitializationPhase) = 0;
  if ( v2 )
  {
    strupr(v2);
    v3 = strstr(v2, "PERFMEM");
    if ( v3 )
    {
      v4 = strstr(v3, "=");
      if ( v4 )
      {
        v5 = (__int64)atol(v4 + 1) << 8;
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2808LL) )
        {
          BBTPagesToReserve = v5;
        }
        else if ( v5 )
        {
          BBTPagesToReserve = ExBurnMemory(a1, v5, 23LL, &BBTMemoryDescriptor);
        }
      }
    }
    v6 = strstr(v2, "BURNMEMORY");
    if ( v6 )
    {
      v7 = strstr(v6, "=");
      if ( v7 )
      {
        v8 = (__int64)atol(v7 + 1) << 8;
        if ( v8 )
          ExBurnMemory(a1, v8, 6LL, &BurnMemoryDescriptor);
      }
    }
    if ( strstr(v2, "FORCEGROUPAWARE") )
      KeForceGroupAwareness = 1;
  }
  v9 = a1 + 32;
  v10 = 0LL;
  v11 = *(_QWORD *)(a1 + 32);
  while ( v11 != v9 )
  {
    if ( *(_DWORD *)(v11 + 16) == 21
      && (RtlULongLongMult(*(_QWORD *)(v11 + 32), 0x1000uLL, &pullResult) < 0
       || RtlULongLongAdd(InitNlsTableSize, pullResult, &InitNlsTableSize) < 0) )
    {
      goto LABEL_91;
    }
    v12 = *(_QWORD *)(v11 + 24);
    v13 = *(_QWORD *)(v11 + 32);
    if ( v12 < v10 )
      KeBugCheckEx(0x31u, v11, v12, *(_QWORD *)(v11 + 32), v10);
    v11 = *(_QWORD *)v11;
    v10 = v12 + v13;
  }
  v14 = *(PUSHORT **)(a1 + 224);
  if ( *v14 && v14[1] )
  {
    InitNlsTableBase = *v14;
    InitAnsiCodePageDataOffset = 0;
    InitOemCodePageDataOffset = *((_DWORD *)v14 + 2) - *(_DWORD *)v14;
    v15 = *((_DWORD *)v14 + 4) - *(_DWORD *)v14;
  }
  else
  {
    v15 = 0;
    InitNlsTableBase = v14[2];
    InitAnsiCodePageDataOffset = 0;
    InitOemCodePageDataOffset = 0;
  }
  InitUnicodeCaseTableDataOffset = v15;
  RtlInitNlsTables(*v14, v14[1], v14[2], (PNLSTABLEINFO)v14);
  RtlResetRtlTranslations(v16);
  ExLeapSecondData = *(PVOID *)(*(_QWORD *)(a1 + 240) + 2928LL);
  WheaInitializeServices();
  ((void (__fastcall *)(__int64 (__fastcall **)()))off_1404245F0[0])(HalIommuDispatch);
  qword_140A506F8 = __rdtsc();
  if ( !(unsigned __int8)HalInitSystem((unsigned int)InitializationPhase, a1) )
    KeBugCheck(0x5Cu);
  qword_140A50700 = __rdtsc();
  KeInitializeClock((unsigned int)InitializationPhase, a1);
  PsInitializeQuotaSystem(1LL);
  CmInitSystem0(a1);
  KvfInitFeatureStates(a1);
  if ( !PoEnergyEstimationEnabled() )
    _interlockedbittestandreset(*(volatile signed __int32 **)(KiProcessorBlock[0] + 24), 0x15u);
  if ( !KeInitSystem(0) )
    KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0xBuLL, 0LL, 0LL);
  ExpTickCountMultiplier = ExComputeTickCountMultiplier();
  MEMORY[0xFFFFF78000000004] = ExpTickCountMultiplier;
  MEMORY[0xFFFFF7800000023C] = 0;
  v17 = RtlStringCbPrintfA(pszDest, 0x100uLL, "C:%s", *(const char **)(a1 + 200));
  if ( v17 < 0 )
    KeBugCheckEx(0x6Eu, v17, 0LL, 0LL, 0LL);
  RtlInitString(&DestinationString, pszDest);
  DestinationString.Buffer[--DestinationString.Length] = 0;
  HostNtSystemRoot = (UNICODE_STRING *)RtlGetHostNtSystemRoot();
  HostNtSystemRoot->Buffer = (wchar_t *)0xFFFFF78000000030LL;
  *(_DWORD *)&HostNtSystemRoot->Length = 34078720;
  v19 = RtlAnsiStringToUnicodeString(HostNtSystemRoot, &DestinationString, 0);
  if ( v19 < 0 )
    KeBugCheckEx(0x6Eu, v19, 1uLL, 0LL, 0LL);
  ResourceInfo.Type = 11LL;
  ResourceInfo.Name = 1LL;
  ResourceInfo.Language = 0LL;
  Resource = 0LL;
  Size[0] = 0;
  if ( LdrFindResource_U((PVOID)0x140000000LL, &ResourceInfo, 3u, &ResourceDataEntry) >= 0
    && LdrAccessResource((PVOID)0x140000000LL, ResourceDataEntry, &Resource, Size) >= 0 )
  {
    KiBugCodeMessages = Resource;
  }
  CmNtGlobalFlag2 &= 1u;
  MEMORY[0xFFFFF78000000258] = CmGlobalValidationRunlevel;
  MEMORY[0xFFFFF7800000028B] = 1;
  v20 = CmNtSpBuildNumber & 0xFFF;
  HIWORD(CmNtCSDVersion) = 0;
  CmNtSpBuildNumber = v20;
  if ( CmNtCSDReleaseType )
    CmNtCSDVersion |= v20 << 16;
  if ( InitTickRolloverDelayLength != 4 || InitTickRolloverDelayType != 4 )
    InitTickRolloverDelay = 0;
  if ( InitTickRolloverDelay )
  {
    KeAdjustInterruptTime(10000LL * (unsigned int)-InitTickRolloverDelay, 1);
    KeRebaselineSystemTime();
  }
  NtGlobalFlag |= CmNtGlobalFlag;
  NtGlobalFlag2 |= CmNtGlobalFlag2;
  MEMORY[0xFFFFF780000003C0] = 1;
  MEMORY[0xFFFFF780000003C4] = 1;
  MEMORY[0xFFFFF7800000036A] = 1;
  if ( !(unsigned __int8)ExInitSystem() )
    goto LABEL_91;
  KeNumaInitialize();
  VerifierInitSystem(a1);
  InitializeDynamicPartitioningPolicy();
  EtwBootPerfData = KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !MmInitSystem(0, a1) )
    goto LABEL_91;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  KiHwPolicyDriverImageBase = 0LL;
  qword_140A506A8 = PerformanceCounter.QuadPart;
  HalInitializeBios(0LL, a1);
  InbvDriverInitialize(0LL, a1, 0LL);
  if ( KiBugCodeMessages )
  {
    v22 = Size[0];
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size[0], 0x6342694Bu);
    v24 = PoolWithTag;
    if ( !PoolWithTag )
      KeBugCheck(0x7Du);
    memmove(PoolWithTag, KiBugCodeMessages, v22);
    KiBugCodeMessages = v24;
  }
  if ( *(_DWORD *)(a1 + 12) != 1 )
  {
    v25 = *(const char **)(a1 + 216);
    if ( v25 )
    {
      if ( strstr(v25, "DEBUG") )
      {
        IopAutoReboot = 0;
        KeBugCheckEx(0x196u, *(unsigned int *)(a1 + 12), 1uLL, 0LL, 0LL);
      }
    }
  }
  v26 = 0;
  for ( i = *(__int64 **)(a1 + 16); i != (__int64 *)(a1 + 16); ++v26 )
  {
    if ( v26 >= 3 )
    {
      v28 = (char *)i[10];
      if ( *(_WORD *)v28 == 92 )
      {
        v29 = *((unsigned __int16 *)i + 36) >> 1;
        if ( (unsigned __int64)v29 + 1 <= 0x100 )
        {
          v30 = 0LL;
          do
          {
            v31 = *v28;
            v28 += 2;
            pszDest[v30] = v31;
            v30 = (unsigned int)(v30 + 1);
          }
          while ( (unsigned int)v30 < v29 );
          if ( (unsigned int)v30 >= 0x100uLL )
            _report_rangecheckfailure();
          pszDest[v30] = 0;
LABEL_61:
          RtlInitString(&Name, pszDest);
          DbgLoadImageSymbols(&Name, (PVOID)i[6], 0xFFFFFFFFuLL);
        }
      }
      else if ( ((unsigned __int64)*((unsigned __int16 *)i + 44) >> 1)
              + ((unsigned __int64)HostNtSystemRoot->Length >> 1)
              + 17 <= 0x100 )
      {
        v32 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%ws\\System32\\Drivers\\%wZ", HostNtSystemRoot->Buffer + 2, i + 11);
        if ( v32 < 0 )
          KeBugCheckEx(0x31u, v32, 3uLL, 0LL, 0LL);
        goto LABEL_61;
      }
    }
    i = (__int64 *)*i;
  }
  if ( KdBreakAfterSymbolLoad )
    DbgBreakPointWithStatus(1u);
  ExpInitializeBootEnvironment(a1);
  HvlPhase1Initialize(a1);
  if ( **(_DWORD **)(a1 + 240) >= 0xDD0u )
    HeadlessInit(a1);
  BootApplicationPersistentDataInitialize(a1);
  MEMORY[0xFFFFF780000002B4] = 2147418111;
  MEMORY[0xFFFFF780000002B8] = 0x80000000;
  if ( CmNtCSDVersion )
  {
    Message = RtlFindMessage((PVOID)0x140000000LL, 0xBu, 0, 0x40000087u, &v59);
    if ( Message < 0 )
      KeBugCheckEx(0x31u, Message, 4uLL, 0LL, 0LL);
    RtlInitAnsiString(&DestinationString, (PCSZ)v59->Text);
    DestinationString.Length -= 2;
    dwFlagsa = (unsigned __int8)CmNtCSDVersion != 0 ? (unsigned __int8)CmNtCSDVersion + 64 : 0;
    LODWORD(MessageResourceEntry) = BYTE1(CmNtCSDVersion);
    v37 = RtlStringCbPrintfA(pszDest, 0x100uLL, "%Z %u%c", &DestinationString, MessageResourceEntry);
    if ( v37 < 0 )
      KeBugCheckEx(0x31u, v37, 5uLL, 0LL, 0LL);
    if ( (CmNtCSDVersion & 0xFFFF0000) != 0 )
    {
      v40 = RtlStringCbCatExA(pszDest, v38, v39, &ppszDestEnd, &pcbRemaining, dwFlagsa);
      if ( v40 < 0 )
        KeBugCheckEx(0x31u, v40, 6uLL, 0LL, 0LL);
      v41 = RtlStringCbPrintfA(ppszDestEnd, pcbRemaining, "v.%u", HIWORD(CmNtCSDVersion));
      if ( v41 < 0 )
        KeBugCheckEx(0x31u, v41, 7uLL, 0LL, 0LL);
    }
  }
  else
  {
    v42 = RtlStringCbCopyExA(pszDest, v33, v34, v35, &pcbRemaining, dwFlags);
    if ( v42 < 0 )
      KeBugCheckEx(0x31u, v42, 8uLL, 0LL, 0LL);
    CmCSDVersionString.MaximumLength = 256 - pcbRemaining;
  }
  RtlInitAnsiString(&DestinationString, pszDest);
  v43 = RtlAnsiStringToUnicodeString(&CmCSDVersionString, &DestinationString, 1u);
  if ( v43 < 0 )
    KeBugCheckEx(0x31u, v43, 9uLL, 0LL, 0LL);
  v44 = RtlStringCbPrintfA(Source, 0x40uLL, "%u.%u", 6, 3);
  if ( v44 < 0 )
    KeBugCheckEx(0x31u, v44, 0xAuLL, 0LL, 0LL);
  if ( !RtlCreateUnicodeStringFromAsciiz(&CmVersionString, Source) )
LABEL_91:
    KeBugCheck(0x31u);
  if ( (NtGlobalFlag & 0x2000) != 0 )
  {
    v45 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x800000uLL, 0x63617453u);
    v48 = v45;
    if ( v45 )
    {
      v62[0] = v45;
      v62[1] = 0x800000LL;
      v62[2] = 0x800000LL;
      if ( (int)RtlControlStackTraceDataBase(v47, v46, v62) < 0 )
        ExFreePoolWithTag(v48, 0x63617453u);
    }
  }
  if ( (NtGlobalFlag & 0x800000) != 0 )
    RtlInitializeExceptionLog();
  ExInitializeHandleTablePackage();
  if ( !ObInitSystem() )
    KeBugCheck(0x5Eu);
  if ( !SeInitSystem() )
    KeBugCheck(0x5Fu);
  if ( !PsInitSystem(0, (void *)a1) || (int)DbgkInitialize() < 0 )
    KeBugCheck(0x60u);
  if ( !(unsigned __int8)PpInitSystem() )
    KeBugCheck(0x8Fu);
  MEMORY[0xFFFFF7800000026C] = 10;
  MEMORY[0xFFFFF78000000270] = 0;
  MEMORY[0xFFFFF78000000260] = 18363 - (KernelVersionBump != 1);
  MEMORY[0xFFFFF7800000026A] = KeProcessorArchitecture;
  MEMORY[0xFFFFF7800000002C] = -31132;
  MEMORY[0xFFFFF7800000002E] = -31132;
  result = 0LL;
  MEMORY[0xFFFFF780000003A4] = 0;
  return result;
}
