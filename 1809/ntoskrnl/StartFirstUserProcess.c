/*
 * XREFs of StartFirstUserProcess @ 0x1409C5CC0
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409C4788 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     RtlCopyUnicodeString @ 0x1400B9870 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     InbvIsBootDriverInstalled @ 0x140181830 (InbvIsBootDriverInstalled.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x1401B84F0 (ZwSetInformationProcess.c)
 *     ZwResumeThread @ 0x1401B8BB0 (ZwResumeThread.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     FinalizeBootLogo @ 0x14027D48C (FinalizeBootLogo.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlCreateUserProcessEx @ 0x1409C5E8C (RtlCreateUserProcessEx.c)
 *     QueryRegistryHideMachine @ 0x1409C6124 (QueryRegistryHideMachine.c)
 *     RegistryOverwriteCentralProcessor @ 0x1409F3518 (RegistryOverwriteCentralProcessor.c)
 */

void StartFirstUserProcess()
{
  __int64 MaximumLength; // rsi
  __int64 v1; // rbx
  SIZE_T v2; // r14
  char *PoolWithTag; // rax
  char *v4; // rdi
  __int128 v5; // xmm0
  ULONG_PTR UserProcess; // rbx
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-49h] BYREF
  char v10[8]; // [rsp+40h] [rbp-39h] BYREF
  HANDLE ProcessHandle; // [rsp+48h] [rbp-31h]
  HANDLE ThreadHandle; // [rsp+50h] [rbp-29h]
  int ProcessInformation; // [rsp+E0h] [rbp+67h] BYREF
  LARGE_INTEGER Interval; // [rsp+E8h] [rbp+6Fh] BYREF

  if ( (unsigned __int8)QueryRegistryHideMachine() )
    RegistryOverwriteCentralProcessor();
  MaximumLength = stru_14055B930.MaximumLength;
  v1 = stru_14055B920.MaximumLength + 1116LL;
  v2 = stru_14055B930.MaximumLength + v1;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x62537350u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x6Du, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  memset(PoolWithTag, 0, v2);
  *((_DWORD *)v4 + 1) = v1;
  *((_QWORD *)v4 + 16) = &v4[v1];
  *(_DWORD *)v4 = v1;
  *((_DWORD *)v4 + 2) = 4194305;
  *((_QWORD *)v4 + 126) = MaximumLength;
  RtlInitUnicodeString((PUNICODE_STRING)v4 + 5, 0LL);
  *((_QWORD *)v4 + 8) = v4 + 1056;
  *((_WORD *)v4 + 29) = stru_14055B920.MaximumLength;
  RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 56), &stru_14055B920);
  *((_QWORD *)v4 + 13) = &v4[*((unsigned __int16 *)v4 + 29) + 1056];
  *((_WORD *)v4 + 49) = 60;
  RtlCopyUnicodeString((PUNICODE_STRING)v4 + 6, &NtInitialUserProcess);
  v5 = *((_OWORD *)v4 + 6);
  DestinationString.Buffer = (wchar_t *)*((_QWORD *)v4 + 16);
  *((_OWORD *)v4 + 7) = v5;
  DestinationString.Length = 0;
  DestinationString.MaximumLength = MaximumLength;
  RtlCopyUnicodeString(&DestinationString, &stru_14055B930);
  UserProcess = (int)RtlCreateUserProcessEx((int)v4 + 96, (int)v4, v10);
  if ( InbvIsBootDriverInstalled() )
    FinalizeBootLogo();
  if ( (UserProcess & 0x80000000) != 0LL )
    KeBugCheckEx(0x6Du, UserProcess, 0LL, 1uLL, 0LL);
  ProcessInformation = 1;
  v7 = ZwSetInformationProcess(ProcessHandle, ProcessBreakOnTermination, &ProcessInformation, 4u);
  if ( v7 < 0 )
    KeBugCheckEx(0x6Du, v7, 0LL, 2uLL, 0LL);
  v8 = ZwResumeThread(ThreadHandle, 0LL);
  if ( v8 < 0 )
    KeBugCheckEx(0x6Du, v8, 0LL, 3uLL, 0LL);
  byte_14043C6F4 = 1;
  Interval.QuadPart = -50000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  ZwClose(ThreadHandle);
  ZwClose(ProcessHandle);
  ExFreePoolWithTag(v4, 0);
}
