/*
 * XREFs of NtUserIsMouseInPointerEnabled @ 0x1C0218FA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

__int64 NtUserIsMouseInPointerEnabled()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  EnterSharedCrit(0LL, 1LL);
  v1 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v0) + 424);
  v2 = (*(_DWORD *)(v1 + 820) >> 2) & 1;
  UserSessionSwitchLeaveCrit(v1, v3, v4, v5);
  return v2;
}
