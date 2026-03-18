/*
 * XREFs of PopNetUpdateStandbyRequest @ 0x1408B3B3C
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400F0060 (RtlCheckTokenMembership.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopNetUpdateStandbyRequest(char a1)
{
  int v2; // ebx
  char v4; // [rsp+38h] [rbp+10h]

  if ( PopNetBIServiceSid )
  {
    v2 = RtlCheckTokenMembership(0LL, (void *)PopNetBIServiceSid);
    if ( v2 < 0 )
      return (unsigned int)v2;
    if ( !v4 )
      return (unsigned int)-1073741790;
    PopAcquirePolicyLock();
    if ( PopNetBIRequestActive )
    {
      if ( !a1 )
        goto LABEL_8;
    }
    else if ( a1 )
    {
LABEL_8:
      PopNetBIRequestActive = a1;
LABEL_9:
      PopReleasePolicyLock();
      return (unsigned int)v2;
    }
    v2 = -1073741811;
    goto LABEL_9;
  }
  return (unsigned int)-1073741823;
}
