/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x14012EF30
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 *     CcMapAndCopyInToCache @ 0x14006D870 (CcMapAndCopyInToCache.c)
 *     CcGetVacbMiss @ 0x140076C40 (CcGetVacbMiss.c)
 *     CcAcquireByteRangeForWrite @ 0x140077D30 (CcAcquireByteRangeForWrite.c)
 *     CcSetFileSizesEx @ 0x14007D170 (CcSetFileSizesEx.c)
 *     CcPerformReadAhead @ 0x1400A1A38 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x1400A26FC (CcAsyncReadPrefetch.c)
 *     CcCopyBytesToUserBuffer @ 0x1400D7DE0 (CcCopyBytesToUserBuffer.c)
 *     CcMdlWriteComplete2 @ 0x1400FC4F0 (CcMdlWriteComplete2.c)
 *     FsRtlCancelNotify @ 0x14011B700 (FsRtlCancelNotify.c)
 *     CcLockSystemCacheBuffer @ 0x14027D564 (CcLockSystemCacheBuffer.c)
 *     FsRtlNormalizeNtstatus @ 0x140283290 (FsRtlNormalizeNtstatus.c)
 *     RawDispatch @ 0x1406583B0 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406C1620 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C22E0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x14084D8A0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14084DB30 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14084E300 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14084E560 (FsRtlPrepareMdlWriteDev.c)
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
