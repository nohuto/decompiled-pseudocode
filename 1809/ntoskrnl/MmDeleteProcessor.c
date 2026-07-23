/*
 * XREFs of MmDeleteProcessor @ 0x1402A6354
 * Callers:
 *     MmInitializeProcessor @ 0x140573A74 (MmInitializeProcessor.c)
 *     KiStartDynamicProcessor @ 0x140844028 (KiStartDynamicProcessor.c)
 *     KeStartAllProcessors @ 0x1409B6DAC (KeStartAllProcessors.c)
 * Callees:
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MiDeleteUltraThreadContext @ 0x1400E188C (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MmDeleteProcessor(__int64 a1)
{
  unsigned __int64 v1; // rdx
  void *v3; // rdi

  v1 = *(_QWORD *)(a1 + 24320);
  if ( v1 )
  {
    MiReleasePtes((__int64)&qword_14043C060, ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, 0x40u);
    *(_QWORD *)(a1 + 24320) = 0LL;
  }
  v3 = *(void **)(a1 + 23800);
  if ( v3 )
  {
    MiDeleteUltraThreadContext((__int64)v3 + 12352);
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 23800) = 0LL;
  }
}
