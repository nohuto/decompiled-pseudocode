/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x1C00B4150
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00B41A4 (zzzUnhookWindowsHookEx.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(unsigned __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct tagHOOK *v5; // rax
  __int64 v6; // rcx
  int v7; // ebx

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 5;
  v5 = (struct tagHOOK *)HMValidateHandle(a1, v2, v3, v4);
  v7 = 0;
  if ( v5 )
    v7 = zzzUnhookWindowsHookEx(v5);
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
