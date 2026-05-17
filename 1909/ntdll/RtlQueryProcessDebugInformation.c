/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x180075580
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D8040 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D80E0 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180005760 (RtlpCreateUserThreadEx.c)
 *     RtlQueryProcessModuleInformation @ 0x1800757BC (RtlQueryProcessModuleInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x180075C58 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlWow64GetProcessMachines @ 0x1800786C0 (RtlWow64GetProcessMachines.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009CF10 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18009D330 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x18009D350 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x18009D610 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18009D670 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x18009D8F0 (NtTerminateThread.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D73C0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7550 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D7930 (RtlQueryProcessLockInformation.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D7E00 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800D7FEC (RtlpQueryCriticalSectionOwnerInformation.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800D8464 (RtlpValidateRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800DA54C (AVrfpQueryProcessVerifierOptions.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x1801043D4 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x1801044D4 (RtlpDestroyExecutionRequiredRequest.c)
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
  __int64 v19; // [rsp+30h] [rbp-D0h]
  HANDLE Handle; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v21[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v22; // [rsp+6Ch] [rbp-94h]
  HANDLE v23; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v24; // [rsp+78h] [rbp-88h] BYREF
  void (__fastcall __noreturn *v25)(); // [rsp+80h] [rbp-80h]
  _QWORD *v26; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE v30; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v31; // [rsp+B0h] [rbp-50h] BYREF
  int v32; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+D0h] [rbp-30h]
  __int128 v36; // [rsp+D8h] [rbp-28h]
  _QWORD v37[17]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD v38[12]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE v39[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  void (__fastcall __noreturn *v40)(); // [rsp+1E0h] [rbp+E0h]

  v3 = 0LL;
  v25 = RtlpQueryProcessDebugInformationRemote;
  v4 = 0LL;
  Handle = 0LL;
  v22 = 0;
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
      v32 = 48;
      v33 = 0LL;
      v35 = 0;
      v34 = 0LL;
      v26 = a1;
      v36 = 0LL;
      v27 = 0LL;
      v10 = NtOpenProcess(&Handle, 0x1FFFFFLL, &v32, &v26);
      v11 = Handle;
      v4 = v37;
      v37[1] = RtlpQueryReadVirtualMemory;
      if ( v10 < 0 )
        v11 = 0LL;
      v37[2] = NtQueryInformationProcess;
      Handle = v11;
      v37[0] = v11;
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
    v32 = 48;
    v33 = 0LL;
    v35 = 0;
    v34 = 0LL;
    v26 = a1;
    v36 = 0LL;
    v27 = 0LL;
    if ( (int)NtOpenProcess(&Handle, 4096LL, &v32, &v26) >= 0 )
    {
      if ( (int)RtlWow64GetProcessMachines(Handle, v21, 0LL) >= 0 )
      {
        if ( v21[0] )
        {
          LODWORD(v19) = 0;
          if ( (int)ZwDuplicateObject(-1LL, Handle, -1LL, &v23, 16, 0) >= 0 )
          {
            if ( (int)ZwReadVirtualMemory(v23, &LdrSystemDllInitBlock, v39, 224LL, &v28) >= 0 && v28 == 224 )
              v3 = v40;
            NtClose(v23);
            if ( v3 )
            {
              v25 = v3;
              v22 = 1;
            }
          }
        }
      }
      NtClose(Handle);
    }
    Handle = 0LL;
  }
  v14 = v22;
  v24 = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(a3, a1, v22, &v24);
  if ( (int)result >= 0 )
  {
    v15 = v24;
    v16 = v24;
    if ( !v24 )
      v16 = *(HANDLE *)(a3 + 136);
    LODWORD(v3) = RtlpCreateExecutionRequiredRequest(v16, &v31);
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
                      v19,
                      (__int64)v25,
                      *(_QWORD *)(a3 + 16),
                      &v30,
                      0LL);
      if ( (int)v3 >= 0 )
      {
        v17 = v30;
        v18 = NtWaitForSingleObject(v30, 1u, &Timeout);
        LODWORD(v3) = v18;
        if ( v18 < 0 )
        {
          NtTerminateThread(v17, (unsigned int)v18);
        }
        else
        {
          LODWORD(v3) = ZwQueryInformationThread(v17, 0LL, v38, 48LL, 0LL);
          if ( (int)v3 >= 0 )
            LODWORD(v3) = v38[0];
        }
        NtClose(v17);
        v14 = v22;
      }
      NtClose(v15);
      if ( v31 )
        RtlpDestroyExecutionRequiredRequest(v31);
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
        LODWORD(v3) = RtlpValidateRemoteDebugInformation(a3, a2, a3 + 208, *(_QWORD *)(a3 + 72) - 208LL);
      return (unsigned int)v3;
    }
LABEL_25:
    NtClose(v12);
    return (unsigned int)v3;
  }
  return result;
}
