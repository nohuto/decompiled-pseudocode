/*
 * XREFs of MmFreeSystemCacheReserveView @ 0x14085028C
 * Callers:
 *     CcUninitializePartitionVacbs @ 0x14026B9F4 (CcUninitializePartitionVacbs.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteAddress @ 0x140065DD8 (MiGetPteAddress.c)
 *     MiReleaseSystemCacheView @ 0x1400795A0 (MiReleaseSystemCacheView.c)
 *     MiGetSystemCacheReverseMap @ 0x1400ADE90 (MiGetSystemCacheReverseMap.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

void __fastcall MmFreeSystemCacheReserveView(ULONG_PTR BugCheckParameter3)
{
  unsigned __int64 PteAddress; // rbx
  unsigned __int64 v3; // rsi
  ULONG_PTR SystemCacheReverseMap; // rax
  __int16 v5; // ax
  ULONG_PTR BugCheckParameter4; // r9
  ULONG_PTR v7; // r10

  PteAddress = MiGetPteAddress(BugCheckParameter3);
  v3 = PteAddress + 512;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(BugCheckParameter3);
  if ( *(_QWORD *)(SystemCacheReverseMap + 16) )
    KeBugCheckEx(0x1Au, 0x784uLL, SystemCacheReverseMap, BugCheckParameter3, 0LL);
  do
  {
    v5 = MI_READ_PTE_LOCK_FREE(PteAddress);
    if ( (v5 & 1) != 0 || (v5 & 0x400) != 0 )
      KeBugCheckEx(0x1Au, 0x785uLL, v7, BugCheckParameter3, BugCheckParameter4);
    PteAddress += 8LL;
  }
  while ( PteAddress < v3 );
  MiReleaseSystemCacheView(PteAddress - 512);
}
