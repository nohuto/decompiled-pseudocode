/*
 * XREFs of UpdateKeyLights @ 0x1C008F490
 * Callers:
 *     xxxKeyEvent @ 0x1C0035210 (xxxKeyEvent.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0063AA0 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C003223C (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C004AB20 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ApiSetEditionUpdateRemoteLights @ 0x1C008F5A0 (ApiSetEditionUpdateRemoteLights.c)
 */

char __fastcall UpdateKeyLights(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  char v5; // cl
  char result; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int16 v9; // ax

  v3 = a1;
  HIWORD(gklp) = 0;
  v4 = 4LL;
  if ( (BYTE5(gafAsyncKeyState) & 2) != 0 )
  {
    byte_1C01CC615 |= 2u;
    HIWORD(gklp) = 4;
  }
  else
  {
    byte_1C01CC615 &= ~2u;
  }
  LOWORD(a3) = (BYTE5(gafAsyncKeyState) & 2) != 0 ? 4 : 0;
  if ( (BYTE4(xmmword_1C01CC690) & 2) != 0 )
  {
    HIWORD(gklp) = a3 | 2;
    v5 = byte_1C01CC634 | 2;
  }
  else
  {
    v5 = byte_1C01CC634 & 0xFD;
  }
  if ( (BYTE4(xmmword_1C01CC690) & 8) != 0 )
  {
    v9 = a3 | 2;
    if ( (BYTE4(xmmword_1C01CC690) & 2) == 0 )
      v9 = (BYTE5(gafAsyncKeyState) & 2) != 0 ? 4 : 0;
    HIWORD(gklp) = v9 | 1;
    LOBYTE(a1) = v5 | 8;
  }
  else
  {
    LOBYTE(a1) = v5 & 0xF7;
  }
  byte_1C01CC634 = a1;
  if ( gKeyboardInfo == 7 || (unsigned int)IsRemoteConnection(a1, 4LL, a3) && (_DWORD)gRemoteClientKeyboardType == 7 )
  {
    if ( (BYTE5(gafAsyncKeyState) & 8) != 0 )
    {
      HIWORD(gklp) |= 8u;
      byte_1C01CC615 |= 8u;
    }
    else
    {
      byte_1C01CC615 &= ~8u;
    }
  }
  if ( (unsigned int)IsRemoteConnection(a1, v4, a3) )
  {
    if ( v3 )
      HIWORD(gklp) |= 0x8000u;
    else
      HIWORD(gklp) &= ~0x8000u;
  }
  gdwUpdateKeyboard |= 2u;
  result = CBaseInput::ExecutingOnSensorHostingThread((CBaseInput *)WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  if ( result )
  {
    CKeyboardSensor::UpdateKeyboardLEDs((CKeyboardSensor *)WPP_MAIN_CB.Queue.Wcb.DeviceObject, v7, v8);
    return ApiSetEditionUpdateRemoteLights();
  }
  return result;
}
