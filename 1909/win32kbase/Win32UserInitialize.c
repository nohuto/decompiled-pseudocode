/*
 * XREFs of Win32UserInitialize @ 0x1C0264310
 * Callers:
 *     DriverEntry @ 0x1C0263740 (DriverEntry.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     OpenCacheKeyEx @ 0x1C0015390 (OpenCacheKeyEx.c)
 *     HMUnlockObject @ 0x1C0025870 (HMUnlockObject.c)
 *     IsValidGuiThreadContext @ 0x1C0026550 (IsValidGuiThreadContext.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C00268F0 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026E20 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C002B0B0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     _TlgKeywordOn @ 0x1C0031E60 (_TlgKeywordOn.c)
 *     Initialize @ 0x1C0061B30 (Initialize.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C0061C90 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     UserAddAtomToAtomTableEx @ 0x1C0061DA0 (UserAddAtomToAtomTableEx.c)
 *     IsIMMEnabledSystem @ 0x1C00625D0 (IsIMMEnabledSystem.c)
 *     ?LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ @ 0x1C0063BD0 (-LoadRegistrySettings@DispBrokerClient@DispBroker@@QEAAXXZ.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     ApiSetEditionBaseDriverEntryInitialize @ 0x1C00A81B8 (ApiSetEditionBaseDriverEntryInitialize.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     InitCreateSharedSection @ 0x1C026356C (InitCreateSharedSection.c)
 *     InitKernelHandleTable @ 0x1C02636C4 (InitKernelHandleTable.c)
 *     HMInitHandleTable @ 0x1C02650FC (HMInitHandleTable.c)
 *     InitCreateUserSubsystem @ 0x1C02651A8 (InitCreateUserSubsystem.c)
 *     InitQEntryLookaside @ 0x1C0265748 (InitQEntryLookaside.c)
 *     InitSecurity @ 0x1C0265F28 (InitSecurity.c)
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
  int v32; // ebx
  __int64 v33; // rcx
  void *v34; // rsi
  int v35; // edi
  void *v36; // rsi
  int v37; // edi
  int v38; // eax
  int v39; // r14d
  void *v40; // rsi
  int v41; // edi
  _DWORD *v42; // rdi
  int v43; // r14d
  void *v44; // rsi
  int v45; // ebx
  _DWORD *v46; // rdi
  void *v47; // rsi
  int v48; // ebx
  _DWORD *v49; // rdi
  void *v50; // rsi
  int v51; // ebx
  _DWORD *v52; // rdi
  void *v53; // rsi
  int v54; // ebx
  _DWORD *v55; // rdi
  void *v56; // rsi
  int v57; // ebx
  _QWORD *PoolWithTag; // rax
  void *v59; // rbx
  __int64 v60; // rax
  unsigned int v61; // r9d
  PERESOURCE *DomainLockRef; // rbx
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 *v65; // r14
  __int64 v66; // rax
  PERESOURCE *v67; // rdi
  int v68; // [rsp+38h] [rbp-D0h] BYREF
  int v69; // [rsp+3Ch] [rbp-CCh] BYREF
  int v70; // [rsp+40h] [rbp-C8h] BYREF
  int v71; // [rsp+44h] [rbp-C4h] BYREF
  int v72; // [rsp+48h] [rbp-C0h] BYREF
  int v73; // [rsp+4Ch] [rbp-BCh] BYREF
  int v74; // [rsp+50h] [rbp-B8h] BYREF
  int v75; // [rsp+54h] [rbp-B4h] BYREF
  int v76; // [rsp+58h] [rbp-B0h]
  int v77; // [rsp+5Ch] [rbp-ACh] BYREF
  int v78; // [rsp+60h] [rbp-A8h] BYREF
  int v79; // [rsp+64h] [rbp-A4h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp-A0h] BYREF
  ULONG v81; // [rsp+6Ch] [rbp-9Ch] BYREF
  ULONG v82; // [rsp+70h] [rbp-98h] BYREF
  ULONG v83; // [rsp+74h] [rbp-94h] BYREF
  ULONG v84; // [rsp+78h] [rbp-90h] BYREF
  ULONG v85; // [rsp+7Ch] [rbp-8Ch] BYREF
  ULONG v86; // [rsp+80h] [rbp-88h] BYREF
  ULONG v87; // [rsp+84h] [rbp-84h] BYREF
  _DWORD *v88; // [rsp+88h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+A0h] [rbp-68h] BYREF
  struct _UNICODE_STRING v91; // [rsp+B0h] [rbp-58h] BYREF
  struct _UNICODE_STRING v92; // [rsp+C0h] [rbp-48h] BYREF
  struct _UNICODE_STRING v93; // [rsp+D0h] [rbp-38h] BYREF
  struct _UNICODE_STRING v94; // [rsp+E0h] [rbp-28h] BYREF
  struct _UNICODE_STRING v95; // [rsp+F0h] [rbp-18h] BYREF
  struct _UNICODE_STRING v96; // [rsp+100h] [rbp-8h] BYREF
  __int64 v97; // [rsp+110h] [rbp+8h]
  unsigned __int8 v98; // [rsp+118h] [rbp+10h]
  GUID ActivityId; // [rsp+11Ch] [rbp+14h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+28h] BYREF
  int *v101; // [rsp+150h] [rbp+48h]
  __int64 v102; // [rsp+158h] [rbp+50h]
  EVENT_DATA_DESCRIPTOR v103; // [rsp+160h] [rbp+58h] BYREF
  int *v104; // [rsp+180h] [rbp+78h]
  __int64 v105; // [rsp+188h] [rbp+80h]
  EVENT_DATA_DESCRIPTOR v106; // [rsp+190h] [rbp+88h] BYREF
  int *v107; // [rsp+1B0h] [rbp+A8h]
  __int64 v108; // [rsp+1B8h] [rbp+B0h]
  _BYTE KeyValueInformation[12]; // [rsp+1C0h] [rbp+B8h] BYREF
  int v110; // [rsp+1CCh] [rbp+C4h]
  _BYTE v111[12]; // [rsp+1D8h] [rbp+D0h] BYREF
  int v112; // [rsp+1E4h] [rbp+DCh]
  _BYTE v113[12]; // [rsp+1F0h] [rbp+E8h] BYREF
  int v114; // [rsp+1FCh] [rbp+F4h]
  _BYTE v115[12]; // [rsp+208h] [rbp+100h] BYREF
  int v116; // [rsp+214h] [rbp+10Ch]
  _BYTE v117[12]; // [rsp+220h] [rbp+118h] BYREF
  int v118; // [rsp+22Ch] [rbp+124h]
  _BYTE v119[12]; // [rsp+238h] [rbp+130h] BYREF
  int v120; // [rsp+244h] [rbp+13Ch]
  _BYTE v121[12]; // [rsp+250h] [rbp+148h] BYREF
  int v122; // [rsp+25Ch] [rbp+154h]
  _BYTE v123[12]; // [rsp+268h] [rbp+160h] BYREF
  int v124; // [rsp+274h] [rbp+16Ch]

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
        v76 = result;
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
            v98 = 1;
            v60 = PsGetCurrentThreadWin32Thread(v9);
            v97 = v60;
            if ( v60 && (*(int *)(v60 + 24) > 0 || *(_DWORD *)(v97 + 48)) )
            {
              EtwActivityIdControl(3u, &ActivityId);
              if ( dword_1C020CB50 > 6u )
              {
                if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
                {
                  v77 = v98;
                  v101 = &v77;
                  v102 = 4LL;
                  TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E1517, &ActivityId, 0LL, 3u, &pData);
                }
              }
            }
          }
          else
          {
            v97 = 0LL;
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
            && v97
            && (*(_DWORD *)(v97 + 48) || *(int *)(v97 + 24) > 0) )
          {
            *(_DWORD *)(v97 + 44) = 1;
            *(GUID *)(v97 + 28) = ActivityId;
            if ( dword_1C020CB50 > 6u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v78 = v98;
                v104 = &v78;
                v105 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14C0, &ActivityId, 0LL, 3u, &v103);
                v61 = dword_1C020CB50;
              }
              if ( v61 > 6 && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020CB50, 0x2000uLL) )
              {
                v79 = v98;
                v107 = &v79;
                v108 = 4LL;
                TlgWrite((TraceLoggingHProvider)&dword_1C020CB50, &unk_1C01E14ED, &ActivityId, 0LL, 3u, &v106);
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
            v65 = (__int64 *)gpducstulHead;
            if ( gpducstulHead )
            {
              do
              {
                gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)v65[2];
                v66 = *v65;
                v65[2] = 0LL;
                if ( !*(_DWORD *)(v66 + 8) )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM();
                v67 = (PERESOURCE *)GetDomainLockRef(12LL, v63, v64);
                if ( v67 == (PERESOURCE *)&gDomainDummyLock )
                  MicrosoftTelemetryAssertTriggeredNoArgsKM();
                ExReleaseResourceAndLeaveCriticalRegion(*v67);
                HMUnlockObject(*v65);
                tagDomLock::LockExclusive(v67);
                v65 = (__int64 *)gpducstulHead;
              }
              while ( gpducstulHead );
              v8 = v76;
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
            *(_OWORD *)(ExCompositionObjectType + 76LL) = *(_OWORD *)((char *)&stru_1C01E8A24.Logger + 4);
            *(_DWORD *)(ExCompositionObjectType + 104LL) = 0;
            *(_DWORD *)(ExCompositionObjectType + 92LL) = 983043;
            *(_BYTE *)(ExRawInputManagerObjectType + 66LL) |= 0x10u;
            *(_OWORD *)(ExRawInputManagerObjectType + 76LL) = *(_OWORD *)((char *)&stru_1C01E8A24.Logger + 4);
            *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 904;
            *(_DWORD *)(ExRawInputManagerObjectType + 104LL) = 0;
            *(_DWORD *)(ExRawInputManagerObjectType + 92LL) = 983043;
            CActivationObject::_sLock = 0LL;
            qword_1C0214960 = 0LL;
            CActivationObject::_sHashTable = 0LL;
            qword_1C0214970 = 0LL;
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
                            && (unsigned int)HMInitHandleTable() )
                          {
                            v32 = v76;
                            gSharedInfo = (__int64)gpsi;
                            v33 = *(_QWORD *)gpDispInfo;
                            *(_QWORD *)&DestinationString.Length = 0LL;
                            DestinationString.Buffer = 0LL;
                            v68 = gdwPolicyFlags;
                            qword_1C0210768 = v33;
                            while ( 1 )
                            {
                              v34 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v68);
                              if ( !v34 )
                                break;
                              RtlInitUnicodeString(&DestinationString, L"USERProcessHandleQuota");
                              if ( ZwQueryValueKey(
                                     v34,
                                     &DestinationString,
                                     KeyValuePartialInformation,
                                     KeyValueInformation,
                                     0x14u,
                                     &ResultLength) < 0 )
                              {
                                v35 = v68;
                                if ( !v68 )
                                  v32 = 10000;
                              }
                              else
                              {
                                v32 = v110;
                                v35 = 0;
                                v68 = 0;
                              }
                              ZwClose(v34);
                              if ( !v35 )
                                goto LABEL_71;
                            }
                            v32 = 10000;
LABEL_71:
                            gUserProcessHandleQuota = v32;
                            *(_QWORD *)&ValueName.Length = 0LL;
                            ValueName.Buffer = 0LL;
                            v69 = gdwPolicyFlags;
                            do
                            {
                              v36 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v69);
                              if ( !v36 )
                              {
                                v32 = 10000;
                                goto LABEL_77;
                              }
                              RtlInitUnicodeString(&ValueName, L"USERPostMessageLimit");
                              if ( ZwQueryValueKey(v36, &ValueName, KeyValuePartialInformation, v111, 0x14u, &v81) < 0 )
                              {
                                v37 = v69;
                                if ( !v69 )
                                  v32 = 10000;
                              }
                              else
                              {
                                v32 = v112;
                                v37 = 0;
                                v69 = 0;
                              }
                              ZwClose(v36);
                            }
                            while ( v37 );
                            if ( v32 )
                            {
LABEL_77:
                              v38 = v32;
                              goto LABEL_78;
                            }
                            v38 = -1;
LABEL_78:
                            v39 = gNestedWindowLimit;
                            gUserPostMessageLimit = v38;
                            *(_QWORD *)&v91.Length = 0LL;
                            v91.Buffer = 0LL;
                            v70 = gdwPolicyFlags;
                            while ( 1 )
                            {
                              v40 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v70);
                              if ( !v40 )
                                break;
                              RtlInitUnicodeString(&v91, L"USERNestedWindowLimit");
                              if ( ZwQueryValueKey(v40, &v91, KeyValuePartialInformation, v113, 0x14u, &v82) < 0 )
                              {
                                v41 = v70;
                                if ( !v70 )
                                  v32 = v39;
                              }
                              else
                              {
                                v32 = v114;
                                v41 = 0;
                                v70 = 0;
                              }
                              ZwClose(v40);
                              if ( !v41 )
                                goto LABEL_92;
                            }
                            v32 = v39;
LABEL_92:
                            if ( (unsigned int)(v32 - 50) <= 0x32 )
                              gNestedWindowLimit = v32;
                            if ( (int)IsGetguiKeyboardCorrectionCalloutTimeoutSupported() >= 0 )
                            {
                              GetguiKeyboardCorrectionCalloutTimeout(&v88);
                              v42 = v88;
                              *(_QWORD *)&v92.Length = 0LL;
                              v92.Buffer = 0LL;
                              v43 = *v88;
                              v71 = gdwPolicyFlags;
                              while ( 1 )
                              {
                                v44 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v71);
                                if ( !v44 )
                                  break;
                                RtlInitUnicodeString(&v92, L"USERKCCTimeout");
                                if ( ZwQueryValueKey(v44, &v92, KeyValuePartialInformation, v115, 0x14u, &v83) >= 0 )
                                {
                                  v45 = 0;
                                  v71 = 0;
                                  *v42 = v116;
                                }
                                else
                                {
                                  v45 = v71;
                                  if ( !v71 )
                                    *v42 = v43;
                                }
                                ZwClose(v44);
                                if ( !v45 )
                                  goto LABEL_104;
                              }
                              *v42 = v43;
                            }
LABEL_104:
                            v46 = gpsi;
                            *(_QWORD *)&v93.Length = 0LL;
                            v93.Buffer = 0LL;
                            v72 = gdwPolicyFlags;
                            while ( 1 )
                            {
                              v47 = OpenCacheKeyEx(0LL, 0x28u, 0x20019u, &v72);
                              if ( !v47 )
                                break;
                              RtlInitUnicodeString(&v93, L"Installed");
                              if ( ZwQueryValueKey(v47, &v93, KeyValuePartialInformation, v117, 0x14u, &v84) >= 0 )
                              {
                                v48 = 0;
                                v72 = 0;
                                v46[560] = v118;
                              }
                              else
                              {
                                v48 = v72;
                                if ( !v72 )
                                  v46[560] = 0;
                              }
                              ZwClose(v47);
                              if ( !v48 )
                                goto LABEL_113;
                            }
                            v46[560] = 0;
LABEL_113:
                            v49 = gpsi;
                            *(_QWORD *)&v94.Length = 0LL;
                            v94.Buffer = 0LL;
                            v73 = gdwPolicyFlags;
                            while ( 1 )
                            {
                              v50 = OpenCacheKeyEx(0LL, 0x29u, 0x20019u, &v73);
                              if ( !v50 )
                                break;
                              RtlInitUnicodeString(&v94, L"Installed");
                              if ( ZwQueryValueKey(v50, &v94, KeyValuePartialInformation, v119, 0x14u, &v85) >= 0 )
                              {
                                v51 = 0;
                                v73 = 0;
                                v49[561] = v120;
                              }
                              else
                              {
                                v51 = v73;
                                if ( !v73 )
                                  v49[561] = 0;
                              }
                              ZwClose(v50);
                              if ( !v51 )
                                goto LABEL_122;
                            }
                            v49[561] = 0;
LABEL_122:
                            v52 = gpsi;
                            *(_QWORD *)&v95.Length = 0LL;
                            v95.Buffer = 0LL;
                            v74 = gdwPolicyFlags;
                            while ( 1 )
                            {
                              v53 = OpenCacheKeyEx(0LL, 0x2Du, 0x20019u, &v74);
                              if ( !v53 )
                                break;
                              RtlInitUnicodeString(&v95, L"R2BuildNumber");
                              if ( ZwQueryValueKey(v53, &v95, KeyValuePartialInformation, v121, 0x14u, &v86) >= 0 )
                              {
                                v54 = 0;
                                v74 = 0;
                                v52[563] = v122;
                              }
                              else
                              {
                                v54 = v74;
                                if ( !v74 )
                                  v52[563] = 0;
                              }
                              ZwClose(v53);
                              if ( !v54 )
                                goto LABEL_131;
                            }
                            v52[563] = 0;
LABEL_131:
                            v55 = gpsi;
                            *(_QWORD *)&v96.Length = 0LL;
                            v96.Buffer = 0LL;
                            v75 = gdwPolicyFlags;
                            while ( 1 )
                            {
                              v56 = OpenCacheKeyEx(0LL, 0x2Eu, 0x20019u, &v75);
                              if ( !v56 )
                                break;
                              RtlInitUnicodeString(&v96, L"StarterBuildNumber");
                              if ( ZwQueryValueKey(v56, &v96, KeyValuePartialInformation, v123, 0x14u, &v87) >= 0 )
                              {
                                v57 = 0;
                                v75 = 0;
                                v55[562] = v124;
                              }
                              else
                              {
                                v57 = v75;
                                if ( !v75 )
                                  v55[562] = 0;
                              }
                              ZwClose(v56);
                              if ( !v57 )
                                goto LABEL_140;
                            }
                            v55[562] = 0;
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
                            v59 = PoolWithTag;
                            if ( PoolWithTag )
                            {
                              *PoolWithTag = 0LL;
                              *((_BYTE *)PoolWithTag + 8) = 0;
                              PoolWithTag[2] = -50000000LL;
                              DispBroker::DispBrokerClient::LoadRegistrySettings((DispBroker::DispBrokerClient *)PoolWithTag);
                            }
                            else
                            {
                              v59 = 0LL;
                            }
                            DispBroker::DispBrokerClient::s_pSessionBroker = v59;
                            if ( !v59 )
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
