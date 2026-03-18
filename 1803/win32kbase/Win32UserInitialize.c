/*
 * XREFs of Win32UserInitialize @ 0x1C01F2A58
 * Callers:
 *     DriverEntry @ 0x1C01F1490 (DriverEntry.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     OpenCacheKeyEx @ 0x1C003C8E0 (OpenCacheKeyEx.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     UserAddAtomToAtomTableEx @ 0x1C005FFD0 (UserAddAtomToAtomTableEx.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?Init@DispBrokerClient@DispBroker@@SAJXZ @ 0x1C00A0618 (-Init@DispBrokerClient@DispBroker@@SAJXZ.c)
 *     ?InitUIPI@@YAXXZ @ 0x1C00B1C50 (-InitUIPI@@YAXXZ.c)
 *     ?IsDesktopHeapLoggingOn@@YAHXZ @ 0x1C00B1E28 (-IsDesktopHeapLoggingOn@@YAHXZ.c)
 *     IsIMMEnabledSystem @ 0x1C00B2B10 (IsIMMEnabledSystem.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     InitSecurity @ 0x1C01F1218 (InitSecurity.c)
 *     InitQEntryLookaside @ 0x1C01F1424 (InitQEntryLookaside.c)
 *     HMInitHandleTable @ 0x1C01F218C (HMInitHandleTable.c)
 *     InitCreateSharedSection @ 0x1C01F22B0 (InitCreateSharedSection.c)
 *     InitCreateUserSubsystem @ 0x1C01F2710 (InitCreateUserSubsystem.c)
 *     InitKernelHandleTable @ 0x1C01F29D0 (InitKernelHandleTable.c)
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
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int v10; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  __int64 v14; // rcx
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 *i; // rsi
  __int64 v21; // rax
  __int64 *DomainLockRef; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int inited; // edi
  int AtomTable; // eax
  int v27; // edi
  int v28; // eax
  unsigned int v29; // edx
  __int64 v30; // rcx
  unsigned int v31; // r8d
  __int64 v32; // r9
  _DWORD *v33; // rax
  _QWORD *v34; // rax
  __int64 v35; // rcx
  int Buffer_high; // ebx
  void *v37; // rsi
  int v38; // edi
  void *v39; // rsi
  int v40; // edi
  int v41; // eax
  int v42; // r14d
  void *v43; // rsi
  int v44; // edi
  _DWORD *v45; // rdi
  int v46; // r14d
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
  _DWORD *v58; // rdi
  void *v59; // rsi
  int v60; // ebx
  int v61; // [rsp+30h] [rbp-19h] BYREF
  ULONG ResultLength[2]; // [rsp+38h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  struct _UNICODE_STRING KeyValueInformation; // [rsp+50h] [rbp+7h] BYREF
  _BYTE v65[12]; // [rsp+68h] [rbp+1Fh] BYREF
  int v66; // [rsp+74h] [rbp+2Bh]

  if ( (int)IsValidatetagWNDLayoutSupported() < 0 || (result = ValidatetagWNDLayout(), (int)result >= 0) )
  {
    result = InitCreateSharedSection(v1, v0, v2);
    if ( (int)result >= 0 )
    {
      result = InitKernelHandleTable(v5, v4, v6);
      v10 = result;
      if ( (int)result >= 0 )
      {
        CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, v7, v9);
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v12 = 0LL;
        while ( 1 )
        {
          v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v13 )
            v12 = *v13;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v14);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v17) == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v12 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        EtwTraceAcquiredExclusiveUserCrit(v17, v16, v18);
        gptiCurrent = v12;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)ResultLength);
        for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
        {
          gpducstulHead = i[2];
          v21 = *i;
          i[2] = 0LL;
          if ( !*(_DWORD *)(v21 + 8) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          DomainLockRef = GetDomainLockRef(8LL, v19);
          if ( DomainLockRef == &gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          tagObjLock::UnLock((tagObjLock *)DomainLockRef);
          HMUnlockObject(*i);
          tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v23);
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
          *(_DWORD *)(ExRawInputManagerObjectType + 108LL) = 912;
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
          v27 = AtomTable | inited;
          if ( UserLibmgmtAtomTableHandle )
            v28 = 0;
          else
            v28 = RtlCreateAtomTableEx(37LL, 1LL, &UserLibmgmtAtomTableHandle);
          v10 = v28 | v27;
          if ( v10 < 0 )
            goto LABEL_164;
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
                v29 = 2;
                v30 = 2524LL;
                do
                {
                  v31 = 0;
                  v32 = v30;
                  do
                  {
                    v32 += 4LL;
                    ++v31;
                    *(_DWORD *)((char *)gpsi + v32 - 4) = -1;
                  }
                  while ( v31 < 0x1E );
                  ++v29;
                  v30 += 120LL;
                }
                while ( v29 < 0x12 );
                v33 = gpsi;
                *((_DWORD *)gpsi + 1282) = 8;
                v33[1283] = 16;
                gpDispInfo = (__int64)Win32AllocPoolZInit(0xA8uLL, 0x70646B55u);
                if ( gpDispInfo )
                {
                  *(_QWORD *)gpDispInfo = RtlAllocateHeap(gpvSharedAlloc, 0, 0x28uLL);
                  if ( *(_QWORD *)gpDispInfo )
                  {
                    if ( (unsigned int)IsDesktopHeapLoggingOn() )
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
                    if ( (unsigned __int16)(NlsAnsiCodePage - 1255) > 1u )
                      *(_DWORD *)gpsi &= ~8u;
                    else
                      *(_DWORD *)gpsi |= 8u;
                    *((_DWORD *)gpsi + 231) = gdwDesktopSectionSize << 10;
                    v34 = Win32AllocPoolZInit(0x100uLL, 0x646B7355u);
                    gpkdiStatic = (__int64)v34;
                    if ( v34 )
                    {
                      *v34 = &diStatic;
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
                        v35 = *(_QWORD *)gpDispInfo;
                        v61 = gdwPolicyFlags;
                        Buffer_high = gdwPolicyFlags;
                        qword_1C01A0E38 = v35;
                        while ( 1 )
                        {
                          v37 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v61);
                          if ( !v37 )
                            break;
                          RtlInitUnicodeString(&DestinationString, L"USERProcessHandleQuota");
                          if ( ZwQueryValueKey(
                                 v37,
                                 &DestinationString,
                                 KeyValuePartialInformation,
                                 &KeyValueInformation,
                                 0x14u,
                                 ResultLength) < 0 )
                          {
                            v38 = v61;
                            if ( !v61 )
                              Buffer_high = 10000;
                          }
                          else
                          {
                            Buffer_high = HIDWORD(KeyValueInformation.Buffer);
                            v38 = 0;
                            v61 = 0;
                          }
                          ZwClose(v37);
                          if ( !v38 )
                            goto LABEL_80;
                        }
                        Buffer_high = 10000;
LABEL_80:
                        v61 = gdwPolicyFlags;
                        gUserProcessHandleQuota = Buffer_high;
                        do
                        {
                          v39 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v61);
                          if ( !v39 )
                          {
                            Buffer_high = 10000;
                            goto LABEL_90;
                          }
                          RtlInitUnicodeString(&DestinationString, L"USERPostMessageLimit");
                          if ( ZwQueryValueKey(
                                 v39,
                                 &DestinationString,
                                 KeyValuePartialInformation,
                                 &KeyValueInformation,
                                 0x14u,
                                 ResultLength) < 0 )
                          {
                            v40 = v61;
                            if ( !v61 )
                              Buffer_high = 10000;
                          }
                          else
                          {
                            Buffer_high = HIDWORD(KeyValueInformation.Buffer);
                            v40 = 0;
                            v61 = 0;
                          }
                          ZwClose(v39);
                        }
                        while ( v40 );
                        if ( !Buffer_high )
                        {
                          v41 = -1;
                          goto LABEL_91;
                        }
LABEL_90:
                        v41 = Buffer_high;
LABEL_91:
                        v42 = gNestedWindowLimit;
                        gUserPostMessageLimit = v41;
                        v61 = gdwPolicyFlags;
                        while ( 1 )
                        {
                          v43 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v61);
                          if ( !v43 )
                            break;
                          RtlInitUnicodeString(&DestinationString, L"USERNestedWindowLimit");
                          if ( ZwQueryValueKey(
                                 v43,
                                 &DestinationString,
                                 KeyValuePartialInformation,
                                 &KeyValueInformation,
                                 0x14u,
                                 ResultLength) < 0 )
                          {
                            v44 = v61;
                            if ( !v61 )
                              Buffer_high = v42;
                          }
                          else
                          {
                            Buffer_high = HIDWORD(KeyValueInformation.Buffer);
                            v44 = 0;
                            v61 = 0;
                          }
                          ZwClose(v43);
                          if ( !v44 )
                            goto LABEL_100;
                        }
                        Buffer_high = v42;
LABEL_100:
                        if ( (unsigned int)(Buffer_high - 50) <= 0x32 )
                          gNestedWindowLimit = Buffer_high;
                        if ( (int)IsGetguiKeyboardCorrectionCalloutTimeoutSupported() >= 0 )
                        {
                          GetguiKeyboardCorrectionCalloutTimeout(&DestinationString);
                          v45 = *(_DWORD **)&DestinationString.Length;
                          v61 = gdwPolicyFlags;
                          v46 = **(_DWORD **)&DestinationString.Length;
                          while ( 1 )
                          {
                            v47 = OpenCacheKeyEx(0LL, 2u, 0x20019u, &v61);
                            if ( !v47 )
                              break;
                            RtlInitUnicodeString(&KeyValueInformation, L"USERKCCTimeout");
                            if ( ZwQueryValueKey(
                                   v47,
                                   &KeyValueInformation,
                                   KeyValuePartialInformation,
                                   v65,
                                   0x14u,
                                   ResultLength) < 0 )
                            {
                              v48 = v61;
                              if ( !v61 )
                                *v45 = v46;
                            }
                            else
                            {
                              v48 = 0;
                              v61 = 0;
                              *v45 = v66;
                            }
                            ZwClose(v47);
                            if ( !v48 )
                              goto LABEL_112;
                          }
                          *v45 = v46;
                        }
LABEL_112:
                        v49 = gpsi;
                        v61 = gdwPolicyFlags;
                        while ( 1 )
                        {
                          v50 = OpenCacheKeyEx(0LL, 0x28u, 0x20019u, &v61);
                          if ( !v50 )
                            break;
                          RtlInitUnicodeString(&KeyValueInformation, L"Installed");
                          if ( ZwQueryValueKey(
                                 v50,
                                 &KeyValueInformation,
                                 KeyValuePartialInformation,
                                 v65,
                                 0x14u,
                                 ResultLength) < 0 )
                          {
                            v51 = v61;
                            if ( !v61 )
                              v49[560] = 0;
                          }
                          else
                          {
                            v51 = 0;
                            v61 = 0;
                            v49[560] = v66;
                          }
                          ZwClose(v50);
                          if ( !v51 )
                            goto LABEL_121;
                        }
                        v49[560] = 0;
LABEL_121:
                        v52 = gpsi;
                        v61 = gdwPolicyFlags;
                        while ( 1 )
                        {
                          v53 = OpenCacheKeyEx(0LL, 0x29u, 0x20019u, &v61);
                          if ( !v53 )
                            break;
                          RtlInitUnicodeString(&KeyValueInformation, L"Installed");
                          if ( ZwQueryValueKey(
                                 v53,
                                 &KeyValueInformation,
                                 KeyValuePartialInformation,
                                 v65,
                                 0x14u,
                                 ResultLength) < 0 )
                          {
                            v54 = v61;
                            if ( !v61 )
                              v52[561] = 0;
                          }
                          else
                          {
                            v54 = 0;
                            v61 = 0;
                            v52[561] = v66;
                          }
                          ZwClose(v53);
                          if ( !v54 )
                            goto LABEL_130;
                        }
                        v52[561] = 0;
LABEL_130:
                        v55 = gpsi;
                        v61 = gdwPolicyFlags;
                        while ( 1 )
                        {
                          v56 = OpenCacheKeyEx(0LL, 0x2Du, 0x20019u, &v61);
                          if ( !v56 )
                            break;
                          RtlInitUnicodeString(&KeyValueInformation, L"R2BuildNumber");
                          if ( ZwQueryValueKey(
                                 v56,
                                 &KeyValueInformation,
                                 KeyValuePartialInformation,
                                 v65,
                                 0x14u,
                                 ResultLength) < 0 )
                          {
                            v57 = v61;
                            if ( !v61 )
                              v55[563] = 0;
                          }
                          else
                          {
                            v57 = 0;
                            v61 = 0;
                            v55[563] = v66;
                          }
                          ZwClose(v56);
                          if ( !v57 )
                            goto LABEL_139;
                        }
                        v55[563] = 0;
LABEL_139:
                        v58 = gpsi;
                        v61 = gdwPolicyFlags;
                        while ( 1 )
                        {
                          v59 = OpenCacheKeyEx(0LL, 0x2Eu, 0x20019u, &v61);
                          if ( !v59 )
                            break;
                          RtlInitUnicodeString(&KeyValueInformation, L"StarterBuildNumber");
                          if ( ZwQueryValueKey(
                                 v59,
                                 &KeyValueInformation,
                                 KeyValuePartialInformation,
                                 v65,
                                 0x14u,
                                 ResultLength) < 0 )
                          {
                            v60 = v61;
                            if ( !v61 )
                              v58[562] = 0;
                          }
                          else
                          {
                            v60 = 0;
                            v61 = 0;
                            v58[562] = v66;
                          }
                          ZwClose(v59);
                          if ( !v60 )
                            goto LABEL_148;
                        }
                        v58[562] = 0;
LABEL_148:
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
                        v10 = DispBroker::DispBrokerClient::Init();
                        if ( v10 < 0 )
                          goto LABEL_164;
                        if ( (int)IsInitRotationManagerSupported() >= 0 )
                        {
                          v10 = InitRotationManager();
                          if ( v10 < 0 )
                            goto LABEL_164;
                        }
                        if ( (int)IsAllocateCvrSupported() < 0 || (unsigned int)AllocateCvr(&gSMWP, 4LL) )
                          goto LABEL_164;
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
        if ( v10 >= 0 )
          v10 = -1073741801;
LABEL_164:
        UserSessionSwitchLeaveCrit(v24);
        return (unsigned int)v10;
      }
    }
  }
  return result;
}
