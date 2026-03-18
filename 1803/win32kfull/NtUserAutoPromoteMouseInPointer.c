/*
 * XREFs of NtUserAutoPromoteMouseInPointer @ 0x1C01EBC60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     IsThreadMiPEnabled @ 0x1C00EBFAC (IsThreadMiPEnabled.c)
 *     SetMiPPromotion @ 0x1C01ABFDC (SetMiPPromotion.c)
 */

__int64 __fastcall NtUserAutoPromoteMouseInPointer(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( IsThreadMiPEnabled(gptiCurrent) && (v5 = *(_DWORD **)(v4 + 1248)) != 0LL && (*v5 & 1) != 0 )
  {
    SetMiPPromotion(v4, a1);
  }
  else
  {
    UserSetLastError(5LL, v3);
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v2;
}
