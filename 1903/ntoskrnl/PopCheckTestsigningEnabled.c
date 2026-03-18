/*
 * XREFs of PopCheckTestsigningEnabled @ 0x1408A23D8
 * Callers:
 *     PopFxEnforceDirectedPowerTransition @ 0x1402F3264 (PopFxEnforceDirectedPowerTransition.c)
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 *     PopDripsWatchdogTakeAction @ 0x1408BA748 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x1401C0790 (ZwQuerySystemInformation.c)
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
