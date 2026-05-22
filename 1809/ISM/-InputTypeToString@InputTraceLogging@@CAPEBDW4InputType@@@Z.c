/*
 * XREFs of ?InputTypeToString@InputTraceLogging@@CAPEBDW4InputType@@@Z @ 0x180052A10
 * Callers:
 *     ?ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x18005290C (-ReceiveInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800817C4 (-ReceiveInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x18008F544 (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorState@@@Z @ 0x1800C1E80 (-OnHitTest@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorSt.c)
 *     ?RouteInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBXPEBUIContextualProcessor@@_N33@Z @ 0x1800C29C0 (-RouteInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBXPEBUIContextualProcess.c)
 *     ?OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDecision@@PEBUIInputTarget@@J@Z @ 0x1800C2BAC (-OnInput@ContextualProcessing@InputTraceLogging@@SAXPEBUInputInfo@@PEBGW4ContextualProcessorDeci.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::InputTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx

  if ( a1 <= 512 )
  {
    if ( a1 == 512 )
      return "MPC";
    if ( a1 > 16 )
    {
      v5 = a1 - 32;
      if ( !v5 )
        return "Touchpad";
      v6 = v5 - 32;
      if ( !v6 )
        return "GameController";
      v7 = v6 - 64;
      if ( !v7 )
        return "Button";
      if ( v7 == 128 )
        return "HID";
    }
    else
    {
      if ( a1 == 16 )
        return "Pen";
      if ( !a1 )
        return "Unknown";
      v1 = a1 - 1;
      if ( !v1 )
        return "Pointer";
      v2 = v1 - 1;
      if ( !v2 )
        return "Mouse";
      v3 = v2 - 2;
      if ( !v3 )
        return "Keyboard";
      if ( v3 == 4 )
        return "Touch";
    }
    return "UNKNOWN";
  }
  if ( a1 <= 0x8000 )
  {
    switch ( a1 )
    {
      case 0x8000:
        return "DInputController";
      case 0x400:
        return "MPCController";
      case 0x800:
        return "Heat";
      case 0x1000:
        return "RawMouse";
      case 0x2000:
        return "MPCSpatialController";
      case 0x4000:
        return "Gaze";
    }
    return "UNKNOWN";
  }
  switch ( a1 )
  {
    case 0x10000:
      return "XInputController";
    case 0x20000:
      return "MPCHead";
    case 0x40000:
      return "MPCVoice";
  }
  if ( a1 != 0x100000 )
    return "UNKNOWN";
  return "CameraAccess";
}
