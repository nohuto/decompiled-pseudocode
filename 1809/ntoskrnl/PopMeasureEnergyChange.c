/*
 * XREFs of PopMeasureEnergyChange @ 0x14086EDD4
 * Callers:
 *     PopCalculateCsSummary @ 0x1402DED48 (PopCalculateCsSummary.c)
 *     PopDiagTraceControlCallback @ 0x140588FE0 (PopDiagTraceControlCallback.c)
 *     PopTransitionTelemetryOsState @ 0x1407466B8 (PopTransitionTelemetryOsState.c)
 * Callees:
 *     PopGetEnergyCounter @ 0x14086ED88 (PopGetEnergyCounter.c)
 */

__int64 __fastcall PopMeasureEnergyChange(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // r8d
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  PopGetEnergyCounter(&v7);
  v4 = *(_QWORD *)(a2 + 8);
  result = 0LL;
  if ( v4 )
  {
    result = *((_QWORD *)&v7 + 1) - v4;
    v6 = v7 | *(_DWORD *)a2;
  }
  else
  {
    v6 = 1;
  }
  *(_DWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = result;
  *(_OWORD *)a2 = v7;
  return result;
}
