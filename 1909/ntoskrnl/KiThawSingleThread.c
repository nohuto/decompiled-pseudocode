/*
 * XREFs of KiThawSingleThread @ 0x1400F1B9C
 * Callers:
 *     KeForceResumeProcess @ 0x1400F1960 (KeForceResumeProcess.c)
 *     KeThawProcess @ 0x1400F1A50 (KeThawProcess.c)
 * Callees:
 *     KiResumeThread @ 0x1400817C8 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 */

void __fastcall KiThawSingleThread(__int64 a1, __int64 a2, char a3)
{
  volatile signed __int32 *v3; // rdi
  __int64 v7; // r8

  v3 = (volatile signed __int32 *)(a2 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a2 + 736));
  if ( (*(_DWORD *)(a2 + 120) & 0x4000) != 0 || a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
    if ( !*(_BYTE *)(a2 + 644) )
    {
      LOBYTE(v7) = a3;
      KiResumeThread(a2, a1, v7);
    }
  }
  _InterlockedAnd(v3, 0xFFFFFF7F);
}
