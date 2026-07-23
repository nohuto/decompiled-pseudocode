/*
 * XREFs of MmInitializeProcessor @ 0x140573A74
 * Callers:
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409B6DAC (KeStartAllProcessors.c)
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x14005C890 (MiReservePtes.c)
 *     MiCreateUltraThreadContext @ 0x14013CBE4 (MiCreateUltraThreadContext.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MmDeleteProcessor @ 0x1402A6354 (MmDeleteProcessor.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmInitializeProcessor(__int64 a1)
{
  ULONG_PTR v2; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rax

  if ( *(_DWORD *)(a1 + 36) )
    *(_QWORD *)(a1 + 25264) = -1LL;
  v2 = MiReservePtes((__int64)&qword_14043C060, (unsigned __int64 *)0x40);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 24320) = (__int64)(v2 << 25) >> 16;
    *(_DWORD *)(a1 + 23580) = dword_14043B148;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30C8uLL, 0x20206D4Du);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x30C8uLL);
      v4[6] = 512;
      *(_QWORD *)v4 = v4 + 8;
      *((_QWORD *)v4 + 1) = v4 + 1038;
      *((_QWORD *)v4 + 2) = v4 + 2062;
      v4[3120] = 0;
      v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 146LL);
      v6 = qword_14043DA10 + 1984 * v5;
      *(_DWORD *)(a1 + 23572) = *(unsigned __int8 *)(v6 + 1820);
      *(_DWORD *)(a1 + 23576) = *(_DWORD *)(v6 + 1816);
      v7 = __rdtsc();
      if ( (unsigned int)MiCreateUltraThreadContext(
                           (__int64)(v4 + 3088),
                           (unsigned __int16)((_WORD)v5 << byte_14043B109) | (unsigned int)(v7 & (unsigned __int16)((1 << byte_14043B10A) - 1)),
                           8) )
      {
        *(_QWORD *)(a1 + 23800) = v4;
        return 1LL;
      }
      ExFreePoolWithTag(v4, 0);
    }
    MmDeleteProcessor(a1);
  }
  return 0LL;
}
