/*
 * XREFs of rimDereferenceDev @ 0x1C00F879C
 * Callers:
 *     RIMCreateDev @ 0x1C00F7534 (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x1C00F7964 (RIMFreeSpecificDev.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00BCB94 (WPP_RECORDER_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

LONG_PTR __fastcall rimDereferenceDev(__int64 a1, __int64 a2)
{
  void *v2; // rdi
  __int64 v4; // rcx
  int v5; // eax
  void *v6; // rbp
  void *v7; // rsi

  v2 = *(void **)(a1 + 32);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  v4 = *(unsigned int *)(a1 + 184);
  v5 = v4;
  v6 = *(void **)(a1 + 16);
  v7 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( (v4 & 0x20) == 0 && (v4 & 0x1000) == 0 )
  {
    if ( (v4 & 0x40000000) != 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2);
    if ( *(_QWORD *)(a1 + 192) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2);
    v5 = *(_DWORD *)(a1 + 184);
    if ( v5 < 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, a2);
      v5 = *(_DWORD *)(a1 + 184);
    }
  }
  if ( (v5 & 0x800000) == 0 )
  {
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x15u,
      0xAu,
      (__int64)&WPP_d70bfcf03e853c5bfd6e82def874f5bb_Traceguids,
      v6,
      a1);
    ObCloseHandle(v6, 1);
  }
  ZwClose(v7);
  return ObfDereferenceObject(v2);
}
