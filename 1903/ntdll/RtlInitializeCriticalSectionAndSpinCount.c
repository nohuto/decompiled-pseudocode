/*
 * XREFs of RtlInitializeCriticalSectionAndSpinCount @ 0x180064540
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionAndSpinCount(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount)
{
  ULONG_PTR v3; // rcx
  ULONG v4; // edx
  bool v5; // zf
  char v6; // al
  __int64 v7; // rdi
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v9; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v12; // [rsp+26h] [rbp-42h]
  ULONG_PTR v13; // [rsp+40h] [rbp-28h]
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
  v5 = byte_180163EC0 == 0;
  CriticalSection->SpinCount = v3;
  v6 = !v5;
  CriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)-1LL;
  if ( v6 )
  {
    sub_180033A40((__int64)CriticalSection);
    if ( CriticalSection->DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)-1LL )
      CriticalSection->SpinCount |= 0x1000000uLL;
  }
  v7 = 2147353474LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && SharedData->ServiceSessionId )
    v9 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
  else
    v9 = 2147353474LL;
  if ( *(_BYTE *)v9 && (NtCurrentPeb()->TracingFlags & 2) != 0 )
  {
    v14 = CriticalSection;
    v12 = 5923;
    v13 = CriticalSection->SpinCount;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x10402u, 0x10u, Fields);
  }
  return 0;
}
