/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x1C00D7AC0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00D7B08 (zzzUnhookWindowsHookEx.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(__int64 a1)
{
  struct tagHOOK *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx

  EnterCrit(0LL, 1LL);
  v2 = (struct tagHOOK *)HMValidateHandle(a1, 5);
  v7 = 0;
  if ( v2 )
    v7 = zzzUnhookWindowsHookEx(v2);
  UserSessionSwitchLeaveCrit(v4, v3, v5, v6);
  return v7;
}
