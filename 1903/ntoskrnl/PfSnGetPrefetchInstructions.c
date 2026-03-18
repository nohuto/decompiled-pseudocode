/*
 * XREFs of PfSnGetPrefetchInstructions @ 0x1406B4288
 * Callers:
 *     PfSnBeginScenario @ 0x14065905C (PfSnBeginScenario.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     SmDecompressBuffer @ 0x140107918 (SmDecompressBuffer.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtReadFile @ 0x1405EF450 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     NtOpenFile @ 0x1406170A0 (NtOpenFile.c)
 *     PfVerifyScenarioBuffer @ 0x1406B45A0 (PfVerifyScenarioBuffer.c)
 */

__int64 __fastcall PfSnGetPrefetchInstructions(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v6; // rbx
  UCHAR *v7; // r14
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebx
  wchar_t *PoolWithTag; // r15
  int v11; // ebx
  HANDLE v12; // rsi
  ULONG Length; // edi
  UCHAR *v14; // rax
  _DWORD *v15; // rdi
  _DWORD *v17; // [rsp+50h] [rbp-89h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v19; // [rsp+60h] [rbp-79h] BYREF
  __int64 v20; // [rsp+68h] [rbp-71h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-69h] BYREF
  _BYTE v22[8]; // [rsp+80h] [rbp-59h] BYREF
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-51h] BYREF
  __int64 v24[2]; // [rsp+98h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-31h] BYREF
  __int64 FileInformation; // [rsp+D8h] [rbp-1h] BYREF
  SIZE_T NumberOfBytes; // [rsp+E0h] [rbp+7h]
  __int64 v28; // [rsp+E8h] [rbp+Fh]

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  IoStatusBlock.Pointer = 0LL;
  v6 = -1LL;
  IoStatusBlock.Information = 0LL;
  v7 = 0LL;
  FileInformation = 0LL;
  NumberOfBytes = 0LL;
  v28 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v17 = 0LL;
  FileHandle = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)qword_140467B38, 0LL);
  do
    ++v6;
  while ( word_1404679D0[v6] );
  v9 = 2 * v6 + 102;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x46506343u);
  if ( !PoolWithTag )
  {
    v11 = -1073741670;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140467B38, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)qword_140467B38);
    KeAbPostRelease((ULONG_PTR)qword_140467B38);
    KeLeaveCriticalRegion();
    goto LABEL_25;
  }
  RtlStringCbPrintfW(PoolWithTag, v9, L"%s\\%ws-%08X.%ws", word_1404679D0, a1, *(_DWORD *)(a1 + 60), L"pf");
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140467B38, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_140467B38);
  KeAbPostRelease((ULONG_PTR)qword_140467B38);
  KeLeaveCriticalRegion();
  RtlInitUnicodeString(&DestinationString, PoolWithTag);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = NtOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 0, 0x20u);
  if ( v11 < 0 )
  {
LABEL_25:
    v12 = FileHandle;
    goto LABEL_26;
  }
  v12 = FileHandle;
  v11 = NtQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( v11 < 0 )
  {
LABEL_26:
    v15 = v17;
    goto LABEL_16;
  }
  Length = NumberOfBytes;
  LODWORD(v20) = 0x10000000;
  if ( (unsigned int)(NumberOfBytes - 1) > 0xFFFFFFF || HIDWORD(NumberOfBytes) )
  {
    v11 = -1073741823;
    goto LABEL_26;
  }
  v14 = (UCHAR *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x70506343u);
  v7 = v14;
  if ( !v14 )
  {
    v11 = -1073741670;
    goto LABEL_26;
  }
  v11 = NtReadFile(v12, 0LL, 0LL, 0LL, &IoStatusBlock, v14, Length, 0LL, 0LL);
  if ( v11 < 0 )
    goto LABEL_26;
  v24[0] = (__int64)PfSnScenarioAlloc;
  v24[1] = (__int64)RtlpSysVolFree;
  v11 = SmDecompressBuffer(v7, Length, &v17, &v19, &v20, (__int64 (__fastcall **)(_QWORD))v24);
  if ( v11 < 0 )
    goto LABEL_26;
  v15 = v17;
  if ( (unsigned __int8)PfVerifyScenarioBuffer(v17, v19, v22) )
  {
    if ( v15[20] == a2 )
    {
      *a3 = v15;
      v15 = 0LL;
      v11 = 0;
    }
    else
    {
      v11 = -1073741823;
    }
  }
  else
  {
    v11 = -1073741701;
  }
LABEL_16:
  if ( v12 )
    NtClose(v12);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v11;
}
