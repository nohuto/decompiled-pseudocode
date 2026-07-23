/*
 * XREFs of MiFreeBootDriverPage @ 0x1409B93FC
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x1409B8C6C (MiReloadBootLoadedDrivers.c)
 *     MiRelocateBootImage @ 0x1409B92CC (MiRelocateBootImage.c)
 * Callees:
 *     MiReturnSystemVa @ 0x14002840C (MiReturnSystemVa.c)
 *     MiPteInShadowRange @ 0x14003D740 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1400B3A30 (MiInsertTbFlushEntry.c)
 *     MiLockAndDecrementShareCount @ 0x140118118 (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x140120F40 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140120FA0 (MiPteHasShadow.c)
 */

__int64 __fastcall MiFreeBootDriverPage(unsigned __int64 a1, __int64 a2, int a3)
{
  ULONG_PTR v5; // rbx
  __int64 v6; // rdx
  int v7; // r8d
  ULONG_PTR v8; // r11
  __int64 result; // rax
  unsigned __int64 v10; // rcx
  bool v11; // zf

  MiInsertTbFlushEntry(a2, (__int64)(a1 << 25) >> 16, 1LL, 0);
  v5 = 48
     * (*(_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(a1) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0xFFFFFFFFFLL)
     - 0x58000000000LL;
  if ( MiPteInShadowRange(a1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v7 = 1;
      if ( HIBYTE(word_14043B26C) )
        goto LABEL_2;
      v11 = (v6 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000000LL) == 0 )
        goto LABEL_2;
      v11 = (v6 & 1) == 0;
    }
    if ( !v11 )
      v6 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *(_QWORD *)a1 = v6;
  if ( v7 )
    MiWritePteShadow(a1, v6);
  result = MiLockAndDecrementShareCount(v8, 1);
  if ( a3 )
  {
    MiLockAndDecrementShareCount(v5, 0);
    result = *(_QWORD *)(v5 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( result == 1 )
    {
      v10 = (__int64)(*(_QWORD *)(v5 + 8) << 25) >> 16 << 25 >> 16;
      return MiReturnSystemVa(v10, v10 + 0x200000, 12);
    }
  }
  return result;
}
