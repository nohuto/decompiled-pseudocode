/*
 * XREFs of MiInitializeSystemPtes @ 0x1409B68BC
 * Callers:
 *     MiInitNucleus @ 0x1409B9108 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x140028884 (MiGetAnyMultiplexedVm.c)
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     MiObtainSystemVa @ 0x1400F6964 (MiObtainSystemVa.c)
 *     MiSystemVaToDynamicBitmap @ 0x1400F7200 (MiSystemVaToDynamicBitmap.c)
 *     MiBuildDynamicRegion @ 0x14017E8E0 (MiBuildDynamicRegion.c)
 *     MiInitializeDynamicBitmap @ 0x140715720 (MiInitializeDynamicBitmap.c)
 *     MiInitializeSystemWorkingSetList @ 0x140715B48 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializePteInfo @ 0x1409B74C8 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemPtes()
{
  __int64 v0; // rbp
  char *AnyMultiplexedVm; // rbx
  char *v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 *v5; // rax

  v0 = qword_14043BA80;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 5, 0LL) )
    return 0LL;
  v2 = MiGetAnyMultiplexedVm(4);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)v2, 6, 0LL) )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v3 = ((dword_14054017C & 2) << 8) | 0x101;
  v4 = v0 + ((0x800000 - (v3 + (ExGenRandom(1) & 0x3FFF))) << 21);
  qword_14043A220 = v4;
  if ( !(unsigned int)MiInitializePteInfo(
                        (unsigned int)&qword_14043AFA0,
                        9,
                        (int)v4 + 0x100000,
                        9,
                        v0,
                        0x100000000000LL,
                        1) )
    return 0LL;
  dword_14043AFB8 |= 1u;
  qword_14043AFF0 = qword_14043ABA8;
  AnyMultiplexedVm[184] = AnyMultiplexedVm[184] & 0xF8 | 5;
  if ( (dword_14054017C & 2) != 0
    && (unsigned int)MiInitializeDynamicBitmap(&qword_14043AB98, v4 + 537919488, 0x200000000LL, 9) != 1 )
  {
    dword_14054017C &= ~2u;
  }
  v5 = MiSystemVaToDynamicBitmap(9);
  if ( !(unsigned int)MiBuildDynamicRegion(v5, v0, 0x100000000000uLL) )
    return 0LL;
  MiObtainSystemVa(v3, 0xEu);
  qword_14043AC88 = 0LL;
  return 1LL;
}
