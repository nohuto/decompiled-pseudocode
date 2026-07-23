/*
 * XREFs of RtlInitializeCriticalSectionAndSpinCount @ 0x1800645E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpAddDebugInfoToCriticalSection @ 0x180033A40 (RtlpAddDebugInfoToCriticalSection.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x18009DA40 (NtTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionAndSpinCount(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount)
{
  unsigned __int64 v3; // rcx
  ULONG v4; // edx
  bool v5; // zf
  char v6; // al
  __int64 v7; // rdi
  _DWORD *SharedData; // rcx
  __int64 v9; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v12; // [rsp+26h] [rbp-42h]
  unsigned __int64 v13; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v14; // [rsp+48h] [rbp-20h]

  CriticalSection->LockCount = -1;
  v3 = 0LL;
  v4 = SpinCount & 0xFFFFFF;
  CriticalSection->RecursionCount = 0;
  CriticalSection->OwningThread = 0LL;
  CriticalSection->LockSemaphore = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors > 1 )
  {
    if ( v4 )
      v3 = v4;
    else
      v3 = 33556432LL;
  }
  v5 = RtlpForceCSDebugInfoCreation == 0;
  CriticalSection->SpinCount = v3;
  v6 = !v5;
  CriticalSection->DebugInfo = (_RTL_CRITICAL_SECTION_DEBUG *)-1LL;
  if ( v6 )
  {
    RtlpAddDebugInfoToCriticalSection((__int64)CriticalSection);
    if ( CriticalSection->DebugInfo == (_RTL_CRITICAL_SECTION_DEBUG *)-1LL )
      CriticalSection->SpinCount |= 0x1000000uLL;
  }
  v7 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v9 = (__int64)NtCurrentPeb()->SharedData + 552;
  else
    v9 = 2147353474LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v14 = CriticalSection;
    v12 = 5923;
    v13 = CriticalSection->SpinCount;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 552;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x10402u, 0x10u, Fields);
  }
  return 0;
}
