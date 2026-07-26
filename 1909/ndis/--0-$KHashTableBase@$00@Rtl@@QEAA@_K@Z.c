/*
 * XREFs of ??0?$KHashTableBase@$00@Rtl@@QEAA@_K@Z @ 0x1C0108F04
 * Callers:
 *     ?ndisBindBuilderInitialize@@YAJXZ @ 0x1C01463F4 (-ndisBindBuilderInitialize@@YAJXZ.c)
 * Callees:
 *     ?AllocateBuckets@?$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z @ 0x1C0108F9C (-AllocateBuckets@-$KHashTableBase@$00@Rtl@@CAPEAX_KPEAX@Z.c)
 */

__int64 __fastcall Rtl::KHashTableBase<1>::KHashTableBase<1>(__int64 a1)
{
  __int64 v2; // rdi
  char *Buckets; // r8
  char v4; // cl
  unsigned __int64 v5; // rcx

  v2 = 8LL;
  Buckets = (char *)Rtl::KHashTableBase<1>::AllocateBuckets(0x40uLL);
  if ( !Buckets )
  {
    v2 = 1LL;
    Buckets = (char *)(a1 + 16);
  }
  if ( (((_DWORD)v2 - 1) & (unsigned int)v2) != 0 )
  {
    v4 = -1;
    do
    {
      ++v4;
      LODWORD(v2) = (unsigned int)v2 >> 1;
    }
    while ( (_DWORD)v2 );
    v2 = (unsigned int)(1 << v4);
  }
  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = Buckets;
  if ( (unsigned int)v2 > 0x4000000 )
    v2 = 0x4000000LL;
  v5 = (unsigned int)v2;
  *(_DWORD *)(a1 + 4) = (32 * v2) | 3;
  if ( Buckets > &Buckets[8 * v2] )
    v5 = 0LL;
  if ( v5 )
    memset64(Buckets, a1 | 1, v5);
  return a1;
}
