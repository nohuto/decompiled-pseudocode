/*
 * XREFs of RtlWow64SuspendThread @ 0x1800DD780
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800510E0 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x1800A0360 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A0600 (NtQueryInformationProcess.c)
 *     ZwQueryInformationThread @ 0x1800A0780 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x1800A0A60 (ZwDuplicateObject.c)
 *     ZwResumeThread @ 0x1800A0D20 (ZwResumeThread.c)
 *     NtSuspendThread @ 0x1800A3970 (NtSuspendThread.c)
 *     RtlWow64GetSharedInfoProcess @ 0x1800DD510 (RtlWow64GetSharedInfoProcess.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800DD9C0 (RtlpWow64OpenThreadProcess.c)
 */

__int64 __fastcall RtlWow64SuspendThread(int a1)
{
  int v2; // edx
  int SharedInfoProcess; // ebx
  NTSTATUS v4; // eax
  bool v5; // cl
  __int64 v7; // [rsp+30h] [rbp-89h]
  HANDLE ProcessHandle; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v9; // [rsp+68h] [rbp-51h]
  __int64 v10; // [rsp+70h] [rbp-49h]
  HANDLE Handle; // [rsp+78h] [rbp-41h] BYREF
  __int64 ProcessInformation; // [rsp+80h] [rbp-39h] BYREF
  _QWORD v13[2]; // [rsp+88h] [rbp-31h] BYREF
  _BYTE v14[48]; // [rsp+98h] [rbp-21h] BYREF
  int v15; // [rsp+C8h] [rbp+Fh]
  char v16; // [rsp+130h] [rbp+77h] BYREF
  bool v17; // [rsp+138h] [rbp+7Fh]

  ProcessHandle = 0LL;
  v10 = 0LL;
  Handle = 0LL;
  SharedInfoProcess = NtSuspendThread();
  if ( SharedInfoProcess < 0 )
    goto LABEL_21;
  SharedInfoProcess = RtlpWow64OpenThreadProcess(a1, v2, (unsigned int)v14, (unsigned int)&ProcessHandle, (__int64)v13);
  if ( SharedInfoProcess < 0 )
    goto LABEL_20;
  if ( (void *)v13[0] == NtCurrentTeb()->ClientId.UniqueProcess
    && (void *)v13[1] == NtCurrentTeb()->ClientId.UniqueThread )
  {
    goto LABEL_21;
  }
  SharedInfoProcess = RtlWow64GetSharedInfoProcess(ProcessHandle, &v16);
  if ( SharedInfoProcess < 0 )
  {
LABEL_20:
    ZwResumeThread();
    goto LABEL_21;
  }
  if ( !v16 || (v14[12] & 2) == 0 )
    goto LABEL_7;
  if ( (void *)v13[0] != NtCurrentTeb()->ClientId.UniqueProcess )
  {
    if ( ProcessHandle )
    {
      v4 = NtQueryInformationProcess(ProcessHandle, ProcessDebugPort, &ProcessInformation, 8u, 0LL);
      if ( v4 < 0 )
      {
LABEL_16:
        ZwQueryInformationThread();
        if ( v9 <= 1 )
          goto LABEL_17;
LABEL_7:
        SharedInfoProcess = 0;
        goto LABEL_21;
      }
      v5 = ProcessInformation != 0;
    }
    else
    {
      v5 = v17;
      v4 = -1073741811;
    }
    if ( v4 >= 0 && v5 )
      goto LABEL_7;
    goto LABEL_16;
  }
LABEL_17:
  LODWORD(v7) = 0;
  SharedInfoProcess = ZwDuplicateObject();
  if ( SharedInfoProcess < 0 )
    goto LABEL_20;
  SharedInfoProcess = RtlpCreateUserThreadEx(
                        (__int64)ProcessHandle,
                        0LL,
                        6,
                        0,
                        0LL,
                        0LL,
                        v7,
                        (__int64)RtlpWow64SuspendWorker,
                        v10 | 1,
                        &Handle,
                        0LL);
  if ( SharedInfoProcess < 0 )
    goto LABEL_20;
  NtWaitForSingleObject(Handle, 0, 0LL);
  ZwQueryInformationThread();
  SharedInfoProcess = v15;
  if ( v15 < 0 )
    goto LABEL_20;
LABEL_21:
  if ( v10 )
    ZwDuplicateObject();
  if ( ProcessHandle )
    NtClose(ProcessHandle);
  if ( Handle )
    NtClose(Handle);
  return (unsigned int)SharedInfoProcess;
}
