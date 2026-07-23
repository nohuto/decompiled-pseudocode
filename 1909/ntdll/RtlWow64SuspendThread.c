/*
 * XREFs of RtlWow64SuspendThread @ 0x1800023F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWow64OpenThreadProcess @ 0x180002504 (RtlpWow64OpenThreadProcess.c)
 *     RtlpCreateUserThreadEx @ 0x180005760 (RtlpCreateUserThreadEx.c)
 *     RtlWow64GetSharedInfoProcess @ 0x180079850 (RtlWow64GetSharedInfoProcess.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009CF10 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwQueryObject @ 0x18009D090 (ZwQueryObject.c)
 *     ZwQueryInformationThread @ 0x18009D330 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x18009D610 (ZwDuplicateObject.c)
 *     NtSuspendThread @ 0x1800A0540 (NtSuspendThread.c)
 */

__int64 __fastcall RtlWow64SuspendThread(HANDLE SourceHandle, int *PreviousSuspendCount)
{
  HANDLE v2; // rdi
  NTSTATUS SharedInfoProcess; // ebx
  void *v7; // rdx
  ULONG Options; // [rsp+30h] [rbp-D0h]
  char v9; // [rsp+60h] [rbp-A0h]
  HANDLE ThreadHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE TargetHandle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v12[2]; // [rsp+80h] [rbp-80h] BYREF
  char v13; // [rsp+9Ch] [rbp-64h]
  int ThreadInformation[12]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE ObjectInformation[56]; // [rsp+F0h] [rbp-10h] BYREF

  TargetHandle = 0LL;
  v2 = 0LL;
  ThreadHandle = 0LL;
  SharedInfoProcess = RtlpWow64OpenThreadProcess(SourceHandle, (__int64)v12);
  if ( SharedInfoProcess >= 0 )
  {
    if ( (void *)v12[0] == NtCurrentTeb()->ClientId.UniqueProcess
      && (void *)v12[1] == NtCurrentTeb()->ClientId.UniqueThread )
    {
      goto LABEL_7;
    }
    SharedInfoProcess = RtlWow64GetSharedInfoProcess(0LL);
    if ( SharedInfoProcess < 0 )
    {
LABEL_8:
      v2 = ThreadHandle;
      goto LABEL_9;
    }
    if ( !v9 || (v13 & 2) == 0 )
    {
LABEL_7:
      SharedInfoProcess = NtSuspendThread(SourceHandle, (PULONG)PreviousSuspendCount);
      goto LABEL_8;
    }
    SharedInfoProcess = ZwQueryObject(SourceHandle, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL);
    if ( SharedInfoProcess < 0 )
      goto LABEL_8;
    if ( (ObjectInformation[4] & 2) == 0 )
    {
      SharedInfoProcess = -1073741790;
      goto LABEL_8;
    }
    SharedInfoProcess = ZwDuplicateObject(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          SourceHandle,
                          0LL,
                          &TargetHandle,
                          0x10080Au,
                          0,
                          0);
    if ( SharedInfoProcess < 0 )
      goto LABEL_8;
    v7 = TargetHandle;
    if ( (void *)v12[0] != NtCurrentTeb()->ClientId.UniqueProcess )
      v7 = (void *)((unsigned __int64)TargetHandle | 1);
    SharedInfoProcess = RtlpCreateUserThreadEx(
                          0LL,
                          0LL,
                          0LL,
                          Options,
                          RtlpWow64SuspendThreadWorker,
                          v7,
                          (__int64)&ThreadHandle,
                          0LL);
    if ( SharedInfoProcess < 0 )
      goto LABEL_8;
    v2 = ThreadHandle;
    NtWaitForSingleObject(ThreadHandle, 0, 0LL);
    ZwQueryInformationThread(v2, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
    SharedInfoProcess = ThreadInformation[0];
    if ( ThreadInformation[0] >= 0 )
    {
      if ( PreviousSuspendCount )
        *PreviousSuspendCount = ThreadInformation[0];
      SharedInfoProcess = 0;
    }
  }
LABEL_9:
  if ( TargetHandle )
    ZwDuplicateObject(0LL, TargetHandle, 0LL, 0LL, 0, 0, 3u);
  if ( v2 )
    NtClose(v2);
  return (unsigned int)SharedInfoProcess;
}
