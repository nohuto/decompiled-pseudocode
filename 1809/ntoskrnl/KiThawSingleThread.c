/*
 * XREFs of KiThawSingleThread @ 0x1400F4A80
 * Callers:
 *     KeForceResumeProcess @ 0x1400F353C (KeForceResumeProcess.c)
 *     KeThawProcess @ 0x1400F493C (KeThawProcess.c)
 * Callees:
 *     KiResumeThread @ 0x1400F1CE0 (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 */

char __fastcall KiThawSingleThread(__int64 a1, __int64 a2, char a3)
{
  volatile signed __int32 *v3; // rdi
  char result; // al
  __int64 v8; // r8

  v3 = (volatile signed __int32 *)(a2 + 736);
  result = KiAcquireKobjectLockSafe(a2 + 736);
  if ( (*(_DWORD *)(a2 + 120) & 0x4000) != 0 || a3 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a2 + 120), 0xEu);
    if ( !*(_BYTE *)(a2 + 644) )
    {
      LOBYTE(v8) = a3;
      result = KiResumeThread(a2, a1, v8);
    }
  }
  _InterlockedAnd(v3, 0xFFFFFF7F);
  return result;
}
