/*
 * XREFs of SmpLoadDataFromRegistry @ 0x140008D5C
 * Callers:
 *     SmpInit @ 0x1400061AC (SmpInit.c)
 * Callees:
 *     SmpExecuteCommand @ 0x1400017F4 (SmpExecuteCommand.c)
 *     RtlStringCbPrintfW @ 0x140004FB0 (RtlStringCbPrintfW.c)
 *     SmpFreeSavedRegistryEntry @ 0x1400050A0 (SmpFreeSavedRegistryEntry.c)
 *     SmpTranslateSystemPartitionInformation @ 0x140006A80 (SmpTranslateSystemPartitionInformation.c)
 *     SmpConfigureSharedSessionData @ 0x140007608 (SmpConfigureSharedSessionData.c)
 *     SmpInitializeKnownDlls @ 0x1400082A0 (SmpInitializeKnownDlls.c)
 *     SmpInitializeSessionManagement @ 0x14000856C (SmpInitializeSessionManagement.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x140008788 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpProcessFileRenames @ 0x140008BE8 (SmpProcessFileRenames.c)
 *     SmpNtSerializeBoot @ 0x140008D24 (SmpNtSerializeBoot.c)
 *     SmpEventWrite @ 0x1400095B4 (SmpEventWrite.c)
 *     SmpInitializeDosDevices @ 0x14000A00C (SmpInitializeDosDevices.c)
 *     SmpGetPlatformBinary @ 0x14000BC44 (SmpGetPlatformBinary.c)
 *     SmpCreateProtectedPrefixes @ 0x14000BCCC (SmpCreateProtectedPrefixes.c)
 *     SmpFinalizePathStrings @ 0x14000C71C (SmpFinalizePathStrings.c)
 *     SmpReadSafeBootOption @ 0x14000CC74 (SmpReadSafeBootOption.c)
 *     __security_check_cookie @ 0x14000CE00 (__security_check_cookie.c)
 *     SmpInitializeKnownDllsAsync @ 0x14000D248 (SmpInitializeKnownDllsAsync.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x14000D3A4 (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpPlatformBinaryTableExists @ 0x140012FA0 (SmpPlatformBinaryTableExists.c)
 *     SmpSendPlatformBinaryStatus @ 0x1400130E8 (SmpSendPlatformBinaryStatus.c)
 */

NTSTATUS __fastcall SmpLoadDataFromRegistry(HANDLE EventHandle)
{
  __int64 v2; // r12
  __int64 NtSystemRoot; // rax
  NTSTATUS result; // eax
  __int64 v5; // rax
  int v6; // ecx
  int v7; // eax
  __int64 v8; // r14
  int v9; // esi
  int PlatformBinary; // eax
  const UNICODE_STRING *v11; // rbx
  __int64 v12; // r8
  __int64 *v13; // rbx
  __int64 *v14; // rdi
  __int64 v15; // r8
  __int64 *v16; // rdi
  __int64 *v17; // rbx
  __int64 v18; // r8
  __int64 *v19; // rdi
  __int64 *v20; // rbx
  int v21; // eax
  int v22; // eax
  __int64 v23; // r8
  unsigned int v24; // ebx
  int v25; // eax
  __int64 v26; // r8
  BOOL v27; // ebx
  NTSTATUS DynamicEnvironmentVariables; // ebx
  __int64 v29; // r8
  __int64 *v30; // rdi
  __int64 *v31; // rbx
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-B0h] BYREF
  PWSTR OldEnvironment; // [rsp+88h] [rbp-80h] BYREF
  __int64 v38; // [rsp+90h] [rbp-78h] BYREF
  __int64 v39; // [rsp+98h] [rbp-70h] BYREF
  int v40; // [rsp+A0h] [rbp-68h] BYREF
  const wchar_t *v41; // [rsp+A8h] [rbp-60h]
  int v42; // [rsp+B0h] [rbp-58h] BYREF
  const wchar_t *v43; // [rsp+B8h] [rbp-50h]
  struct _UNICODE_STRING ValueName; // [rsp+C0h] [rbp-48h] BYREF
  int v45; // [rsp+D0h] [rbp-38h] BYREF
  const wchar_t *v46; // [rsp+D8h] [rbp-30h]
  struct _UNICODE_STRING Destination; // [rsp+E0h] [rbp-28h] BYREF
  char v48; // [rsp+F8h] [rbp-10h] BYREF
  HANDLE Object; // [rsp+100h] [rbp-8h]
  HANDLE ThreadHandle; // [rsp+108h] [rbp+0h]
  char v51; // [rsp+14Eh] [rbp+46h]
  wchar_t pszDest[256]; // [rsp+168h] [rbp+60h] BYREF

  v40 = 7602290;
  v41 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT";
  v45 = 1310738;
  v46 = L"\\Sessions";
  v42 = 10354844;
  v43 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Environment";
  v2 = 0LL;
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"NUMBER_OF_PROCESSORS";
  qword_1400221E8 = (__int64)&SmpBootExecuteList;
  SmpBootExecuteList = (__int64)&SmpBootExecuteList;
  qword_1400221F8 = (__int64)&SmpBootExecuteNoPnpSyncList;
  SmpBootExecuteNoPnpSyncList = (__int64)&SmpBootExecuteNoPnpSyncList;
  qword_140022208 = (__int64)&SmpPlatformExecuteList;
  SmpPlatformExecuteList = (__int64)&SmpPlatformExecuteList;
  qword_140022218 = (__int64)&SmpSetupExecuteList;
  SmpSetupExecuteList = (__int64)&SmpSetupExecuteList;
  qword_140022328 = (__int64)&SmpPagingFileList;
  SmpPagingFileList = &SmpPagingFileList;
  qword_140022228 = (__int64)&SmpDosDevicesList;
  SmpDosDevicesList = &SmpDosDevicesList;
  qword_140022238 = (__int64)&SmpFileRenameList;
  SmpFileRenameList = &SmpFileRenameList;
  qword_140022248 = (__int64)&SmpKnownDllsList;
  SmpKnownDllsList = &SmpKnownDllsList;
  qword_140022258 = (__int64)&SmpExcludeKnownDllsList;
  SmpExcludeKnownDllsList = &SmpExcludeKnownDllsList;
  qword_140022268 = (__int64)&SmpSubSystemsRequired;
  SmpSubSystemsRequired = (__int64)&SmpSubSystemsRequired;
  qword_140022278 = (__int64)&SmpSubSystemsToDefer;
  SmpSubSystemsToDefer = (__int64)&SmpSubSystemsToDefer;
  qword_140022318 = (__int64)&SmpExistingPageFilesList;
  SmpExistingPageFilesList = &SmpExistingPageFilesList;
  SmpClearTempFiles = 0;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlStringCbPrintfW(SmpTempDirNameBuffer, 0x20AuLL, L"\\??\\%s", NtSystemRoot);
  RtlInitUnicodeString(&SmpTempFilesDir, SmpTempDirNameBuffer);
  result = RtlCreateEnvironment(1u, &SmpDefaultEnvironment);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v40;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      NtClose(KeyHandle);
      SmpMiniNTBoot = 1;
    }
    SmpReadSafeBootOption();
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v42;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      NtDeleteValueKey(KeyHandle, (PUNICODE_STRING)&SmpSafeBootEnvironmentValue);
      RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", (unsigned int)byte_1400222F8);
      v5 = -1LL;
      do
        ++v5;
      while ( pszDest[v5] );
      result = NtSetValueKey(KeyHandle, &ValueName, 0, 1u, pszDest, 2 * v5 + 2);
      if ( result >= 0 )
      {
        RtlSetCurrentEnvironment(SmpDefaultEnvironment, &OldEnvironment);
        result = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &SmpRegistryConfigurationTable, 0LL, 0LL);
        if ( result >= 0 )
        {
          result = SmpFinalizePathStrings();
          if ( result >= 0 )
          {
            if ( !SmpBackgroundLoadKnownDlls )
              goto LABEL_14;
            v6 = SmpInitializeKnownDllsAsync();
            v7 = SmpBackgroundLoadKnownDlls;
            if ( v6 < 0 )
              v7 = 0;
            SmpBackgroundLoadKnownDlls = v7;
            if ( !v7 )
LABEL_14:
              v6 = SmpInitializeKnownDlls();
            if ( v6 >= 0 )
            {
              result = SmpInitializeSessionManagement();
              if ( result >= 0 )
              {
                RtlSetCurrentEnvironment(OldEnvironment, &SmpDefaultEnvironment);
                result = SmpInitializeDosDevices();
                if ( result >= 0 )
                {
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v45;
                  ObjectAttributes.SecurityDescriptor = SmpPrimarySecurityDescriptor;
                  ObjectAttributes.RootDirectory = 0LL;
                  ObjectAttributes.Attributes = 208;
                  ObjectAttributes.SecurityQualityOfService = 0LL;
                  result = NtCreateDirectoryObject(&SmpSessionsObjectDirectory, 0xF000Fu, &ObjectAttributes);
                  if ( result >= 0 )
                  {
                    result = SmpCreateProtectedPrefixes();
                    if ( result >= 0 )
                    {
                      v8 = 0LL;
                      v35 = 0LL;
                      if ( SmpHostSmss )
                      {
                        if ( SmpMiniNTBoot || SmpSafeBootOption != -1 || SmpDisableWpbtExecution )
                        {
                          v9 = -1073741823;
                          if ( (unsigned __int8)SmpPlatformBinaryTableExists() )
                            SmpSendPlatformBinaryStatus(2LL, 0LL, 0LL, 0LL);
                        }
                        else
                        {
                          PlatformBinary = SmpGetPlatformBinary(&Destination);
                          v8 = v35;
                          v9 = PlatformBinary;
                        }
                      }
                      else
                      {
                        v9 = -1073741823;
                      }
                      if ( (__int64 *)SmpBootExecuteList != &SmpBootExecuteList
                        && (*(__int64 **)SmpBootExecuteList != &SmpBootExecuteList
                         || (v11 = (const UNICODE_STRING *)(SmpBootExecuteList + 16),
                             !RtlEqualUnicodeString(
                                (PCUNICODE_STRING)(SmpBootExecuteList + 16),
                                &SmpAutoChkDefaultCommand,
                                0))
                         && (!SmpSoftBoot || !RtlPrefixUnicodeString(&SmpAutoChkKeyword, v11, 1u)))
                        || (__int64 *)SmpSetupExecuteList != &SmpSetupExecuteList
                        || v9 >= 0 )
                      {
                        SmpNtSerializeBoot();
                      }
                      SmpEventWrite(&SmssEvt_PlatformExecuteList_Start);
                      v13 = (__int64 *)SmpPlatformExecuteList;
                      while ( v13 != &SmpPlatformExecuteList )
                      {
                        v14 = v13;
                        if ( SmpHostSmss )
                          SmpExecuteCommand((__int64)(v13 + 2), 0, v12, 0, 0LL);
                        v13 = (__int64 *)*v13;
                        SmpFreeSavedRegistryEntry(v14);
                      }
                      SmpEventWrite(&SmssEvt_PlatformExecuteList_Stop);
                      SmpEventWrite(&SmssEvt_BootExecuteList_Start);
                      v16 = (__int64 *)SmpBootExecuteList;
                      if ( (__int64 *)SmpBootExecuteList != &SmpBootExecuteList )
                      {
                        do
                        {
                          v17 = v16;
                          SmpExecuteCommand((__int64)(v16 + 2), 0, v15, 0, 0LL);
                          v16 = (__int64 *)*v16;
                          SmpFreeSavedRegistryEntry(v17);
                        }
                        while ( v16 != &SmpBootExecuteList );
                        v2 = 0LL;
                      }
                      SmpEventWrite(&SmssEvt_BootExecuteList_Stop);
                      SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Start);
                      v19 = (__int64 *)SmpBootExecuteNoPnpSyncList;
                      if ( (__int64 *)SmpBootExecuteNoPnpSyncList != &SmpBootExecuteNoPnpSyncList )
                      {
                        do
                        {
                          v20 = v19;
                          SmpExecuteCommand((__int64)(v19 + 2), 0, v18, 0, 0LL);
                          v19 = (__int64 *)*v19;
                          SmpFreeSavedRegistryEntry(v20);
                        }
                        while ( v19 != &SmpBootExecuteNoPnpSyncList );
                        v8 = v35;
                      }
                      SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Stop);
                      if ( EventHandle )
                        NtSetEvent(EventHandle, 0LL);
                      SmpEventWrite(&SmssEvt_InitializeRegistry_Start);
                      if ( SmpSoftBootSystemHiveReady )
                        SmpReplaceSystemHiveOnSoftReboot();
                      NtInitializeRegistry(0);
                      SmpEventWrite(&SmssEvt_InitializeRegistry_Stop);
                      if ( v9 >= 0 )
                      {
                        v21 = RtlQueryPerformanceFrequency(&v32);
                        v32 &= -(__int64)(v21 != 0);
                        v22 = RtlQueryPerformanceCounter(&v39);
                        v32 &= -(__int64)(v22 != 0);
                        if ( (int)SmpExecuteCommand(
                                    (__int64)&Destination,
                                    0,
                                    v23,
                                    32,
                                    (PRTL_USER_PROCESS_PARAMETERS)&v48) < 0 )
                        {
                          v24 = 1;
                        }
                        else
                        {
                          if ( v51 >= 0 )
                          {
                            v24 = 3;
                            NtTerminateProcess(Object, -1073740760);
                          }
                          else
                          {
                            v24 = 0;
                            NtResumeThread(ThreadHandle, 0LL);
                            NtWaitForSingleObject(Object, 0, 0LL);
                          }
                          NtClose(Object);
                          NtClose(ThreadHandle);
                        }
                        v25 = RtlQueryPerformanceCounter(&v38);
                        v26 = v32 & -(__int64)(v25 != 0);
                        v32 = v26;
                        if ( v26 > 0 )
                          v2 = 1000 * (v38 - v39) / v26;
                        SmpSendPlatformBinaryStatus(v24, v8, v2, &Destination);
                        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Destination.Buffer);
                      }
                      v27 = 0;
                      if ( (unsigned __int8)RtlIsStateSeparationEnabled() )
                        v27 = (int)RtlQueryRegistryValuesEx(
                                     0LL,
                                     L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager",
                                     &SmpRegistryConfigurationTable2,
                                     0LL,
                                     0LL) >= 0;
                      if ( !SmpMiniNTBoot )
                        SmpProcessFileRenames(v27);
                      v34 = 0LL;
                      result = TpAllocWork(&v34, SmpAsyncMemoryConfiguration, 0LL, &SmpCallbackEnviron);
                      if ( result >= 0 )
                      {
                        TpPostWork(v34);
                        if ( SmpWaitForPagingFiles )
                          TpWaitForWork(v34, 0LL);
                        TpReleaseWork(v34);
                        DynamicEnvironmentVariables = SmpCreateDynamicEnvironmentVariables(KeyHandle);
                        NtClose(KeyHandle);
                        if ( DynamicEnvironmentVariables >= 0 )
                        {
                          SmpEventWrite(&SmssEvt_SetupExecuteList_Start);
                          v30 = (__int64 *)SmpSetupExecuteList;
                          while ( v30 != &SmpSetupExecuteList )
                          {
                            v31 = v30;
                            SmpExecuteCommand((__int64)(v30 + 2), 0, v29, 0, 0LL);
                            v30 = (__int64 *)*v30;
                            SmpFreeSavedRegistryEntry(v31);
                          }
                          SmpEventWrite(&SmssEvt_SetupExecuteList_Stop);
                          result = SmpConfigureSharedSessionData();
                          if ( result >= 0 )
                          {
                            SmpTranslateSystemPartitionInformation();
                            return 0;
                          }
                        }
                        else
                        {
                          return DynamicEnvironmentVariables;
                        }
                      }
                    }
                  }
                }
              }
            }
            else
            {
              return v6;
            }
          }
        }
      }
    }
  }
  return result;
}
