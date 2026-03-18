/*
 * XREFs of CcUnpinRepinnedBcb @ 0x14027D810
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     MmSetAddressRangeModifiedEx @ 0x14005E4D0 (MmSetAddressRangeModifiedEx.c)
 *     MmFlushSection @ 0x140077AD0 (MmFlushSection.c)
 *     CcUnpinFileDataEx @ 0x140078D40 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x140079760 (CcSetDirtyPinnedData.c)
 *     CcGetPartition @ 0x14007A340 (CcGetPartition.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14007F7C8 (CcReferenceSharedCacheMapFileObject.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x14007FEF4 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcIsFatalWriteError @ 0x14012E024 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushSection @ 0x1401585FC (CcPerfLogFlushSection.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x14027D3F0 (CcPostDeferredWrites.c)
 */

void __stdcall CcUnpinRepinnedBcb(PVOID Bcb, BOOLEAN WriteThrough, PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rdi
  __int64 Partition; // rax
  __int64 v8; // rbp
  __int64 v9; // r9
  ULONG_PTR v10; // r15

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x1FADuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = *((_QWORD *)Bcb + 22);
  Partition = CcGetPartition((_QWORD *)v6);
  IoStatus->Status = 0;
  v8 = Partition;
  if ( WriteThrough )
  {
    if ( (*(_DWORD *)(v6 + 152) & 0x200) != 0 )
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Bcb + 72), 1u);
    if ( *((_BYTE *)Bcb + 2) )
    {
      MmSetAddressRangeModifiedEx(*((_QWORD *)Bcb + 23), *((unsigned int *)Bcb + 1));
      CcUnpinFileDataEx((char *)Bcb, 1, 2);
      v10 = CcReferenceSharedCacheMapFileObject(v6);
      if ( (xmmword_140572410 & 0x20000) != 0 )
        CcPerfLogFlushSection(0LL, v6, (__int64 *)Bcb + 1, *((_DWORD *)Bcb + 1), 1);
      MmFlushSection(*(_QWORD *)(v10 + 40), (__int64 *)Bcb + 1, *((unsigned int *)Bcb + 1), v9, IoStatus, 1u);
      CcDereferenceSharedCacheMapFileObject(v6, v10);
      if ( IoStatus->Status < 0 && !CcIsFatalWriteError(*((_QWORD *)Bcb + 22), IoStatus->Status) )
        CcSetDirtyPinnedData(Bcb, 0LL);
      CcUnpinFileDataEx((char *)Bcb, 0, 0);
      if ( *(_QWORD *)(v8 + 744) != v8 + 744 )
        CcPostDeferredWrites(v8);
    }
    else
    {
      CcUnpinFileDataEx((char *)Bcb, 0, 0);
    }
  }
  else
  {
    CcUnpinFileDataEx((char *)Bcb, 1, 0);
    IoStatus->Status = 0;
  }
}
