/*
 * XREFs of rimIsHidUsageAllowedInLowPowerMode @ 0x1C01041A8
 * Callers:
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C01040A8 (rimInvalidateHidKeyboardDeviceKeys.c)
 *     rimReportHidKeyboardInputData @ 0x1C0104420 (rimReportHidKeyboardInputData.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimIsHidUsageAllowedInLowPowerMode(__int64 a1, __int64 a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  __int64 v4; // r9
  int v5; // r8d
  int v6; // r8d

  v2 = *(_DWORD *)(a1 + 372);
  v3 = 0;
  v4 = a1;
  if ( !v2 || (v5 = v2 - 1) == 0 )
  {
    LOBYTE(v3) = (_WORD)a2 == 104;
    return v3;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    if ( (unsigned __int16)a2 == 41 )
      return v3;
    if ( (unsigned __int16)a2 != 59 )
      return (unsigned __int16)a2 != 60;
    goto LABEL_10;
  }
  if ( v6 == 1 )
  {
    if ( (unsigned __int16)a2 == 41 )
      return v3;
    a1 = (unsigned int)(unsigned __int16)a2 - 59;
    if ( (unsigned __int16)a2 != 59 )
    {
      if ( (unsigned __int16)a2 == 60 )
        return v3;
      goto LABEL_5;
    }
LABEL_10:
    LOBYTE(v3) = *(_DWORD *)(v4 + 432) != 0;
    return v3;
  }
LABEL_5:
  MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
  return v3;
}
