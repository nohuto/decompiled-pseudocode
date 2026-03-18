/*
 * XREFs of ?CommitSlot@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@AEAA_NI@Z @ 0x1C020FAFC
 * Callers:
 *     ?Allocate@?$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAPEAXXZ @ 0x1C020F850 (-Allocate@-$CSectionBitmapAllocator@$0GAAA@$0GA@@NSInstrumentation@@QEAAPEAXXZ.c)
 * Callees:
 *     memset @ 0x1C0168440 (memset.c)
 */

char __fastcall NSInstrumentation::CSectionBitmapAllocator<24576,96>::CommitSlot(__int64 a1, unsigned int a2)
{
  unsigned int v3; // ecx
  void *v4; // rdi

  v3 = *(_DWORD *)(a1 + 36);
  if ( v3 < 6 && a2 / 0x2A >= v3 )
  {
    v4 = (void *)(((a2 / 0x2A) << 12) + (*(_QWORD *)(a1 + 8) ^ *(_QWORD *)(a1 + 16)));
    if ( (int)MmCommitSessionMappedView(v4, 4096LL) < 0 )
      return 0;
    memset(v4, 0, 0x1000uLL);
    ++*(_DWORD *)(a1 + 36);
  }
  return 1;
}
