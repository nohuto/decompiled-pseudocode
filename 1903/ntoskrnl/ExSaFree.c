/*
 * XREFs of ExSaFree @ 0x14016E310
 * Callers:
 *     ExpFreeFannedOutPushLock @ 0x14016E2F4 (ExpFreeFannedOutPushLock.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x140004580 (KeLeaveGuardedRegion.c)
 *     ExpSaAllocatorFree @ 0x14016E380 (ExpSaAllocatorFree.c)
 */

void __fastcall ExSaFree(unsigned int a1)
{
  __int64 v1; // r9
  unsigned int v2; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v4; // rcx

  v1 = (a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v2, v1);
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(ExSaPageGroupDescriptorArray + 8LL * (v2 - 2))
                             + 8 * (v1 ^ (unsigned int)(1 << v2))
                             + 8)
                 + 16LL);
  --CurrentThread->SpecialApcDisable;
  ExpSaAllocatorFree(v4);
  KeLeaveGuardedRegion();
}
