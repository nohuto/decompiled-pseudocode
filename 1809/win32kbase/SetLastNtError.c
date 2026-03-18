/*
 * XREFs of SetLastNtError @ 0x1C0165E74
 * Callers:
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00F0D20 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserSystemParametersInfo @ 0x1C00F20E0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall SetLastNtError(NTSTATUS a1)
{
  ULONG v1; // eax

  v1 = RtlNtStatusToDosError(a1);
  return UserSetLastError(v1);
}
