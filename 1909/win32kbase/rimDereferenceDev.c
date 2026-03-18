/*
 * XREFs of rimDereferenceDev @ 0x1C005C110
 * Callers:
 *     RIMCreateDev @ 0x1C0057C10 (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x1C005B798 (RIMFreeSpecificDev.c)
 *     RIMVirtCreateDev @ 0x1C014B864 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C005C218 (WPP_RECORDER_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimDereferenceDev(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  void *v5; // rsi
  void *v6; // rbp
  int v7; // eax
  int v8; // edx

  v3 = *(_QWORD **)(a1 + 32);
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = *(void **)(a1 + 16);
  v6 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v7 = *(_DWORD *)(a1 + 184);
  if ( (v7 & 0x20) == 0 && (v7 & 0x2000) == 0 )
  {
    if ( (v7 & 0x40000000) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( *(_QWORD *)(a1 + 192) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    if ( *(int *)(a1 + 184) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  }
  if ( v3[4] == PsGetCurrentProcess(a1, a2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_qq(
        (_DWORD)gRimLog,
        v8,
        1,
        10,
        (__int64)&WPP_b4f7f5930cc337ed86d67593361a7c26_Traceguids,
        (char)v5,
        a1);
    }
    ObCloseHandle(v5, 1);
  }
  ZwClose(v6);
  return ObfDereferenceObject(v3);
}
