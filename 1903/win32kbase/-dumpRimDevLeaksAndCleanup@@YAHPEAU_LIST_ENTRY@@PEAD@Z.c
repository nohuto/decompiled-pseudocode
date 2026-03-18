/*
 * XREFs of ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00B7BA8
 * Callers:
 *     RIMUnInitialize @ 0x1C00B7AC0 (RIMUnInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     RIMFreeSpecificDevWorker @ 0x1C006EC88 (RIMFreeSpecificDevWorker.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0121340 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     WPP_RECORDER_SF_s @ 0x1C0135B98 (WPP_RECORDER_SF_s.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall dumpRimDevLeaksAndCleanup(struct _LIST_ENTRY *a1, char *a2)
{
  __int64 *v2; // rdi
  int v4; // edx
  __int64 *v5; // rbx
  int v6; // edx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void *v10; // rsi

  v2 = (__int64 *)gObRimDevList;
  if ( (__int64 *)gObRimDevList == &gObRimDevList )
    return 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_s(
      (_DWORD)gRimLog,
      (_DWORD)a2,
      1,
      12,
      (__int64)&WPP_574de6f92de73fd98cf46f4140a2b0ba_Traceguids,
      (__int64)"RIMDevObj leaks");
  DbgPrintGDI("%s\n", "RIMDevObj leaks");
  do
  {
    v5 = v2 - 2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v4) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gRimLog,
        v4,
        1,
        13,
        (__int64)&WPP_574de6f92de73fd98cf46f4140a2b0ba_Traceguids,
        (_BYTE)v2 - 16);
    }
    DbgPrintGDI("Leaked %p: ", v2 - 2);
    v2 = (__int64 *)*v2;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v6, 1, 14, (__int64)&WPP_574de6f92de73fd98cf46f4140a2b0ba_Traceguids);
    }
    DbgPrintGDI("Cleaning up\n");
    if ( *((_BYTE *)v5 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    v10 = (void *)v5[53];
    if ( !v10 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    RIMFreeSpecificDevWorker((__int64)v10, (__int64)(v5 + 11), v9);
    ObfDereferenceObject(v10);
  }
  while ( v2 != &gObRimDevList );
  return 1LL;
}
