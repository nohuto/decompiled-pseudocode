/*
 * XREFs of CcIsFatalWriteError @ 0x14012E024
 * Callers:
 *     CcFlushCachePriv @ 0x140077160 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x14007E1E0 (CcWriteBehindInternal.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140123ADC (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x14027D810 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     CcReferenceSharedCacheMapFileObject @ 0x14007F7C8 (CcReferenceSharedCacheMapFileObject.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14007FEF4 (CcDereferenceSharedCacheMapFileObject.c)
 *     MmIsWriteErrorFatal @ 0x1400DFB94 (MmIsWriteErrorFatal.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

bool __fastcall CcIsFatalWriteError(__int64 a1, NTSTATUS a2)
{
  ULONG_PTR v5; // rax
  int v6; // ebx

  if ( a2 >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x14FDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = CcReferenceSharedCacheMapFileObject(a1);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 52LL) & 0x10;
  CcDereferenceSharedCacheMapFileObject(a1, v5);
  return MmIsWriteErrorFatal(1, v6, a2);
}
