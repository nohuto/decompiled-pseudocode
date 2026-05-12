/*
 * XREFs of RaidMachineRequireIoPortResource @ 0x1C00254D0
 * Callers:
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C0070B50 (RaidAdapterFilterResourceRequirementsIrp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     memset @ 0x1C002C3C0 (memset.c)
 */

bool RaidMachineRequireIoPortResource()
{
  char v0; // bl
  int v2[4]; // [rsp+20h] [rbp-148h] BYREF
  _BYTE VersionInformation[284]; // [rsp+30h] [rbp-138h] BYREF

  v0 = 1;
  v2[0] = 1;
  EmClientQueryRuleState(&GUID_KEEP_IO_PORT_RESOURCE_REQUIREMENT_RULE, v2);
  if ( v2[0] != 2 )
  {
    memset(VersionInformation, 0, sizeof(VersionInformation));
    *(_DWORD *)VersionInformation = 284;
    RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
    return (unsigned __int8)(VersionInformation[282] - 2) > 1u;
  }
  return v0;
}
