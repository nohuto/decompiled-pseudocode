/*
 * XREFs of NVMeControllerInitPart3 @ 0x1C0006510
 * Callers:
 *     NVMeHwInitialize @ 0x1C000B1C0 (NVMeHwInitialize.c)
 *     NVMeHwPassiveInitialize @ 0x1C000B280 (NVMeHwPassiveInitialize.c)
 *     NVMeControllerPowerUp @ 0x1C000DE90 (NVMeControllerPowerUp.c)
 *     NVMeControllerReset @ 0x1C000E108 (NVMeControllerReset.c)
 * Callees:
 *     NVMeLogEtwControllerInfo @ 0x1C0006588 (NVMeLogEtwControllerInfo.c)
 *     NVMeStartAsyncEventCommands @ 0x1C000F8DC (NVMeStartAsyncEventCommands.c)
 *     NVMeConfigAsyncEvent @ 0x1C0014908 (NVMeConfigAsyncEvent.c)
 *     NVMeGetCommandEffectsLog @ 0x1C00156E0 (NVMeGetCommandEffectsLog.c)
 *     NVMeGetTemperatureThreshold @ 0x1C001586C (NVMeGetTemperatureThreshold.c)
 *     NVMeSyncHostTime @ 0x1C0017ACC (NVMeSyncHostTime.c)
 */

char __fastcall NVMeControllerInitPart3(__int64 a1, char a2)
{
  __int64 v4; // rdx
  char result; // al

  NVMeGetCommandEffectsLog();
  if ( (*(_DWORD *)(a1 + 52) & 4) == 0 )
  {
    LOBYTE(v4) = a2;
    NVMeGetTemperatureThreshold(a1, v4);
  }
  LOBYTE(v4) = a2;
  NVMeConfigAsyncEvent(a1, v4);
  NVMeStartAsyncEventCommands(a1);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 1528) + 520LL) & 0x40) != 0 )
    NVMeSyncHostTime(a1);
  NVMeLogEtwControllerInfo(a1);
  *(_DWORD *)(a1 + 24) = 0;
  result = 1;
  *(_DWORD *)(a1 + 20) |= 0x201u;
  return result;
}
