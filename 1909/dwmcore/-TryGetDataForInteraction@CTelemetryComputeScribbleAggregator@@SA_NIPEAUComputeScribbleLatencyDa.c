/*
 * XREFs of ?TryGetDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyData@@@Z @ 0x180192460
 * Callers:
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z @ 0x18001B9CC (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

char __fastcall CTelemetryComputeScribbleAggregator::TryGetDataForInteraction(
        unsigned int a1,
        struct ComputeScribbleLatencyData *a2)
{
  _DWORD *v4; // rcx
  char v5; // bl
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // xmm1_8

  AcquireSRWLockExclusive(&stru_1803399F0);
  v4 = (_DWORD *)xmmword_18033D0B0;
  v5 = 1;
  v6 = *(_DWORD **)xmmword_18033D0B0;
  while ( v6 != v4 )
  {
    if ( a1 >= v6[4] && a1 <= v6[5] )
    {
      v8 = *((_QWORD *)v6 + 4);
      *(_OWORD *)a2 = *((_OWORD *)v6 + 1);
      *((_QWORD *)a2 + 2) = v8;
      goto LABEL_10;
    }
    v7 = *(_DWORD **)v6;
    if ( a1 <= v6[5] )
    {
      v6 = *(_DWORD **)v6;
    }
    else
    {
      **((_QWORD **)v6 + 1) = v7;
      *(_QWORD *)(*(_QWORD *)v6 + 8LL) = *((_QWORD *)v6 + 1);
      --*((_QWORD *)&xmmword_18033D0B0 + 1);
      std::_Deallocate<16,0>(v6, 0x28uLL);
      v4 = (_DWORD *)xmmword_18033D0B0;
      v6 = v7;
    }
  }
  v5 = 0;
LABEL_10:
  ReleaseSRWLockExclusive(&stru_1803399F0);
  return v5;
}
