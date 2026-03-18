/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x14012F230
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14001F590 (CcAcquireByteRangeForWrite.c)
 *     CcGetVacbMiss @ 0x1400216E0 (CcGetVacbMiss.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     CcSetFileSizesEx @ 0x14007CFC0 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapEx @ 0x1400AC030 (CcInitializeCacheMapEx.c)
 *     CcCopyBytesToUserBuffer @ 0x1400B1900 (CcCopyBytesToUserBuffer.c)
 *     CcPerformReadAhead @ 0x1400DDFA4 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x1400DFAAC (CcAsyncReadPrefetch.c)
 *     CcMdlWriteComplete2 @ 0x1400E1908 (CcMdlWriteComplete2.c)
 *     FsRtlCancelNotify @ 0x14011B0F0 (FsRtlCancelNotify.c)
 *     FsRtlNormalizeNtstatus @ 0x14013F950 (FsRtlNormalizeNtstatus.c)
 *     CcLockSystemCacheBuffer @ 0x140269A24 (CcLockSystemCacheBuffer.c)
 *     RawDispatch @ 0x14064B460 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A0220 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A0E80 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x140813E70 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1408140F0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1408148A0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140814B00 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsNtstatusExpected(NTSTATUS Exception)
{
  bool v1; // zf

  if ( Exception > -1073741676 )
  {
    if ( Exception == -1073741674 || Exception == -1073741654 || Exception == -1073740791 )
      return 0;
    v1 = Exception == -1073740768;
    goto LABEL_6;
  }
  if ( Exception != -1073741676 )
  {
    if ( Exception == 0x80000000 )
      return 1;
    if ( Exception > -2147483645 && Exception != -1073741819 && Exception != -1073741795 )
    {
      if ( Exception <= -1073741755 )
        return 1;
      if ( Exception > -1073741753 )
      {
        v1 = Exception == -1073741684;
LABEL_6:
        if ( !v1 )
          return 1;
      }
    }
  }
  return 0;
}
