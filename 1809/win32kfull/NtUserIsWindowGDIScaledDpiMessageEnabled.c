/*
 * XREFs of NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C0219210
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowGDIScaledDpiMessageEnabledX @ 0x1C01D24E8 (IsWindowGDIScaledDpiMessageEnabledX.c)
 */

__int64 __fastcall NtUserIsWindowGDIScaledDpiMessageEnabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v6 = 0;
  v7 = v2;
  if ( v2 )
  {
    v11[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v11;
    v11[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v6 = IsWindowGDIScaledDpiMessageEnabledX(v2, v2);
    ThreadUnlock1(v9, v8);
  }
  UserSessionSwitchLeaveCrit(v3, v7, v4, v5);
  return v6;
}
