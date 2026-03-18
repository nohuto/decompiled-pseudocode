/*
 * XREFs of MiInitializeSystemPtes @ 0x1409EE400
 * Callers:
 *     MiInitNucleus @ 0x1409F3DB8 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x140030210 (MiReservePtes.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     MiObtainSystemVa @ 0x1400AAF7C (MiObtainSystemVa.c)
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407400C8 (MiInitializeSystemWorkingSetList.c)
 *     MiInitializeDynamicBitmap @ 0x1407401E8 (MiInitializeDynamicBitmap.c)
 *     MiInitializeDynamicRegion @ 0x1409EE8B4 (MiInitializeDynamicRegion.c)
 *     MiInitializePteInfo @ 0x1409EEF28 (MiInitializePteInfo.c)
 */

__int64 MiInitializeSystemPtes()
{
  __int64 v0; // rbp
  char *AnyMultiplexedVm; // rbx
  char *v2; // rax
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // r8

  v0 = qword_140467570;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(3);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)AnyMultiplexedVm, 5, 0LL) )
    return 0LL;
  v2 = MiGetAnyMultiplexedVm(4);
  if ( !(unsigned int)MiInitializeSystemWorkingSetList(&MiSystemPartition, (__int64)v2, 6, 0LL) )
    return 0LL;
  KeGetCurrentPrcb()->PteBitCache = -1LL;
  v3 = ((dword_14057118C & 2) << 8) | 0x101;
  v4 = v0 + ((0x800000 - (v3 + (ExGenRandom(1) & 0x3FFF))) << 21);
  qword_140465C60 = v4;
  if ( !(unsigned int)MiInitializePteInfo(
                        (unsigned int)&qword_1404669C0,
                        9,
                        (int)v4 + 0x100000,
                        9,
                        v0,
                        0x100000000000LL,
                        1) )
    return 0LL;
  dword_1404669D8 |= 1u;
  qword_140466A10 = qword_140466628;
  AnyMultiplexedVm[184] = AnyMultiplexedVm[184] & 0xF8 | 5;
  if ( (dword_14057118C & 2) != 0
    && (unsigned int)MiInitializeDynamicBitmap(&qword_140466618, v4 + 537919488, 0x200000000LL, 9) != 1 )
  {
    dword_14057118C &= ~2u;
  }
  if ( (unsigned int)MiInitializeDynamicRegion(9LL, v0, 0x100000000000LL)
    && (MiObtainSystemVa(v3, 13LL, v5),
        qword_140466708 = 0LL,
        (qword_140466728 = MiReservePtes((__int64)&qword_1404669C0, (unsigned __int64 *)1)) != 0) )
  {
    return 1LL;
  }
  else
  {
    return 0LL;
  }
}
