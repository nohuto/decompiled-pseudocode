/*
 * XREFs of ?HampProcessBoostPriority@@YAJPEAXKW4_RM_EXECUTION_SPEED@@@Z @ 0x18000AD7C
 * Callers:
 *     ?HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x18000D7B4 (-HampHostTerminateWithProcessBoost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_PROCESS_SNAPSHOT@@@Z.c)
 * Callees:
 *     ?RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z @ 0x18000AC24 (-RmpSystemDuplicateHandle@@YAJPEAXKPEAPEAX@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

NTSTATUS __fastcall HampProcessBoostPriority(void *a1, int a2, int a3)
{
  HANDLE v5; // rbx
  NTSTATUS result; // eax
  unsigned __int8 v7; // di
  char ProcessInformation; // [rsp+38h] [rbp-69h] BYREF
  unsigned __int8 v9; // [rsp+39h] [rbp-68h] BYREF
  NTSTATUS v10; // [rsp+3Ch] [rbp-65h] BYREF
  int v11; // [rsp+40h] [rbp-61h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-59h] BYREF
  HANDLE ProcessHandle; // [rsp+50h] [rbp-51h] BYREF
  int v14; // [rsp+58h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR ThreadInformation[2]; // [rsp+60h] [rbp-41h] BYREF
  NTSTATUS *v16; // [rsp+80h] [rbp-21h]
  __int64 v17; // [rsp+88h] [rbp-19h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-9h] BYREF
  int v19; // [rsp+B0h] [rbp+Fh]
  int *v20; // [rsp+B8h] [rbp+17h]
  __int64 v21; // [rsp+C0h] [rbp+1Fh]
  unsigned __int8 *v22; // [rsp+C8h] [rbp+27h]
  __int64 v23; // [rsp+D0h] [rbp+2Fh]

  ProcessHandle = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  if ( a3 < 1 )
    return 0;
  result = RmpSystemDuplicateHandle(a1, 0x600u, &ProcessHandle);
  v10 = result;
  if ( result < 0 )
  {
LABEL_25:
    if ( dword_1800AB2C0 > 4u )
    {
      v17 = 4LL;
      v16 = &v10;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098594, 0LL, 0LL, 3u, ThreadInformation);
      result = v10;
    }
    goto LABEL_15;
  }
  if ( a3 < 2 )
  {
    v7 = 2;
    goto LABEL_5;
  }
  if ( a3 < 3 )
  {
    v7 = 6;
LABEL_5:
    result = NtQueryInformationProcess(ProcessHandle, ProcessPriorityClass, &ProcessInformation, 2u, 0LL);
    v10 = result;
    if ( result >= 0 )
    {
      if ( v9 < v7 )
      {
        v9 = v7;
        NtSetInformationProcess(ProcessHandle, ProcessPriorityClass, &ProcessInformation, 2u);
        if ( dword_1800AB2C0 > 4u )
        {
          v11 = a2;
          v20 = &v11;
          v22 = &v9;
          v21 = 4LL;
          v23 = 1LL;
          TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800985BF, 0LL, 0LL, 4u, &pData);
        }
      }
      while ( 1 )
      {
        v5 = Handle;
        result = NtGetNextThread(ProcessHandle, Handle, 3072LL, 0LL, 0, &Handle);
        v10 = result;
        if ( result == -2147483622 )
          break;
        if ( result < 0 )
          goto LABEL_25;
        if ( v5 )
          NtClose(v5);
        NtQueryInformationThread(Handle, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
        if ( v17 < 0 )
        {
          v11 = 0;
          NtSetInformationThread(Handle, ThreadBasePriority, &v11, 4u);
          if ( dword_1800AB2C0 > 4u )
          {
            NtQueryInformationThread(Handle, ThreadBasicInformation, &pData, 0x30u, 0LL);
            v14 = v19;
            v16 = &v14;
            v17 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009856A, 0LL, 0LL, 3u, ThreadInformation);
          }
        }
      }
      result = 0;
      v10 = 0;
      goto LABEL_15;
    }
    goto LABEL_25;
  }
LABEL_15:
  if ( v5 )
  {
    NtClose(v5);
    result = v10;
  }
  if ( ProcessHandle )
  {
    NtClose(ProcessHandle);
    return v10;
  }
  return result;
}
