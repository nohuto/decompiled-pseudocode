/*
 * XREFs of _W32ExceptionHandler @ 0x1C0240D78
 * Callers:
 *     NtUserUnregisterClass @ 0x1C0023620 (NtUserUnregisterClass.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00734E0 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserConsoleControl @ 0x1C00B27D0 (NtUserConsoleControl.c)
 *     SfnDWORDOPTINLPMSG @ 0x1C0146630 (SfnDWORDOPTINLPMSG.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall W32ExceptionHandler(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  v1 = RtlNtStatusToDosError(a1);
  UserSetLastError(v1, v2, v3, v4);
  return 1LL;
}
