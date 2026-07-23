/*
 * XREFs of MiIssueNoPtesBugcheck @ 0x1402AD9F8
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14005C0C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiBuildPagedPool @ 0x1409B7A44 (MiBuildPagedPool.c)
 * Callees:
 *     MmGetNumberOfFreeSystemPtes @ 0x1400F0DCC (MmGetNumberOfFreeSystemPtes.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiGetHighestPteConsumer @ 0x1402CDB68 (MiGetHighestPteConsumer.c)
 */

void __fastcall __noreturn MiIssueNoPtesBugcheck(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v1; // rbx
  ULONG_PTR NumberOfFreeSystemPtes; // r9
  ULONG_PTR v3; // r11
  ULONG_PTR BugCheckParameter2a; // [rsp+48h] [rbp+10h] BYREF

  v1 = (unsigned int)BugCheckParameter2;
  MiGetHighestPteConsumer(&BugCheckParameter2a);
  NumberOfFreeSystemPtes = (unsigned int)MmGetNumberOfFreeSystemPtes();
  if ( v3 )
    KeBugCheckEx(0xD8u, v3, BugCheckParameter2a, NumberOfFreeSystemPtes, 0LL);
  KeBugCheckEx(0x3Fu, 0LL, v1, NumberOfFreeSystemPtes, 0LL);
}
