/*
 * XREFs of PopCheckTestsigningEnabled @ 0x1408A1C18
 * Callers:
 *     PopFxEnforceDirectedPowerTransition @ 0x1402F2FC4 (PopFxEnforceDirectedPowerTransition.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     PopDripsWatchdogTakeAction @ 0x1408BA018 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1401C1310 (ZwQuerySystemInformation.c)
 */

bool PopCheckTestsigningEnabled()
{
  char v0; // bl
  ULONG v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 8LL;
  if ( ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v3, 8u, &v2) >= 0 )
    return (v3 & 0x200000000LL) != 0;
  return v0;
}
