/*
 * XREFs of SetLastNtError @ 0x1C0240D54
 * Callers:
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall SetLastNtError(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  v1 = RtlNtStatusToDosError(a1);
  return UserSetLastError(v1, v2, v3, v4);
}
