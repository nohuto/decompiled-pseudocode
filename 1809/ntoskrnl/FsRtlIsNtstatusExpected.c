/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x14012F320
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14001F590 (CcAcquireByteRangeForWrite.c)
 *     CcGetVacbMiss @ 0x1400216E0 (CcGetVacbMiss.c)
 *     CcMapAndCopyInToCache @ 0x1400321D0 (CcMapAndCopyInToCache.c)
 *     CcSetFileSizesEx @ 0x14007CFB0 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     CcCopyBytesToUserBuffer @ 0x1400B1860 (CcCopyBytesToUserBuffer.c)
 *     CcPerformReadAhead @ 0x1400DE044 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x1400DFB4C (CcAsyncReadPrefetch.c)
 *     CcMdlWriteComplete2 @ 0x1400E19A8 (CcMdlWriteComplete2.c)
 *     FsRtlCancelNotify @ 0x14011B180 (FsRtlCancelNotify.c)
 *     FsRtlNormalizeNtstatus @ 0x14013FA70 (FsRtlNormalizeNtstatus.c)
 *     CcLockSystemCacheBuffer @ 0x140269D14 (CcLockSystemCacheBuffer.c)
 *     RawDispatch @ 0x14064C600 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406A14A0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406A2100 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x140815050 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1408152D0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x140815A80 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x140815CE0 (FsRtlPrepareMdlWriteDev.c)
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
