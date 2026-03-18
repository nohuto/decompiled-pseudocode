/*
 * XREFs of SetLastNtError @ 0x1C0142AA4
 * Callers:
 *     NtUserGetHDevName @ 0x1C00B63C0 (NtUserGetHDevName.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C00B8650 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserSystemParametersInfo @ 0x1C00BA130 (NtUserSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall SetLastNtError(NTSTATUS a1)
{
  ULONG v1; // eax

  v1 = RtlNtStatusToDosError(a1);
  return UserSetLastError(v1);
}
