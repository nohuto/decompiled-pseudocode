/*
 * XREFs of RIMIDEPopulateExtendedPointerDeviceProperties @ 0x1C014D058
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0148F58 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEPopulateExtendedPointerDeviceProperties(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // eax
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8
  _OWORD v8[3]; // [rsp+20h] [rbp-38h] BYREF

  if ( (*(_DWORD *)(a1 + 184) & 0x2000) == 0 )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(_DWORD *)(a2 + 24) == 7 )
  {
    memset(v8, 0, 0x2CuLL);
    v5 = DWORD2(v8[2]);
    v6 = v8[1];
    *(_OWORD *)(a2 + 268) = v8[0];
    v7 = *(_QWORD *)&v8[2];
    *(_OWORD *)(a2 + 284) = v6;
    *(_QWORD *)(a2 + 300) = v7;
    *(_DWORD *)(a2 + 308) = v5;
    *(_DWORD *)(a2 + 304) = dword_1C020FC64;
    result = (unsigned int)dword_1C020FC74;
    *(_DWORD *)(a2 + 308) = dword_1C020FC74;
  }
  return result;
}
