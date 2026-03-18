/*
 * XREFs of PdcPoReportButton @ 0x14075AA20
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopResetCurrentPolicies @ 0x14075B17C (PopResetCurrentPolicies.c)
 */

__int64 __fastcall PdcPoReportButton(char a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  PopAcquirePolicyLock();
  if ( (a1 & 1) != 0 )
  {
    if ( a2 )
    {
      if ( (_BYTE)PopCapabilities == 1 )
        goto LABEL_4;
      LOBYTE(PopCapabilities) = 1;
      goto LABEL_8;
    }
    if ( (_BYTE)PopCapabilities )
    {
      LOBYTE(PopCapabilities) = 0;
LABEL_8:
      PopResetCurrentPolicies(v5, v4);
    }
  }
LABEL_4:
  if ( (a1 & 2) == 0 )
    goto LABEL_5;
  if ( a2 )
  {
    if ( BYTE1(PopCapabilities) == 1 )
      goto LABEL_5;
    BYTE1(PopCapabilities) = 1;
    goto LABEL_12;
  }
  if ( BYTE1(PopCapabilities) )
  {
    BYTE1(PopCapabilities) = 0;
LABEL_12:
    PopResetCurrentPolicies(v5, v4);
  }
LABEL_5:
  if ( (a1 & 4) != 0 )
  {
    if ( a2 )
    {
      if ( BYTE2(PopCapabilities) == 1 )
        return PopReleasePolicyLock();
      BYTE2(PopCapabilities) = 1;
    }
    else
    {
      if ( !BYTE2(PopCapabilities) )
        return PopReleasePolicyLock();
      BYTE2(PopCapabilities) = 0;
    }
    PopResetCurrentPolicies(v5, v4);
  }
  return PopReleasePolicyLock();
}
