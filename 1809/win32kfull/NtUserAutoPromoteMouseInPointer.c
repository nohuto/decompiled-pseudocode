/*
 * XREFs of NtUserAutoPromoteMouseInPointer @ 0x1C0211C60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     IsThreadMiPEnabled @ 0x1C00D5D30 (IsThreadMiPEnabled.c)
 *     SetMiPPromotion @ 0x1C01CF1E0 (SetMiPPromotion.c)
 */

__int64 __fastcall NtUserAutoPromoteMouseInPointer(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( IsThreadMiPEnabled(gptiCurrent) && (v7 = *(_DWORD **)(v4 + 1256)) != 0LL && (*v7 & 1) != 0 )
  {
    SetMiPPromotion(v4, a1);
  }
  else
  {
    UserSetLastError(5LL, v3, v5, v6);
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v2;
}
