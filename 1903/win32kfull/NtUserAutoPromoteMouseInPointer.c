/*
 * XREFs of NtUserAutoPromoteMouseInPointer @ 0x1C0229CA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     IsThreadMiPEnabled @ 0x1C010B2F8 (IsThreadMiPEnabled.c)
 *     SetMiPPromotion @ 0x1C01E3AC0 (SetMiPPromotion.c)
 */

__int64 __fastcall NtUserAutoPromoteMouseInPointer(int a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rax
  __int64 v8; // rcx

  v2 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( IsThreadMiPEnabled(gptiCurrent) && (v7 = *(_DWORD **)(v4 + 1280)) != 0LL && (*v7 & 1) != 0 )
  {
    SetMiPPromotion(v4, a1);
  }
  else
  {
    UserSetLastError(5LL, v3, v5, v6);
    v2 = 0LL;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v2;
}
