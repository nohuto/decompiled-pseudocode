/*
 * XREFs of ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01CA118
 * Callers:
 *     ?RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01C9F74 (-RenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 * Callees:
 *     RtlInitUnicodeStringOrId @ 0x1C00A60B8 (RtlInitUnicodeStringOrId.c)
 *     xxxClientLoadImage @ 0x1C00B7340 (xxxClientLoadImage.c)
 *     ?zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCursorReason@@@Z @ 0x1C00D889C (-zzzInternalSetSystemCursor@@YAXPEAUtagCURSOR@@IPEAU_UNICODE_STRING@@W4InputTracing_SwapSystemCu.c)
 */

void __fastcall Feedback::xxxReplaceArrowWithNullCursor(Feedback *this)
{
  __int64 v1; // rdx
  ULONG_PTR Image; // rax
  UNICODE_STRING v3; // [rsp+40h] [rbp-18h] BYREF

  EtwTraceContactVisualizationInfo(4LL);
  RtlInitUnicodeStringOrId(&v3, (WCHAR *)0x7F9E);
  Image = xxxClientLoadImage(&v3.Length, v1, 2u, 0, 0, 64);
  if ( Image )
    zzzInternalSetSystemCursor(Image, 0, &v3, 5);
}
