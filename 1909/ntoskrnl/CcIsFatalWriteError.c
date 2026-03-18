/*
 * XREFs of CcIsFatalWriteError @ 0x14012E974
 * Callers:
 *     CcFlushCachePriv @ 0x1400773D0 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x14007E5E0 (CcWriteBehindInternal.c)
 *     CcNotifyOfMappedWriteComplete @ 0x140124764 (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x14027D570 (CcUnpinRepinnedBcb.c)
 * Callees:
 *     CcReferenceSharedCacheMapFileObject @ 0x14007FBC8 (CcReferenceSharedCacheMapFileObject.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x1400802F4 (CcDereferenceSharedCacheMapFileObject.c)
 *     MmIsWriteErrorFatal @ 0x1400BFA14 (MmIsWriteErrorFatal.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

bool __fastcall CcIsFatalWriteError(__int64 a1, NTSTATUS a2)
{
  ULONG_PTR v5; // rax
  int v6; // ebx

  if ( a2 >= 0 )
    return 0;
  if ( !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x14FFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = CcReferenceSharedCacheMapFileObject(a1);
  v6 = *(_DWORD *)(*(_QWORD *)(v5 + 8) + 52LL) & 0x10;
  CcDereferenceSharedCacheMapFileObject(a1, v5);
  return MmIsWriteErrorFatal(1, v6, a2);
}
