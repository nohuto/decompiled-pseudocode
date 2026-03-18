/*
 * XREFs of ?PointerTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0127CA4
 * Callers:
 *     ?HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z @ 0x1C002FFE4 (-HitTestRequest@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestRequest@@@Z.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4ContactPopulationSource@12@@Z @ 0x1C0127D0C (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4Co.c)
 *     ?AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C0133D04 (-AssignPointerId@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@.c)
 *     ?CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C0135AD4 (-CommitFramePointer@Pointer@InputTraceLogging@@SAXPEBXPEBUCPointerInputFrame@@PEBUtagPOINTEREVEN.c)
 *     ?GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z @ 0x1C013C8A8 (-GetPointerInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_INFO@@@Z.c)
 *     ?GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z @ 0x1C013D040 (-GetPointerPenInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_PEN_INFO@@@Z.c)
 *     ?GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z @ 0x1C013D8D4 (-GetPointerTouchInfo@Pointer@InputTraceLogging@@SAXPEBUtagPOINTER_TOUCH_INFO@@@Z.c)
 *     ?SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOINT@@@Z @ 0x1C0142CD4 (-SecondaryHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@AEBUtagPOI.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@_N@Z @ 0x1C0145A10 (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@_N@Z.c)
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
