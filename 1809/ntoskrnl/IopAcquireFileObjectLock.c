/*
 * XREFs of IopAcquireFileObjectLock @ 0x1405A3480
 * Callers:
 *     NtSetInformationFile @ 0x140100E70 (NtSetInformationFile.c)
 *     IopXxxControlFile @ 0x1405E8BD0 (IopXxxControlFile.c)
 *     NtLockFile @ 0x1405FA000 (NtLockFile.c)
 *     BuildQueryDirectoryIrp @ 0x1405FA710 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     IopCloseFile @ 0x140639B10 (IopCloseFile.c)
 *     NtReadFile @ 0x14063A140 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x14063AA10 (NtQueryInformationFile.c)
 *     NtFlushBuffersFileEx @ 0x14065C7C0 (NtFlushBuffersFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x14065E480 (NtQueryVolumeInformationFile.c)
 *     IopQueryXxxInformation @ 0x140661740 (IopQueryXxxInformation.c)
 *     IopGetSetSecurityObject @ 0x1406990F0 (IopGetSetSecurityObject.c)
 *     NtUnlockFile @ 0x14069B660 (NtUnlockFile.c)
 *     NtQueryEaFile @ 0x1406A95D0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x1406B9D00 (NtNotifyChangeDirectoryFileEx.c)
 *     NtWriteFileGather @ 0x1406CC880 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406CD3B0 (NtReadFileScatter.c)
 *     NtSetVolumeInformationFile @ 0x1406FF290 (NtSetVolumeInformationFile.c)
 *     IoSetInformation @ 0x1407012A0 (IoSetInformation.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14081AC5C (IopSetEaOrQuotaInformationFile.c)
 *     NtSetEaFile @ 0x14081E200 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x14081E860 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     IopWaitForLockAlertable @ 0x14000EBDC (IopWaitForLockAlertable.c)
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 */

__int64 __fastcall IopAcquireFileObjectLock(char *Object, char a2, char a3, _BYTE *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v9; // edi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *a4 = 0;
  _InterlockedIncrement((volatile signed __int32 *)Object + 28);
  do
  {
    if ( !*((_DWORD *)Object + 29) && !_InterlockedExchange((volatile __int32 *)Object + 29, 1) )
    {
      ObfReferenceObject(Object);
      _InterlockedAdd((volatile signed __int32 *)Object + 28, 0xFFFFFFFF);
      return 0LL;
    }
    v9 = IopWaitForLockAlertable(Object + 128, a2, a3);
  }
  while ( v9 >= 0 );
  _InterlockedAdd((volatile signed __int32 *)Object + 28, 0xFFFFFFFF);
  if ( !*((_DWORD *)Object + 29) )
  {
    if ( *((_DWORD *)Object + 28) )
      KeSetEvent((PRKEVENT)(Object + 128), 0, 0);
  }
  *a4 = 1;
  KeLeaveCriticalRegion();
  return (unsigned int)v9;
}
