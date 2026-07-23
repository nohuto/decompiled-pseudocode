/*
 * XREFs of RtlInitializeCriticalSectionAndSpinCount @ 0x18006CBD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpAddDebugInfoToCriticalSection @ 0x180061B00 (RtlpAddDebugInfoToCriticalSection.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A0EB0 (NtTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionAndSpinCount(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount)
{
  ULONG v2; // edx
  unsigned __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // rdi
  _DWORD *SharedData; // rcx
  __int64 v8; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+26h] [rbp-42h]
  unsigned __int64 v12; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v13; // [rsp+48h] [rbp-20h]

  CriticalSection->RecursionCount = 0;
  CriticalSection->OwningThread = 0LL;
  v2 = SpinCount & 0xFFFFFF;
  CriticalSection->LockSemaphore = 0LL;
  CriticalSection->LockCount = -1;
  if ( NtCurrentPeb()->NumberOfProcessors <= 1 )
  {
    CriticalSection->SpinCount = 0LL;
    v4 = 0LL;
  }
  else
  {
    v4 = v2;
    if ( !v2 )
      v4 = 33556432LL;
    CriticalSection->SpinCount = v4;
  }
  v5 = RtlpForceCSDebugInfoCreation == 0;
  CriticalSection->SpinCount = v4;
  CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
  if ( !v5 )
  {
    RtlpAddDebugInfoToCriticalSection((__int64)CriticalSection);
    if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
      CriticalSection->SpinCount |= 0x1000000uLL;
  }
  v6 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v8 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v8 = 2147353474LL;
  if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v13 = CriticalSection;
    v11 = 5923;
    v12 = CriticalSection->SpinCount;
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x10402u, 0x10u, Fields);
  }
  return 0;
}
