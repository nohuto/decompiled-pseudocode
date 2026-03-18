/*
 * XREFs of RtlpHpHeapHandleError @ 0x14031A540
 * Callers:
 *     RtlpLogHeapFailure @ 0x14031A17C (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x140017170 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlpHeapExceptionFilter @ 0x14031A068 (RtlpHeapExceptionFilter.c)
 *     RtlpHeapHandleError @ 0x14031A4F8 (RtlpHeapHandleError.c)
 *     RtlpLocateRelatedBlocks @ 0x14031A5D0 (RtlpLocateRelatedBlocks.c)
 */

void __fastcall __noreturn RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  RtlpHeapHandleError();
}
