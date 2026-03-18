/*
 * XREFs of ?CheckLegacyForegroundAccess@@YAHXZ @ 0x1C006DC70
 * Callers:
 *     NtUserCanBrokerForceForeground @ 0x1C0006380 (NtUserCanBrokerForceForeground.c)
 *     CheckForegroundRight @ 0x1C006DE0C (CheckForegroundRight.c)
 *     NtUserSetWindowArrangement @ 0x1C01F5B90 (NtUserSetWindowArrangement.c)
 * Callees:
 *     CanForceForeground @ 0x1C0012630 (CanForceForeground.c)
 *     IsForegroundLocked @ 0x1C006DCE8 (IsForegroundLocked.c)
 */

_BOOL8 __fastcall CheckLegacyForegroundAccess(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v3; // ebx

  LOBYTE(v3) = 0;
  if ( (unsigned int)IsForegroundLocked(a1, a2, gptiCurrent) && *(_QWORD *)(v2 + 416) != gppiInputProvider )
    return 0LL;
  if ( (*(_DWORD *)(v2 + 480) & 0x2C) != 0 || (unsigned int)CanForceForeground(*(_QWORD *)(v2 + 416)) )
    return 1LL;
  if ( !gptiForeground )
    return 0LL;
  if ( *(_DWORD *)(gptiForeground + 624LL) <= 0x400u )
    v3 = *(_DWORD *)(gptiForeground + 640LL);
  return (v3 & 0x40) != 0;
}
