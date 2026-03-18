/*
 * XREFs of MmFreeSystemCacheReserveView @ 0x14088A900
 * Callers:
 *     CcUninitializePartitionVacbs @ 0x14027F010 (CcUninitializePartitionVacbs.c)
 * Callees:
 *     MiGetPteAddress @ 0x140057738 (MiGetPteAddress.c)
 *     MiReleaseSystemCacheView @ 0x1400700C0 (MiReleaseSystemCacheView.c)
 *     MiGetSystemCacheReverseMap @ 0x140075F40 (MiGetSystemCacheReverseMap.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400A5D60 (MI_READ_PTE_LOCK_FREE.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __fastcall MmFreeSystemCacheReserveView(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdi
  unsigned __int64 v2; // r11
  ULONG_PTR SystemCacheReverseMap; // rax
  unsigned __int64 v4; // r10
  ULONG_PTR v5; // r11
  ULONG_PTR v6; // rbx
  __int16 v7; // ax
  __int64 v8; // rdx
  ULONG_PTR BugCheckParameter4; // r9
  __int64 v10; // r10
  ULONG_PTR v11; // r11

  v1 = MiGetPteAddress(a1) + 512;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v2);
  v6 = SystemCacheReverseMap;
  if ( *(_QWORD *)(SystemCacheReverseMap + 16) )
    KeBugCheckEx(0x1Au, 0x784uLL, SystemCacheReverseMap, v5, 0LL);
  do
  {
    v7 = MI_READ_PTE_LOCK_FREE(v4);
    if ( (v7 & 1) != 0 || (v7 & 0x400) != 0 )
      KeBugCheckEx(0x1Au, 0x785uLL, v6, v11, BugCheckParameter4);
    v4 = v10 + 8;
  }
  while ( v4 < v1 );
  MiReleaseSystemCacheView(v4 - 512, v8);
}
