/*
 * XREFs of MiInitializeSystemPtes @ 0x1409EE318
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     MiGetAnyMultiplexedVm @ 0x1400CA970 (MiGetAnyMultiplexedVm.c)
 *     MiObtainSystemVa @ 0x1400E648C (MiObtainSystemVa.c)
 *     MiInitializeSystemWorkingSetList @ 0x140741FC8 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x1407420E8 (MiInitializeDynamicBitmap.c)
 *     MiInitializeDynamicRegion @ 0x1409EE7CC (MiInitializeDynamicRegion.c)
 *     MiInitializePteInfo @ 0x1409EEE40 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemPtes()
{
  __int64 v0; // rbp
  char *AnyMultiplexedVm; // rbx
  char *v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // r8

  v0 = qword_140467270;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 5, 0LL) )
    return 0LL;
  v2 = MiGetAnyMultiplexedVm(4);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)v2, 6, 0LL) )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v3 = ((dword_14057118C & 2) << 8) | 0x101;
  v4 = v0 + ((0x800000 - (v3 + (ExGenRandom(1) & 0x3FFF))) << 21);
  qword_140465960 = v4;
  if ( !(unsigned int)MiInitializePteInfo(
                        (unsigned int)&qword_1404666C0,
                        9,
                        (int)v4 + 0x100000,
                        9,
                        v0,
                        0x100000000000LL,
                        1) )
    return 0LL;
  dword_1404666D8 |= 1u;
  qword_140466710 = qword_140466328;
  AnyMultiplexedVm[184] = AnyMultiplexedVm[184] & 0xF8 | 5;
  if ( (dword_14057118C & 2) != 0
    && (unsigned int)MiInitializeDynamicBitmap(&qword_140466318, v4 + 537919488, 0x200000000LL, 9) != 1 )
  {
    dword_14057118C &= ~2u;
  }
  if ( (unsigned int)MiInitializeDynamicRegion(9LL, v0, 0x100000000000LL)
    && (MiObtainSystemVa(v3, 13LL, v5),
        qword_140466408 = 0LL,
        (qword_140466428 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)1)) != 0) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
