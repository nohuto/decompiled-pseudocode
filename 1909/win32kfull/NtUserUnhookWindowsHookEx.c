/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x1C0054EC0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     zzzUnhookWindowsHookEx @ 0x1C0054F14 (zzzUnhookWindowsHookEx.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(unsigned __int64 a1)
{
  struct tagHOOK *v2; // rax
  __int64 v3; // rcx
  int v4; // ebx

  EnterCrit(0LL, 1LL);
  v2 = (struct tagHOOK *)HMValidateHandle(a1, 5);
  v4 = 0;
  if ( v2 )
    v4 = zzzUnhookWindowsHookEx(v2);
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
