/*
 * XREFs of ApplyGatheredDeviceInfoSummaryInformation @ 0x1C01150C0
 * Callers:
 *     <none>
 * Callees:
 *     GreMovePointer @ 0x1C008B190 (GreMovePointer.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall ApplyGatheredDeviceInfoSummaryInformation(int a1, int a2, int a3, int a4, int a5, unsigned int a6)
{
  int v6; // ebx

  v6 = 0;
  if ( !a1 )
  {
LABEL_4:
    UpdateTPCurrentActiveState();
    if ( a2 )
    {
      if ( !HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
      {
        gdwGTERMFlags |= 1u;
        *(_DWORD *)(gpsi + 1972LL) = 1;
        SetGlobalCursorLevel(0);
        GreMovePointer(*(HDEV *)(gpDispInfo + 40LL), *(_DWORD *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 1);
      }
    }
    else if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
    {
      gdwGTERMFlags &= ~1u;
      *(_DWORD *)(gpsi + 1972LL) = 0;
      SetGlobalCursorLevel(-1);
      ForceResetMouseButtonsDownState();
    }
    if ( !a1 )
    {
      LOBYTE(v6) = a4 != 0;
      *(_DWORD *)(gpsi + 2068LL) = a3;
      *(_DWORD *)(gpsi + 2196LL) = v6;
      *(_DWORD *)(gpsi + 2260LL) = a5;
    }
    HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = a2;
    return;
  }
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return;
    goto LABEL_4;
  }
  if ( a6 > LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
  {
    UpdateKeyLights(0LL);
    gdwUpdateKeyboard |= 1u;
  }
  LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = a6;
}
