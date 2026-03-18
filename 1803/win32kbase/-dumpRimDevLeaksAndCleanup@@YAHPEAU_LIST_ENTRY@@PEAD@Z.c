/*
 * XREFs of ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00DD8B8
 * Callers:
 *     RIMUnInitialize @ 0x1C00DE320 (RIMUnInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00739CC (WPP_RECORDER_SF_q.c)
 *     DbgPrintRIMAlways @ 0x1C00C3410 (DbgPrintRIMAlways.c)
 *     WPP_RECORDER_SF_s @ 0x1C00DE7C4 (WPP_RECORDER_SF_s.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00F7A6C (RIMFreeSpecificDevWorker.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall dumpRimDevLeaksAndCleanup(struct _LIST_ENTRY *a1, char *a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rdi

  v2 = (__int64 *)gObRimDevList;
  if ( (__int64 *)gObRimDevList == &gObRimDevList )
    return 0LL;
  WPP_RECORDER_SF_s(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)a2,
    20,
    12,
    (__int64)&WPP_73c89cb64ddf3806f3867933bb81b2ce_Traceguids,
    (__int64)"RIMDevObj leaks");
  DbgPrintRIMAlways("%s\n", "RIMDevObj leaks");
  do
  {
    v3 = v2 - 2;
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0xDu,
      (__int64)&WPP_73c89cb64ddf3806f3867933bb81b2ce_Traceguids,
      v2 - 2);
    DbgPrintRIMAlways("Leaked %p: ", v2 - 2);
    v2 = (__int64 *)*v2;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0xEu,
      (__int64)&WPP_73c89cb64ddf3806f3867933bb81b2ce_Traceguids);
    DbgPrintRIMAlways("Cleaning up\n");
    if ( *((_BYTE *)v3 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
    v6 = (void *)v3[52];
    if ( !v6 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
    RIMFreeSpecificDevWorker(v6, v3 + 10);
    ObfDereferenceObject(v6);
  }
  while ( v2 != &gObRimDevList );
  return 1LL;
}
