/*
 * XREFs of ?NotifySetPointerGraphicDevice@CMouseProcessor@@QEAAXW4SetPointerGraphicsResult@@@Z @ 0x1C00884F8
 * Callers:
 *     NotifySetPointerGraphicDevice @ 0x1C00884C0 (NotifySetPointerGraphicDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall CMouseProcessor::NotifySetPointerGraphicDevice(__int64 a1, int a2)
{
  __int64 v4; // rbx

  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Mouse Processor does not expect to be ever called with this value");
  v4 = a1 + 2864;
  RIMLockExclusive(v4);
  if ( *(_BYTE *)(v4 + 16) && a2 > 0 )
  {
    if ( a2 <= 2 )
    {
      if ( *(_BYTE *)(v4 + 17) )
        *(_BYTE *)(v4 + 17) = 0;
    }
    else if ( a2 == 3 )
    {
      *(_BYTE *)(v4 + 17) = 1;
    }
  }
  *(_QWORD *)(v4 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v4, 0LL);
  KeLeaveCriticalRegion();
}
