/*
 * XREFs of ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01B8428
 * Callers:
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@IIUtagSIZE@@PEAUtagQ@@W4CursorImageReason@12@KK@Z @ 0x1C00D86D8 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@IIUtagSIZE@@PEAUtagQ@@W4CursorImageR.c)
 *     ?SetQueueCursor@Cursor@InputTraceLogging@@SAXPEAUtagQ@@PEAUtagCURSOR@@@Z @ 0x1C00D87EC (-SetQueueCursor@Cursor@InputTraceLogging@@SAXPEAUtagQ@@PEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01B83F8 (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
 */

const char *__fastcall InputTraceLogging::CursorToString(struct tagCURSOR *a1)
{
  __int64 v2; // rcx
  __int64 v4; // rdx
  struct tagCURSOR **i; // rax

  v2 = 0LL;
  if ( !a1 )
    return "Empty";
  v4 = 0LL;
  for ( i = (struct tagCURSOR **)&gasyscur[4]; *i != a1; i += 69 )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( ++v4 >= 19 )
      return "Custom";
  }
  return InputTraceLogging::CurIndexName(v2);
}
