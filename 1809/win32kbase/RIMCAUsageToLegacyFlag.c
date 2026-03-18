/*
 * XREFs of RIMCAUsageToLegacyFlag @ 0x1C011CAB4
 * Callers:
 *     RIMFindSiblingMouseDevice @ 0x1C011AFDC (RIMFindSiblingMouseDevice.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMCAUsageToLegacyFlag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // bx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v3 = 0;
  switch ( (unsigned __int16)a1 )
  {
    case 2u:
      return 4;
    case 4u:
      return 8;
    case 5u:
      return 2;
    default:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, (unsigned int)(unsigned __int16)a1 - 4, a3);
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
      break;
  }
  return v3;
}
