/*
 * XREFs of PopNetCompliantNicUpdate @ 0x140876C84
 * Callers:
 *     PopPdcCsDeviceNotification @ 0x14086F030 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     PopNetSetConnectivityConstraint @ 0x1407298C4 (PopNetSetConnectivityConstraint.c)
 *     PopNetClearConnectivityConstraint @ 0x140876C2C (PopNetClearConnectivityConstraint.c)
 */

char __fastcall PopNetCompliantNicUpdate(char a1)
{
  int v1; // eax
  bool v2; // zf

  LOBYTE(v1) = PopNetCompliantNicCount;
  if ( a1 )
  {
    v1 = PopNetCompliantNicCount + 1;
    PopNetCompliantNicCount = v1;
    if ( v1 == 1 )
      LOBYTE(v1) = PopNetClearConnectivityConstraint(6);
  }
  else if ( PopNetCompliantNicCount )
  {
    v2 = PopNetCompliantNicCount == 1;
    LOBYTE(v1) = --PopNetCompliantNicCount;
    if ( v2 )
      LOBYTE(v1) = PopNetSetConnectivityConstraint(6);
  }
  return v1;
}
