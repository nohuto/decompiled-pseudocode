/*
 * XREFs of RtlpHpHeapHandleError @ 0x1402FBDEC
 * Callers:
 *     RtlpLogHeapFailure @ 0x1402FBA28 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400CCD30 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1402FB914 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1402FBDBC (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1402FBE7C (RtlpLocateRelatedBlocks.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
