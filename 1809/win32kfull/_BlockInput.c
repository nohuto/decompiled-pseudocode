/*
 * XREFs of _BlockInput @ 0x1C01C903C
 * Callers:
 *     NtUserBlockInput @ 0x1C0211D80 (NtUserBlockInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall BlockInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edi
  ULONG v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  v4 = a1;
  if ( (_DWORD)a1
    && PsGetCurrentProcess(a1, a2, a3, a4) != gpepCSRSS
    && (*(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput
     || !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 888LL), 0x20u)) )
  {
    v5 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v5, v6, v7, v8);
    return 0LL;
  }
  if ( gbEnforceUIPI && (unsigned int)*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL) < 0x3000 )
  {
    v10 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v10, v11, v12, v13);
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 424LL), 0LL, 2LL);
    return 0LL;
  }
  if ( v4 )
  {
    if ( gptiBlockInput || (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
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
