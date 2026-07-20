/*
 * XREFs of SmpLoadDataFromRegistry @ 0x140009F38
 * Callers:
 *     SmpInit @ 0x14000619C (SmpInit.c)
 * Callees:
 *     SmpExecuteCommand @ 0x1400017E8 (SmpExecuteCommand.c)
 *     RtlStringCbPrintfW @ 0x140004FA0 (RtlStringCbPrintfW.c)
 *     SmpFreeSavedRegistryEntry @ 0x140005090 (SmpFreeSavedRegistryEntry.c)
 *     SmpTranslateSystemPartitionInformation @ 0x140006A90 (SmpTranslateSystemPartitionInformation.c)
 *     SmpConfigureSharedSessionData @ 0x140007620 (SmpConfigureSharedSessionData.c)
 *     SmpInitializeKnownDlls @ 0x1400082D0 (SmpInitializeKnownDlls.c)
 *     SmpInitializeSessionManagement @ 0x14000859C (SmpInitializeSessionManagement.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x1400087B8 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpInitializeDosDevices @ 0x14000962C (SmpInitializeDosDevices.c)
 *     SmpProcessFileRenames @ 0x140009934 (SmpProcessFileRenames.c)
 *     SmpNtSerializeBoot @ 0x140009F00 (SmpNtSerializeBoot.c)
 *     SmpEventWrite @ 0x14000A740 (SmpEventWrite.c)
 *     SmpGetPlatformBinary @ 0x14000C0BC (SmpGetPlatformBinary.c)
 *     SmpCreateProtectedPrefixes @ 0x14000C144 (SmpCreateProtectedPrefixes.c)
 *     SmpFinalizePathStrings @ 0x14000CB94 (SmpFinalizePathStrings.c)
 *     SmpReadSafeBootOption @ 0x14000CC6C (SmpReadSafeBootOption.c)
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     SmpInitializeKnownDllsAsync @ 0x14000DC70 (SmpInitializeKnownDllsAsync.c)
 *     SmpPlatformBinaryTableExists @ 0x140015AB8 (SmpPlatformBinaryTableExists.c)
 *     SmpSendPlatformBinaryStatus @ 0x140015C4C (SmpSendPlatformBinaryStatus.c)
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
  __int64 *v11; // rdi
  __int64 v12; // r8
  __int64 *v13; // rbx
  __int64 v14; // r8
  __int64 *v15; // rdi
  __int64 *v16; // rbx
  __int64 v17; // r8
  __int64 *v18; // rbx
  __int64 *v19; // rdi
  int v20; // eax
  int v21; // eax
  __int64 v22; // r8
  unsigned int v23; // ebx
  int v24; // eax
  __int64 v25; // r8
  BOOL v26; // ebx
  NTSTATUS DynamicEnvironmentVariables; // ebx
  __int64 v28; // r8
  __int64 *v29; // rdi
  __int64 *v30; // rbx
  __int64 v31; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B8h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-B0h] BYREF
  PWSTR OldEnvironment; // [rsp+88h] [rbp-80h] BYREF
  __int64 v37; // [rsp+90h] [rbp-78h] BYREF
  __int64 v38; // [rsp+98h] [rbp-70h] BYREF
  int v39; // [rsp+A0h] [rbp-68h] BYREF
  const wchar_t *v40; // [rsp+A8h] [rbp-60h]
  int v41; // [rsp+B0h] [rbp-58h] BYREF
  const wchar_t *v42; // [rsp+B8h] [rbp-50h]
  struct _UNICODE_STRING ValueName; // [rsp+C0h] [rbp-48h] BYREF
  int v44; // [rsp+D0h] [rbp-38h] BYREF
  const wchar_t *v45; // [rsp+D8h] [rbp-30h]
  struct _UNICODE_STRING Destination; // [rsp+E0h] [rbp-28h] BYREF
  char v47; // [rsp+F8h] [rbp-10h] BYREF
  HANDLE Object; // [rsp+100h] [rbp-8h]
  HANDLE ThreadHandle; // [rsp+108h] [rbp+0h]
  char v50; // [rsp+14Eh] [rbp+46h]
  wchar_t pszDest[256]; // [rsp+168h] [rbp+60h] BYREF

  v39 = 7602290;
  v40 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT";
  v44 = 1310738;
  v45 = L"\\Sessions";
  v41 = 10354844;
  v42 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Environment";
  *(_DWORD *)&ValueName.Length = 2752552;
  ValueName.Buffer = L"NUMBER_OF_PROCESSORS";
  v2 = 0LL;
  qword_140025AC8 = (__int64)&SmpBootExecuteList;
  qword_140025AD8 = (__int64)&SmpBootExecuteNoPnpSyncList;
  SmpBootExecuteNoPnpSyncList = (__int64)&SmpBootExecuteNoPnpSyncList;
  qword_140025AE8 = (__int64)&SmpPlatformExecuteList;
  SmpPlatformExecuteList = (__int64)&SmpPlatformExecuteList;
  qword_140025AF8 = (__int64)&SmpSetupExecuteList;
  SmpSetupExecuteList = (__int64)&SmpSetupExecuteList;
  qword_140025C08 = (__int64)&SmpPagingFileList;
  SmpPagingFileList = &SmpPagingFileList;
  qword_140025B08 = (__int64)&SmpDosDevicesList;
  SmpDosDevicesList = &SmpDosDevicesList;
  qword_140025B18 = (__int64)&SmpFileRenameList;
  SmpFileRenameList = &SmpFileRenameList;
  qword_140025B28 = (__int64)&SmpKnownDllsList;
  SmpKnownDllsList = &SmpKnownDllsList;
  qword_140025B38 = (__int64)&SmpExcludeKnownDllsList;
  SmpExcludeKnownDllsList = &SmpExcludeKnownDllsList;
  qword_140025B48 = (__int64)&SmpSubSystemsRequired;
  SmpSubSystemsRequired = (__int64)&SmpSubSystemsRequired;
  qword_140025B58 = (__int64)&SmpSubSystemsToDefer;
  SmpSubSystemsToDefer = (__int64)&SmpSubSystemsToDefer;
  qword_140025BF8 = (__int64)&SmpExistingPageFilesList;
  SmpExistingPageFilesList = &SmpExistingPageFilesList;
  SmpBootExecuteList = (__int64)&SmpBootExecuteList;
  SmpClearTempFiles = 0;
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlStringCbPrintfW(SmpTempDirNameBuffer, 0x20AuLL, L"\\??\\%s", NtSystemRoot);
  RtlInitUnicodeString(&SmpTempFilesDir, SmpTempDirNameBuffer);
  result = RtlCreateEnvironment(1u, &SmpDefaultEnvironment);
  if ( result >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v39;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes) >= 0 )
    {
      NtClose(KeyHandle);
      SmpMiniNTBoot = 1;
    }
    SmpReadSafeBootOption();
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v41;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
    if ( result >= 0 )
    {
      NtDeleteValueKey(KeyHandle, (PUNICODE_STRING)&SmpSafeBootEnvironmentValue);
      RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", (unsigned int)byte_140025BD8);
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
                  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v44;
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
                      v34 = 0LL;
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
                          v8 = v34;
                          v9 = PlatformBinary;
                        }
                      }
                      else
                      {
                        v9 = -1073741823;
                      }
                      v11 = (__int64 *)SmpBootExecuteList;
                      if ( (__int64 *)SmpBootExecuteList != &SmpBootExecuteList
                        && (*(__int64 **)SmpBootExecuteList != &SmpBootExecuteList
                         || !RtlEqualUnicodeString(
                               (PCUNICODE_STRING)(SmpBootExecuteList + 16),
                               &SmpAutoChkDefaultCommand,
                               0))
                        || (__int64 *)SmpSetupExecuteList != &SmpSetupExecuteList
                        || v9 >= 0 )
                      {
                        SmpNtSerializeBoot();
                      }
                      SmpEventWrite(&SmssEvt_BootExecuteList_Start);
                      if ( v11 != &SmpBootExecuteList )
                      {
                        do
                        {
                          v13 = v11;
                          SmpExecuteCommand((__int64)(v11 + 2), 0, v12, 0, 0LL);
                          v11 = (__int64 *)*v11;
                          SmpFreeSavedRegistryEntry(v13);
                        }
                        while ( v11 != &SmpBootExecuteList );
                        v2 = 0LL;
                      }
                      SmpEventWrite(&SmssEvt_BootExecuteList_Stop);
                      SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Start);
                      v15 = (__int64 *)SmpBootExecuteNoPnpSyncList;
                      if ( (__int64 *)SmpBootExecuteNoPnpSyncList != &SmpBootExecuteNoPnpSyncList )
                      {
                        do
                        {
                          v16 = v15;
                          SmpExecuteCommand((__int64)(v15 + 2), 0, v14, 0, 0LL);
                          v15 = (__int64 *)*v15;
                          SmpFreeSavedRegistryEntry(v16);
                        }
                        while ( v15 != &SmpBootExecuteNoPnpSyncList );
                        v8 = v34;
                      }
                      SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Stop);
                      SmpEventWrite(&SmssEvt_PlatformExecuteList_Start);
                      v18 = (__int64 *)SmpPlatformExecuteList;
                      while ( v18 != &SmpPlatformExecuteList )
                      {
                        v19 = v18;
                        if ( SmpHostSmss )
                          SmpExecuteCommand((__int64)(v18 + 2), 0, v17, 0, 0LL);
                        v18 = (__int64 *)*v18;
                        SmpFreeSavedRegistryEntry(v19);
                      }
                      SmpEventWrite(&SmssEvt_PlatformExecuteList_Stop);
                      if ( EventHandle )
                        NtSetEvent(EventHandle, 0LL);
                      SmpEventWrite(&SmssEvt_InitializeRegistry_Start);
                      NtInitializeRegistry(0);
                      SmpEventWrite(&SmssEvt_InitializeRegistry_Stop);
                      if ( v9 >= 0 )
                      {
                        v20 = RtlQueryPerformanceFrequency(&v31);
                        v31 &= -(__int64)(v20 != 0);
                        v21 = RtlQueryPerformanceCounter(&v38);
                        v31 &= -(__int64)(v21 != 0);
                        if ( (int)SmpExecuteCommand(
                                    (__int64)&Destination,
                                    0,
                                    v22,
                                    32,
                                    (PRTL_USER_PROCESS_PARAMETERS)&v47) < 0 )
                        {
                          v23 = 1;
                        }
                        else
                        {
                          if ( v50 >= 0 )
                          {
                            v23 = 3;
                            NtTerminateProcess(Object, -1073740760);
                          }
                          else
                          {
                            v23 = 0;
                            NtResumeThread(ThreadHandle, 0LL);
                            NtWaitForSingleObject(Object, 0, 0LL);
                          }
                          NtClose(Object);
                          NtClose(ThreadHandle);
                        }
                        v24 = RtlQueryPerformanceCounter(&v37);
                        v25 = v31 & -(__int64)(v24 != 0);
                        v31 = v25;
                        if ( v25 > 0 )
                          v2 = 1000 * (v37 - v38) / v25;
                        SmpSendPlatformBinaryStatus(v23, v8, v2, &Destination);
                        RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Destination.Buffer);
                      }
                      v26 = 0;
                      if ( (unsigned __int8)RtlIsStateSeparationEnabled() )
                        v26 = (int)RtlQueryRegistryValuesEx(
                                     0LL,
                                     L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager",
                                     &SmpRegistryConfigurationTable2,
                                     0LL,
                                     0LL) >= 0;
                      if ( !SmpMiniNTBoot )
                        SmpProcessFileRenames(v26);
                      v33 = 0LL;
                      result = TpAllocWork(&v33, SmpAsyncMemoryConfiguration, 0LL, &SmpCallbackEnviron);
                      if ( result >= 0 )
                      {
                        TpPostWork(v33);
                        if ( SmpWaitForPagingFiles )
                          TpWaitForWork(v33, 0LL);
                        TpReleaseWork(v33);
                        DynamicEnvironmentVariables = SmpCreateDynamicEnvironmentVariables(KeyHandle);
                        NtClose(KeyHandle);
                        if ( DynamicEnvironmentVariables >= 0 )
                        {
                          SmpEventWrite(&SmssEvt_SetupExecuteList_Start);
                          v29 = (__int64 *)SmpSetupExecuteList;
                          while ( v29 != &SmpSetupExecuteList )
                          {
                            v30 = v29;
                            SmpExecuteCommand((__int64)(v29 + 2), 0, v28, 0, 0LL);
                            v29 = (__int64 *)*v29;
                            SmpFreeSavedRegistryEntry(v30);
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
