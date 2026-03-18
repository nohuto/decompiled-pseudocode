/*
 * XREFs of NtUserUnhookWindowsHookEx @ 0x1C00B5210
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     zzzUnhookWindowsHookEx @ 0x1C00B5264 (zzzUnhookWindowsHookEx.c)
 */

__int64 __fastcall NtUserUnhookWindowsHookEx(__int64 a1)
{
  __int64 v2; // rdx
  struct tagHOOK *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 5;
  v3 = (struct tagHOOK *)HMValidateHandle(a1, v2);
  v8 = 0;
  if ( v3 )
    v8 = zzzUnhookWindowsHookEx(v3);
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
