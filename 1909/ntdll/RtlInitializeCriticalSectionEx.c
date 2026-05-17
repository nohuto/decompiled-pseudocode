/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x180035C80
 * Callers:
 *     EtwpInitLoggerContext @ 0x18000471C (EtwpInitLoggerContext.c)
 *     RtlpInitMuiCriticalSection @ 0x180012D4C (RtlpInitMuiCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x18001A790 (LdrpInitMuiCrits.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     LdrpInitParallelLoadingSupport @ 0x18007D66C (LdrpInitParallelLoadingSupport.c)
 *     LdrpCreateSoftwareEnclave @ 0x1800CDA94 (LdrpCreateSoftwareEnclave.c)
 *     LdrpInitializeEnclaves @ 0x1800CE040 (LdrpInitializeEnclaves.c)
 *     AVrfInitializeVerifier @ 0x1800D8C38 (AVrfInitializeVerifier.c)
 *     RtlInitializeHeapManager @ 0x1800EEF74 (RtlInitializeHeapManager.c)
 *     RtlTraceDatabaseCreate @ 0x1800FC050 (RtlTraceDatabaseCreate.c)
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180033A40 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

__int64 __fastcall RtlInitializeCriticalSectionEx(__int64 a1, int a2, int a3)
{
  __int64 v5; // rax
  bool v6; // al
  __int64 v7; // rdi
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  _BYTE v10[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+26h] [rbp-42h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]

  if ( (a3 & 0xE0000000) != 0 || (a3 & 0x11000000) == 0x11000000 )
    return 3221225713LL;
  if ( (a2 & 0xFF000000) != 0 )
    return 3221225712LL;
  if ( (a3 & 0x4000000) != 0 )
    return 0LL;
  v5 = 0LL;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors > 1 )
  {
    if ( (a3 & 0x2000000) == 0 && a2 )
      v5 = a2 & 0xFFFFFF;
    else
      v5 = 33556432LL;
  }
  *(_QWORD *)(a1 + 32) = v5 | a3 & 0x9000000;
  v6 = (a3 & 0x10000000) != 0 || RtlpForceCSDebugInfoCreation;
  *(_QWORD *)a1 = -1LL;
  if ( v6 )
  {
    RtlpAddDebugInfoToCriticalSection(a1);
    if ( *(_QWORD *)a1 == -1LL )
      *(_QWORD *)(a1 + 32) |= 0x1000000uLL;
  }
  v7 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v9 = 2147353474LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v13 = a1;
    v11 = 5923;
    v12 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v9) )
      v7 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent(*(unsigned __int8 *)v7, 66562LL, 16LL, v10);
  }
  return 0LL;
}
