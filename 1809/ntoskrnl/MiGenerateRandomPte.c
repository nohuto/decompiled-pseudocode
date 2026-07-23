/*
 * XREFs of MiGenerateRandomPte @ 0x1401311EC
 * Callers:
 *     MiAgeWorkingSet @ 0x14006DE40 (MiAgeWorkingSet.c)
 *     MiTrimWorkingSet @ 0x140130F08 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x1401312D0 (MiSimpleAging.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     MiInitializeWalkBounds @ 0x14013126C (MiInitializeWalkBounds.c)
 */

unsigned __int64 __fastcall MiGenerateRandomPte(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  MiInitializeWalkBounds(a1, v8);
  v1 = (unsigned int)ExGenRandom(1);
  v2 = (unsigned int)ExGenRandom(1);
  v3 = v8[1] - v8[0] + 1LL;
  v4 = v1 | (v2 << 32);
  if ( _BitScanReverse64((unsigned __int64 *)&v6, v3) )
    v3 = 1LL << v6;
  return (((v8[0] + (v4 & (v3 - 1))) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
}
