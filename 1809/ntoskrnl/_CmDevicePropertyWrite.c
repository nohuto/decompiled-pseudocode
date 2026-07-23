/*
 * XREFs of _CmDevicePropertyWrite @ 0x140159BD8
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x14059A080 (PiPnpRtlCmActionCallback.c)
 *     _CmSetDeviceRegPropWorker @ 0x1406E3E28 (_CmSetDeviceRegPropWorker.c)
 * Callees:
 *     <none>
 */

char __fastcall CmDevicePropertyWrite(__int64 a1, int a2)
{
  char result; // al

  switch ( a2 )
  {
    case 1:
    case 2:
    case 3:
    case 5:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 16:
    case 17:
    case 18:
    case 19:
    case 24:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 34:
    case 37:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
