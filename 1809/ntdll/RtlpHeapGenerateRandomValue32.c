/*
 * XREFs of RtlpHeapGenerateRandomValue32 @ 0x18000E9A4
 * Callers:
 *     RtlpHeapGenerateRandomValue64 @ 0x18000E97C (RtlpHeapGenerateRandomValue64.c)
 *     RtlpSubSegmentInitialize @ 0x18000ED20 (RtlpSubSegmentInitialize.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x18000FEB0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpHpLfhSlotAllocate @ 0x1800110C0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpAllocateHeap @ 0x180011AF0 (RtlpAllocateHeap.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18006915C (RtlpLocalInfoAllocFromCache.c)
 *     RtlpHpLfhSubsegmentAllocateBlock @ 0x18010CE74 (RtlpHpLfhSubsegmentAllocateBlock.c)
 *     RtlpHpSegMgrApplyLargePagePolicy @ 0x18010D93C (RtlpHpSegMgrApplyLargePagePolicy.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x18000EA90 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x180077F60 (RtlRunOnceComplete.c)
 *     NtQueryInformationProcess @ 0x1800A0620 (NtQueryInformationProcess.c)
 *     RtlReportCriticalFailure @ 0x1800FB3FC (RtlReportCriticalFailure.c)
 *     RtlpInitRandomExVector @ 0x1800FE940 (RtlpInitRandomExVector.c)
 */

__int64 RtlpHeapGenerateRandomValue32()
{
  NTSTATUS v0; // eax
  __int32 v1; // r8d
  int v2; // ecx
  unsigned int v5; // r8d
  char v7; // [rsp+40h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+10h]

  if ( !dword_1801660B4
    && NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessCookie, &dword_1801660B4, 4u, 0LL) < 0 )
  {
    dword_1801660B4 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
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
  dword_1801660B4 = (2147483629 * (unsigned __int64)(unsigned int)dword_1801660B4 + 2147483587) % 0x7FFFFFFF;
  v1 = _InterlockedExchange(&RtlpRandomExConstantVector[RtlpRandomExAuxVarY & 0x7F], dword_1801660B4);
  if ( MEMORY[0x7FFE0290] )
  {
    v2 = 0;
    while ( 1 )
    {
      __asm { rdrand  rdx }
      v8 = _RDX;
      if ( _CF )
        break;
      if ( (unsigned int)++v2 >= 0xA )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    LODWORD(_RDX) = 0;
  }
  v5 = _RDX ^ v1;
  _InterlockedExchangeAdd(&RtlpRandomExAuxVarY, v5);
  return v5;
}
