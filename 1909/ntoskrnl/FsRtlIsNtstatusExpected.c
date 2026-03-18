/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x14012F840
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D930 (CcInitializeCacheMapEx.c)
 *     CcMapAndCopyInToCache @ 0x14006DAE0 (CcMapAndCopyInToCache.c)
 *     CcGetVacbMiss @ 0x140076EB0 (CcGetVacbMiss.c)
 *     CcAcquireByteRangeForWrite @ 0x1400780F0 (CcAcquireByteRangeForWrite.c)
 *     CcSetFileSizesEx @ 0x14007D570 (CcSetFileSizesEx.c)
 *     CcPerformReadAhead @ 0x140091060 (CcPerformReadAhead.c)
 *     CcAsyncReadPrefetch @ 0x140091B00 (CcAsyncReadPrefetch.c)
 *     CcCopyBytesToUserBuffer @ 0x1400B7C60 (CcCopyBytesToUserBuffer.c)
 *     CcMdlWriteComplete2 @ 0x1400FE680 (CcMdlWriteComplete2.c)
 *     FsRtlCancelNotify @ 0x140119B30 (FsRtlCancelNotify.c)
 *     CcLockSystemCacheBuffer @ 0x14027D2C4 (CcLockSystemCacheBuffer.c)
 *     FsRtlNormalizeNtstatus @ 0x140282FF0 (FsRtlNormalizeNtstatus.c)
 *     RawDispatch @ 0x14066B3D0 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406C0810 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406C14D0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     FsRtlCopyRead @ 0x14084CFA0 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14084D230 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14084DA00 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14084DC60 (FsRtlPrepareMdlWriteDev.c)
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
