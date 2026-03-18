/*
 * XREFs of rimSetContactKeepAliveState @ 0x1C012C21C
 * Callers:
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C012AF44 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimSetContactKeepAliveState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  int v6; // eax
  int v7; // ecx
  __int64 result; // rax

  v3 = a2 + 2344;
  if ( !*(_QWORD *)(a1 + 728) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = *(_DWORD *)(a2 + 32);
  if ( (v6 & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v6 = *(_DWORD *)(a2 + 32);
  }
  if ( (v6 & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *(_OWORD *)v3 = *(_OWORD *)(a2 + 2560);
  *(_OWORD *)(v3 + 16) = *(_OWORD *)(a2 + 2576);
  *(_OWORD *)(v3 + 32) = *(_OWORD *)(a2 + 2592);
  *(_OWORD *)(v3 + 48) = *(_OWORD *)(a2 + 2608);
  *(_OWORD *)(v3 + 64) = *(_OWORD *)(a2 + 2624);
  *(_OWORD *)(v3 + 80) = *(_OWORD *)(a2 + 2640);
  *(_OWORD *)(v3 + 96) = *(_OWORD *)(a2 + 2656);
  *(_OWORD *)(v3 + 112) = *(_OWORD *)(a2 + 2672);
  *(_OWORD *)(v3 + 128) = *(_OWORD *)(a2 + 2688);
  *(_OWORD *)(v3 + 144) = *(_OWORD *)(a2 + 2704);
  *(_OWORD *)(v3 + 160) = *(_OWORD *)(a2 + 2720);
  *(_OWORD *)(v3 + 176) = *(_OWORD *)(a2 + 2736);
  *(_OWORD *)(v3 + 192) = *(_OWORD *)(a2 + 2752);
  *(_QWORD *)(v3 + 208) = *(_QWORD *)(a2 + 2768);
  *(_DWORD *)(v3 + 48) = 0;
  *(_WORD *)(v3 + 58) = 0;
  *(_DWORD *)(v3 + 128) = *(_DWORD *)(a1 + 780);
  *(_QWORD *)(v3 + 144) = *(_QWORD *)(a1 + 808);
  *(_DWORD *)(v3 + 76) = *(_DWORD *)(a2 + 2328);
  v7 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v7 - 5) > 1 )
  {
    result = (unsigned int)(v7 - 1);
    if ( (unsigned int)result > 3 )
      return result;
    result = *(unsigned int *)(a2 + 2332);
  }
  else
  {
    result = *(unsigned int *)(a2 + 2336);
  }
  *(_DWORD *)(v3 + 164) = 0;
  *(_DWORD *)(v3 + 160) = result;
  return result;
}
