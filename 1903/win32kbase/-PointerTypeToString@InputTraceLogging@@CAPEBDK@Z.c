/*
 * XREFs of ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C016EA44
 * Callers:
 *     ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x1C0034A14 (-HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C0163230 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBURIMDEV@@PEBUCPointerInputFrame@@PEBUtagPOI.c)
 *     ?GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z @ 0x1C016B1C0 (-GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z @ 0x1C016B9F4 (-GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z.c)
 *     ?GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z @ 0x1C016C3DC (-GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PointerTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( !a1 )
    return "ComputeLuid";
  v1 = a1 - 1;
  if ( !v1 )
    return "Pointer";
  v2 = v1 - 1;
  if ( !v2 )
    return "Touch";
  v3 = v2 - 1;
  if ( !v3 )
    return "Pen";
  v4 = v3 - 1;
  if ( !v4 )
    return "Mouse";
  v5 = v4 - 1;
  if ( !v5 )
    return "Touchpad";
  if ( v5 == 1 )
    return "DropTarget";
  return "UNKNOWN";
}
