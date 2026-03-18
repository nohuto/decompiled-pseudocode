/*
 * XREFs of RIMCAUsageToLegacyFlag @ 0x1C00F1480
 * Callers:
 *     RIMFindSiblingMouseDevice @ 0x1C00EF79C (RIMFindSiblingMouseDevice.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCAUsageToLegacyFlag(__int64 a1)
{
  unsigned __int16 v1; // bx
  __int64 v2; // rdx
  __int64 v3; // rcx

  v1 = 0;
  switch ( (unsigned __int16)a1 )
  {
    case 2u:
      return 4;
    case 4u:
      return 8;
    case 5u:
      return 2;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, (unsigned int)(unsigned __int16)a1 - 4);
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
      break;
  }
  return v1;
}
