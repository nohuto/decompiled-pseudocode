/*
 * XREFs of IopReleaseFileObjectLock @ 0x14003B880
 * Callers:
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     IopCloseFile @ 0x1405D8630 (IopCloseFile.c)
 *     NtReadFile @ 0x1405EF450 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x1405EFFA0 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     IopSynchronousServiceTail @ 0x1405F28F0 (IopSynchronousServiceTail.c)
 *     NtWriteFile @ 0x140629160 (NtWriteFile.c)
 *     IopQueryXxxInformation @ 0x14062AFE4 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x14062B1F0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14069E430 (IopGetSetSecurityObject.c)
 *     NtWriteFileGather @ 0x1406A3D30 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1406A4400 (NtReadFileScatter.c)
 *     IoSetInformation @ 0x1406ECC40 (IoSetInformation.c)
 *     IopAllocateIrpCleanup @ 0x140853634 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanup @ 0x140853DA8 (IopExceptionCleanup.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeSetEventBoostPriorityEx @ 0x14009E75C (KeSetEventBoostPriorityEx.c)
 */

void __fastcall IopReleaseFileObjectLock(volatile __int32 *Object)
{
  int Priority; // [rsp+40h] [rbp+8h] BYREF
  char v3; // [rsp+48h] [rbp+10h] BYREF

  Priority = KeGetCurrentThread()->Priority;
  _InterlockedExchange(Object + 29, 0);
  if ( *((_DWORD *)Object + 28) )
    KeSetEventBoostPriorityEx(
      (_DWORD)Object + 128,
      (unsigned int)&v3,
      (unsigned int)&Priority,
      (_DWORD)Object + 128,
      0,
      1);
  KeAbPostRelease((ULONG_PTR)(Object + 32));
  ObfDereferenceObject((PVOID)Object);
  KeLeaveCriticalRegion();
}
