/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x18007D750
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800DA0F0 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800DA190 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800510E0 (RtlpCreateUserThreadEx.c)
 *     RtlQueryProcessModuleInformation @ 0x18007D98C (RtlQueryProcessModuleInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x18007DE38 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlWow64GetProcessMachines @ 0x18007F950 (RtlWow64GetProcessMachines.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x1800A0360 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A0780 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x1800A07A0 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x1800A0A60 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x1800A0AC0 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x1800A0D40 (NtTerminateThread.c)
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

__int64 __fastcall RtlQueryProcessDebugInformation(_QWORD *a1, unsigned int a2, __int64 a3)
{
  void (__fastcall __noreturn *v3)(); // rbx
  _QWORD *v4; // r15
  __int64 v8; // r8
  bool v9; // dl
  int v10; // eax
  HANDLE v11; // rcx
  HANDLE v12; // rcx
  __int64 result; // rax
  unsigned int v14; // r15d
  HANDLE v15; // r14
  HANDLE v16; // rcx
  HANDLE v17; // r15
  NTSTATUS v18; // eax
  __int64 v19; // [rsp+20h] [rbp-E0h]
  __int64 v20; // [rsp+30h] [rbp-D0h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v22[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v23; // [rsp+6Ch] [rbp-94h]
  HANDLE v24; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v25; // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall __noreturn *v26)(); // [rsp+80h] [rbp-80h]
  _QWORD *v27; // [rsp+88h] [rbp-78h] BYREF
  __int64 v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE v31; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v32; // [rsp+B0h] [rbp-50h] BYREF
  int v33; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  int v36; // [rsp+D0h] [rbp-30h]
  __int128 v37; // [rsp+D8h] [rbp-28h]
  _QWORD v38[17]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v39[12]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v40[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  void (__fastcall __noreturn *v41)(); // [rsp+1E0h] [rbp+E0h]

  v3 = 0LL;
  v26 = RtlpQueryProcessDebugInformationRemote;
  v4 = 0LL;
  Handle = 0LL;
  v23 = 0;
  if ( *(_QWORD *)(a3 + 48) && *(_QWORD **)(a3 + 48) != a1 )
    return 3221225485LL;
  if ( (a2 & 0x3FFFFFBE) != 0 && (a2 & 0x40000000) != 0 )
    return 3221225659LL;
  *(_DWORD *)(a3 + 64) = a2;
  v8 = *(_QWORD *)(a3 + 72);
  Timeout.QuadPart = -600000000LL;
  if ( v8 )
    memset((void *)(a3 + 208), 0, v8 - 208);
  *(_QWORD *)(a3 + 72) = 208LL;
  v9 = 0;
  if ( (a2 & 0x3FFFFFBE) == 0 )
    v9 = (a2 & 0x80000000) != 0 && (a2 & 0x41) != 0;
  if ( v9 )
  {
    if ( (a2 & 0x40000000) != 0 )
    {
      v4 = a1;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess != a1 )
    {
      v33 = 48;
      v34 = 0LL;
      v36 = 0;
      v35 = 0LL;
      v27 = a1;
      v37 = 0LL;
      v28 = 0LL;
      v10 = NtOpenProcess(&Handle, 0x1FFFFFLL, &v33, &v27);
      v11 = Handle;
      v4 = v38;
      v38[1] = RtlpQueryReadVirtualMemory;
      if ( v10 < 0 )
        v11 = 0LL;
      v38[2] = NtQueryInformationProcess;
      Handle = v11;
      v38[0] = v11;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == a1 || (a2 & 0x40000000) != 0 || Handle )
  {
    if ( (a2 & 0x41) == 0 || (LODWORD(v3) = RtlQueryProcessModuleInformation(v4, a2, a3), !(_DWORD)v3) )
    {
      if ( (a2 & 2) == 0 || (LODWORD(v3) = RtlQueryProcessBackTraceInformation(a3), !(_DWORD)v3) )
      {
        if ( (a2 & 0x20) == 0 || (LODWORD(v3) = RtlQueryProcessLockInformation(a3), !(_DWORD)v3) )
        {
          if ( (a2 & 0x21C) == 0 || (LODWORD(v3) = RtlQueryProcessHeapInformation(a3), !(_DWORD)v3) )
          {
            if ( (a2 & 0x80u) == 0 || (LODWORD(v3) = AVrfpQueryProcessVerifierOptions(a3), !(_DWORD)v3) )
            {
              if ( (a2 & 0xC00) != 0 )
                LODWORD(v3) = RtlpQueryCriticalSectionOwnerInformation(a3, a2);
            }
          }
        }
      }
    }
    v12 = Handle;
    if ( !Handle )
      return (unsigned int)v3;
    goto LABEL_25;
  }
  if ( ((a2 - 1024) & 0xFFFFFBFF) == 0 )
  {
    v33 = 48;
    v34 = 0LL;
    v36 = 0;
    v35 = 0LL;
    v27 = a1;
    v37 = 0LL;
    v28 = 0LL;
    if ( (int)NtOpenProcess(&Handle, 4096LL, &v33, &v27) >= 0 )
    {
      if ( (int)RtlWow64GetProcessMachines(Handle, v22, 0LL) >= 0
        && v22[0]
        && (int)ZwDuplicateObject(-1LL, Handle, -1LL, &v24, 16, 0, 0) >= 0 )
      {
        if ( (int)ZwReadVirtualMemory(v24, &LdrSystemDllInitBlock, v40, 224LL, &v29) >= 0 && v29 == 224 )
          v3 = v41;
        NtClose(v24);
        if ( v3 )
        {
          v26 = v3;
          v23 = 1;
        }
      }
      NtClose(Handle);
    }
    Handle = 0LL;
  }
  v14 = v23;
  v25 = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(a3, a1, v23, &v25);
  if ( (int)result >= 0 )
  {
    v15 = v25;
    v16 = v25;
    if ( !v25 )
      v16 = *(HANDLE *)(a3 + 136);
    LODWORD(v3) = RtlpCreateExecutionRequiredRequest(v16, &v32);
    v12 = v15;
    if ( (int)v3 >= 0 )
    {
      LODWORD(v3) = RtlpCreateUserThreadEx(
                      (__int64)v15,
                      0LL,
                      6,
                      0,
                      0LL,
                      0LL,
                      v20,
                      (__int64)v26,
                      *(_QWORD *)(a3 + 16),
                      &v31,
                      0LL);
      if ( (int)v3 >= 0 )
      {
        v17 = v31;
        v18 = NtWaitForSingleObject(v31, 1u, &Timeout);
        LODWORD(v3) = v18;
        if ( v18 < 0 )
        {
          NtTerminateThread(v17, (unsigned int)v18);
        }
        else
        {
          v19 = 0LL;
          LODWORD(v3) = ZwQueryInformationThread(v17, 0LL, v39);
          if ( (int)v3 >= 0 )
            LODWORD(v3) = v39[0];
        }
        NtClose(v17);
        v14 = v23;
      }
      NtClose(v15);
      if ( v32 )
        RtlpDestroyExecutionRequiredRequest(v32);
      if ( (int)v3 < 0 )
        return (unsigned int)v3;
      if ( v14 == 1 )
      {
        LODWORD(v3) = 0;
        *(_QWORD *)(a3 + 168) = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)(*(_QWORD *)(a3 + 88)
                                                                                          + a3
                                                                                          + 80), 4));
      }
      else
      {
        if ( !v14 )
          LODWORD(v3) = RtlpCopyRemoteDebugInformation(a3);
        if ( (int)v3 < 0 )
          return (unsigned int)v3;
      }
      if ( (a2 & 1) != 0 && !*(_QWORD *)(a3 + 96) )
        LODWORD(v3) = -1073741558;
      if ( (a2 & 0x40) != 0 && !*(_QWORD *)(a3 + 96) )
        LODWORD(v3) = -1073741558;
      if ( (int)v3 >= 0 )
        LODWORD(v3) = RtlpValidateRemoteDebugInformation(a3, a2, a3 + 208, *(_QWORD *)(a3 + 72) - 208LL, v19);
      return (unsigned int)v3;
    }
LABEL_25:
    NtClose(v12);
    return (unsigned int)v3;
  }
  return result;
}
