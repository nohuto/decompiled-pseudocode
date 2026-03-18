/*
 * XREFs of SetLastNtError @ 0x1C00BD67C
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C003B090 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C0118AD0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserSystemParametersInfo @ 0x1C011A8F0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall SetLastNtError(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx

  v1 = RtlNtStatusToDosError(a1);
  return UserSetLastError(v1, v2);
}
