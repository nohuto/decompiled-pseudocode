/*
 * XREFs of ?ProcessorStateToString@InputTraceLogging@@CAPEBDW4ContextualProcessorState@@@Z @ 0x1800F9928
 * Callers:
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x18000B840 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 *     ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x1800F950C (-OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorSt.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::ProcessorStateToString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return "Ignore";
  v1 = a1 - 1;
  if ( !v1 )
    return "Buffer";
  v2 = v1 - 1;
  if ( !v2 )
    return "Handle";
  if ( v2 == 1 )
    return "Listen";
  return "UNKNOWN";
}
