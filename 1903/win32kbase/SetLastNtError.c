/*
 * XREFs of SetLastNtError @ 0x1C00BF71C
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C004DE80 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C011B440 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserSystemParametersInfo @ 0x1C011D260 (NtUserSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall SetLastNtError(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx

  v1 = RtlNtStatusToDosError(a1);
  return UserSetLastError(v1, v2);
}
