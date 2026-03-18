/*
 * XREFs of MiInitializeRelocations @ 0x140A1EC28
 * Callers:
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     ExGenRandom @ 0x1400BC4C0 (ExGenRandom.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 MiInitializeRelocations()
{
  PVOID PoolWithTag; // rax
  PVOID v1; // rax
  _QWORD *v2; // rbx
  unsigned __int64 v3; // rcx
  int v4; // edi
  PVOID v5; // rax
  unsigned __int64 v6; // rcx
  PVOID v7; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10000uLL, 0x69526D4Du);
  if ( PoolWithTag )
  {
    qword_140464750 = 0x7FFFFLL;
    qword_140464758 = (__int64)PoolWithTag;
    memset(PoolWithTag, 0, 0x10000uLL);
    qword_140464760 = ExGenRandom(1) & 0x7FFFE;
    v1 = ExAllocatePoolWithTag(PagedPool, 0x500uLL, 0x69526D4Du);
    if ( v1 )
    {
      qword_1404647E8 = (__int64)v1;
      qword_1404647E0 = 10240LL;
      memset(v1, 0, 0x500uLL);
      qword_1404647F0 = (unsigned int)ExGenRandom(1) % 0x2800uLL;
      v2 = &unk_140464798;
      v3 = (unsigned __int64)(unsigned __int8)ExGenRandom(1) << 16;
      v4 = 0;
      qword_140464768 = v3 + 2013265920;
      qword_140464770 = v3 + 2013265920;
      qword_140464778 = v3 + 3758096384u;
      qword_140464780 = v3 + 3758096384u;
      while ( 1 )
      {
        v5 = ExAllocatePoolWithTag(PagedPool, 0x500uLL, 0x69526D4Du);
        if ( !v5 )
          break;
        *(v2 - 2) = 10240LL;
        *(v2 - 1) = v5;
        memset(v5, 0, 0x500uLL);
        ++v4;
        v6 = (unsigned __int64)(unsigned __int8)ExGenRandom(1) << 16;
        *v2 = v6 + 2013265920;
        v2[1] = v6 + 2013265920;
        v2[2] = v6 + 3758096384u;
        v2[3] = v6 + 3758096384u;
        v2 += 8;
        if ( v4 )
        {
          qword_1404647C8 = (unsigned __int8)ExGenRandom(1);
          v7 = ExAllocatePoolWithTag(PagedPool, 0x500uLL, 0x69526D4Du);
          if ( !v7 )
            return 0LL;
          qword_1404647D0 = 10240LL;
          qword_1404647D8 = (__int64)v7;
          memset(v7, 0, 0x500uLL);
          return 1LL;
        }
      }
    }
  }
  return 0LL;
}
