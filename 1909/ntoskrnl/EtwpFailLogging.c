/*
 * XREFs of EtwpFailLogging @ 0x14013BA44
 * Callers:
 *     EtwpEventWriteFull @ 0x1400A0020 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x140656DC0 (EtwpWriteUserEvent.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140036AB0 (EtwpLevelKeywordEnabled.c)
 *     EtwEventEnabled @ 0x1400476B0 (EtwEventEnabled.c)
 *     EtwpReleaseTraceBuffer @ 0x1400C9A50 (EtwpReleaseTraceBuffer.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400D3DA0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400F2760 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpUpdateEventsLostCount @ 0x14013BB30 (EtwpUpdateEventsLostCount.c)
 *     EtwpTraceLostEvent @ 0x1403303F8 (EtwpTraceLostEvent.c)
 */

void __fastcall EtwpFailLogging(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        __int64 a7,
        char a8)
{
  __int64 v9; // rbp
  unsigned __int8 v10; // dl
  __int64 v13; // rdi
  unsigned int *v14; // rsi
  unsigned __int8 v15; // si
  bool i; // zf
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v21; // rbx

  v9 = *(_QWORD *)(a3 + 392);
  v10 = a1;
  if ( *(_DWORD *)(a4 + 384) )
  {
    v13 = 0LL;
    do
    {
      v14 = *(unsigned int **)(a4 + 48 * v13);
      if ( (v14[3] & 0x8000000) == 0 )
      {
        **(_DWORD **)(a4 + 48 * v13 + 8) = v14[7] | **(_DWORD **)(a4 + 48 * v13 + 8) & v14[8];
        EtwpUpdateEventsLostCount(v14);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(a3 + 40, a7, v14 + 38, a6);
      }
      EtwpReleaseTraceBuffer((signed __int64 *)(a4 + 16 + 48 * v13));
      if ( a8 )
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v9 + 448) + 8LL * *v14), 1u);
      v13 = (unsigned int)(v13 + 1);
    }
    while ( (unsigned int)v13 < *(_DWORD *)(a4 + 384) );
    v10 = a1;
  }
  v15 = a5;
  for ( i = !_BitScanForward((unsigned int *)&v17, a5); !i; i = !_BitScanForward((unsigned int *)&v17, v15) )
  {
    v15 &= v15 - 1;
    if ( EtwpLevelKeywordEnabled(a3 + 32 * (v17 + 4), v10, a2) )
    {
      v19 = *(unsigned __int16 *)(v18 + 6);
      v20 = v19;
      if ( !a8
        || ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v9 + 448) + 8 * v19), 1u) )
      {
        if ( (unsigned int)v19 >= *(_DWORD *)(v9 + 16) )
          v21 = 1LL;
        else
          v21 = *(_QWORD *)(*(_QWORD *)(v9 + 456) + 8 * v19);
        if ( (v21 & 1) == 0 )
        {
          EtwpUpdateEventsLostCount(v21);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
            EtwpTraceLostEvent(a3 + 40, a7, v21 + 152, a6);
        }
        if ( a8 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(v9 + 448) + 8 * v20), 1u);
      }
    }
    v10 = a1;
  }
}
