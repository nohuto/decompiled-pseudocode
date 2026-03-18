/*
 * XREFs of PpmSetPlatformIdleDurationHint @ 0x1402F0110
 * Callers:
 *     PoIdle @ 0x140031020 (PoIdle.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1400052B0 (KeQueryActiveProcessorCountEx.c)
 */

ULONG __fastcall PpmSetPlatformIdleDurationHint(unsigned __int64 a1)
{
  ULONG result; // eax
  __int64 v3; // rdx

  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( result != 1 )
  {
    v3 = 0xFFFFFFFFFFFFLL;
    if ( a1 <= 0xFFFFFFFFFFFFLL )
      v3 = a1;
    _InterlockedExchange64(&PpmPlatformIdleHint, (unsigned __int16)--result | (unsigned __int64)(v3 << 16));
  }
  return result;
}
