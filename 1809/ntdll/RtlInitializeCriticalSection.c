/*
 * XREFs of RtlInitializeCriticalSection @ 0x18006BE00
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180061B00 (RtlpAddDebugInfoToCriticalSection.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0EB0 (NtTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSection(PRTL_CRITICAL_SECTION CriticalSection)
{
  unsigned __int64 v2; // rax
  bool v3; // zf
  __int64 v4; // rdi
  _DWORD *SharedData; // rcx
  __int64 v6; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v9; // [rsp+26h] [rbp-42h]
  unsigned __int64 SpinCount; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v11; // [rsp+48h] [rbp-20h]

  CriticalSection->RecursionCount = 0;
  CriticalSection->OwningThread = 0LL;
  CriticalSection->LockSemaphore = 0LL;
  CriticalSection->LockCount = -1;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    CriticalSection->SpinCount = 0LL;
    v2 = 0LL;
  }
  else
  {
    v2 = 33556432LL;
    CriticalSection->SpinCount = 33556432LL;
  }
  v3 = RtlpForceCSDebugInfoCreation == 0;
  CriticalSection->SpinCount = v2;
  CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
  if ( !v3 )
  {
    RtlpAddDebugInfoToCriticalSection((__int64)CriticalSection);
    if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
      CriticalSection->SpinCount |= 0x1000000uLL;
  }
  v4 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v6 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v6 = 2147353474LL;
  if ( *(_BYTE *)v6 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v11 = CriticalSection;
    v9 = 5923;
    SpinCount = CriticalSection->SpinCount;
    if ( RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v4, 0x10402u, 0x10u, Fields);
  }
  return 0;
}
