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
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0EB0 (NtTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionEx(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount, ULONG Flags)
{
  char v5; // r9
  unsigned __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v10; // [rsp+26h] [rbp-42h]
  unsigned __int64 v11; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v12; // [rsp+48h] [rbp-20h]

  if ( (Flags & 0xE0000000) != 0 || (Flags & 0x11000000) == 0x11000000 )
    return -1073741583;
  if ( (SpinCount & 0xFF000000) != 0 )
    return -1073741584;
  if ( (Flags & 0x4000000) == 0 )
  {
    CriticalSection->RecursionCount = 0;
    CriticalSection->OwningThread = 0LL;
    CriticalSection->LockSemaphore = 0LL;
    CriticalSection->LockCount = -1;
    v5 = 1;
    if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
    {
      CriticalSection->SpinCount = 0LL;
      v6 = 0LL;
    }
    else
    {
      if ( (Flags & 0x2000000) != 0 || !SpinCount )
        v6 = 33556432LL;
      else
        v6 = SpinCount & 0xFFFFFF;
      CriticalSection->SpinCount = v6;
    }
    CriticalSection->SpinCount = v6 | Flags & 0x9000000;
    if ( (Flags & 0x10000000) == 0 && !RtlpForceCSDebugInfoCreation )
      v5 = 0;
    CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
    if ( v5 )
    {
      RtlpAddDebugInfoToCriticalSection((__int64)CriticalSection);
      if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
        CriticalSection->SpinCount |= 0x1000000uLL;
    }
    v7 = 2147353474LL;
    if ( RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 552;
    else
      v8 = 2147353474LL;
    if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
    {
      v12 = CriticalSection;
      v10 = 5923;
      v11 = CriticalSection->SpinCount;
      if ( RtlGetCurrentServiceSessionId() )
        v7 = (__int64)NtCurrentPeb()->SharedData + 552;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x10402u, 0x10u, Fields);
    }
  }
  return 0;
}
