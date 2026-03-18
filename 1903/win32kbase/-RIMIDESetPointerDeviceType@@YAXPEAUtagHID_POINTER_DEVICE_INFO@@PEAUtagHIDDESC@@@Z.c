/*
 * XREFs of ?RIMIDESetPointerDeviceType@@YAXPEAUtagHID_POINTER_DEVICE_INFO@@PEAUtagHIDDESC@@@Z @ 0x1C0148448
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0148F58 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall RIMIDESetPointerDeviceType(struct tagHID_POINTER_DEVICE_INFO *a1, struct tagHIDDESC *a2, __int64 a3)
{
  if ( *((_WORD *)a2 + 21) != 13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  switch ( *((_WORD *)a2 + 20) )
  {
    case 1:
      *((_DWORD *)a1 + 6) = 6;
      break;
    case 2:
      *((_DWORD *)a1 + 6) = 5;
      break;
    case 4:
      *((_DWORD *)a1 + 6) = 3;
      break;
    case 5:
      *((_DWORD *)a1 + 6) = 7;
      break;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, (unsigned int)*((unsigned __int16 *)a2 + 20) - 4, a3);
      break;
  }
}
