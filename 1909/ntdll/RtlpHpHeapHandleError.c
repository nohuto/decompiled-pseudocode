/*
 * XREFs of RtlpHpHeapHandleError @ 0x180101780
 * Callers:
 *     RtlpLogHeapFailure @ 0x18010A7C4 (RtlpLogHeapFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x180074CA0 (RtlCaptureStackBackTrace.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     HeapCommitFailAvoidTriageRules @ 0x1801010F0 (HeapCommitFailAvoidTriageRules.c)
 *     RtlpHeapHandleError @ 0x1801014E0 (RtlpHeapHandleError.c)
 *     RtlpHpRaiseFatalLimitError @ 0x180101A2C (RtlpHpRaiseFatalLimitError.c)
 *     RtlpLocateRelatedBlocks @ 0x180102D68 (RtlpLocateRelatedBlocks.c)
 *     RtlpHeapExceptionFilter @ 0x18010A6B0 (RtlpHeapExceptionFilter.c)
 */

__int64 __fastcall RtlpHpHeapHandleError(int a1, __int64 a2, __int64 a3)
{
  memset(&BackTrace, 0, 0x100uLL);
  RtlCaptureStackBackTrace(1u, 0x20u, &BackTrace, 0LL);
  if ( a1 == 20 )
  {
    RtlpHpRaiseFatalLimitError(RtlpHpHeapHandleError);
  }
  else if ( a1 == 21 )
  {
    HeapCommitFailAvoidTriageRules();
  }
  if ( a1 == 3 )
    RtlpLocateRelatedBlocks(a2, a3);
  return RtlpHeapHandleError();
}
