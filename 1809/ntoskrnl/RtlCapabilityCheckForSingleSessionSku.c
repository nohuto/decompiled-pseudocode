/*
 * XREFs of RtlCapabilityCheckForSingleSessionSku @ 0x140893CA0
 * Callers:
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 * Callees:
 *     RtlIsMultiSessionSku @ 0x1406AD9C0 (RtlIsMultiSessionSku.c)
 *     RtlCapabilityCheck @ 0x1408938C0 (RtlCapabilityCheck.c)
 */

__int64 __fastcall RtlCapabilityCheckForSingleSessionSku(
        HANDLE ExistingTokenHandle,
        UNICODE_STRING *SourceString,
        char *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( a3 )
  {
    if ( RtlIsMultiSessionSku() )
      *a3 = 0;
    else
      return (unsigned int)RtlCapabilityCheck(ExistingTokenHandle, SourceString, a3);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v3;
}
