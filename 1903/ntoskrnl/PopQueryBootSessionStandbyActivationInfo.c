/*
 * XREFs of PopQueryBootSessionStandbyActivationInfo @ 0x1402F19C4
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PpmQueryPlatformStateResidency @ 0x1402EFD8C (PpmQueryPlatformStateResidency.c)
 */

__int64 __fastcall PopQueryBootSessionStandbyActivationInfo(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_14046BDD0 )
  {
    qword_14046BDD0(a1 + 24, a1 + 16, a1);
    *(_QWORD *)(a1 + 8) = PpmQueryPlatformStateResidency(dword_140467FC0);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v1;
}
