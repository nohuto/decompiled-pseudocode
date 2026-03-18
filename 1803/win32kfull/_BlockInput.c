/*
 * XREFs of _BlockInput @ 0x1C01A6FBC
 * Callers:
 *     NtUserBlockInput @ 0x1C01EBD60 (NtUserBlockInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall BlockInput(__int64 a1, __int64 a2)
{
  int v2; // edi
  ULONG v3; // eax
  __int64 v4; // rdx
  ULONG v6; // eax
  __int64 v7; // rdx

  v2 = a1;
  if ( (_DWORD)a1
    && PsGetCurrentProcess(a1, a2) != gpepCSRSS
    && (*(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput
     || !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 880LL), 0x20u)) )
  {
    v3 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v3, v4);
    return 0LL;
  }
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 872LL) < 0x3000 )
  {
    v6 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v6, v7);
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 416LL), 0LL, 2LL);
    return 0LL;
  }
  if ( v2 )
  {
    if ( gptiBlockInput || (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
      return 0LL;
    gptiBlockInput = gptiCurrent;
  }
  else
  {
    if ( gptiBlockInput != gptiCurrent )
      return 0LL;
    gptiBlockInput = 0LL;
  }
  return 1LL;
}
