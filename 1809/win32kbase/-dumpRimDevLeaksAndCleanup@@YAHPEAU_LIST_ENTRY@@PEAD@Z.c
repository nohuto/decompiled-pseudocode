/*
 * XREFs of ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0092F04
 * Callers:
 *     RIMUnInitialize @ 0x1C0092E20 (RIMUnInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     DbgPrintRIMAlways @ 0x1C00F9910 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_s @ 0x1C010B84C (WPP_RECORDER_SF_s.c)
 *     RIMFreeSpecificDevWorker @ 0x1C0121FA0 (RIMFreeSpecificDevWorker.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall dumpRimDevLeaksAndCleanup(struct _LIST_ENTRY *a1, char *a2)
{
  __int64 *v2; // rbx
  __int64 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rdi

  v2 = (__int64 *)gObRimDevList;
  if ( (__int64 *)gObRimDevList == &gObRimDevList )
    return 0LL;
  WPP_RECORDER_SF_s(
    gRimLog,
    3,
    21,
    13,
    (__int64)&WPP_d998f4a8bf553c0e5a398c70dcc56ce3_Traceguids,
    (__int64)"RIMDevObj leaks");
  DbgPrintRIMAlways("%s\n");
  do
  {
    v4 = v2 - 2;
    WPP_RECORDER_SF_q(gRimLog, 3u, 0x15u, 0xEu, (__int64)&WPP_d998f4a8bf553c0e5a398c70dcc56ce3_Traceguids, v2 - 2);
    DbgPrintRIMAlways("Leaked %p: ");
    v2 = (__int64 *)*v2;
    WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0xFu, (__int64)&WPP_d998f4a8bf553c0e5a398c70dcc56ce3_Traceguids);
    DbgPrintRIMAlways("Cleaning up\n");
    if ( *((_BYTE *)v4 + 9) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
    v8 = (void *)v4[53];
    if ( !v8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
    RIMFreeSpecificDevWorker(v8, v4 + 11);
    ObfDereferenceObject(v8);
  }
  while ( v2 != &gObRimDevList );
  return 1LL;
}
