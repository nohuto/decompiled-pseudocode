/*
 * XREFs of MmInitializeProcessor @ 0x14059F6C4
 * Callers:
 *     KiStartDynamicProcessor @ 0x14087DF0C (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409EDC20 (KeStartAllProcessors.c)
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     MiReservePtes @ 0x140030600 (MiReservePtes.c)
 *     MiCreateUltraThreadContext @ 0x1400F8D40 (MiCreateUltraThreadContext.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmDeleteProcessor @ 0x1402BD60C (MmDeleteProcessor.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
  v2 = MiReservePtes((__int64)&qword_1404666C0, (unsigned __int64 *)0x40);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 24320) = (__int64)(v2 << 25) >> 16;
    *(_DWORD *)(a1 + 23580) = dword_1404657B0;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30C8uLL, 0x20206D4Du);
    v4 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x30C8uLL);
      v4[6] = 512;
      *(_QWORD *)v4 = v4 + 8;
      *((_QWORD *)v4 + 1) = v4 + 1038;
      *((_QWORD *)v4 + 2) = v4 + 2062;
      v5 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 146LL);
      v6 = qword_1404681D0 + 1984 * v5;
      *(_DWORD *)(a1 + 23572) = *(unsigned __int8 *)(v6 + 1844);
      *(_DWORD *)(a1 + 23576) = *(_DWORD *)(v6 + 1840);
      v7 = __rdtsc();
      if ( (unsigned int)MiCreateUltraThreadContext(
                           (__int64)(v4 + 3088),
                           ((_DWORD)v5 << byte_14046574D) | (unsigned int)(v7 & (unsigned __int16)((1 << byte_14046574E)
                                                                                                 - 1)),
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
