/*
 * XREFs of CcUnpinRepinnedBcb @ 0x140269FC0
 * Callers:
 *     <none>
 * Callees:
 *     MmFlushSection @ 0x14001FFD8 (MmFlushSection.c)
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     CcDereferenceSharedCacheMapFileObject @ 0x140022EF8 (CcDereferenceSharedCacheMapFileObject.c)
 *     CcSetDirtyPinnedData @ 0x1400231C0 (CcSetDirtyPinnedData.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     CcReferenceSharedCacheMapFileObject @ 0x14007DF5C (CcReferenceSharedCacheMapFileObject.c)
 *     MmSetAddressRangeModifiedEx @ 0x140086770 (MmSetAddressRangeModifiedEx.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     CcIsFatalWriteError @ 0x14012DA80 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushSection @ 0x140187600 (CcPerfLogFlushSection.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     CcPostDeferredWrites @ 0x140269BA0 (CcPostDeferredWrites.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall CcUnpinRepinnedBcb(PVOID Bcb, BOOLEAN WriteThrough, PIO_STATUS_BLOCK IoStatus)
{
  __int64 v6; // rdi
  __int64 Partition; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rdx
  ULONG_PTR v11; // r15

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x206EuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = *((_QWORD *)Bcb + 22);
  Partition = CcGetPartition((_QWORD *)v6, WriteThrough, (__int64)IoStatus);
  IoStatus->Status = 0;
  v9 = Partition;
  if ( WriteThrough )
  {
    if ( (*(_DWORD *)(v6 + 152) & 0x200) != 0 )
      ExAcquireResourceExclusiveLite((PERESOURCE)((char *)Bcb + 72), 1u);
    if ( *((_BYTE *)Bcb + 2) )
    {
      MmSetAddressRangeModifiedEx(*((_QWORD *)Bcb + 23), *((unsigned int *)Bcb + 1));
      LOBYTE(v10) = 1;
      CcUnpinFileDataEx((char *)Bcb, v10, 2);
      v11 = CcReferenceSharedCacheMapFileObject(v6);
      if ( (xmmword_140542350 & 0x20000) != 0 )
        CcPerfLogFlushSection(0LL, v6, (__int64 *)Bcb + 1, *((_DWORD *)Bcb + 1), 1);
      MmFlushSection(*(_QWORD *)(v11 + 40), (va_list)Bcb + 8, *((unsigned int *)Bcb + 1));
      CcDereferenceSharedCacheMapFileObject(v6, v11);
      if ( IoStatus->Status < 0 && !CcIsFatalWriteError(*((_QWORD *)Bcb + 22), IoStatus->Status) )
        CcSetDirtyPinnedData(Bcb, 0LL);
      CcUnpinFileDataEx((char *)Bcb, 0LL, 0);
      if ( *(_QWORD *)(v9 + 744) != v9 + 744 )
        CcPostDeferredWrites(v9);
    }
    else
    {
      CcUnpinFileDataEx((char *)Bcb, 0LL, 0);
    }
  }
  else
  {
    LOBYTE(v8) = 1;
    CcUnpinFileDataEx((char *)Bcb, v8, 0);
    IoStatus->Status = 0;
  }
}
