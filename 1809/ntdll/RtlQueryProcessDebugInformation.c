/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x18007D760
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800DA0F0 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800DA190 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800510E0 (RtlpCreateUserThreadEx.c)
 *     RtlQueryProcessModuleInformation @ 0x18007D99C (RtlQueryProcessModuleInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18007DE48 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlWow64GetProcessMachines @ 0x18007F960 (RtlWow64GetProcessMachines.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x1800A0380 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A07A0 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x1800A07C0 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x1800A0A80 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A0AE0 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x1800A0D60 (NtTerminateThread.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D9470 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D9600 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D99E0 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D9EB0 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800DA09C (RtlpQueryCriticalSectionOwnerInformation.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800DA514 (RtlpValidateRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800DC638 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x180106CF4 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x180106DF4 (RtlpDestroyExecutionRequiredRequest.c)
 */

NTSTATUS __cdecl RtlQueryProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  NTSTATUS (__cdecl *v3)(PVOID); // rbx
  _QWORD *v4; // r15
  SIZE_T OffsetFree; // r8
  bool v9; // dl
  NTSTATUS v10; // eax
  HANDLE v11; // rcx
  HANDLE v12; // rcx
  NTSTATUS result; // eax
  unsigned int v14; // r15d
  HANDLE v15; // r14
  HANDLE TargetProcessHandle; // rcx
  HANDLE v17; // r15
  int v18; // eax
  ULONG Options; // [rsp+30h] [rbp-D0h]
  HANDLE ProcessHandle; // [rsp+60h] [rbp-A0h] BYREF
  USHORT ProcessMachine[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v22; // [rsp+6Ch] [rbp-94h]
  HANDLE TargetHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v24; // [rsp+78h] [rbp-88h] BYREF
  PUSER_THREAD_START_ROUTINE v25; // [rsp+80h] [rbp-80h]
  _CLIENT_ID ClientId; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR NumberOfBytesRead; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v30; // [rsp+B0h] [rbp-50h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v32[17]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD ThreadInformation[12]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE Buffera[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  NTSTATUS (__cdecl *v35)(PVOID); // [rsp+1E0h] [rbp+E0h]

  v3 = 0LL;
  v25 = (PUSER_THREAD_START_ROUTINE)RtlpQueryProcessDebugInformationRemote;
  v4 = 0LL;
  ProcessHandle = 0LL;
  v22 = 0;
  if ( Buffer->TargetProcessId && Buffer->TargetProcessId != UniqueProcessId )
    return -1073741811;
  if ( (Flags & 0x3FFFFFBE) != 0 && (Flags & 0x40000000) != 0 )
    return -1073741637;
  Buffer->Flags = Flags;
  OffsetFree = Buffer->OffsetFree;
  Timeout.QuadPart = -600000000LL;
  if ( OffsetFree )
    memset(&Buffer[1], 0, OffsetFree - 208);
  Buffer->OffsetFree = 208LL;
  v9 = 0;
  if ( (Flags & 0x3FFFFFBE) == 0 )
    v9 = (Flags & 0x80000000) != 0 && (Flags & 0x41) != 0;
  if ( v9 )
  {
    if ( (Flags & 0x40000000) != 0 )
    {
      v4 = UniqueProcessId;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess != UniqueProcessId )
    {
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ClientId.UniqueProcess = UniqueProcessId;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      v10 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
      v11 = ProcessHandle;
      v4 = v32;
      v32[1] = RtlpQueryReadVirtualMemory;
      if ( v10 < 0 )
        v11 = 0LL;
      v32[2] = NtQueryInformationProcess;
      ProcessHandle = v11;
      v32[0] = v11;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == UniqueProcessId || (Flags & 0x40000000) != 0 || ProcessHandle )
  {
    if ( (Flags & 0x41) == 0 || (LODWORD(v3) = RtlQueryProcessModuleInformation(v4, Flags, Buffer), !(_DWORD)v3) )
    {
      if ( (Flags & 2) == 0 || (LODWORD(v3) = RtlQueryProcessBackTraceInformation(Buffer), !(_DWORD)v3) )
      {
        if ( (Flags & 0x20) == 0 || (LODWORD(v3) = RtlQueryProcessLockInformation(Buffer), !(_DWORD)v3) )
        {
          if ( (Flags & 0x21C) == 0 || (LODWORD(v3) = RtlQueryProcessHeapInformation(Buffer), !(_DWORD)v3) )
          {
            if ( (Flags & 0x80u) == 0 || (LODWORD(v3) = AVrfpQueryProcessVerifierOptions(Buffer), !(_DWORD)v3) )
            {
              if ( (Flags & 0xC00) != 0 )
                LODWORD(v3) = RtlpQueryCriticalSectionOwnerInformation(Buffer, Flags);
            }
          }
        }
      }
    }
    v12 = ProcessHandle;
    if ( !ProcessHandle )
      return (int)v3;
    goto LABEL_25;
  }
  if ( ((Flags - 1024) & 0xFFFFFBFF) == 0 )
  {
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ClientId.UniqueProcess = UniqueProcessId;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueThread = 0LL;
    if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
    {
      if ( RtlWow64GetProcessMachines(ProcessHandle, ProcessMachine, 0LL) >= 0
        && ProcessMachine[0]
        && ZwDuplicateObject(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x10u,
             0,
             0) >= 0 )
      {
        if ( ZwReadVirtualMemory(TargetHandle, &LdrSystemDllInitBlock, Buffera, 0xE0uLL, &NumberOfBytesRead) >= 0
          && NumberOfBytesRead == 224 )
        {
          v3 = v35;
        }
        NtClose(TargetHandle);
        if ( v3 )
        {
          v25 = v3;
          v22 = 1;
        }
      }
      NtClose(ProcessHandle);
    }
    ProcessHandle = 0LL;
  }
  v14 = v22;
  v24 = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(Buffer, UniqueProcessId, v22, &v24);
  if ( result >= 0 )
  {
    v15 = v24;
    TargetProcessHandle = v24;
    if ( !v24 )
      TargetProcessHandle = Buffer->TargetProcessHandle;
    LODWORD(v3) = RtlpCreateExecutionRequiredRequest(TargetProcessHandle, &v30);
    v12 = v15;
    if ( (int)v3 >= 0 )
    {
      LODWORD(v3) = RtlpCreateUserThreadEx(v15, 0LL, 6, 0, 0LL, 0LL, Options, v25, Buffer->ViewBaseTarget, &Handle, 0LL);
      if ( (int)v3 >= 0 )
      {
        v17 = Handle;
        v18 = NtWaitForSingleObject(Handle, 1u, &Timeout);
        LODWORD(v3) = v18;
        if ( v18 < 0 )
        {
          NtTerminateThread(v17, v18);
        }
        else
        {
          LODWORD(v3) = ZwQueryInformationThread(v17, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
          if ( (int)v3 >= 0 )
            LODWORD(v3) = ThreadInformation[0];
        }
        NtClose(v17);
        v14 = v22;
      }
      NtClose(v15);
      if ( v30 )
        RtlpDestroyExecutionRequiredRequest(v30);
      if ( (int)v3 < 0 )
        return (int)v3;
      if ( v14 == 1 )
      {
        LODWORD(v3) = 0;
        Buffer->CriticalSectionOwnerThread = (HANDLE)(unsigned int)_mm_cvtsi128_si32(
                                                                     _mm_srli_si128(
                                                                       *(__m128i *)((char *)&Buffer->CommitSize
                                                                                  + Buffer->ViewSize),
                                                                       4));
      }
      else
      {
        if ( !v14 )
          LODWORD(v3) = RtlpCopyRemoteDebugInformation(Buffer);
        if ( (int)v3 < 0 )
          return (int)v3;
      }
      if ( (Flags & 1) != 0 && !Buffer->Modules )
        LODWORD(v3) = -1073741558;
      if ( (Flags & 0x40) != 0 && !Buffer->Modules )
        LODWORD(v3) = -1073741558;
      if ( (int)v3 >= 0 )
        LODWORD(v3) = RtlpValidateRemoteDebugInformation(Buffer, Flags, &Buffer[1], Buffer->OffsetFree - 208);
      return (int)v3;
    }
LABEL_25:
    NtClose(v12);
    return (int)v3;
  }
  return result;
}
