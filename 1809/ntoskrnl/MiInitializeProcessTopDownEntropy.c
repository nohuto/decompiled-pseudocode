/*
 * XREFs of MiInitializeProcessTopDownEntropy @ 0x14067B028
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14067AA78 (MmInitializeProcessAddressSpace.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 */

_QWORD *__fastcall MiInitializeProcessTopDownEntropy(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rdi
  _QWORD *result; // rax

  v2 = *(_QWORD *)(a1 + 1152);
  if ( v2 > 0x100000000LL )
    v2 = 0LL;
  v4 = v2;
  v5 = (-(__int64)(a2 != 0) & 0xFFFFFFF600010000uLL) + 0x7FFFFFFF0000LL;
  if ( (*(_DWORD *)(a1 + 2080) & 0x40) == 0 )
  {
    if ( v2 )
      v4 = v2 - ((unsigned __int8)ExGenRandom(1) << 16);
    v5 -= (unsigned int)ExGenRandom(1) << 16;
  }
  result = *(_QWORD **)(a1 + 1296);
  if ( v4 )
    result[24] = v5;
  else
    v4 = v5;
  result[10] = v4;
  result[17] = v4;
  return result;
}
