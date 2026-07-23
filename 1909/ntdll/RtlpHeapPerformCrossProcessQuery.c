/*
 * XREFs of RtlpHeapPerformCrossProcessQuery @ 0x1800F093C
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x18006798C (RtlpQueryExtendedHeapInformation.c)
 *     RtlpHpStackTraceConfig @ 0x180102268 (RtlpHpStackTraceConfig.c)
 *     RtlpHpStackTraceSerializeRemote @ 0x1801029D0 (RtlpHpStackTraceSerializeRemote.c)
 *     RtlpHpTagQueryHeapsRemote @ 0x180104578 (RtlpHpTagQueryHeapsRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180005760 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x18009CF10 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009D190 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009D250 (ZwFreeVirtualMemory.c)
 *     NtWriteVirtualMemory @ 0x18009D5D0 (NtWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009D610 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18009D670 (ZwReadVirtualMemory.c)
 *     ZwResumeThread @ 0x18009D8D0 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x18009D8F0 (NtTerminateThread.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1801043D4 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x1801044D4 (RtlpDestroyExecutionRequiredRequest.c)
 */

__int64 __fastcall RtlpHeapPerformCrossProcessQuery(HANDLE ProcessHandle, HANDLE *Buffer)
{
  HANDLE v2; // rsi
  NTSTATUS v5; // ebx
  HANDLE v6; // rdi
  int v8; // eax
  int v9; // [rsp+30h] [rbp-29h]
  HANDLE Handle; // [rsp+60h] [rbp+7h] BYREF
  ULONG_PTR NumberOfBytesWritten; // [rsp+68h] [rbp+Fh] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+17h] BYREF
  __int128 v13; // [rsp+78h] [rbp+1Fh] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE ThreadHandle; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  BaseAddress = 0LL;
  ThreadHandle = 0LL;
  Handle = 0LL;
  RegionSize = 96LL;
  v5 = ZwAllocateVirtualMemory(ProcessHandle, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v5 < 0 )
    goto LABEL_11;
  v5 = RtlpCreateUserThreadEx(
         ProcessHandle,
         0LL,
         3,
         0,
         0LL,
         0LL,
         v9,
         (PUSER_THREAD_START_ROUTINE)RtlpExtendedHeapInformationWorkerThread,
         BaseAddress,
         &ThreadHandle,
         &v13);
  if ( v5 < 0 )
    goto LABEL_8;
  if ( *Buffer )
  {
    v5 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, *Buffer, ProcessHandle, Buffer, 0xF001Fu, 0, 0);
    if ( v5 < 0 )
      goto LABEL_8;
  }
  v5 = NtWriteVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x60uLL, &NumberOfBytesWritten);
  if ( v5 < 0 )
    goto LABEL_8;
  if ( NumberOfBytesWritten != 96 )
  {
    v5 = -2147483635;
LABEL_8:
    v6 = ThreadHandle;
    goto LABEL_9;
  }
  v8 = RtlpCreateExecutionRequiredRequest(ProcessHandle, &Handle);
  v6 = ThreadHandle;
  v5 = v8;
  if ( v8 < 0 || (v5 = ZwResumeThread(ThreadHandle, 0LL), v5 < 0) )
  {
    v2 = Handle;
LABEL_9:
    if ( v6 )
    {
      NtTerminateThread(v6, 0);
      NtClose(v6);
    }
    goto LABEL_11;
  }
  NtWaitForSingleObject(v6, 0, 0LL);
  v2 = Handle;
  if ( Handle )
  {
    RtlpDestroyExecutionRequiredRequest(Handle);
    v2 = 0LL;
  }
  NtClose(v6);
  v6 = 0LL;
  v5 = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x60uLL, &NumberOfBytesWritten);
  if ( v5 >= 0 )
  {
    if ( NumberOfBytesWritten != 96 )
    {
      v5 = -2147483635;
      goto LABEL_11;
    }
    v5 = *((_DWORD *)Buffer + 7);
    goto LABEL_9;
  }
LABEL_11:
  if ( BaseAddress )
    ZwFreeVirtualMemory(ProcessHandle, &BaseAddress, &RegionSize, 0x8000u);
  if ( v2 )
    RtlpDestroyExecutionRequiredRequest(v2);
  return (unsigned int)v5;
}
