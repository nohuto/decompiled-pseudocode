/*
 * XREFs of ApplyGatheredDeviceInfoSummaryInformation @ 0x1C010DF30
 * Callers:
 *     <none>
 * Callees:
 *     GreMovePointer @ 0x1C00C5F10 (GreMovePointer.c)
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
      if ( !gnMice )
      {
        gdwGTERMFlags |= 1u;
        *(_DWORD *)(gpsi + 1972LL) = 1;
        SetGlobalCursorLevel(0);
        GreMovePointer(*(_DWORD **)(gpDispInfo + 40LL), *(unsigned int *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 1);
      }
    }
    else if ( gnMice )
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
    gnMice = a2;
    return;
  }
  if ( a1 != 1 )
  {
    if ( a1 != 2 )
      return;
    goto LABEL_4;
  }
  if ( a6 > gnKeyboards )
  {
    UpdateKeyLights(0LL);
    gdwUpdateKeyboard |= 1u;
  }
  gnKeyboards = a6;
}
