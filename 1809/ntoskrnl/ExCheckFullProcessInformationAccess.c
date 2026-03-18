/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x140654314
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     NtSetDefaultLocale @ 0x14071A6E0 (NtSetDefaultLocale.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x1408C91D8 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1408C92DC (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400DCAF0 (RtlCheckTokenMembership.c)
 *     RtlRunOnceExecuteOnce @ 0x14060D910 (RtlRunOnceExecuteOnce.c)
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
