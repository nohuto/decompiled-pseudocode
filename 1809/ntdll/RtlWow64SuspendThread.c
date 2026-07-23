/*
 * XREFs of RtlWow64SuspendThread @ 0x1800DD780
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800510E0 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x1800A0380 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A0620 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x1800A07A0 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x1800A0A80 (ZwDuplicateObject.c)
 *     ZwResumeThread @ 0x1800A0D40 (ZwResumeThread.c)
 *     NtSuspendThread @ 0x1800A3990 (NtSuspendThread.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800DD510 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800DD9C0 (RtlpWow64OpenThreadProcess.c)
 */

__int64 __fastcall RtlWow64SuspendThread(HANDLE SourceHandle, ULONG *a2)
{
  NTSTATUS SharedInfoProcess; // ebx
  ULONG Options; // [rsp+30h] [rbp-89h]
  unsigned int ThreadInformation; // [rsp+68h] [rbp-51h] BYREF
  HANDLE TargetHandle; // [rsp+70h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-41h] BYREF
  __int64 v9[2]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v10[40]; // [rsp+A0h] [rbp-19h] BYREF
  int v11[14]; // [rsp+C8h] [rbp+Fh] BYREF
  char v12; // [rsp+130h] [rbp+77h] BYREF

  TargetHandle = 0LL;
  Handle = 0LL;
  SharedInfoProcess = NtSuspendThread(SourceHandle, a2);
  if ( SharedInfoProcess >= 0 )
  {
    SharedInfoProcess = RtlpWow64OpenThreadProcess(SourceHandle, (__int64)v9);
    if ( SharedInfoProcess < 0 )
      goto LABEL_14;
    if ( (void *)v9[0] != NtCurrentTeb()->ClientId.UniqueProcess
      || (void *)v9[1] != NtCurrentTeb()->ClientId.UniqueThread )
    {
      SharedInfoProcess = RtlWow64GetSharedInfoProcess(0LL, &v12, v10);
      if ( SharedInfoProcess < 0 )
        goto LABEL_14;
      if ( !v12
        || (v10[4] & 2) == 0
        || (void *)v9[0] != NtCurrentTeb()->ClientId.UniqueProcess
        && (ZwQueryInformationThread(SourceHandle, ThreadSuspendCount, &ThreadInformation, 4u, 0LL),
            ThreadInformation > 1) )
      {
        SharedInfoProcess = 0;
        goto LABEL_15;
      }
      SharedInfoProcess = ZwDuplicateObject(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            SourceHandle,
                            0LL,
                            &TargetHandle,
                            0x100802u,
                            0,
                            0);
      if ( SharedInfoProcess < 0
        || (SharedInfoProcess = RtlpCreateUserThreadEx(
                                  0LL,
                                  0LL,
                                  6,
                                  0,
                                  0LL,
                                  0LL,
                                  Options,
                                  RtlpWow64SuspendWorker,
                                  (PVOID)((unsigned __int64)TargetHandle | 1),
                                  &Handle,
                                  0LL),
            SharedInfoProcess < 0)
        || (NtWaitForSingleObject(Handle, 0, 0LL),
            ZwQueryInformationThread(Handle, ThreadBasicInformation, v11, 0x30u, 0LL),
            SharedInfoProcess = v11[0],
            v11[0] < 0) )
      {
LABEL_14:
        ZwResumeThread(SourceHandle, 0LL);
      }
    }
  }
LABEL_15:
  if ( TargetHandle )
    ZwDuplicateObject(0LL, TargetHandle, 0LL, 0LL, 0, 0, 3u);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)SharedInfoProcess;
}
