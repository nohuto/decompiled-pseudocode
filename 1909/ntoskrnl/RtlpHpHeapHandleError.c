/*
 * XREFs of RtlpHpHeapHandleError @ 0x140319F90
 * Callers:
 *     RtlpLogHeapFailure @ 0x140319BCC (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140017560 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x140319AB8 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x140319F48 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x14031A020 (RtlpLocateRelatedBlocks.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
