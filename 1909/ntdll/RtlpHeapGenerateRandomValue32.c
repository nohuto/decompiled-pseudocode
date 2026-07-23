/*
 * XREFs of RtlpHeapGenerateRandomValue32 @ 0x18004A840
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x18003B6C0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpAllocateHeap @ 0x18003C350 (RtlpAllocateHeap.c)
 *     RtlpHpLfhSlotAllocate @ 0x18003E150 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHeapGenerateRandomValue64 @ 0x180049F80 (RtlpHeapGenerateRandomValue64.c)
 *     RtlpSubSegmentInitialize @ 0x18004A2C0 (RtlpSubSegmentInitialize.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18004A67C (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004D7D0 (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x18010B470 (RtlpHpSegMgrApplyLargePagePolicy.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18000B240 (RtlRunOnceComplete.c)
 *     RtlRunOnceBeginInitialize @ 0x18004A930 (RtlRunOnceBeginInitialize.c)
 *     NtQueryInformationProcess @ 0x18009D1B0 (NtQueryInformationProcess.c)
 *     RtlReportCriticalFailure @ 0x1800F906C (RtlReportCriticalFailure.c)
 *     RtlpInitRandomExVector @ 0x1800FBEA0 (RtlpInitRandomExVector.c)
 */

__int64 RtlpHeapGenerateRandomValue32()
{
  NTSTATUS v0; // eax
  __int32 v1; // r8d
  unsigned int v3; // r8d
  int v5; // eax
  char v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]

  if ( !dword_180166428
    && NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_180166428, 4u, 0LL) < 0 )
  {
    dword_180166428 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  }
  v0 = RtlRunOnceBeginInitialize(&RtlpRandomExInit, 0, 0LL);
  if ( v0 < 0 )
  {
    v7 = 0;
  }
  else
  {
    if ( v0 != 259 )
      goto LABEL_4;
    if ( RtlpInitRandomExVector(&RtlpRandomExInit, 0LL, 0LL) )
    {
      v0 = RtlRunOnceComplete(&RtlpRandomExInit, 0, 0LL);
      if ( v0 >= 0 )
        goto LABEL_4;
      v7 = 1;
    }
    else
    {
      v0 = RtlRunOnceComplete(&RtlpRandomExInit, 4u, 0LL);
      if ( v0 >= 0 )
        goto LABEL_4;
      v7 = 2;
    }
  }
  RtlReportCriticalFailure((unsigned int)v0, &v7, 1LL);
LABEL_4:
  dword_180166428 = (2147483629 * (unsigned __int64)(unsigned int)dword_180166428 + 2147483587) % 0x7FFFFFFF;
  v1 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_180166428);
  if ( MEMORY[0x7FFE0290] )
  {
    v5 = 0;
    while ( 1 )
    {
      __asm { rdrand  rdx }
      v8 = _RDX;
      if ( _CF )
        break;
      if ( (unsigned int)++v5 >= 0xA )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    LODWORD(_RDX) = 0;
  }
  v3 = _RDX ^ v1;
  _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v3);
  return v3;
}
