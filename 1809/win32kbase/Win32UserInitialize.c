/*
 * XREFs of Win32UserInitialize @ 0x1C021B110
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0018CC0 (OpenCacheKeyEx.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0028578 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0028A40 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0028A90 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C0028B38 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C0028D60 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0028DCC (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C0028E70 (EnterCritAvoidingDitHitTestHazard.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     HMUnlockObject @ 0x1C002FD78 (HMUnlockObject.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C005EBF0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C006B4A0 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     ?InitUIPI@@YAXXZ @ 0x1C006B5B0 (-InitUIPI@@YAXXZ.c)
 *     UserAddAtomToAtomTableEx @ 0x1C006C790 (UserAddAtomToAtomTableEx.c)
 *     IsIMMEnabledSystem @ 0x1C006CB10 (IsIMMEnabledSystem.c)
 *     ?Init@DispBrokerClient@DispBroker@@SAJXZ @ 0x1C0094060 (-Init@DispBrokerClient@DispBroker@@SAJXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     HMInitHandleTable @ 0x1C021BF1C (HMInitHandleTable.c)
 *     InitCreateUserSubsystem @ 0x1C021BFC0 (InitCreateUserSubsystem.c)
 *     InitQEntryLookaside @ 0x1C021C278 (InitQEntryLookaside.c)
 *     InitSecurity @ 0x1C021C2E0 (InitSecurity.c)
 *     InitCreateSharedSection @ 0x1C021C4E4 (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C021C5A0 (InitKernelHandleTable.c)
 */

__int64 Win32UserInitialize()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  int v4; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  int v7; // edx
  __int64 v8; // rcx
  int v9; // r8d
  int v10; // r9d
  __int64 *i; // rdi
  int inited; // esi
  int AtomTable; // eax
  int v14; // esi
  int v15; // eax
  unsigned int v16; // r9d
  __int64 v17; // r8
  unsigned int v18; // edx
  __int64 v19; // rax
  _DWORD *v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  int Buffer_high; // ebx
  void *v24; // rsi
  int v25; // edi
  void *v26; // rsi
  int v27; // edi
  int v28; // eax
  int v29; // r14d
  void *v30; // rsi
  int v31; // edi
  _DWORD *v32; // rdi
  int v33; // r14d
  void *v34; // rsi
  int v35; // ebx
  _DWORD *v36; // rdi
  void *v37; // rsi
  int v38; // ebx
  _DWORD *v39; // rdi
  void *v40; // rsi
  int v41; // ebx
  _DWORD *v42; // rdi
  void *v43; // rsi
  int v44; // ebx
  _DWORD *v45; // rdi
  void *v46; // rsi
  int v47; // ebx
  __int64 v48; // rax
  int v49; // edx
  __int64 v50; // rcx
  __int64 *DomainLockRef; // rbx
  int v52; // r8d
  int v53; // r9d
  int v54; // [rsp+30h] [rbp-19h] BYREF
  ULONG ResultLength[2]; // [rsp+38h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  _BYTE v57[12]; // [rsp+50h] [rbp+7h] BYREF
  int v58; // [rsp+5Ch] [rbp+13h]
  struct _UNICODE_STRING KeyValueInformation; // [rsp+70h] [rbp+27h] BYREF

  if ( (int)IsValidatetagWNDLayoutSupported() < 0 || (result = ValidatetagWNDLayout(), (int)result >= 0) )
  {
    result = InitCreateSharedSection();
    if ( (int)result >= 0 )
    {
      result = InitKernelHandleTable();
      v4 = result;
      if ( (int)result >= 0 )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v2, v1, v3);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v57, 1);
        v6 = EnterCritAvoidingDitHitTestHazard(0, 1);
        InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v57);
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v6;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)ResultLength);
        for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
        {
          gpducstulHead = i[2];
          v48 = *i;
          i[2] = 0LL;
          if ( !*(_DWORD *)(v48 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9, v10);
          DomainLockRef = GetDomainLockRef(8);
          if ( DomainLockRef == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v50, v49, v52, v53);
          tagObjLock::UnLock((tagObjLock *)DomainLockRef);
          HMUnlockObject(*i);
          tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef);
        }
        tagObjLock::UnLock(*(tagObjLock **)ResultLength);
        if ( (unsigned int)InitSecurity() )
        {
          *(_DWORD *)(ExWindowStationObjectType + 108LL) = 208;
          *(_DWORD *)(ExWindowStationObjectType + 104LL) = 0;
          *(_DWORD *)(ExWindowStationObjectType + 92LL) = 983935;
          *(_OWORD *)(ExWindowStationObjectType + 76LL) = WinStaMapping;
          *((_DWORD *)ExDesktopObjectType + 27) = 344;
          *((_DWORD *)ExDesktopObjectType + 26) = 0;
          *((_DWORD *)ExDesktopObjectType + 23) = 983551;
          *(_OWORD *)((char *)ExDesktopObjectType + 76) = DesktopMapping;
          *(_OWORD *)(ExCompositionObjectType + 76LL) = RIMRights;
          *(_DWORD *)(ExCompositionObjectType + 108LL) = 24;
          *(_DWORD *)(ExCompositionObjectType + 104LL) = 0;
          *(_DWORD *)(ExCompositionObjectType + 92LL) = 983043;
          *(_BYTE *)(ExRawInputManagerObjectType + 66LL) |= 0x10u;
          *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 904;
          *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
          *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
          *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = RIMRights;
          gpepInit = PsGetCurrentProcess(ExRawInputManagerObjectType);
          inited = InitQEntryLookaside();
          if ( (int)IsInitSMSLookasideSupported() >= 0 )
            inited |= InitSMSLookaside();
          if ( UserAtomTableHandle )
            AtomTable = 0;
          else
            AtomTable = RtlCreateAtomTableEx(37LL, 1LL, &UserAtomTableHandle);
          v14 = AtomTable | inited;
          if ( UserLibmgmtAtomTableHandle )
            v15 = 0;
          else
            v15 = RtlCreateAtomTableEx(37LL, 1LL, &UserLibmgmtAtomTableHandle);
          v4 = v15 | v14;
          if ( v4 < 0 )
            goto LABEL_139;
          atomUSER32 = UserAddAtomToAtomTableEx(UserAtomTableHandle, (__int64)L"USER32", 1);
          gatomFirstPinned = atomUSER32;
          if ( atomUSER32 && (unsigned int)InitCreateUserSubsystem() )
          {
            if ( (int)IsCreateSetupNameArraySupported() >= 0 )
              CreateSetupNameArray();
            if ( (int)IsInitPlaySoundSupported() < 0 || (int)InitPlaySound() >= 0 )
            {
              gpsi = RtlAllocateHeap(gpvSharedAlloc, 0, 0x1C18uLL);
              if ( gpsi )
              {
                v16 = 2;
                v17 = 2528LL;
                do
                {
                  v18 = 0;
                  v19 = v17;
                  do
                  {
                    v19 += 120LL;
                    v18 += 30;
                    *(_DWORD *)((char *)gpsi + v19 - 124) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 120) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 116) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 112) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 108) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 104) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 100) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 96) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 92) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 88) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 84) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 80) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 76) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 72) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 68) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 64) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 60) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 56) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 52) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 48) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 44) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 40) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 36) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 32) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 28) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 24) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 20) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 16) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 12) = -1;
                    *(_DWORD *)((char *)gpsi + v19 - 8) = -1;
                  }
                  while ( v18 < 0x1E );
                  ++v16;
                  v17 += 120LL;
                }
                while ( v16 < 0x12 );
                v20 = gpsi;
                *((_DWORD *)gpsi + 1282) = 8;
                v20[1283] = 16;
                gpDispInfo = (__int64)Win32AllocPoolZInit(0xA8uLL, 0x70646B55u);
                if ( gpDispInfo )
                {
                  *(_QWORD *)gpDispInfo = RtlAllocateHeap(gpvSharedAlloc, 0, 0x28uLL);
                  if ( *(_QWORD *)gpDispInfo )
                  {
                    if ( IsDesktopHeapLoggingOn() )
                      *(_DWORD *)gpsi |= 0x100u;
                    else
                      *(_DWORD *)gpsi &= ~0x100u;
                    if ( (_BYTE)NlsMbCodePageTag )
                      *(_DWORD *)gpsi |= 2u;
                    else
                      *(_DWORD *)gpsi &= ~2u;
                    if ( (unsigned int)IsIMMEnabledSystem() )
                      *(_DWORD *)gpsi |= 4u;
                    else
                      *(_DWORD *)gpsi &= ~4u;
                    if ( (unsigned __int16)(NlsAnsiCodePage - 1255) <= 1u )
                      *(_DWORD *)gpsi |= 8u;
                    else
                      *(_DWORD *)gpsi &= ~8u;
                    *((_DWORD *)gpsi + 231) = gdwDesktopSectionSize << 10;
                    v21 = Win32AllocPoolZInit(0x100uLL, 0x646B7355u);
                    gpkdiStatic = (__int64)v21;
                    if ( v21 )
                    {
                      *v21 = &diStatic;
                      if ( (int)IsInitFunctionTablesSupported() >= 0 )
                        InitFunctionTables();
                      if ( (int)IsInitMessageTablesSupported() >= 0 )
                        InitMessageTables();
                      if ( (int)IsVerifySyncOnlyMessagesSupported() >= 0 )
                        VerifySyncOnlyMessages();
                      if ( ((int)IsInitOLEFormatsSupported() < 0 || (unsigned int)InitOLEFormats())
                        && ((int)IsSetupClassAtomsSupported() < 0 || (unsigned int)SetupClassAtoms())
                        && (unsigned int)HMInitHandleTable() )
                      {
                        gSharedInfo = (__int64)gpsi;
                        v22 = *(_QWORD *)gpDispInfo;
                        v54 = gdwPolicyFlags;
                        Buffer_high = gdwPolicyFlags;
                        qword_1C01CBA68 = v22;
                        while ( 1 )
                        {
                          v24 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v54);
                          if ( !v24 )
                            break;
                          RtlInitUnicodeString(&DestinationString, L"USERProcessHandleQuota");
                          if ( ZwQueryValueKey(
                                 v24,
                                 &DestinationString,
                                 KeyValuePartialInformation,
                                 &KeyValueInformation,
                                 0x14u,
                                 ResultLength) < 0 )
                          {
                            v25 = v54;
                            if ( !v54 )
                              Buffer_high = 10000;
                          }
                          else
                          {
                            Buffer_high = HIDWORD(KeyValueInformation.Buffer);
                            v25 = 0;
                            v54 = 0;
                          }
                          ZwClose(v24);
                          if ( !v25 )
                            goto LABEL_56;
                        }
                        Buffer_high = 10000;
LABEL_56:
                        v54 = gdwPolicyFlags;
                        gUserProcessHandleQuota = Buffer_high;
                        do
                        {
                          v26 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v54);
                          if ( !v26 )
                          {
                            Buffer_high = 10000;
                            goto LABEL_62;
                          }
                          RtlInitUnicodeString(&DestinationString, L"USERPostMessageLimit");
                          if ( ZwQueryValueKey(
                                 v26,
                                 &DestinationString,
                                 KeyValuePartialInformation,
                                 &KeyValueInformation,
                                 0x14u,
                                 ResultLength) < 0 )
                          {
                            v27 = v54;
                            if ( !v54 )
                              Buffer_high = 10000;
                          }
                          else
                          {
                            Buffer_high = HIDWORD(KeyValueInformation.Buffer);
                            v27 = 0;
                            v54 = 0;
                          }
                          ZwClose(v26);
                        }
                        while ( v27 );
                        if ( Buffer_high )
                        {
LABEL_62:
                          v28 = Buffer_high;
                          goto LABEL_63;
                        }
                        v28 = -1;
LABEL_63:
                        v29 = gNestedWindowLimit;
                        gUserPostMessageLimit = v28;
                        v54 = gdwPolicyFlags;
                        while ( 1 )
                        {
                          v30 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v54);
                          if ( !v30 )
                            break;
                          RtlInitUnicodeString(&DestinationString, L"USERNestedWindowLimit");
                          if ( ZwQueryValueKey(
                                 v30,
                                 &DestinationString,
                                 KeyValuePartialInformation,
                                 &KeyValueInformation,
                                 0x14u,
                                 ResultLength) < 0 )
                          {
                            v31 = v54;
                            if ( !v54 )
                              Buffer_high = v29;
                          }
                          else
                          {
                            Buffer_high = HIDWORD(KeyValueInformation.Buffer);
                            v31 = 0;
                            v54 = 0;
                          }
                          ZwClose(v30);
                          if ( !v31 )
                            goto LABEL_77;
                        }
                        Buffer_high = v29;
LABEL_77:
                        if ( (unsigned int)(Buffer_high - 35) <= 0x41 )
                          gNestedWindowLimit = Buffer_high;
                        if ( (int)IsGetguiKeyboardCorrectionCalloutTimeoutSupported() >= 0 )
                        {
                          GetguiKeyboardCorrectionCalloutTimeout(&DestinationString);
                          v32 = *(_DWORD **)&DestinationString.Length;
                          v54 = gdwPolicyFlags;
                          v33 = **(_DWORD **)&DestinationString.Length;
                          while ( 1 )
                          {
                            v34 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v54);
                            if ( !v34 )
                              break;
                            RtlInitUnicodeString(&KeyValueInformation, L"USERKCCTimeout");
                            if ( ZwQueryValueKey(
                                   v34,
                                   &KeyValueInformation,
                                   KeyValuePartialInformation,
                                   v57,
                                   0x14u,
                                   ResultLength) >= 0 )
                            {
                              v35 = 0;
                              v54 = 0;
                              *v32 = v58;
                            }
                            else
                            {
                              v35 = v54;
                              if ( !v54 )
                                *v32 = v33;
                            }
                            ZwClose(v34);
                            if ( !v35 )
                              goto LABEL_89;
                          }
                          *v32 = v33;
                        }
LABEL_89:
                        v36 = gpsi;
                        v54 = gdwPolicyFlags;
                        while ( 1 )
                        {
                          v37 = OpenCacheKeyEx(0LL, 0x28u, 0x20019u, &v54);
                          if ( !v37 )
                            break;
                          RtlInitUnicodeString(&KeyValueInformation, L"Installed");
                          if ( ZwQueryValueKey(
                                 v37,
                                 &KeyValueInformation,
                                 KeyValuePartialInformation,
                                 v57,
                                 0x14u,
                                 ResultLength) >= 0 )
                          {
                            v38 = 0;
                            v54 = 0;
                            v36[560] = v58;
                          }
                          else
                          {
                            v38 = v54;
                            if ( !v54 )
                              v36[560] = 0;
                          }
                          ZwClose(v37);
                          if ( !v38 )
                            goto LABEL_98;
                        }
                        v36[560] = 0;
LABEL_98:
                        v39 = gpsi;
                        v54 = gdwPolicyFlags;
                        while ( 1 )
                        {
                          v40 = OpenCacheKeyEx(0LL, 0x29u, 0x20019u, &v54);
                          if ( !v40 )
                            break;
                          RtlInitUnicodeString(&KeyValueInformation, L"Installed");
                          if ( ZwQueryValueKey(
                                 v40,
                                 &KeyValueInformation,
                                 KeyValuePartialInformation,
                                 v57,
                                 0x14u,
                                 ResultLength) >= 0 )
                          {
                            v41 = 0;
                            v54 = 0;
                            v39[561] = v58;
                          }
                          else
                          {
                            v41 = v54;
                            if ( !v54 )
                              v39[561] = 0;
                          }
                          ZwClose(v40);
                          if ( !v41 )
                            goto LABEL_107;
                        }
                        v39[561] = 0;
LABEL_107:
                        v42 = gpsi;
                        v54 = gdwPolicyFlags;
                        while ( 1 )
                        {
                          v43 = OpenCacheKeyEx(0LL, 0x2Du, 0x20019u, &v54);
                          if ( !v43 )
                            break;
                          RtlInitUnicodeString(&KeyValueInformation, L"R2BuildNumber");
                          if ( ZwQueryValueKey(
                                 v43,
                                 &KeyValueInformation,
                                 KeyValuePartialInformation,
                                 v57,
                                 0x14u,
                                 ResultLength) >= 0 )
                          {
                            v44 = 0;
                            v54 = 0;
                            v42[563] = v58;
                          }
                          else
                          {
                            v44 = v54;
                            if ( !v54 )
                              v42[563] = 0;
                          }
                          ZwClose(v43);
                          if ( !v44 )
                            goto LABEL_116;
                        }
                        v42[563] = 0;
LABEL_116:
                        v45 = gpsi;
                        v54 = gdwPolicyFlags;
                        while ( 1 )
                        {
                          v46 = OpenCacheKeyEx(0LL, 0x2Eu, 0x20019u, &v54);
                          if ( !v46 )
                            break;
                          RtlInitUnicodeString(&KeyValueInformation, L"StarterBuildNumber");
                          if ( ZwQueryValueKey(
                                 v46,
                                 &KeyValueInformation,
                                 KeyValuePartialInformation,
                                 v57,
                                 0x14u,
                                 ResultLength) >= 0 )
                          {
                            v47 = 0;
                            v54 = 0;
                            v45[562] = v58;
                          }
                          else
                          {
                            v47 = v54;
                            if ( !v54 )
                              v45[562] = 0;
                          }
                          ZwClose(v46);
                          if ( !v47 )
                            goto LABEL_125;
                        }
                        v45[562] = 0;
LABEL_125:
                        InitUIPI();
                        if ( gbEnforceUIPI )
                        {
                          if ( (int)IsInitClipFormatExceptionListSupported() >= 0 )
                            InitClipFormatExceptionList();
                          if ( (int)IsInitClipboardILDefSupported() >= 0 )
                            InitClipboardILDef();
                        }
                        gdwMDAQThreshold = 5000;
                        gdwMDAQTimeoutDefenseInDepth = 30000;
                        *((_DWORD *)gpsi + 559) &= ~0x20u;
                        if ( (int)IsInitializeTouchPadSysParamsSupported() >= 0 )
                          InitializeTouchPadSysParams();
                        if ( (int)IsInitModuleAllocationsSupported() >= 0 )
                          InitModuleAllocations();
                        v4 = DispBroker::DispBrokerClient::Init();
                        if ( v4 < 0 )
                          goto LABEL_139;
                        if ( (int)IsInitRotationManagerSupported() >= 0 )
                        {
                          v4 = InitRotationManager();
                          if ( v4 < 0 )
                            goto LABEL_139;
                        }
                        if ( (int)IsAllocateCvrSupported() < 0 || (unsigned int)AllocateCvr(&gSMWP, 4LL) )
                          goto LABEL_139;
                      }
                    }
                  }
                  else
                  {
                    Win32FreePool(gpDispInfo);
                    gpDispInfo = 0LL;
                  }
                }
              }
            }
          }
        }
        if ( v4 >= 0 )
          v4 = -1073741801;
LABEL_139:
        UserSessionSwitchLeaveCrit();
        return (unsigned int)v4;
      }
    }
  }
  return result;
}
