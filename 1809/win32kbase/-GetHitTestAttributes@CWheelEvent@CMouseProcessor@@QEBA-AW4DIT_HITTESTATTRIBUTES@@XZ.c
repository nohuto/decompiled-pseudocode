/*
 * XREFs of ?GetHitTestAttributes@CWheelEvent@CMouseProcessor@@QEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x1C0157F34
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0158F10 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

int __fastcall CMouseProcessor::CWheelEvent::GetHitTestAttributes(_DWORD *a1)
{
  __int16 v2; // di
  unsigned int v3; // edx
  int result; // eax

  v2 = *(_WORD *)(*(_QWORD *)a1 + 18LL);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Unexpected zero delta in mouse wheel event");
  v3 = (((v2 >> 15) & 0xFFFFFFFE) + 3) | 4;
  if ( a1[3] != 1 )
    v3 = ((v2 >> 15) & 0xFFFFFFFE) + 3;
  result = v3 | 0x100;
  if ( (BYTE4(gafAsyncKeyState) & 4) == 0 )
    return v3;
  return result;
}
