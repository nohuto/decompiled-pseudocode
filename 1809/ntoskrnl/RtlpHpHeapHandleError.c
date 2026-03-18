/*
 * XREFs of RtlpHpHeapHandleError @ 0x1402FBAFC
 * Callers:
 *     RtlpLogHeapFailure @ 0x1402FB738 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400CCC90 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x1402FB624 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x1402FBACC (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x1402FBB8C (RtlpLocateRelatedBlocks.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
