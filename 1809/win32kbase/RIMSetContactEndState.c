/*
 * XREFs of RIMSetContactEndState @ 0x1C0128468
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0110BB0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0128108 (RIMInsertSimulatedContactEndStateInFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMSetContactEndState(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v5; // rdi
  __int64 result; // rax

  v5 = a2 + 2344;
  if ( !*(_QWORD *)(a1 + 728) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (*(_DWORD *)(a2 + 32) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *(_OWORD *)v5 = *(_OWORD *)(a2 + 2560);
  *(_OWORD *)(v5 + 16) = *(_OWORD *)(a2 + 2576);
  *(_OWORD *)(v5 + 32) = *(_OWORD *)(a2 + 2592);
  *(_OWORD *)(v5 + 48) = *(_OWORD *)(a2 + 2608);
  *(_OWORD *)(v5 + 64) = *(_OWORD *)(a2 + 2624);
  *(_OWORD *)(v5 + 80) = *(_OWORD *)(a2 + 2640);
  *(_OWORD *)(v5 + 96) = *(_OWORD *)(a2 + 2656);
  *(_OWORD *)(v5 + 112) = *(_OWORD *)(a2 + 2672);
  *(_OWORD *)(v5 + 128) = *(_OWORD *)(a2 + 2688);
  *(_OWORD *)(v5 + 144) = *(_OWORD *)(a2 + 2704);
  *(_OWORD *)(v5 + 160) = *(_OWORD *)(a2 + 2720);
  *(_OWORD *)(v5 + 176) = *(_OWORD *)(a2 + 2736);
  *(_OWORD *)(v5 + 192) = *(_OWORD *)(a2 + 2752);
  *(_QWORD *)(v5 + 208) = *(_QWORD *)(a2 + 2768);
  result = 0LL;
  *(_DWORD *)(v5 + 48) = 0;
  *(_WORD *)(v5 + 58) = 0;
  if ( a5 )
    result = 0x8000LL;
  *(_DWORD *)(v5 + 128) = a4;
  *(_QWORD *)(v5 + 144) = a3;
  *(_DWORD *)(v5 + 76) = result;
  *(_DWORD *)(v5 + 164) = 0;
  return result;
}
