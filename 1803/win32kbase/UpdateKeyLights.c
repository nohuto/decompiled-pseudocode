/*
 * XREFs of UpdateKeyLights @ 0x1C01302C0
 * Callers:
 *     xxxKeyEvent @ 0x1C0055EB0 (xxxKeyEvent.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C006D110 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C003AEAC (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006E9B0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ApiSetEditionUpdateRemoteLights @ 0x1C01403B4 (ApiSetEditionUpdateRemoteLights.c)
 */

char __fastcall UpdateKeyLights(int a1)
{
  char v2; // al
  __int16 v3; // r8
  __int16 v4; // cx
  char v5; // al
  char v6; // al
  char result; // al
  __int64 v8; // rdx

  if ( (BYTE5(gafAsyncKeyState) & 2) != 0 )
    v2 = byte_1C01A09C5 | 2;
  else
    v2 = byte_1C01A09C5 & 0xFD;
  byte_1C01A09C5 = v2;
  v3 = (BYTE5(gafAsyncKeyState) & 2) != 0 ? 4 : 0;
  v4 = v3 | 2;
  if ( (BYTE4(xmmword_1C01A0A40) & 2) != 0 )
  {
    HIWORD(gklp) = v3 | 2;
    v5 = byte_1C01A09E4 | 2;
  }
  else
  {
    v5 = byte_1C01A09E4 & 0xFD;
    HIWORD(gklp) = (BYTE5(gafAsyncKeyState) & 2) != 0 ? 4 : 0;
  }
  if ( (BYTE4(xmmword_1C01A0A40) & 8) != 0 )
  {
    if ( (BYTE4(xmmword_1C01A0A40) & 2) == 0 )
      v4 = (BYTE5(gafAsyncKeyState) & 2) != 0 ? 4 : 0;
    HIWORD(gklp) = v4 | 1;
    v6 = v5 | 8;
  }
  else
  {
    v6 = v5 & 0xF7;
  }
  byte_1C01A09E4 = v6;
  if ( gKeyboardInfo == 7 || (unsigned int)IsRemoteConnection() && (_DWORD)gRemoteClientKeyboardType == 7 )
  {
    if ( (BYTE5(gafAsyncKeyState) & 8) != 0 )
    {
      HIWORD(gklp) |= 8u;
      byte_1C01A09C5 |= 8u;
    }
    else
    {
      byte_1C01A09C5 &= ~8u;
    }
  }
  if ( (unsigned int)IsRemoteConnection() )
  {
    if ( a1 )
      HIWORD(gklp) |= 0x8000u;
    else
      HIWORD(gklp) &= ~0x8000u;
  }
  gdwUpdateKeyboard |= 2u;
  result = CBaseInput::ExecutingOnSensorHostingThread(gpKeyboardSensor);
  if ( result )
  {
    CKeyboardSensor::UpdateKeyboardLEDs(gpKeyboardSensor, v8);
    return ApiSetEditionUpdateRemoteLights();
  }
  return result;
}
