/*
 * XREFs of NtUserOpenDesktop @ 0x1C00EEDA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     _OpenDesktop @ 0x1C00EEE38 (_OpenDesktop.c)
 */

__int64 __fastcall NtUserOpenDesktop(struct _OBJECT_ATTRIBUTES *a1)
{
  __int64 v1; // rbp
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v1 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v3 = OpenDesktop(a1, (__int64)&v13);
  if ( v3 < 0 )
  {
    v9 = RtlNtStatusToDosError(v3);
    UserSetLastError(v9, v10, v11, v12);
  }
  else
  {
    v1 = v13;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v1;
}
