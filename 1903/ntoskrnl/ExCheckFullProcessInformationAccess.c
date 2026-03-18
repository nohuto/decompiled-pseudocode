/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x140680204
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F8B60 (ExpGetProcessInformation.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     NtSetDefaultLocale @ 0x140743820 (NtSetDefaultLocale.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x14090667C (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140906780 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400B39B0 (RtlCheckTokenMembership.c)
 *     RtlRunOnceExecuteOnce @ 0x140618770 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall ExCheckFullProcessInformationAccess(char a1)
{
  char v2; // [rsp+30h] [rbp+8h]
  PVOID Context; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 == 1
    && (RtlRunOnceExecuteOnce(&ExpFullProcessInfoInit, ExpInitFullProcessSecurityInfo, 0LL, &Context) >= 0
     && (int)RtlCheckTokenMembership(0LL, Context) >= 0
     && v2
     || (int)RtlCheckTokenMembership(0LL, SeAliasAdminsSid) >= 0 && v2) )
  {
    return 0LL;
  }
  else
  {
    return 3221225506LL;
  }
}
