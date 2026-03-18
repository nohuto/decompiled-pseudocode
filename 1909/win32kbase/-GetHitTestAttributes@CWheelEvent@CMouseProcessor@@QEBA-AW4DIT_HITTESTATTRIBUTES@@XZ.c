/*
 * XREFs of ?GetHitTestAttributes@CWheelEvent@CMouseProcessor@@QEBA?AW4DIT_HITTESTATTRIBUTES@@XZ @ 0x1C018F46C
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0190550 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

int __fastcall CMouseProcessor::CWheelEvent::GetHitTestAttributes(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v4; // di
  unsigned int v5; // edx
  int result; // eax

  v4 = *(_WORD *)(*(_QWORD *)(a1 + 8) + 30LL);
  if ( !v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v5 = (((v4 >> 15) & 0xFFFFFFFE) + 3) | 4;
  if ( *(_DWORD *)(a1 + 28) != 1 )
    v5 = ((v4 >> 15) & 0xFFFFFFFE) + 3;
  result = v5 | 0x100;
  if ( (BYTE4(gafAsyncKeyState) & 4) == 0 )
    return v5;
  return result;
}
