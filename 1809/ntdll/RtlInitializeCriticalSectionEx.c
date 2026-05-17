/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x180061C40
 * Callers:
 *     LdrpInitMuiCrits @ 0x18000A42C (LdrpInitMuiCrits.c)
 *     RtlpInitMuiCriticalSection @ 0x18003B9B0 (RtlpInitMuiCriticalSection.c)
 *     EtwpInitLoggerContext @ 0x180051D88 (EtwpInitLoggerContext.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlInitializeResource @ 0x180061A10 (RtlInitializeResource.c)
 *     LdrpInitParallelLoadingSupport @ 0x1800630C4 (LdrpInitParallelLoadingSupport.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800CF1E0 (LdrpCreateSoftwareEnclave.c)
 *     LdrpInitializeEnclaves @ 0x1800CF774 (LdrpInitializeEnclaves.c)
 *     AVrfInitializeVerifier @ 0x1800DACE8 (AVrfInitializeVerifier.c)
 *     RtlInitializeHeapManager @ 0x1800F1FC4 (RtlInitializeHeapManager.c)
 *     RtlTraceDatabaseCreate @ 0x1800FEAF0 (RtlTraceDatabaseCreate.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180061B00 (RtlpAddDebugInfoToCriticalSection.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0E90 (NtTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionEx(__int64 a1, int a2, int a3)
{
  char v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  _BYTE v9[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+26h] [rbp-42h]
  __int64 v11; // [rsp+40h] [rbp-28h]
  __int64 v12; // [rsp+48h] [rbp-20h]

  if ( (a3 & 0xE0000000) != 0 || (a3 & 0x11000000) == 0x11000000 )
    return 3221225713LL;
  if ( (a2 & 0xFF000000) != 0 )
    return 3221225712LL;
  if ( (a3 & 0x4000000) == 0 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 8) = -1;
    v5 = 1;
    if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
    {
      *(_QWORD *)(a1 + 32) = 0LL;
      v6 = 0LL;
    }
    else
    {
      if ( (a3 & 0x2000000) != 0 || !a2 )
        v6 = 33556432LL;
      else
        v6 = a2 & 0xFFFFFF;
      *(_QWORD *)(a1 + 32) = v6;
    }
    *(_QWORD *)(a1 + 32) = v6 | a3 & 0x9000000;
    if ( (a3 & 0x10000000) == 0 && !RtlpForceCSDebugInfoCreation )
      v5 = 0;
    *(_QWORD *)a1 = -1LL;
    if ( v5 )
    {
      RtlpAddDebugInfoToCriticalSection(a1);
      if ( *(_QWORD *)a1 == -1LL )
        *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
    }
    v7 = 2147353474LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 552;
    else
      v8 = 2147353474LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v12 = a1;
      v10 = 5923;
      v11 = *(_QWORD *)(a1 + 32);
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v7 = (__int64)NtCurrentPeb()->SharedData + 552;
      NtTraceEvent(*(unsigned __int8 *)v7, 66562LL, 16LL, v9);
    }
  }
  return 0LL;
}
