/*
 * XREFs of ?DropReasonToString@InputTraceLogging@@CAPEBDW4DropReason@Mouse@1@@Z @ 0x1C018E7A8
 * Callers:
 *     ?DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C009DB3C (-DropMove@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C018E638 (-DropButton@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C018E6F0 (-DropInput@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 *     ?DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z @ 0x1C018E8DC (-DropWheel@Mouse@InputTraceLogging@@SAX_KW4DropReason@12@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::DropReasonToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx

  if ( a1 <= 10 )
  {
    if ( a1 == 10 )
      return "UIPI";
    if ( a1 > 5 )
    {
      v5 = a1 - 6;
      if ( !v5 )
        return "PTPQueueFull";
      v6 = v5 - 1;
      if ( !v6 )
        return "InputSuppressed";
      v7 = v6 - 1;
      if ( !v7 )
        return "InputBlocked";
      if ( v7 == 1 )
        return "BadReadStatus";
    }
    else
    {
      if ( a1 == 5 )
        return "QueueFull";
      if ( !a1 )
        return "ButtonHook";
      v1 = a1 - 1;
      if ( !v1 )
        return "WheelHook";
      v2 = v1 - 1;
      if ( !v2 )
        return "MoveHook";
      v3 = v2 - 1;
      if ( !v3 )
        return "WheelAppCompat";
      if ( v3 == 1 )
        return "ISMSuppression";
    }
    return "UNKNOWN";
  }
  if ( a1 <= 16 )
  {
    if ( a1 == 16 )
      return "ClickLock";
    v8 = a1 - 11;
    if ( !v8 )
      return "NoPositionChange";
    v9 = v8 - 1;
    if ( !v9 )
      return "RawInputMode";
    v10 = v9 - 1;
    if ( !v10 )
      return "NoHitTestResult";
    v11 = v10 - 1;
    if ( !v11 )
      return "AltTabCancel";
    if ( v11 == 1 )
      return "BadPayload";
    return "UNKNOWN";
  }
  v12 = a1 - 17;
  if ( !v12 )
    return "Capture";
  v13 = v12 - 1;
  if ( !v13 )
    return "WindowDestroyed";
  v14 = v13 - 1;
  if ( !v14 )
    return "NoActivation";
  if ( v14 != 1 )
    return "UNKNOWN";
  return "NoForeground";
}
