/*
 * XREFs of PopQueuePowerRequestCallback @ 0x1400ED07C
 * Callers:
 *     PoClearPowerRequestInternal @ 0x1400EC820 (PoClearPowerRequestInternal.c)
 *     PoSetPowerRequestInternal @ 0x1400ECD64 (PoSetPowerRequestInternal.c)
 * Callees:
 *     PopQueuePowerRequestCallbacks @ 0x1400ED0B8 (PopQueuePowerRequestCallbacks.c)
 */

__int64 __fastcall PopQueuePowerRequestCallback(__int64 a1, int a2, char a3, char a4)
{
  __int64 v4; // r10
  __int64 (__fastcall **v5)(); // rdx
  __int64 result; // rax

  v4 = a2;
  v5 = &off_140424778;
  result = 2 * v4;
  if ( *(&off_140424778 + 2 * v4) )
  {
    LOBYTE(v5) = a4;
    *(_BYTE *)(v4 + a1 + 72) += a3 != 0 ? 1 : -1;
    return PopQueuePowerRequestCallbacks(a1, v5);
  }
  return result;
}
