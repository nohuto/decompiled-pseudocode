/*
 * XREFs of rimSetContactKeepAliveState @ 0x1C0156F40
 * Callers:
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C0155B18 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimSetContactKeepAliveState(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rbx
  int v9; // eax
  int v10; // ecx
  __int64 result; // rax

  v4 = a2 + 2344;
  if ( !*(_QWORD *)(a1 + 736) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v9 = *(_DWORD *)(a2 + 32);
  if ( (v9 & 2) == 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    v9 = *(_DWORD *)(a2 + 32);
  }
  if ( (v9 & 4) != 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  *(_OWORD *)v4 = *(_OWORD *)(a2 + 2584);
  *(_OWORD *)(v4 + 16) = *(_OWORD *)(a2 + 2600);
  *(_OWORD *)(v4 + 32) = *(_OWORD *)(a2 + 2616);
  *(_OWORD *)(v4 + 48) = *(_OWORD *)(a2 + 2632);
  *(_OWORD *)(v4 + 64) = *(_OWORD *)(a2 + 2648);
  *(_OWORD *)(v4 + 80) = *(_OWORD *)(a2 + 2664);
  *(_OWORD *)(v4 + 96) = *(_OWORD *)(a2 + 2680);
  *(_OWORD *)(v4 + 112) = *(_OWORD *)(a2 + 2696);
  *(_OWORD *)(v4 + 128) = *(_OWORD *)(a2 + 2712);
  *(_OWORD *)(v4 + 144) = *(_OWORD *)(a2 + 2728);
  *(_OWORD *)(v4 + 160) = *(_OWORD *)(a2 + 2744);
  *(_OWORD *)(v4 + 176) = *(_OWORD *)(a2 + 2760);
  *(_OWORD *)(v4 + 192) = *(_OWORD *)(a2 + 2776);
  *(_OWORD *)(v4 + 208) = *(_OWORD *)(a2 + 2792);
  *(_OWORD *)(v4 + 224) = *(_OWORD *)(a2 + 2808);
  *(_DWORD *)(v4 + 48) = 0;
  *(_WORD *)(v4 + 58) = 0;
  *(_DWORD *)(v4 + 128) = a4;
  *(_QWORD *)(v4 + 144) = a3;
  *(_DWORD *)(v4 + 76) = *(_DWORD *)(a2 + 2328);
  v10 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v10 - 5) > 1 )
  {
    result = (unsigned int)(v10 - 1);
    if ( (unsigned int)result > 3 )
      return result;
    result = *(unsigned int *)(a2 + 2332);
  }
  else
  {
    result = *(unsigned int *)(a2 + 2336);
  }
  *(_DWORD *)(v4 + 164) = 0;
  *(_DWORD *)(v4 + 160) = result;
  return result;
}
