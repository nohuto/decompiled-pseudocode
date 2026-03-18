/*
 * XREFs of KiFlushRangeAllCaches @ 0x1402AA920
 * Callers:
 *     KeFlushIoBuffers @ 0x14011CE50 (KeFlushIoBuffers.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     KeInvalidateRangeAllCaches @ 0x1402ABD00 (KeInvalidateRangeAllCaches.c)
 */

void __fastcall KiFlushRangeAllCaches(ULONG_PTR BugCheckParameter4, PVOID BaseAddress, ULONG Length, char a4, char a5)
{
  if ( a5 && a4 )
  {
    if ( ((KeLargestCacheLine - 1) & (unsigned int)BaseAddress) != 0 )
      KeBugCheckEx(0xE6u, 0x1FuLL, 4uLL, (ULONG_PTR)BaseAddress, BugCheckParameter4);
    if ( ((KeLargestCacheLine - 1) & Length) != 0 )
      KeBugCheckEx(0xE6u, 0x1FuLL, 5uLL, Length, BugCheckParameter4);
  }
  if ( KeGetCurrentIrql() == 15 )
    KeBugCheckEx(0x55u, 0x64uLL, 0xBADuLL, 1uLL, 0LL);
  KeInvalidateRangeAllCaches(BaseAddress, Length);
}
