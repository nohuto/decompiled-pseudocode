/*
 * XREFs of KiFreezeSingleThread @ 0x1400EE8A0
 * Callers:
 *     KeStartThread @ 0x14001BC90 (KeStartThread.c)
 *     KeFreezeProcess @ 0x1400EE7A4 (KeFreezeProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiSuspendThread @ 0x1400AF3C4 (KiSuspendThread.c)
 */

char __fastcall KiFreezeSingleThread(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v2; // rsi
  char result; // al

  v2 = (volatile signed __int32 *)(a2 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736));
  _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0xEu);
  result = KiSuspendThread(a2, a1);
  if ( !result )
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
  _InterlockedAnd(v2, 0xFFFFFF7F);
  return result;
}
