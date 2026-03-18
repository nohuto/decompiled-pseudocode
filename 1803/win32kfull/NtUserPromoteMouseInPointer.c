/*
 * XREFs of NtUserPromoteMouseInPointer @ 0x1C01F3A50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsThreadMiPEnabled @ 0x1C00EBFAC (IsThreadMiPEnabled.c)
 */

__int64 NtUserPromoteMouseInPointer()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  _DWORD *v5; // rax

  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( IsThreadMiPEnabled(gptiCurrent) && (v5 = *(_DWORD **)(v1 + 1248)) != 0LL )
  {
    *v5 |= 2u;
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(5LL, v0);
  }
  UserSessionSwitchLeaveCrit(v1, v0, v2, v3);
  return v4;
}
