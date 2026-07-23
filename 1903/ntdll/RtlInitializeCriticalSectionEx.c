/*
 * XREFs of RtlInitializeCriticalSectionEx @ 0x180035C80
 * Callers:
 *     sub_18000471C @ 0x18000471C (sub_18000471C.c)
 *     sub_180012D4C @ 0x180012D4C (sub_180012D4C.c)
 *     sub_18001A790 @ 0x18001A790 (sub_18001A790.c)
 *     RtlInitializeResource @ 0x1800338D0 (RtlInitializeResource.c)
 *     RtlCreateHeap @ 0x180049100 (RtlCreateHeap.c)
 *     sub_18007CFCC @ 0x18007CFCC (sub_18007CFCC.c)
 *     sub_1800CD9D4 @ 0x1800CD9D4 (sub_1800CD9D4.c)
 *     sub_1800CDF80 @ 0x1800CDF80 (sub_1800CDF80.c)
 *     sub_1800D8B78 @ 0x1800D8B78 (sub_1800D8B78.c)
 *     sub_1800EEE84 @ 0x1800EEE84 (sub_1800EEE84.c)
 *     RtlTraceDatabaseCreate @ 0x1800FBF70 (RtlTraceDatabaseCreate.c)
 * Callees:
 *     sub_180033A40 @ 0x180033A40 (sub_180033A40.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwTraceEvent @ 0x18009D290 (ZwTraceEvent.c)
 */

NTSTATUS __cdecl RtlInitializeCriticalSectionEx(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount, ULONG Flags)
{
  __int64 v5; // rax
  bool v6; // al
  __int64 v7; // rdi
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v9; // rcx
  _BYTE Fields[6]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v11; // [rsp+26h] [rbp-42h]
  ULONG_PTR v12; // [rsp+40h] [rbp-28h]
  PRTL_CRITICAL_SECTION v13; // [rsp+48h] [rbp-20h]

  if ( (Flags & 0xE0000000) != 0 || (Flags & 0x11000000) == 0x11000000 )
    return -1073741583;
  if ( (SpinCount & 0xFF000000) != 0 )
    return -1073741584;
  if ( (Flags & 0x4000000) != 0 )
    return 0;
  v5 = 0LL;
  CriticalSection->LockCount = -1;
  CriticalSection->RecursionCount = 0;
  CriticalSection->OwningThread = 0LL;
  CriticalSection->LockSemaphore = 0LL;
  if ( NtCurrentPeb()->NumberOfProcessors > 1 )
  {
    if ( (Flags & 0x2000000) == 0 && SpinCount )
      v5 = SpinCount & 0xFFFFFF;
    else
      v5 = 33556432LL;
  }
  CriticalSection->SpinCount = v5 | Flags & 0x9000000;
  v6 = (Flags & 0x10000000) != 0 || byte_180163EC0;
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
    v13 = CriticalSection;
    v11 = 5923;
    v12 = CriticalSection->SpinCount;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[1];
    ZwTraceEvent((HANDLE)*(unsigned __int8 *)v7, 0x10402u, 0x10u, Fields);
  }
  return 0;
}
