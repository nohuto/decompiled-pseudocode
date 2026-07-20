/*
 * XREFs of SmpCreatePagingFiles @ 0x14000AC40
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000B740 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpCreateVolumeDescriptors @ 0x1400068F0 (SmpCreateVolumeDescriptors.c)
 *     SmpDeallocSavedRegistryEntry @ 0x14000A198 (SmpDeallocSavedRegistryEntry.c)
 *     SmpEnableSwapOnPagingFiles @ 0x14000A314 (SmpEnableSwapOnPagingFiles.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14000A554 (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpProcessPagefileDescriptor @ 0x14000ABC0 (SmpProcessPagefileDescriptor.c)
 *     SmpRecordCreatedPageFiles @ 0x14000AE70 (SmpRecordCreatedPageFiles.c)
 *     SmpCleanupStalePageFiles @ 0x14000AF84 (SmpCleanupStalePageFiles.c)
 *     SmpCreatePagingFileDescriptor @ 0x14000AFF8 (SmpCreatePagingFileDescriptor.c)
 *     SmpCheckForCrashDump @ 0x14000B264 (SmpCheckForCrashDump.c)
 *     SmpSaveOldPageFiles @ 0x14000B524 (SmpSaveOldPageFiles.c)
 *     SmpBuildFilesStringFromList @ 0x14000B65C (SmpBuildFilesStringFromList.c)
 *     SmpAdjustPagefileSizeforLowStorage @ 0x14000D0B4 (SmpAdjustPagefileSizeforLowStorage.c)
 *     SmpCreateEmergencyPagingFile @ 0x140010390 (SmpCreateEmergencyPagingFile.c)
 */

char SmpCreatePagingFiles()
{
  int v0; // eax
  __int64 v1; // rcx
  int v2; // edx
  signed __int32 v3; // ecx
  __int64 v4; // rax
  PVOID *i; // rbx
  PVOID *v6; // rbx
  struct _UNICODE_STRING *v7; // rdi
  PVOID *v8; // rax
  struct _UNICODE_STRING **Buffer; // rcx
  int VolumeDescriptors; // eax
  __int64 v11; // rcx
  signed __int32 v12; // ecx
  PVOID *v13; // rsi
  char v14; // di
  int v15; // eax
  int v16; // eax
  __int16 v17; // dx
  __int64 v18; // rcx
  __int64 v20; // [rsp+20h] [rbp-28h] BYREF
  PVOID BaseAddress; // [rsp+28h] [rbp-20h]
  int SystemInformation; // [rsp+50h] [rbp+8h] BYREF
  __int64 v23; // [rsp+58h] [rbp+10h] BYREF

  SystemInformation = 0;
  v20 = 0LL;
  BaseAddress = 0LL;
  v0 = SmpBuildFilesStringFromList(&SmpExistingPageFilesList, &v20);
  v2 = v0;
  if ( v0 < 0 )
  {
    v3 = _InterlockedIncrement(&SmpPagefileLogIndex) % 32;
    v4 = 2LL * v3;
    *((_DWORD *)&SmpPagefileLog + 4 * v3) = 2867;
LABEL_3:
    *((_DWORD *)&SmpPagefileLog + 2 * v4 + 1) = v2;
    *((_QWORD *)&SmpPagefileLog + v4 + 1) = 0LL;
    goto LABEL_32;
  }
  SmpSaveOldPageFiles(v1, (unsigned int)v0);
  for ( i = (PVOID *)SmpExistingPageFilesList; i != &SmpExistingPageFilesList; i = (PVOID *)*i )
    SmpCheckForCrashDump(i + 2);
  SystemInformation = 2;
  NtSetSystemInformation(SystemCrashDumpStateInformation, &SystemInformation, 4u);
  v6 = (PVOID *)SmpPagingFileList;
  while ( v6 != &SmpPagingFileList )
  {
    v7 = (struct _UNICODE_STRING *)v6;
    SmpCreatePagingFileDescriptor(v6 + 2);
    v8 = (PVOID *)*v6;
    v6 = v8;
    if ( v8[1] != v7 || (Buffer = (struct _UNICODE_STRING **)v7->Buffer, *Buffer != v7) )
      __fastfail(3u);
    *Buffer = (struct _UNICODE_STRING *)v8;
    v8[1] = Buffer;
    SmpDeallocSavedRegistryEntry(v7);
  }
  if ( !SmpNumberOfPagefileDescriptors && !SmpRegistrySpecifierPresent )
  {
    LOBYTE(v4) = SmpCleanupStalePageFiles();
    goto LABEL_32;
  }
  VolumeDescriptors = SmpCreateVolumeDescriptors();
  v2 = VolumeDescriptors;
  if ( VolumeDescriptors < 0 )
  {
    v12 = _InterlockedIncrement(&SmpPagefileLogIndex) % 32;
    v4 = 2LL * v12;
    *((_DWORD *)&SmpPagefileLog + 4 * v12) = 2949;
    goto LABEL_3;
  }
  SmpAdjustPagefileSizeforLowStorage(v11, (unsigned int)VolumeDescriptors);
  v13 = (PVOID *)SmpPagingFileDescriptorList;
  v14 = 0;
  if ( SmpPagingFileDescriptorList != &SmpPagingFileDescriptorList )
  {
    do
    {
      v15 = SmpProcessPagefileDescriptor((__int64)v13);
      v13 = (PVOID *)*v13;
      if ( v15 >= 0 )
        v14 = 1;
    }
    while ( v13 != &SmpPagingFileDescriptorList );
    if ( v14 )
      goto LABEL_24;
  }
  if ( (int)SmpCreateEmergencyPagingFile() >= 0 )
  {
LABEL_24:
    v16 = SmpCreateWorkingSetSwapPagingFile(&v23);
    if ( v16 < 0 )
    {
      if ( v16 != -1073741710 || SmpNumberOfPagefilesCreated != 1 )
        goto LABEL_31;
      v17 = 63;
      goto LABEL_30;
    }
    if ( (*(_BYTE *)(v23 + 16) & 0x10) != 0 )
    {
      v17 = *(_WORD *)(v23 + 28);
LABEL_30:
      SmpEnableSwapOnPagingFiles((__int64 **)&SmpPagingFileDescriptorList, v17);
    }
  }
LABEL_31:
  SmpCleanupStalePageFiles();
  LOBYTE(v18) = v14 == 0;
  LOBYTE(v4) = SmpRecordCreatedPageFiles(v18, &v20);
LABEL_32:
  if ( BaseAddress )
    LOBYTE(v4) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  return v4;
}
