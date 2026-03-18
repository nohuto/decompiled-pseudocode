/*
 * XREFs of Win32UserInitialize @ 0x1C02673B4
 * Callers:
 *     DriverEntry @ 0x1C0266500 (DriverEntry.c)
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0011680 (OpenCacheKeyEx.c)
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     HMUnlockObject @ 0x1C0025350 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026030 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00263D0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002A4A0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C0072EB4 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     Initialize @ 0x1C0072FC0 (Initialize.c)
 *     UserAddAtomToAtomTableEx @ 0x1C0076060 (UserAddAtomToAtomTableEx.c)
 *     IsIMMEnabledSystem @ 0x1C00760F0 (IsIMMEnabledSystem.c)
 *     ApiSetEditionBaseDriverEntryInitialize @ 0x1C007611C (ApiSetEditionBaseDriverEntryInitialize.c)
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C0076AB0 (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     InitQEntryLookaside @ 0x1C02670D0 (InitQEntryLookaside.c)
 *     InitCreateSharedSection @ 0x1C0267138 (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C0267290 (InitKernelHandleTable.c)
 *     HMInitHandleTable @ 0x1C0267308 (HMInitHandleTable.c)
 *     InitCreateUserSubsystem @ 0x1C02681A0 (InitCreateUserSubsystem.c)
 *     InitSecurity @ 0x1C026846C (InitSecurity.c)
 */

__int64 Win32UserInitialize()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbx
  struct tagTHREADINFO **v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  int inited; // esi
  int AtomTable; // eax
  int v24; // esi
  int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rcx
  unsigned int v28; // r8d
  __int64 v29; // r9
  _DWORD *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // r8
  int v33; // ebx
  __int64 v34; // rcx
  void *v35; // rsi
  int v36; // edi
  void *v37; // rsi
  int v38; // edi
  int v39; // eax
  int v40; // r14d
  void *v41; // rsi
  int v42; // edi
  _DWORD *v43; // rdi
  int v44; // r14d
  void *v45; // rsi
  int v46; // ebx
  _DWORD *v47; // rdi
  void *v48; // rsi
  int v49; // ebx
  _DWORD *v50; // rdi
  void *v51; // rsi
  int v52; // ebx
  _DWORD *v53; // rdi
  void *v54; // rsi
  int v55; // ebx
  _DWORD *v56; // rdi
  void *v57; // rsi
  int v58; // ebx
  _QWORD *PoolWithTag; // rax
  void *v60; // rbx
  __int64 v61; // rax
  unsigned int v62; // r9d
  PERESOURCE *DomainLockRef; // rbx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 *v66; // r14
  __int64 v67; // rax
  PERESOURCE *v68; // rdi
  int v69; // [rsp+38h] [rbp-D0h] BYREF
  int v70; // [rsp+3Ch] [rbp-CCh] BYREF
  int v71; // [rsp+40h] [rbp-C8h] BYREF
  int v72; // [rsp+44h] [rbp-C4h] BYREF
  int v73; // [rsp+48h] [rbp-C0h] BYREF
  int v74; // [rsp+4Ch] [rbp-BCh] BYREF
  int v75; // [rsp+50h] [rbp-B8h] BYREF
  int v76; // [rsp+54h] [rbp-B4h] BYREF
  int v77; // [rsp+58h] [rbp-B0h]
  int v78; // [rsp+5Ch] [rbp-ACh] BYREF
  int v79; // [rsp+60h] [rbp-A8h] BYREF
  int v80; // [rsp+64h] [rbp-A4h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-A0h] BYREF
  ULONG v82; // [rsp+6Ch] [rbp-9Ch] BYREF
  ULONG v83; // [rsp+70h] [rbp-98h] BYREF
  ULONG v84; // [rsp+74h] [rbp-94h] BYREF
  ULONG v85; // [rsp+78h] [rbp-90h] BYREF
  ULONG v86; // [rsp+7Ch] [rbp-8Ch] BYREF
  ULONG v87; // [rsp+80h] [rbp-88h] BYREF
  ULONG v88; // [rsp+84h] [rbp-84h] BYREF
  _DWORD *v89; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+A0h] [rbp-68h] BYREF
  struct _UNICODE_STRING v92; // [rsp+B0h] [rbp-58h] BYREF
  struct _UNICODE_STRING v93; // [rsp+C0h] [rbp-48h] BYREF
  struct _UNICODE_STRING v94; // [rsp+D0h] [rbp-38h] BYREF
  struct _UNICODE_STRING v95; // [rsp+E0h] [rbp-28h] BYREF
  struct _UNICODE_STRING v96; // [rsp+F0h] [rbp-18h] BYREF
  struct _UNICODE_STRING v97; // [rsp+100h] [rbp-8h] BYREF
  __int64 v98; // [rsp+110h] [rbp+8h]
  unsigned __int8 v99; // [rsp+118h] [rbp+10h]
  GUID ActivityId; // [rsp+11Ch] [rbp+14h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+28h] BYREF
  int *v102; // [rsp+150h] [rbp+48h]
  __int64 v103; // [rsp+158h] [rbp+50h]
  EVENT_DATA_DESCRIPTOR v104; // [rsp+160h] [rbp+58h] BYREF
  int *v105; // [rsp+180h] [rbp+78h]
  __int64 v106; // [rsp+188h] [rbp+80h]
  EVENT_DATA_DESCRIPTOR v107; // [rsp+190h] [rbp+88h] BYREF
  int *v108; // [rsp+1B0h] [rbp+A8h]
  __int64 v109; // [rsp+1B8h] [rbp+B0h]
  _BYTE KeyValueInformation[12]; // [rsp+1C0h] [rbp+B8h] BYREF
  int v111; // [rsp+1CCh] [rbp+C4h]
  _BYTE v112[12]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v113; // [rsp+1E4h] [rbp+DCh]
  _BYTE v114[12]; // [rsp+1F0h] [rbp+E8h] BYREF
  int v115; // [rsp+1FCh] [rbp+F4h]
  _BYTE v116[12]; // [rsp+208h] [rbp+100h] BYREF
  int v117; // [rsp+214h] [rbp+10Ch]
  _BYTE v118[12]; // [rsp+220h] [rbp+118h] BYREF
  int v119; // [rsp+22Ch] [rbp+124h]
  _BYTE v120[12]; // [rsp+238h] [rbp+130h] BYREF
  int v121; // [rsp+244h] [rbp+13Ch]
  _BYTE v122[12]; // [rsp+250h] [rbp+148h] BYREF
  int v123; // [rsp+25Ch] [rbp+154h]
  _BYTE v124[12]; // [rsp+268h] [rbp+160h] BYREF
  int v125; // [rsp+274h] [rbp+16Ch]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 14, 24, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
  if ( (int)IsValidatetagWNDLayoutSupported() < 0 || (result = ValidatetagWNDLayout(), (int)result >= 0) )
  {
    result = InitCreateSharedSection(v1, v0, v2);
    if ( (int)result >= 0 )
    {
      result = InitKernelHandleTable(v5, v4, v6);
      if ( (int)result >= 0 )
      {
        result = ApiSetEditionBaseDriverEntryInitialize();
        v77 = result;
        v8 = result;
        if ( (int)result >= 0 )
        {
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v7);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          *(_QWORD *)&ActivityId.Data1 = 0LL;
          *(_QWORD *)ActivityId.Data4 = 0LL;
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
          {
            v99 = 1;
            v61 = PsGetCurrentThreadWin32Thread(v9);
            v98 = v61;
            if ( v61 && (*(int *)(v61 + 24) > 0 || *(_DWORD *)(v98 + 48)) )
            {
              EtwActivityIdControl(3u, &ActivityId);
              if ( dword_1C020FB50 > 6u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
                {
                  v78 = v99;
                  v102 = &v78;
                  v103 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34D7, &ActivityId, 0LL, 3u, &pData);
                }
              }
            }
          }
          else
          {
            v98 = 0LL;
          }
          v11 = 0LL;
          while ( 1 )
          {
            v12 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
            if ( v12 )
              v11 = *v12;
            CurrentProcess = (PVOID)PsGetCurrentProcess(v14, v13);
            if ( CurrentProcess )
            {
              if ( CurrentProcess == g_pepDwm )
                break;
            }
            if ( (PVOID)PsGetCurrentProcess(v17, v16) == gpepCSRSS && v11 != (struct tagTHREADINFO *)gptiTSRequest
              || gbDITInHitTest != 1
              || v11 == gptiRit )
            {
              break;
            }
            ++gcDITHitTestWaiters;
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
          }
          if ( InputTraceLogging::Perf::s_userCritLoggingEnabled
            && v98
            && (*(_DWORD *)(v98 + 48) || *(int *)(v98 + 24) > 0) )
          {
            *(_DWORD *)(v98 + 44) = 1;
            *(GUID *)(v98 + 28) = ActivityId;
            if ( dword_1C020FB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
              {
                v79 = v99;
                v105 = &v79;
                v106 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E3480, &ActivityId, 0LL, 3u, &v104);
                v62 = dword_1C020FB50;
              }
              if ( v62 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x2000uLL) )
              {
                v80 = v99;
                v108 = &v80;
                v109 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E34AD, &ActivityId, 0LL, 3u, &v107);
              }
            }
          }
          EtwTraceAcquiredExclusiveUserCrit();
          gptiCurrent = v11;
          gbValidateHandleForIL = 1;
          if ( IsValidGuiThreadContext() )
          {
            DomainLockRef = (PERESOURCE *)GetDomainLockRef(12LL, v18, v19);
            if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM();
            if ( ExIsResourceAcquiredExclusiveLite(*DomainLockRef) == 1 )
              MicrosoftTelemetryAssertTriggeredNoArgsKM();
            ExEnterCriticalRegionAndAcquireResourceExclusive(*DomainLockRef);
            v66 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v66[2];
                v67 = *v66;
                v66[2] = 0LL;
                if ( !*(_DWORD *)(v67 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM();
                v68 = (PERESOURCE *)GetDomainLockRef(12LL, v64, v65);
                if ( v68 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM();
                ExReleaseResourceAndLeaveCriticalRegion(*v68);
                HMUnlockObject(*v66);
                tagDomLock::LockExclusive(v68);
                v66 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v8 = v77;
            }
            ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
          }
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
            *(_DWORD *)(ExCompositionObjectType + 108LL) = 24;
            *(_OWORD *)(ExCompositionObjectType + 76LL) = *(_OWORD *)((char *)&stru_1C01EAA14.Logger + 4);
            *(_DWORD *)(ExCompositionObjectType + 104LL) = 0;
            *(_DWORD *)(ExCompositionObjectType + 92LL) = 983043;
            *(_BYTE *)(ExRawInputManagerObjectType + 66LL) |= 0x10u;
            *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = *(_OWORD *)((char *)&stru_1C01EAA14.Logger + 4);
            *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 904;
            *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
            *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
            CActivationObject::_sLock = 0LL;
            qword_1C0217960 = 0LL;
            CActivationObject::_sHashTable = 0LL;
            qword_1C0217970 = 0LL;
            *(_BYTE *)(ExActivationObjectType + 66LL) |= 0x10u;
            *(_QWORD *)(ExActivationObjectType + 104LL) = 80LL;
            *(_DWORD *)(ExActivationObjectType + 92LL) = 983043;
            *(_OWORD *)(ExActivationObjectType + 76LL) = ACTIVATIONOBJECTRights;
            gpepInit = PsGetCurrentProcess(ExActivationObjectType, 983043LL);
            inited = InitQEntryLookaside();
            if ( (int)IsInitSMSLookasideSupported() >= 0 )
              inited |= InitSMSLookaside();
            if ( UserAtomTableHandle )
              AtomTable = 0;
            else
              AtomTable = RtlCreateAtomTableEx(37LL, 1LL, &UserAtomTableHandle);
            v24 = AtomTable | inited;
            if ( UserLibmgmtAtomTableHandle )
              v25 = 0;
            else
              v25 = RtlCreateAtomTableEx(37LL, 1LL, &UserLibmgmtAtomTableHandle);
            v8 = v25 | v24;
            if ( v8 < 0 )
              goto LABEL_156;
            atomUSER32 = UserAddAtomToAtomTableEx(UserAtomTableHandle, (__int64)L"USER32", 1);
            gatomFirstPinned = atomUSER32;
            if ( atomUSER32 )
            {
              if ( (unsigned int)InitCreateUserSubsystem() )
              {
                if ( (int)IsCreateSetupNameArraySupported() >= 0 )
                  CreateSetupNameArray();
                if ( (int)IsInitPlaySoundSupported() < 0 || (int)InitPlaySound() >= 0 )
                {
                  gpsi = RtlAllocateHeap(gpvSharedAlloc, 0, 0x1BB0uLL);
                  if ( gpsi )
                  {
                    v26 = 2;
                    v27 = 2524LL;
                    do
                    {
                      v28 = 0;
                      v29 = v27;
                      do
                      {
                        ++v28;
                        *(_DWORD *)((char *)gpsi + v29) = -1;
                        v29 += 4LL;
                      }
                      while ( v28 < 0x1E );
                      ++v26;
                      v27 += 120LL;
                    }
                    while ( v26 < 0x12 );
                    v30 = gpsi;
                    *((_DWORD *)gpsi + 1282) = 8;
                    v30[1283] = 16;
                    gpDispInfo = (__int64)Win32AllocPoolZInit(0xA8uLL, 1885629269LL);
                    if ( gpDispInfo )
                    {
                      *(_QWORD *)gpDispInfo = RtlAllocateHeap(gpvSharedAlloc, 0, 0x28uLL);
                      if ( *(_QWORD *)gpDispInfo )
                      {
                        if ( (unsigned int)IsDesktopHeapLoggingOn() )
                          _InterlockedOr((volatile signed __int32 *)gpsi, 0x100u);
                        else
                          _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFEFF);
                        if ( (_BYTE)NlsMbCodePageTag )
                          _InterlockedOr((volatile signed __int32 *)gpsi, 2u);
                        else
                          _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFFD);
                        if ( (unsigned int)IsIMMEnabledSystem() )
                          _InterlockedOr((volatile signed __int32 *)gpsi, 4u);
                        else
                          _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFFB);
                        if ( (unsigned __int16)(NlsAnsiCodePage - 1255) <= 1u )
                          _InterlockedOr((volatile signed __int32 *)gpsi, 8u);
                        else
                          _InterlockedAnd((volatile signed __int32 *)gpsi, 0xFFFFFFF7);
                        *((_DWORD *)gpsi + 231) = gdwDesktopSectionSize << 10;
                        v31 = Win32AllocPoolZInit(0x100uLL, 1684763477LL);
                        gpkdiStatic = (__int64)v31;
                        if ( v31 )
                        {
                          *v31 = &diStatic;
                          if ( (int)IsInitFunctionTablesSupported() >= 0 )
                            InitFunctionTables();
                          if ( (int)IsInitMessageTablesSupported() >= 0 )
                            InitMessageTables();
                          if ( (int)IsVerifySyncOnlyMessagesSupported() >= 0 )
                            VerifySyncOnlyMessages();
                          if ( ((int)IsInitOLEFormatsSupported() < 0 || (unsigned int)InitOLEFormats())
                            && ((int)IsSetupClassAtomsSupported() < 0 || (unsigned int)SetupClassAtoms())
                            && (unsigned int)HMInitHandleTable(v21, v20, v32) )
                          {
                            v33 = v77;
                            gSharedInfo = (__int64)gpsi;
                            v34 = *(_QWORD *)gpDispInfo;
                            *(_QWORD *)&DestinationString.Length = 0LL;
                            DestinationString.Buffer = 0LL;
                            v69 = gdwPolicyFlags;
                            qword_1C0213768 = v34;
                            while ( 1 )
                            {
                              v35 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v69);
                              if ( !v35 )
                                break;
                              RtlInitUnicodeString(&DestinationString, L"USERProcessHandleQuota");
                              if ( ZwQueryValueKey(
                                     v35,
                                     &DestinationString,
                                     KeyValuePartialInformation,
                                     KeyValueInformation,
                                     0x14u,
                                     &ResultLength) < 0 )
                              {
                                v36 = v69;
                                if ( !v69 )
                                  v33 = 10000;
                              }
                              else
                              {
                                v33 = v111;
                                v36 = 0;
                                v69 = 0;
                              }
                              ZwClose(v35);
                              if ( !v36 )
                                goto LABEL_71;
                            }
                            v33 = 10000;
LABEL_71:
                            gUserProcessHandleQuota = v33;
                            *(_QWORD *)&ValueName.Length = 0LL;
                            ValueName.Buffer = 0LL;
                            v70 = gdwPolicyFlags;
                            do
                            {
                              v37 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v70);
                              if ( !v37 )
                              {
                                v33 = 10000;
                                goto LABEL_77;
                              }
                              RtlInitUnicodeString(&ValueName, L"USERPostMessageLimit");
                              if ( ZwQueryValueKey(v37, &ValueName, KeyValuePartialInformation, v112, 0x14u, &v82) < 0 )
                              {
                                v38 = v70;
                                if ( !v70 )
                                  v33 = 10000;
                              }
                              else
                              {
                                v33 = v113;
                                v38 = 0;
                                v70 = 0;
                              }
                              ZwClose(v37);
                            }
                            while ( v38 );
                            if ( v33 )
                            {
LABEL_77:
                              v39 = v33;
                              goto LABEL_78;
                            }
                            v39 = -1;
LABEL_78:
                            v40 = gNestedWindowLimit;
                            gUserPostMessageLimit = v39;
                            *(_QWORD *)&v92.Length = 0LL;
                            v92.Buffer = 0LL;
                            v71 = gdwPolicyFlags;
                            while ( 1 )
                            {
                              v41 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v71);
                              if ( !v41 )
                                break;
                              RtlInitUnicodeString(&v92, L"USERNestedWindowLimit");
                              if ( ZwQueryValueKey(v41, &v92, KeyValuePartialInformation, v114, 0x14u, &v83) < 0 )
                              {
                                v42 = v71;
                                if ( !v71 )
                                  v33 = v40;
                              }
                              else
                              {
                                v33 = v115;
                                v42 = 0;
                                v71 = 0;
                              }
                              ZwClose(v41);
                              if ( !v42 )
                                goto LABEL_92;
                            }
                            v33 = v40;
LABEL_92:
                            if ( (unsigned int)(v33 - 50) <= 0x32 )
                              gNestedWindowLimit = v33;
                            if ( (int)IsGetguiKeyboardCorrectionCalloutTimeoutSupported() >= 0 )
                            {
                              GetguiKeyboardCorrectionCalloutTimeout(&v89);
                              v43 = v89;
                              *(_QWORD *)&v93.Length = 0LL;
                              v93.Buffer = 0LL;
                              v44 = *v89;
                              v72 = gdwPolicyFlags;
                              while ( 1 )
                              {
                                v45 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v72);
                                if ( !v45 )
                                  break;
                                RtlInitUnicodeString(&v93, L"USERKCCTimeout");
                                if ( ZwQueryValueKey(v45, &v93, KeyValuePartialInformation, v116, 0x14u, &v84) >= 0 )
                                {
                                  v46 = 0;
                                  v72 = 0;
                                  *v43 = v117;
                                }
                                else
                                {
                                  v46 = v72;
                                  if ( !v72 )
                                    *v43 = v44;
                                }
                                ZwClose(v45);
                                if ( !v46 )
                                  goto LABEL_104;
                              }
                              *v43 = v44;
                            }
LABEL_104:
                            v47 = gpsi;
                            *(_QWORD *)&v94.Length = 0LL;
                            v94.Buffer = 0LL;
                            v73 = gdwPolicyFlags;
                            while ( 1 )
                            {
                              v48 = OpenCacheKeyEx(0LL, 0x28u, 0x20019u, &v73);
                              if ( !v48 )
                                break;
                              RtlInitUnicodeString(&v94, L"Installed");
                              if ( ZwQueryValueKey(v48, &v94, KeyValuePartialInformation, v118, 0x14u, &v85) >= 0 )
                              {
                                v49 = 0;
                                v73 = 0;
                                v47[560] = v119;
                              }
                              else
                              {
                                v49 = v73;
                                if ( !v73 )
                                  v47[560] = 0;
                              }
                              ZwClose(v48);
                              if ( !v49 )
                                goto LABEL_113;
                            }
                            v47[560] = 0;
LABEL_113:
                            v50 = gpsi;
                            *(_QWORD *)&v95.Length = 0LL;
                            v95.Buffer = 0LL;
                            v74 = gdwPolicyFlags;
                            while ( 1 )
                            {
                              v51 = OpenCacheKeyEx(0LL, 0x29u, 0x20019u, &v74);
                              if ( !v51 )
                                break;
                              RtlInitUnicodeString(&v95, L"Installed");
                              if ( ZwQueryValueKey(v51, &v95, KeyValuePartialInformation, v120, 0x14u, &v86) >= 0 )
                              {
                                v52 = 0;
                                v74 = 0;
                                v50[561] = v121;
                              }
                              else
                              {
                                v52 = v74;
                                if ( !v74 )
                                  v50[561] = 0;
                              }
                              ZwClose(v51);
                              if ( !v52 )
                                goto LABEL_122;
                            }
                            v50[561] = 0;
LABEL_122:
                            v53 = gpsi;
                            *(_QWORD *)&v96.Length = 0LL;
                            v96.Buffer = 0LL;
                            v75 = gdwPolicyFlags;
                            while ( 1 )
                            {
                              v54 = OpenCacheKeyEx(0LL, 0x2Du, 0x20019u, &v75);
                              if ( !v54 )
                                break;
                              RtlInitUnicodeString(&v96, L"R2BuildNumber");
                              if ( ZwQueryValueKey(v54, &v96, KeyValuePartialInformation, v122, 0x14u, &v87) >= 0 )
                              {
                                v55 = 0;
                                v75 = 0;
                                v53[563] = v123;
                              }
                              else
                              {
                                v55 = v75;
                                if ( !v75 )
                                  v53[563] = 0;
                              }
                              ZwClose(v54);
                              if ( !v55 )
                                goto LABEL_131;
                            }
                            v53[563] = 0;
LABEL_131:
                            v56 = gpsi;
                            *(_QWORD *)&v97.Length = 0LL;
                            v97.Buffer = 0LL;
                            v76 = gdwPolicyFlags;
                            while ( 1 )
                            {
                              v57 = OpenCacheKeyEx(0LL, 0x2Eu, 0x20019u, &v76);
                              if ( !v57 )
                                break;
                              RtlInitUnicodeString(&v97, L"StarterBuildNumber");
                              if ( ZwQueryValueKey(v57, &v97, KeyValuePartialInformation, v124, 0x14u, &v88) >= 0 )
                              {
                                v58 = 0;
                                v76 = 0;
                                v56[562] = v125;
                              }
                              else
                              {
                                v58 = v76;
                                if ( !v76 )
                                  v56[562] = 0;
                              }
                              ZwClose(v57);
                              if ( !v58 )
                                goto LABEL_140;
                            }
                            v56[562] = 0;
LABEL_140:
                            Initialize();
                            if ( UIPrivelegeIsolation::fEnforce )
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
                            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x44535042u);
                            v60 = PoolWithTag;
                            if ( PoolWithTag )
                            {
                              *PoolWithTag = 0LL;
                              *((_BYTE *)PoolWithTag + 8) = 0;
                              PoolWithTag[2] = -50000000LL;
                              DispBroker::DispBrokerClient::LoadRegistrySettings((DispBroker::DispBrokerClient *)PoolWithTag);
                            }
                            else
                            {
                              v60 = 0LL;
                            }
                            DispBroker::DispBrokerClient::s_pSessionBroker = v60;
                            if ( !v60 )
                            {
                              v8 = -1073741801;
LABEL_156:
                              UserSessionSwitchLeaveCrit(v21, v20);
                              return (unsigned int)v8;
                            }
                            v8 = 0;
                            if ( (int)IsInitRotationManagerSupported() >= 0 )
                            {
                              v8 = InitRotationManager();
                              if ( v8 < 0 )
                                goto LABEL_156;
                            }
                            if ( (int)IsAllocateCvrSupported() < 0 || (unsigned int)AllocateCvr(&gSMWP, 4LL) )
                              goto LABEL_156;
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
          }
          if ( v8 >= 0 )
            v8 = -1073741801;
          goto LABEL_156;
        }
      }
    }
  }
  return result;
}
