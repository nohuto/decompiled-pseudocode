/*
 * XREFs of UpdateKeyLights @ 0x1C00530E0
 * Callers:
 *     xxxUpdateGlobalsAndSendKeyEvent @ 0x1C004A650 (xxxUpdateGlobalsAndSendKeyEvent.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0073110 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C0053F80 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0055BA0 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ApiSetEditionUpdateRemoteLights @ 0x1C00A849C (ApiSetEditionUpdateRemoteLights.c)
 */

char __fastcall UpdateKeyLights(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  char v5; // cl
  char result; // al
  __int16 v7; // ax

  v3 = a1;
  word_1C0211362 = 0;
  v4 = 4LL;
  if ( (BYTE5(gafAsyncKeyState) & 2) != 0 )
  {
    byte_1C02112C5 |= 2u;
    word_1C0211362 = 4;
  }
  else
  {
    byte_1C02112C5 &= ~2u;
  }
  LOWORD(a3) = (BYTE5(gafAsyncKeyState) & 2) != 0 ? 4 : 0;
  if ( (BYTE4(xmmword_1C0211340) & 2) != 0 )
  {
    word_1C0211362 = a3 | 2;
    v5 = byte_1C02112E4 | 2;
  }
  else
  {
    v5 = byte_1C02112E4 & 0xFD;
  }
  if ( (BYTE4(xmmword_1C0211340) & 8) != 0 )
  {
    v7 = a3 | 2;
    if ( (BYTE4(xmmword_1C0211340) & 2) == 0 )
      v7 = (BYTE5(gafAsyncKeyState) & 2) != 0 ? 4 : 0;
    word_1C0211362 = v7 | 1;
    LOBYTE(a1) = v5 | 8;
  }
  else
  {
    LOBYTE(a1) = v5 & 0xF7;
  }
  byte_1C02112E4 = a1;
  if ( gKeyboardInfo == 7 || (unsigned int)IsRemoteConnection(a1, 4LL, a3) && (_DWORD)gRemoteClientKeyboardType == 7 )
  {
    if ( (BYTE5(gafAsyncKeyState) & 8) != 0 )
    {
      word_1C0211362 |= 8u;
      byte_1C02112C5 |= 8u;
    }
    else
    {
      byte_1C02112C5 &= ~8u;
    }
  }
  if ( (unsigned int)IsRemoteConnection(a1, v4, a3) )
  {
    if ( v3 )
      word_1C0211362 |= 0x8000u;
    else
      word_1C0211362 &= ~0x8000u;
  }
  gdwUpdateKeyboard |= 2u;
  result = CBaseInput::ExecutingOnSensorHostingThread(gpKeyboardSensor);
  if ( result )
  {
    CKeyboardSensor::UpdateKeyboardLEDs(gpKeyboardSensor);
    return ApiSetEditionUpdateRemoteLights();
  }
  return result;
}
