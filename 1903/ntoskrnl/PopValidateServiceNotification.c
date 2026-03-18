/*
 * XREFs of PopValidateServiceNotification @ 0x1407280D4
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140001BA8 (RtlStringCbLengthW.c)
 */

NTSTATUS __fastcall PopValidateServiceNotification(__int64 a1, unsigned int a2)
{
  NTSTATUS result; // eax

  if ( a2 < 4 )
    return -1073741811;
  result = RtlStringCbLengthW((STRSAFE_PCNZWCH)(a1 + 4), a2 - 4, 0LL);
  if ( result >= 0 )
    return 0;
  return result;
}
