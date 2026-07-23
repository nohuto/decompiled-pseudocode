/*
 * XREFs of PopCheckTestsigningEnabled @ 0x1408670E4
 * Callers:
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     PopDripsWatchdogTakeAction @ 0x14087A9E8 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1401B89B0 (ZwQuerySystemInformation.c)
 */

bool PopCheckTestsigningEnabled()
{
  NTSTATUS v0; // eax
  char v1; // cl
  ULONG v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 8LL;
  v0 = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v4, 8u, &v3);
  v1 = 0;
  if ( v0 >= 0 )
    return (v4 & 0x200000000LL) != 0;
  return v1;
}
