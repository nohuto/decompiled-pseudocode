/*
 * XREFs of LockQCursor @ 0x1C00D8780
 * Callers:
 *     xxxSetModernAppWindow @ 0x1C0004D50 (xxxSetModernAppWindow.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C006B3D8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     zzzAttachToQueue @ 0x1C00D6E7C (zzzAttachToQueue.c)
 * Callees:
 *     ?SetQueueCursor@Cursor@InputTraceLogging@@SAXPEAUtagQ@@PEAUtagCURSOR@@@Z @ 0x1C00D87EC (-SetQueueCursor@Cursor@InputTraceLogging@@SAXPEAUtagQ@@PEAUtagCURSOR@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

__int64 __fastcall LockQCursor(struct tagQ *a1, struct tagCURSOR *a2)
{
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (*((_DWORD *)a1 + 97) & 0x200) != 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM("LockQCursor: Attempting to lock cursor to freed queue");
  InputTraceLogging::Cursor::SetQueueCursor(a1, a2);
  v5[1] = a2;
  v5[0] = (char *)a1 + 376;
  return HMAssignmentLock(v5);
}
