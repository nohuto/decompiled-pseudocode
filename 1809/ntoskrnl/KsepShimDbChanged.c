/*
 * XREFs of KsepShimDbChanged @ 0x14017907C
 * Callers:
 *     KseQueryDeviceData @ 0x140721BD0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140848610 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     KsepDebugPrint @ 0x14029FE34 (KsepDebugPrint.c)
 *     KsepLogError @ 0x1402A00D4 (KsepLogError.c)
 */

__int64 KsepShimDbChanged()
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v1; // edi
  NTSTATUS v2; // ecx
  NTSTATUS v3; // ecx
  __int64 v5; // rax
  const char *v6; // rdx
  __int64 v7; // rax
  HANDLE FileHandle; // [rsp+30h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  _BYTE FileInformation[16]; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+98h] [rbp+2Fh]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&KsepShimDbLock, 0LL);
  FileHandle = 0LL;
  v1 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\AppPatch\\drvmain.sdb");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 5u, 0);
  if ( v2 < 0 )
  {
    v5 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v5 + 1] = v2;
    KsepHistoryErrors[2 * v5] = 590541;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwOpenFile failed opening DB file!\n");
    v6 = "KSE: ZwOpenFile failed opening DB file!\n";
    goto LABEL_16;
  }
  v3 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  if ( v3 < 0 )
  {
    v7 = ((unsigned __int8)_InterlockedExchangeAdd(&KsepHistoryErrorsIndex, 1u) + 1) & 0x3F;
    KsepHistoryErrors[2 * v7 + 1] = v3;
    KsepHistoryErrors[2 * v7] = 590554;
    if ( (KsepDebugFlag & 2) != 0 )
      KsepDebugPrint(0LL, "KSE: ZwQueryInformationFile failed getting DB file!\n");
    v6 = "KSE: ZwQueryInformationFile failed getting DB file!\n";
LABEL_16:
    KsepLogError(0LL, v6);
    goto LABEL_6;
  }
  if ( KsepSdbFileTime )
  {
    if ( v13 != KsepSdbFileTime )
    {
      KsepSdbFileTime = v13;
      v1 = 1;
    }
  }
  else
  {
    KsepSdbFileTime = v13;
  }
LABEL_6:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KsepShimDbLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KsepShimDbLock);
  KeAbPostRelease((ULONG_PTR)&KsepShimDbLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( FileHandle )
    ZwClose(FileHandle);
  return v1;
}
