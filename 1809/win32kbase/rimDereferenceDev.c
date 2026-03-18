/*
 * XREFs of rimDereferenceDev @ 0x1C0089450
 * Callers:
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x1C00893B0 (RIMFreeSpecificDev.c)
 *     RIMVirtCreateDev @ 0x1C0122170 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C0089540 (WPP_RECORDER_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimDereferenceDev(__int64 a1, __int64 a2, __int64 a3)
{
  void *v3; // rdi
  __int64 v5; // rcx
  int v6; // eax
  void *v7; // rbp
  void *v8; // rsi

  v3 = *(void **)(a1 + 32);
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = *(unsigned int *)(a1 + 184);
  v6 = v5;
  v7 = *(void **)(a1 + 16);
  v8 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( (v5 & 0x20) == 0 && (v5 & 0x2000) == 0 )
  {
    if ( (v5 & 0x40000000) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
    if ( *(_QWORD *)(a1 + 192) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
    v6 = *(_DWORD *)(a1 + 184);
    if ( v6 < 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, a2, a3);
      v6 = *(_DWORD *)(a1 + 184);
    }
  }
  if ( (v6 & 0x800000) == 0 )
  {
    LOBYTE(a2) = 3;
    WPP_RECORDER_SF_qq(gRimLog, a2, 22, 10, (__int64)&WPP_5e106e1955d43df0565e3144618cade0_Traceguids, (char)v7, a1);
    ObCloseHandle(v7, 1);
  }
  ZwClose(v8);
  return ObfDereferenceObject(v3);
}
