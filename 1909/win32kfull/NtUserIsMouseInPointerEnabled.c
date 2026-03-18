/*
 * XREFs of NtUserIsMouseInPointerEnabled @ 0x1C02307B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 NtUserIsMouseInPointerEnabled()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx
  unsigned int v3; // ebx

  EnterSharedCrit(0LL, 1LL);
  v2 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v0, v1) + 416);
  v3 = (*(_DWORD *)(v2 + 812) >> 2) & 1;
  UserSessionSwitchLeaveCrit(v2);
  return v3;
}
