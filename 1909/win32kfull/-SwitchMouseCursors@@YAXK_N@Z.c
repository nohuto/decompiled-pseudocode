/*
 * XREFs of ?SwitchMouseCursors@@YAXK_N@Z @ 0x1C01DD9F0
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01DCF2C (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 *     ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01DD4A0 (-ForceHidePenCursor@Feedback@@YAXH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall SwitchMouseCursors(int a1, unsigned __int8 a2)
{
  int v2; // ecx
  __int64 v3; // rcx

  v2 = a1 - 2;
  if ( v2 )
  {
    v3 = (unsigned int)(v2 - 1);
    if ( (_DWORD)v3 )
    {
      if ( (_DWORD)v3 == 1 )
        _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 1u);
      else
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0xFFFFF8FF);
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0x100u);
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0xFFFFF8FF);
    _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, (a2 + 1) << 9);
  }
}
