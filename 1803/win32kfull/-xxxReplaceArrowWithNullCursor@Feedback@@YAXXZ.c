/*
 * XREFs of ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01A7FD4
 * Callers:
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01A7E90 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     xxxSetMonitorIcoCurIndex @ 0x1C006B19C (xxxSetMonitorIcoCurIndex.c)
 *     zzzSetSystemImage @ 0x1C006B2C0 (zzzSetSystemImage.c)
 *     UpdateSystemCursorPath @ 0x1C006B568 (UpdateSystemCursorPath.c)
 *     RtlInitUnicodeStringOrId @ 0x1C006B768 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadImage @ 0x1C006BC38 (xxxClientLoadImage.c)
 */

void __fastcall Feedback::xxxReplaceArrowWithNullCursor(Feedback *this)
{
  __int64 v1; // rdx
  unsigned __int8 *Image; // rax
  UNICODE_STRING v3; // [rsp+40h] [rbp-18h] BYREF

  EtwTraceContactVisualizationInfo(4LL);
  RtlInitUnicodeStringOrId(&v3, (WCHAR *)0x7F9E);
  Image = xxxClientLoadImage(&v3.Length, v1, 2u, 0, 0, 0x40u);
  if ( Image )
  {
    zzzSetSystemImage((struct tagCURSOR *)Image, *(_QWORD *)&gasyscur[4]);
    UpdateSystemCursorPath(0, &v3);
    xxxSetMonitorIcoCurIndex((int)&v3, 0, 0);
  }
}
