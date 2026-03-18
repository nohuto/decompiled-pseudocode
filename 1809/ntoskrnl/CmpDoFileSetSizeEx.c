/*
 * XREFs of CmpDoFileSetSizeEx @ 0x1406B8960
 * Callers:
 *     HvpAddBin @ 0x1405A39BC (HvpAddBin.c)
 *     HvTruncateCurrentLogFileIfRequired @ 0x1405A605C (HvTruncateCurrentLogFileIfRequired.c)
 *     CmpCompleteUnloadKey @ 0x1405AF61C (CmpCompleteUnloadKey.c)
 *     HvWriteLogFile @ 0x1406B85FC (HvWriteLogFile.c)
 *     HvTruncateAllLogFilesIfRequired @ 0x1406CF7F4 (HvTruncateAllLogFilesIfRequired.c)
 *     CmpMountPreloadedHives @ 0x140735800 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140735B50 (CmpLoadHiveThread.c)
 *     CmShutdownSystem @ 0x1407EC8D4 (CmShutdownSystem.c)
 *     HvpPerformLogFileRecovery @ 0x1407F7B80 (HvpPerformLogFileRecovery.c)
 *     HvWriteExternal @ 0x1407FAD94 (HvWriteExternal.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400EED30 (IoSetThreadHardErrorMode.c)
 *     ZwSetInformationFile @ 0x1401B8650 (ZwSetInformationFile.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1405A62AC (HvpLogTypeToLogArrayIndex.c)
 *     CmpAdjustRequestedFileSize @ 0x1406B8A98 (CmpAdjustRequestedFileSize.c)
 */

__int64 __fastcall CmpDoFileSetSizeEx(__int64 a1, unsigned int a2, unsigned __int64 a3, char a4)
{
  void *v6; // r14
  unsigned __int64 v7; // rdi
  unsigned __int64 v9; // rbp
  BOOLEAN v10; // r15
  NTSTATUS v11; // eax
  int v12; // edi
  unsigned __int64 FileInformation; // [rsp+30h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v15; // [rsp+70h] [rbp+8h] BYREF

  v6 = *(void **)(a1 + 8LL * a2 + 1536);
  if ( !v6 )
    return 0LL;
  if ( a2 )
    v7 = a2 - 4 <= 1 || a2 == 1 ? *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex(a2) + 1800) : 0LL;
  else
    v7 = *(_QWORD *)(a1 + 1792);
  if ( (a4 & 1) != 0 && v7 && a3 <= v7 )
    return 0LL;
  v9 = CmpAdjustRequestedFileSize(a1, a2, v7, a3);
  v10 = IoSetThreadHardErrorMode(0);
  if ( v9 < v7 )
  {
    v15 = v9;
    v11 = ZwSetInformationFile(v6, &IoStatusBlock, &v15, 8u, FileAllocationInformation);
  }
  else
  {
    FileInformation = v9;
    v11 = ZwSetInformationFile(v6, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation);
  }
  v12 = v11;
  if ( v11 < 0 )
    goto LABEL_24;
  if ( a2 )
  {
    if ( a2 - 4 <= 1 || a2 == 1 )
      *(_QWORD *)(a1 + 8LL * (unsigned int)HvpLogTypeToLogArrayIndex(a2) + 1800) = v9;
  }
  else
  {
    *(_QWORD *)(a1 + 1792) = v9;
  }
  if ( v12 < 0 )
  {
LABEL_24:
    CmRegistryIODebug = 3;
    qword_14096E958 = (__int64)v6;
    dword_14096E960 = v12;
  }
  IoSetThreadHardErrorMode(v10);
  return (unsigned int)v12;
}
