/*
 * XREFs of ?CursorToString@InputTraceLogging@@CAPEBDPEAUtagCURSOR@@@Z @ 0x1C01CBE50
 * Callers:
 *     LockQCursor @ 0x1C0020550 (LockQCursor.c)
 *     ?SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z @ 0x1C0138DF4 (-SetCursorImage@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@0IW4CursorImageReason@12@KK@Z.c)
 * Callees:
 *     ?CurIndexName@InputTraceLogging@@CAPEBDI@Z @ 0x1C01CBE20 (-CurIndexName@InputTraceLogging@@CAPEBDI@Z.c)
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
  for ( i = (struct tagCURSOR **)&gasyscur[1]; *i != a1; i += 69 )
  {
    v2 = (unsigned int)(v2 + 1);
    if ( ++v4 >= 19 )
      return "Custom";
  }
  return InputTraceLogging::CurIndexName(v2);
}
