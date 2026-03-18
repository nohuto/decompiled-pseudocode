/*
 * XREFs of ?CheckCanonicalForegroundAccess@@YA_NXZ @ 0x1C00D7EC8
 * Callers:
 *     NtUserCanBrokerForceForeground @ 0x1C0005560 (NtUserCanBrokerForceForeground.c)
 *     ?CanSetForegroundWindow@@YA?AW4ForegroundRightCheck@@PEBUtagWND@@@Z @ 0x1C00D7AF4 (-CanSetForegroundWindow@@YA-AW4ForegroundRightCheck@@PEBUtagWND@@@Z.c)
 *     NtUserSetWindowArrangement @ 0x1C021D560 (NtUserSetWindowArrangement.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     CanForceForeground @ 0x1C00B3040 (CanForceForeground.c)
 *     IsForegroundLocked @ 0x1C00D7F44 (IsForegroundLocked.c)
 */

bool __fastcall CheckCanonicalForegroundAccess(__int64 a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // ebx

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  LOBYTE(v6) = 0;
  if ( (unsigned int)IsForegroundLocked(v4, v3, ThreadWin32Thread) && *(_QWORD *)(v5 + 424) != gppiInputProvider )
    return 0;
  if ( (*(_DWORD *)(v5 + 488) & 0x2C) != 0 || CanForceForeground(*(_QWORD *)(v5 + 424)) )
    return 1;
  if ( !gptiForeground )
    return 0;
  if ( *(_DWORD *)(gptiForeground + 632LL) <= 0x400u )
    v6 = *(_DWORD *)(gptiForeground + 648LL);
  return (v6 & 0x40) != 0;
}
