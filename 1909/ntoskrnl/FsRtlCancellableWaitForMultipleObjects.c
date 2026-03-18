/*
 * XREFs of FsRtlCancellableWaitForMultipleObjects @ 0x14060C800
 * Callers:
 *     FsRtlSetKernelEaFile @ 0x1406255B0 (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x140625750 (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x140625A60 (FsRtlQueryKernelEaFile.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x1406DF2E0 (FsRtlCancellableWaitForSingleObject.c)
 *     FsRtlQueryInformationFile @ 0x14084E8F0 (FsRtlQueryInformationFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeWaitForMultipleObjects @ 0x14007C930 (KeWaitForMultipleObjects.c)
 *     KeQueryTimeIncrement @ 0x14007D4E0 (KeQueryTimeIncrement.c)
 */

NTSTATUS __stdcall FsRtlCancellableWaitForMultipleObjects(
        ULONG Count,
        PVOID ObjectArray[],
        WAIT_TYPE WaitType,
        PLARGE_INTEGER Timeout,
        PKWAIT_BLOCK WaitBlockArray,
        PIRP Irp)
{
  LONGLONG QuadPart; // rbx
  __int64 v11; // rbx
  NTSTATUS result; // eax
  __int64 v13; // rdi

  QuadPart = 0LL;
  if ( Timeout )
  {
    QuadPart = Timeout->QuadPart;
    if ( Timeout->QuadPart < 0 )
    {
      v11 = MEMORY[0xFFFFF78000000320];
      QuadPart = v11 - Timeout->QuadPart / KeQueryTimeIncrement();
    }
  }
  while ( 1 )
  {
    result = Count == 1
           ? KeWaitForSingleObject(*ObjectArray, Executive, 0, 1u, Timeout)
           : KeWaitForMultipleObjects(Count, ObjectArray, WaitType, Executive, 0, 1u, Timeout, WaitBlockArray);
    if ( result != 257 )
      break;
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
      return -1073741749;
    if ( Irp && Irp->Cancel )
      return -1073741536;
    if ( Timeout )
    {
      if ( Timeout->QuadPart >= 0 )
      {
        if ( MEMORY[0xFFFFF78000000014] >= QuadPart )
          return 258;
      }
      else
      {
        v13 = MEMORY[0xFFFFF78000000320];
        if ( MEMORY[0xFFFFF78000000320] >= QuadPart )
          return 258;
        Timeout->QuadPart = -((QuadPart - v13) * KeQueryTimeIncrement());
      }
    }
  }
  return result;
}
